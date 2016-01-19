#pragma once

#include "Context.h"

#include <string>
using namespace std;

class AbstractExpression
{
public:
    virtual ~AbstractExpression();
    virtual void interpret(const Context& c);

protected:
    AbstractExpression();

private:
};


class TerminalExpression : public AbstractExpression
{
public:
    TerminalExpression(const string& statement);
    ~TerminalExpression();

    void interpret(const Context& c);

protected:

private:
    string m_statement;
};

class  NonterminalExpression : public AbstractExpression
{
public:
    NonterminalExpression(AbstractExpression* expression, int times);
    ~NonterminalExpression();

    void interpret(const Context& c);

protected:

private:
    AbstractExpression* m_expression;
    int m_times;
};