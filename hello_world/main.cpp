#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString message = "Hello World!!!";
    qDebug() << message;
    return a.exec();
}
