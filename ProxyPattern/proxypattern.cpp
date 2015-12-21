#include "proxypattern.h"

#include <iostream>

Subject::Subject()
{

}

Subject::~Subject()
{

}

void Subject::requset()
{
    std::cout << "subject" << std::endl;
}


ConcreteSubject::ConcreteSubject()
{

}

ConcreteSubject::~ConcreteSubject()
{

}

void ConcreteSubject::requset()
{
    std::cout << "concretesubject" << std::endl;
}


Proxy::Proxy(Subject *pSubject)
    : m_subject(pSubject)
{

}

Proxy::~Proxy()
{
    delete m_subject;
    m_subject = nullptr;
}

void Proxy::requset()
{
    std::cout << "Proxy Func" << std::endl;
    m_subject->requset();
}
