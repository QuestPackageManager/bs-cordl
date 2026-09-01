#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\CryptoPro\Gost3410PublicKeyAlgParameters.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/CryptoPro/zzzz__Gost3410PublicKeyAlgParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336ec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x336ec50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336eec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x336eec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x336ecf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters.get_PublicKeyParamSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_PublicKeyParamSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336ef4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "get_PublicKeyParamSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters.get_DigestParamSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_DigestParamSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336ef54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "get_DigestParamSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters.get_EncryptionParamSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_EncryptionParamSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336ef5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "get_EncryptionParamSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x336ef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_get_publicKeyParamSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyParamSet;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_get_publicKeyParamSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyParamSet;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKeyParamSet = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_get_digestParamSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestParamSet;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_get_digestParamSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestParamSet;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_set_digestParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestParamSet = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_get_encryptionParamSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionParamSet;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_get_encryptionParamSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionParamSet;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::__cordl_internal_set_encryptionParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptionParamSet = value;
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*
Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                      ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKeyParamSet, digestParamSet);
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                      ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                      ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKeyParamSet, digestParamSet, encryptionParamSet);
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_PublicKeyParamSet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "get_PublicKeyParamSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_DigestParamSet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "get_DigestParamSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_EncryptionParamSet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), { "get_EncryptionParamSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*
Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                             ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(publicKeyParamSet, digestParamSet));
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*
Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                             ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                             ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(publicKeyParamSet, digestParamSet, encryptionParamSet));
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*
Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::Gost3410PublicKeyAlgParameters() {}
