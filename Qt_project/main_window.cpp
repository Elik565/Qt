#include "main_window.hpp"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Простое Qt-приложение");
    resize(400, 300);

    // центральный виджет - это контейнер для всех виджетов в QMainWindow
    QWidget *central_widget = new QWidget(this);
    setCentralWidget(central_widget);

    label = new QLabel("Введите текст:", this);  // создаем label
    line_edit = new QLineEdit(this);  // создаем строку для ввода
    message_button = new QPushButton("Нажми меня", this);  // создаем кнопку для вывода сообщения
    text_button = new QPushButton("Отобразить текст", this);  // создаем кнопку для отображения текста

    // Размещение виджетов
    // для управления расположением виджетов добавляем QLayout в CentralWidget
    QVBoxLayout *layout = new QVBoxLayout(central_widget);
    layout->addWidget(label);
    layout->addWidget(line_edit);
    layout->addWidget(message_button);
    layout->addWidget(text_button);

    // подключаем сигналы нажатия к слотам
    connect(message_button, &QPushButton::clicked, this, &MainWindow::onMessageButtonClicked);
    connect(text_button, &QPushButton::clicked, this, &MainWindow::onTextButtonClicked);
}

// Реализация слотов
void MainWindow::onMessageButtonClicked() {
    QMessageBox::information(this, "Сообщение", "Кнопка нажата!");
}

void MainWindow::onTextButtonClicked() {
    QString text = line_edit->text();
    if (text.isEmpty()) {
        QMessageBox::warning(this, "Предупреждение", "Строка для ввода пуста!");
    }
    else {
        label->setText("Вы ввели: " + text);
    }
}

