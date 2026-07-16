#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/BiometricData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__BiometricData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__TypeOfBiometricData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::GetInstance)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35556ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3555810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)(
    ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1OctetString*,
    ::Org::BouncyCastle::Asn1::DerIA5String*)>(&::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3555aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)(
    ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3555ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData.get_TypeOfBiometricData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_TypeOfBiometricData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3555abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_TypeOfBiometricData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3555ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData.get_BiometricDataHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_BiometricDataHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3555acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_BiometricDataHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData.get_SourceDataUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_SourceDataUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3555ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_SourceDataUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3555adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_typeOfBiometricData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeOfBiometricData;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* const& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_typeOfBiometricData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeOfBiometricData;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_set_typeOfBiometricData(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeOfBiometricData = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_biometricDataHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___biometricDataHash;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_biometricDataHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___biometricDataHash;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_set_biometricDataHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___biometricDataHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_sourceDataUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceDataUri;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_get_sourceDataUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceDataUri;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::__cordl_internal_set_sourceDataUri(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceDataUri = value;
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                           ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                           ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash, ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeOfBiometricData, hashAlgorithm, biometricDataHash, sourceDataUri);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                           ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                           ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeOfBiometricData, hashAlgorithm, biometricDataHash);
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_TypeOfBiometricData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_TypeOfBiometricData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_HashAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_BiometricDataHash() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_BiometricDataHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::get_SourceDataUri() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), { "get_SourceDataUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*
Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash,
                                                                  ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(typeOfBiometricData, hashAlgorithm, biometricDataHash, sourceDataUri));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*
Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*>(typeOfBiometricData, hashAlgorithm, biometricDataHash));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData::BiometricData() {}
