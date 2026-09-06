#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/IFiniteField.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IFiniteField.get_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::Field::IFiniteField::*)()>(
    &::Org::BouncyCastle::Math::Field::IFiniteField::get_Characteristic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::IFiniteField*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IFiniteField*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IFiniteField.get_Dimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::IFiniteField::*)()>(&::Org::BouncyCastle::Math::Field::IFiniteField::get_Dimension)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::IFiniteField*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IFiniteField*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Field::IFiniteField::get_Characteristic() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IFiniteField*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::Field::IFiniteField::get_Dimension() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IFiniteField*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
