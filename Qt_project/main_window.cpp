#include "main_window.hpp"
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Простое Qt-приложение");
    resize(400, 300);

    // создаем кнопку
    button = new QPushButton("Нажми меня", this);
    button->setGeometry(150, 120, 100, 40);  // устанавливаем позицию и размер

    // подключаем сигнал нажатия к слоту
    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

// реализация слота
void MainWindow::onButtonClicked() {
    QMessageBox::information(this, "Сообщение", "Кнопка нажата!");
}
