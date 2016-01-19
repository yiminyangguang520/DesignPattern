#include "stdafx.h"
#include "Interpret.h"

#include <iostream>
using namespace std;

AbstractExpression::AbstractExpression()
{

}

AbstractExpression::~AbstractExpression()
{

}

void  AbstractExpression::interpret(const Context& c)
{

}

TerminalExpression::TerminalExpression(const string& statement)
{
    this->m_statement = statement;
}

TerminalExpression::~TerminalExpression()
{

}

void  TerminalExpression::interpret(const Context& c)
{
    cout << this->m_statement << "TerminalExpression" << endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression* expression, int times)
    : m_expression(expression)
    , m_times(times)
{

}

NonterminalExpression::~NonterminalExpression()
{

}

void  NonterminalExpression::interpret(const Context& c)
{
    for (int i = 0; i < m_times; i++)
    {
        this->m_expression->interpret(c);
    }
}