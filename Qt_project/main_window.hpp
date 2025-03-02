#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT  // эта макросная конструкция обязательна, если класс использует сигналы и слоты Qt

public:
    MainWindow(QWidget *parent = nullptr);  // *parent - указатель на родительский виджет
    // если parent == nullptr, то MainWindow - главное окно без родителя

private:
    QPushButton *message_button;  // указатель на кнопку для вывода сообщения
    QPushButton *text_button;  // указатель на кнопку для отображения текста
    QLabel *label;  // указатель на лейбл для отображения текста
    QLineEdit *line_edit;  // указатель на строку для ввода

private slots:
    void onMessageButtonClicked();  // обработчик нажатия на message_button
    void onTextButtonClicked();  // обработчик нажатия на text_button
};

