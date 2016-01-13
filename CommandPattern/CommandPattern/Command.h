#pragma once

class Receiver;

class Command
{
public:
    Command();
    ~Command();

    virtual void execute() = 0;
private:

};

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Receiver* rev);
    ~ConcreteCommand();

    void execute();

private:
    Receiver* m_rev;
};

