#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <ui_main_window.h>

class MainWindow : public QMainWindow {
    Q_OBJECT  // эта макросная конструкция обязательна, если класс использует сигналы и слоты Qt

public:
    MainWindow(QWidget *parent = nullptr);  // *parent - указатель на родительский виджет
    // если parent == nullptr, то MainWindow - главное окно без родителя

    ~MainWindow();

private:
    Ui::MainWindow *ui;  // указатель на интерфейс
    QNetworkAccessManager *networkManager;  // указатель на объект, управляющий сетевыми запросами

    void sendPostRequest(const QUrl& url, const QJsonObject& json_data);

private slots:
    // файлы
    void on_MessageButton_clicked();
    void on_SaveButton_clicked();
    void on_LoadButton_clicked();
    void on_FileEraseButton_clicked();

    // сеть
    void on_GetButton_clicked();
    void handleReply(QNetworkReply *reply);
    void on_NetworkEraseButton_clicked();
    void on_PostButton_clicked();
};

