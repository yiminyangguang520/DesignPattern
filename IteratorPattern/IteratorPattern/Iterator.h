#pragma once

class Aggregate;
typedef int Object;

class Iterator
{
public:
    virtual ~Iterator();
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual Object currentItem() = 0;

protected:
    Iterator();

private:
};

class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator(Aggregate* agg, int index = 0);
    ~ConcreteIterator();

    void first();
    void next();
    bool isDone();
    Object currentItem();

private:
    Aggregate* m_pAggregate;
    int m_index;
};
