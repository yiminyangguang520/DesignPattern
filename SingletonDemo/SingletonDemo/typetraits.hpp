#ifndef __TYPETRAITS_HPP__
#define __TYPETRAITS_HPP__

namespace Dot
{
    namespace Traits
    {
        //  defines useful typetraits for types
        template<typename T>
        class TypeTraits
        {
        public:
            typedef T Type;
            typedef T& RefType;
            typedef T* PointerType;

        protected:
            inline explicit TypeTraits()
            {

            }

            inline ~TypeTraits()
            {

            }

        private:
            inline explicit TypeTraits(TypeTraits const&)
            {

            }

            inline TypeTraits& operator=(TypeTraits const&)
            {
                return *this;
            }
        };
    };
}

#endif