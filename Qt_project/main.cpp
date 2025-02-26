#include <QApplication>
#include "main_window.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);  // главный объект, управляющий Qt приложением
    MainWindow w;  // создается объект MainWindow, который является главным окном приложения
    w.show();  // отображает окно на экране

    return app.exec();  // запускает главный цикл обработки событий, и приложение останется запущенным, пока пользователь не закроет окно
}

