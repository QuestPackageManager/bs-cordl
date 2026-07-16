#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Holder.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Holder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ObjectDigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Holder* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::Holder::GetInstance)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x365c8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(
    &::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x365cc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x365cabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(
    &::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x365cd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::X509::IssuerSerial*, int32_t)>(
    &::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x365cd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::Holder::*)()>(&::Org::BouncyCastle::Asn1::X509::Holder::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365cd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::X509::GeneralNames*)>(
    &::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x365cd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::X509::GeneralNames*, int32_t)>(
    &::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x365cda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Holder::*)(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::Holder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x365cdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder.get_BaseCertificateID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Asn1::X509::Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Holder::get_BaseCertificateID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365cdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_BaseCertificateID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder.get_EntityName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::X509::Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Holder::get_EntityName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365cdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_EntityName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder.get_ObjectDigestInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* (::Org::BouncyCastle::Asn1::X509::Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Holder::get_ObjectDigestInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365cdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_ObjectDigestInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Holder.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Holder::*)()>(&::Org::BouncyCastle::Asn1::X509::Holder::ToAsn1Object)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x365cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_baseCertificateID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCertificateID;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_baseCertificateID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCertificateID;
}
constexpr void Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_set_baseCertificateID(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseCertificateID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_entityName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityName;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_entityName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityName;
}
constexpr void Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_set_entityName(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entityName = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_objectDigestInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDigestInfo;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* const& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_objectDigestInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDigestInfo;
}
constexpr void Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_set_objectDigestInfo(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectDigestInfo = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::Holder::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Holder*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagObj);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseCertificateID);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseCertificateID, version);
}
inline int32_t Org::BouncyCastle::Asn1::X509::Holder::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityName);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityName, version);
}
inline void Org::BouncyCastle::Asn1::X509::Holder::_ctor(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectDigestInfo);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::X509::Holder::get_BaseCertificateID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_BaseCertificateID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::X509::Holder::get_EntityName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_EntityName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* Org::BouncyCastle::Asn1::X509::Holder::get_ObjectDigestInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), { "get_ObjectDigestInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Holder::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Holder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(tagObj));
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(baseCertificateID));
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID, int32_t version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(baseCertificateID, version));
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(entityName));
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName, int32_t version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(entityName, version));
}
inline ::Org::BouncyCastle::Asn1::X509::Holder* Org::BouncyCastle::Asn1::X509::Holder::New_ctor(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Holder*>(objectDigestInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Holder::Holder() {}
