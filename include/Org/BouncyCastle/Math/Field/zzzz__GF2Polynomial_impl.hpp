#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\Field\GF2Polynomial.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__GF2Polynomial_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomial_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Math::Field::GF2Polynomial::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35329f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.get_Degree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&::Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3533068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.GetExponentsPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(
    &::Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x353309c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)(::System::Object*)>(&::Org::BouncyCastle::Math::Field::GF2Polynomial::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35330fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&::Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35331dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Math::Field::GF2Polynomial::__cordl_internal_get_exponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponents;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Math::Field::GF2Polynomial::__cordl_internal_get_exponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponents;
}
constexpr void Org::BouncyCastle::Math::Field::GF2Polynomial::__cordl_internal_set_exponents(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exponents = value;
}
inline void Org::BouncyCastle::Math::Field::GF2Polynomial::_ctor(::ArrayW<int32_t> exponents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exponents);
}
inline int32_t Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::Field::GF2Polynomial::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Field::GF2Polynomial* Org::BouncyCastle::Math::Field::GF2Polynomial::New_ctor(::ArrayW<int32_t> exponents) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(exponents));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IPolynomial"
constexpr Org::BouncyCastle::Math::Field::GF2Polynomial::operator ::Org::BouncyCastle::Math::Field::IPolynomial*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IPolynomial*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::Field::IPolynomial"
constexpr ::Org::BouncyCastle::Math::Field::IPolynomial* Org::BouncyCastle::Math::Field::GF2Polynomial::i___Org__BouncyCastle__Math__Field__IPolynomial() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IPolynomial*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Field::GF2Polynomial::GF2Polynomial() {}
