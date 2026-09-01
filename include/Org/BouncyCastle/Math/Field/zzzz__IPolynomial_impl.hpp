#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\Field\IPolynomial.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomial_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IPolynomial.get_Degree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::IPolynomial::*)()>(&::Org::BouncyCastle::Math::Field::IPolynomial::get_Degree)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::IPolynomial*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IPolynomial*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IPolynomial.GetExponentsPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Math::Field::IPolynomial::*)()>(&::Org::BouncyCastle::Math::Field::IPolynomial::GetExponentsPresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::IPolynomial*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IPolynomial*>(), 1 }));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Math::Field::IPolynomial::get_Degree() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IPolynomial*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Math::Field::IPolynomial::GetExponentsPresent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IPolynomial*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
