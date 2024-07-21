#include "asalsayi.h"

asalSayi::asalSayi(QObject *parent)
    : QObject{parent}
{

}
void asalSayi::printPrime()
{

    int durum = 1;
    for(int j = 1; j<=2000; j++)
    {
        qDebug() << "thread1 is working: ";
        durum = 1;
    for (int i = 2; i < j; i++){

        if (j % i == 0){
            qDebug() << j << " is not a prime number ";
            durum = 0;
            break;
        }
    }

    if (durum){
        qDebug() << j << " is a prime number";
    }
    QThread::sleep(1);
    }
    emit finished();

}
asalSayi::~asalSayi()
{

}


void asalSayi::printPrime2()
{

    int durum = 1;
    for(int j = 2001; j<=4000; j++)
    {
    qDebug() << "thread2 is working: ";
    durum = 1;
    for (int i = 2; i < j; i++){

         if (j % i == 0){
            qDebug() << j << " is not a prime number";
            durum = 0;
            break;
         }
    }

    if (durum){
        qDebug() << j << " is a prime number";
    }
     QThread::sleep(1);
    }
    emit finished();
}
