#include "scorewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qSetMessagePattern("%{file}(%{line}): %{message}");
    ScoreWindow w;
    w.setWindowTitle("学生绩点");
    w.show();

    return a.exec();
}
