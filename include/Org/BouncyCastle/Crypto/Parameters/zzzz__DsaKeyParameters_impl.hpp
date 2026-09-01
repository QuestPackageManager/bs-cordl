#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\DsaKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::*)(bool, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x340ed80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters.get_Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DsaParameters* (::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340ed8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(), { "get_Parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x340ed94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::*)(::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x340ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x340eeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*& Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* const& Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::__cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::DsaParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPrivate, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(), { "get_Parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*
Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::New_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*>(isPrivate, parameters));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::DsaKeyParameters() {}
