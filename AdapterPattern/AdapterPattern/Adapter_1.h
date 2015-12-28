#pragma once

namespace Adapter1
{
    class Target
    {
    public:
        Target();
        virtual ~Target();

        virtual void requset();

    private:

    };

    class Adaptee
    {
    public:
        Adaptee();
        virtual ~Adaptee();

        void specialRequest();

    private:

    };

    class Adapter : public Target, private Adaptee
    {
    public:
        Adapter();
        ~Adapter();

        void requset();

    private:

    };
}

