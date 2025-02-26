#pragma once

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT  // эта макросная конструкция обязательна, если класс использует сигналы и слоты Qt

public:
    MainWindow(QWidget *parent = nullptr);  // *parent - указатель на родительский виджет
    // если parent == nullptr, то MainWindow - главное окно без родителя
};

