#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\CertifiedKeyPair.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertifiedKeyPair_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertOrEncCert_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncryptedValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PkiPublicationInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3347560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33477f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3347974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)(
    ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3347980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair.get_CertOrEncCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::get_CertOrEncCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33479dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair.get_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::get_PrivateKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33479e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair.get_PublicationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::get_PublicationInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33479ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::ToAsn1Object)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33479f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*& Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_get_certOrEncCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certOrEncCert;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* const& Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_get_certOrEncCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certOrEncCert;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_set_certOrEncCert(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certOrEncCert = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_get_privateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* const& Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_get_privateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_set_privateKey(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKey = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*& Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_get_publicationInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicationInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* const& Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_get_publicationInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicationInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::__cordl_internal_set_publicationInfo(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicationInfo = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certOrEncCert);
}
inline void Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* privateKey,
                                                                  ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* publicationInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certOrEncCert, privateKey, publicationInfo);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::get_CertOrEncCert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::get_PrivateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::get_PublicationInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(certOrEncCert));
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert,
                                                                                                                  ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* privateKey,
                                                                                                                  ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* publicationInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(certOrEncCert, privateKey, publicationInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair::CertifiedKeyPair() {}
