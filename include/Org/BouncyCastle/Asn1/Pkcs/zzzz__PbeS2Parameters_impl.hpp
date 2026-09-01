#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\PbeS2Parameters.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PbeS2Parameters_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptionScheme_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__KeyDerivationFunc_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3463b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)(
    ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*, ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*)>(&::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3463e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3463bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters.get_KeyDerivationFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* (::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_KeyDerivationFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3463fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { "get_KeyDerivationFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters.get_EncryptionScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* (::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_EncryptionScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3463fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { "get_EncryptionScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3463fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*& Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::__cordl_internal_get_func() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___func;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* const& Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::__cordl_internal_get_func() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___func;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::__cordl_internal_set_func(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___func = value;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*& Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::__cordl_internal_get_scheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scheme;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* const& Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::__cordl_internal_get_scheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scheme;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::__cordl_internal_set_scheme(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scheme = value;
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::_ctor(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* keyDevFunc, ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* encScheme) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyDevFunc, encScheme);
}
inline void Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_KeyDerivationFunc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { "get_KeyDerivationFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_EncryptionScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), { "get_EncryptionScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* keyDevFunc,
                                                                                                                  ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* encScheme) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(keyDevFunc, encScheme));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::PbeS2Parameters() {}
