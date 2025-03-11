#include "main_window.hpp"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QNetworkReply>

// создаем объект интерфейса ui
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    // this - это указатель на текущий объект
    ui->setupUi(this);  // настраиваем интерфейс из .ui

    networkManager = new QNetworkAccessManager(this);  // создаем объект, отвечающий за сетевые запросы

    setWindowTitle("Простое Qt-приложение");

    ui->tabWidget->setTabText(0, "Файлы");
    ui->tabWidget->setTabText(1, "Сеть");

    // QNetworkAccessManager асинхронный, то есть запрос отправляется, а программа продолжает работать
    // Когда ответ придет, он вызовет сигнал finished
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::handleReply);
}

// дескриптор
MainWindow::~MainWindow() {
    delete ui;
}

// Реализация слотов
/*****Файлы*****/
void MainWindow::on_MessageButton_clicked() {
    if (ui->TextLineEdit->text() != "") {
        QMessageBox::information(this, "Сообщение", "Введенный текст: " + ui->TextLineEdit->text());
    }
    else {
        QMessageBox::warning(this, "Предупреждение", "Ничего не введено!");
    }
}

void MainWindow::on_SaveButton_clicked() {
    if (ui->TextLineEdit->text() != "") {
        QString file_path = QFileDialog::getOpenFileName(this, "Выберите файл", QDir::homePath(), "*.txt");
        QFile file(file_path);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream fout(&file);
            fout << ui->TextLineEdit->text();
            file.close();
            QMessageBox::information(this, "Готово!", "Введенный текст сохранен в файл!");
        }
        else {
            QMessageBox::warning(this, "Ошибка!", "Не удалось открыть файл!");
        }
    }
    else {
        QMessageBox::warning(this, "Предупреждение", "Ничего не введено!");
    }
}

void MainWindow::on_LoadButton_clicked() {
    QString file_path = QFileDialog::getOpenFileName(this, "Выберите файл", QDir::homePath(), "*.txt");
    QFile file(file_path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream fin(&file);
        ui->FileTextBrowser->setPlainText(fin.readAll());
        file.close();
        QMessageBox::information(this, "Готово!", "Текст загружен из файла!");
    }
    else {
        QMessageBox::warning(this, "Ошибка!", "Не удалось открыть файл!");
    }
}

void MainWindow::on_EraseButton_clicked() {
    ui->FileTextBrowser->clear();
}

/*****Сеть*****/
void MainWindow::on_RequestButton_clicked() {
    QUrl url = ui->NetworkLineEdit->text();
    if (url.isValid() && !url.scheme().isEmpty()) {
        QNetworkRequest request(url);
        networkManager->get(request);
    }
    else {
        QMessageBox::warning(this, "Ошибка!", "Неверный адрес url!");
    }
}

void MainWindow::handleReply(QNetworkReply *reply) {
    if (reply->error() == QNetworkReply::NoError) {
        QString response_text = reply->readAll();
        ui->NetworkTextBrowser->setPlainText(response_text);
    }
    else {
        ui->NetworkTextBrowser->setPlainText("Ошибка: " + reply->errorString());
        QMessageBox::warning(this, "Ошибка!", "Ответ на запрос с ошибкой!");
    }
    reply->deleteLater();  // удаляет, когда больше не нужен
}

