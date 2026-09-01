#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Icao\CscaMasterList.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__CscaMasterList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Icao::CscaMasterList* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x344eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x344eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>)>(
    &::Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x344ee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)()>(&::Org::BouncyCastle::Asn1::Icao::CscaMasterList::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x344eef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.GetCertStructs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetCertStructs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344ef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { "GetCertStructs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.CopyCertList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>)>(
    &::Org::BouncyCastle::Asn1::Icao::CscaMasterList::CopyCertList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x344ee80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(),
                                                             { "CopyCertList", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::CscaMasterList.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Icao::CscaMasterList::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::CscaMasterList::ToAsn1Object)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x344ef18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Icao::CscaMasterList::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Icao::CscaMasterList::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Icao::CscaMasterList::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>& Org::BouncyCastle::Asn1::Icao::CscaMasterList::__cordl_internal_get_certList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certList;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& Org::BouncyCastle::Asn1::Icao::CscaMasterList::__cordl_internal_get_certList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certList;
}
constexpr void Org::BouncyCastle::Asn1::Icao::CscaMasterList::__cordl_internal_set_certList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certList = value;
}
inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Icao::CscaMasterList::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certStructs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certStructs);
}
inline int32_t Org::BouncyCastle::Asn1::Icao::CscaMasterList::get_Version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> Org::BouncyCastle::Asn1::Icao::CscaMasterList::GetCertStructs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), { "GetCertStructs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>
Org::BouncyCastle::Asn1::Icao::CscaMasterList::CopyCertList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> orig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(),
                                                           { "CopyCertList", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>(nullptr, ___internal_method, orig);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Icao::CscaMasterList::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* Org::BouncyCastle::Asn1::Icao::CscaMasterList::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* Org::BouncyCastle::Asn1::Icao::CscaMasterList::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certStructs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::CscaMasterList*>(certStructs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Icao::CscaMasterList::CscaMasterList() {}
