#include "main_window.hpp"
#include <QMessageBox>

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
void MainWindow::on_TextButton_clicked() {
    if (ui->lineEdit->text() != "") {
        QMessageBox::information(this, "Сообщение", "Введенный текст: " + ui->lineEdit->text());
    }
    else {
        QMessageBox::warning(this, "Предупреждение", "Ничего не введено!");
    }
}

