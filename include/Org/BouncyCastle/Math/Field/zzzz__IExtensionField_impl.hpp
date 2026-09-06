#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/IExtensionField.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IExtensionField.get_Subfield
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (::Org::BouncyCastle::Math::Field::IExtensionField::*)()>(
    &::Org::BouncyCastle::Math::Field::IExtensionField::get_Subfield)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::IExtensionField*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IExtensionField*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IExtensionField.get_Degree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::IExtensionField::*)()>(&::Org::BouncyCastle::Math::Field::IExtensionField::get_Degree)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::IExtensionField*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IExtensionField*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::IExtensionField::get_Subfield() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IExtensionField*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IFiniteField*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::Field::IExtensionField::get_Degree() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::IExtensionField*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
constexpr Org::BouncyCastle::Math::Field::IExtensionField::operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::IExtensionField::i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(static_cast<void*>(this));
}
