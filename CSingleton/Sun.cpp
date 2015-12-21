#include "Sun.h"

#include <QDebug>

Sun* Sun::m_instance = NULL;

Sun* Sun::getInstance()
{
    if (!m_instance)
    {
        m_instance = new Sun;
    }
    return m_instance;
}

Sun::Sun(QObject *parent) :
    QObject(parent)
{
    qDebug() << "The only Sun is created!";
}
