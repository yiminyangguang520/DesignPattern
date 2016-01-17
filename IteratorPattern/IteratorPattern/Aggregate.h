#pragma once

typedef int Object;
class Iterator;

class Aggregate
{
public:
    virtual ~Aggregate();
    virtual Iterator* createIterator() = 0;
    virtual Object getItem(int idx) = 0;
    virtual int getSize() = 0;

protected:
    Aggregate();
};

class ConctrteAggregate : public Aggregate
{
public:
    enum
    {
        SIZE = 3
    };

    ConctrteAggregate();
    ~ConctrteAggregate();

    Iterator* createIterator();
    Object getItem(int index);
    int getSize();

private:
    Object m_obj[SIZE];
};

