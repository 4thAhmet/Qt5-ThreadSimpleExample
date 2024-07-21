#ifndef ASALSAYI_H
#define ASALSAYI_H

#include <QObject>
#include <QDebug>
#include <QThread>

class asalSayi : public QObject
{
    Q_OBJECT
public:
    explicit asalSayi(QObject *parent = nullptr);
    ~asalSayi();
public slots:
    void printPrime();
    void printPrime2();

signals:
    void finished();

};

#endif // ASALSAYI_H
