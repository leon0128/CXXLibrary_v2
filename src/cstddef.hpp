#ifndef CSTDDEF_HPP
#define CSTDDEF_HPP

#include <stddef.h>

namespace LEON0128
{

// ptrdiff_t
using ptrdiff_t = ::ptrdiff_t;

// size_t
using size_t = ::size_t;

// max_align_t
using max_align_t = ::max_align_t;

// nullptr_t
using nullptr_t = decltype(nullptr);

// byte
enum class byte : unsigned char {};

// byte type operations
// operator <<=
template<class IntType>
constexpr byte& operator<<=(byte& b, IntType shift) noexcept;
// operator <<
template<class IntType>
constexpr byte operator<<(byte b, IntType shift) noexcept;
// operator >>=
template<class IntType>
constexpr byte& operator>>=(byte& b, IntType shift) noexcept;
// operator >>
template<class IntType>
constexpr byte operator>>(byte b, IntType shift) noexcept;
// operator |=
constexpr byte& operator|=(byte& l, byte r) noexcept;
// operator |
constexpr byte operator|(byte l, byte r) noexcept;
// operator &=
constexpr byte& operator&=(byte& l, byte r) noexcept;
// operator &
constexpr byte operator&(byte l, byte r) noexcept;
// operator ^=
constexpr byte& operator^=(byte& l, byte r) noexcept;
// operator ^
constexpr byte operator^(byte l, byte r) noexcept;
// operator ~
constexpr byte operator~(byte b) noexcept;
// to_integer
template<class IntType>
constexpr IntType to_integer(byte b) noexcept;

}

#endif