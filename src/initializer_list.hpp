#ifndef INITIALIZER_LIST_HPP
#define INITIALIZER_LIST_HPP

#include "cstddef.hpp"

namespace LEON0128
{

template<class E>
class initializer_list
{
public:
    using value_type = E;
    using reference = const E&;
    using const_reference = const E&;
    using size_type = size_t;

    using iterator = const E *;
    using const_iterator = const E *;

    constexpr initializer_list() noexcept;
    
    constexpr size_t size() const noexcept; // number of elements
    constexpr const E *begin() const noexcept; // first element
    constexpr const E *end() const noexcept
    {
        return begin() + size();
    }
};

template<class E>
constexpr const E *begin(initializer_list<E> il) noexcept
{
    return il.begin();
}
template<class E>
constexpr const E *end(initializer_list<E> il) noexcept
{
    return il.end();
}

}

#endif