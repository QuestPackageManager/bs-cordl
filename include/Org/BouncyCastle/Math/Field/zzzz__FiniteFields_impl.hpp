#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/FiniteFields.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__FiniteFields_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomialExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::FiniteFields.GetBinaryExtensionField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* (*)(::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Math::Field::FiniteFields::GetBinaryExtensionField)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x35304f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::FiniteFields*>(), { "GetBinaryExtensionField", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::FiniteFields.GetPrimeField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::Field::FiniteFields::GetPrimeField)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x35306e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::FiniteFields*>(), { "GetPrimeField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::FiniteFields._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::Field::FiniteFields::*)()>(&::Org::BouncyCastle::Math::Field::FiniteFields::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3530938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::FiniteFields*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::Field::FiniteFields::setStaticF_GF_2(::Org::BouncyCastle::Math::Field::IFiniteField* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_2", ::Org::BouncyCastle::Math::Field::FiniteFields*>(
      std::forward<::Org::BouncyCastle::Math::Field::IFiniteField*>(value));
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::FiniteFields::getStaticF_GF_2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_2", ::Org::BouncyCastle::Math::Field::FiniteFields*>();
}
inline void Org::BouncyCastle::Math::Field::FiniteFields::setStaticF_GF_3(::Org::BouncyCastle::Math::Field::IFiniteField* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_3", ::Org::BouncyCastle::Math::Field::FiniteFields*>(
      std::forward<::Org::BouncyCastle::Math::Field::IFiniteField*>(value));
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::FiniteFields::getStaticF_GF_3() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_3", ::Org::BouncyCastle::Math::Field::FiniteFields*>();
}
inline ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* Org::BouncyCastle::Math::Field::FiniteFields::GetBinaryExtensionField(::ArrayW<int32_t> exponents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::FiniteFields*>(), { "GetBinaryExtensionField", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*>(nullptr, ___internal_method, exponents);
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::FiniteFields::GetPrimeField(::Org::BouncyCastle::Math::BigInteger* characteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::FiniteFields*>(), { "GetPrimeField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IFiniteField*>(nullptr, ___internal_method, characteristic);
}
inline void Org::BouncyCastle::Math::Field::FiniteFields::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::FiniteFields*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Field::FiniteFields* Org::BouncyCastle::Math::Field::FiniteFields::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::Field::FiniteFields*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Field::FiniteFields::FiniteFields() {}
