#ifndef SUN_H
#define SUN_H

#include <QObject>

class Sun : public QObject
{
    Q_OBJECT
public:
    static Sun* getInstance();

private:
    explicit Sun(QObject *parent = 0);
    static Sun *m_instance;
};

#endif // SUN_H
