#ifndef PROXYPATTERN_H
#define PROXYPATTERN_H

class Subject
{
public:
    explicit Subject();
    virtual ~Subject();

    virtual void requset() = 0;

protected:

private:

};


class ConcreteSubject : public Subject
{
public:
    explicit ConcreteSubject();
    ~ConcreteSubject();

    void requset();
};

class Proxy
{
public:
    explicit Proxy(Subject* pSubject);
    ~Proxy();

    void requset();

private:
    Subject* m_subject;
};

#endif // PROXYPATTERN_H
