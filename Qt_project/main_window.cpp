#include "main_window.hpp"
#include <QMessageBox>
#include <QFile>

// создаем объект интерфейса ui
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    // this - это указатель на текущий объект
    ui->setupUi(this);  // настраиваем интерфейс из .ui

    setWindowTitle("Простое Qt-приложение");
}

// дескриптор
MainWindow::~MainWindow() {
    delete ui;
}

// Реализация слотов
void MainWindow::on_MessageButton_clicked() {
    if (ui->lineEdit->text() != "") {
        QMessageBox::information(this, "Сообщение", "Введенный текст: " + ui->lineEdit->text());
    }
    else {
        QMessageBox::warning(this, "Предупреждение", "Ничего не введено!");
    }
}

void MainWindow::on_SaveButton_clicked() {
    if (ui->lineEdit->text() != "") {
        QFile file("text.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream fout(&file);
            fout << ui->lineEdit->text();
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
    QFile file("text.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream fin(&file);
        ui->textBrowser->setPlainText(fin.readAll());
        file.close();
        QMessageBox::information(this, "Готово!", "Текст загружен из файла!");
    }
    else {
        QMessageBox::warning(this, "Ошибка!", "Не удалось открыть файл!");
    }
}

void MainWindow::on_EraseButton_clicked() {
    ui->textBrowser->clear();
}

