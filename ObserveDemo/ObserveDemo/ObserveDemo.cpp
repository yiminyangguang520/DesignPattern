// ObserveDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>

template <class T>
class Observer
{
public:
    Observer()
    {

    }

    virtual ~Observer()
    {

    }

    virtual void update(T *subject) = 0;
};

template <class T>
class Subject
{
public:
    Subject()
    {

    }

    virtual ~Subject()
    {

    }

    void attach(Observer<T> &observer)
    {
        m_observers.push_back(&observer);
    }

    void notify()
    {
        std::vector<Observer<T> *>::iterator it;

        for (it = m_observers.begin(); it != m_observers.end(); it++)
        {
            (*it)->update(static_cast<T *>(this));
        }
    }

private:
    std::vector<Observer<T> *> m_observers;
};

class Temperature : public Subject<Temperature>
{
public:
    Temperature()
    {

    }

    ~Temperature()
    {

    }

    void temperatureChanged()
    {
        notify();
    }

    void getTemperature()
    {
        std::cout << "   Getting the temperature." << std::endl;
    }
};

class Pressure : public Subject<Pressure>
{
public:
    Pressure()
    {

    }

    ~Pressure()
    {

    }

    void pressureChanged()
    {
        notify();
    }

    void getPressure()
    {
        std::cout << "   Getting the pressure." << std::endl;
    }
};

class EnvironmentWindow : public Observer<Temperature>, public Observer<Pressure>
{
public:
    EnvironmentWindow() {}

    ~EnvironmentWindow()
    {

    }

    void update(Temperature *subject)
    {
        std::cout << "Temperature was changed" << std::endl;
        subject->getTemperature();
    }

    void update(Pressure    *subject)
    {
        std::cout << "Pressure was changed" << std::endl;
        subject->getPressure();
    }
};

class PanicSirene : public Observer<Temperature>
{
public:
    PanicSirene()
    {

    }

    ~PanicSirene()
    {

    }

    void update(Temperature *subject)
    {
        std::cout << "Temperature was changed, sound the sirene" << std::endl;
        subject->getTemperature();
    }
};

int main()
{
    Temperature       temp;
    Pressure          press;
    EnvironmentWindow win;
    PanicSirene       panic;

    temp.attach(win);
    temp.attach(panic);
    press.attach(win);

    temp.temperatureChanged();
    press.pressureChanged();

    return (0);
}

