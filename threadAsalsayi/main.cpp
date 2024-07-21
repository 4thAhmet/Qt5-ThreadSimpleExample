#include <QCoreApplication>
#include <QThread>
#include <QMutex>
#include <QObject>
#include <QDebug>
#include "asalsayi.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread *thread = new QThread;
    QThread *thread1 =new QThread;
    asalSayi *prime = new asalSayi();
    asalSayi *prime1 = new asalSayi();
    prime->moveToThread(thread);
    prime1->moveToThread(thread1);
    QObject::connect(thread, &QThread::started, prime, &asalSayi::printPrime);
    QObject::connect(thread1, &QThread::started, prime1, &asalSayi::printPrime2);
    QObject::connect(prime, &asalSayi::finished, thread, &QThread::quit);
    QObject::connect(prime1,&asalSayi::finished, thread1, &QThread::quit);
    thread->start();
    thread1->start();
    return a.exec();
}
