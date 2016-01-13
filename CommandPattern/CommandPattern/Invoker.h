#pragma once

class Command;

class Invoker
{
public:
    Invoker(Command* command);
    ~Invoker();

    void invoke();
private:
    Command* m_com;
};
