#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H

#include <QApplication>

class MyApplication : public QApplication
{
    Q_OBJECT
public:
    explicit MyApplication(int &argc, char **argv);

signals:

public slots:

private:

};

#endif // MYAPPLICATION_H
