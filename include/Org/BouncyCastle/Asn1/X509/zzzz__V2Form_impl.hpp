#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/V2Form.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2Form_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ObjectDigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::V2Form* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::V2Form::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x36679c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::V2Form* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::V2Form::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36679d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2Form::*)(::Org::BouncyCastle::Asn1::X509::GeneralNames*)>(
    &::Org::BouncyCastle::Asn1::X509::V2Form::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3667c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2Form::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(&::Org::BouncyCastle::Asn1::X509::V2Form::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3667ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2Form::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*)>(&::Org::BouncyCastle::Asn1::X509::V2Form::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3667cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2Form::*)(::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*,
                                                                                                         ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::V2Form::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3667c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2Form::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::X509::V2Form::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3667a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form.get_IssuerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::X509::V2Form::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2Form::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3667cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "get_IssuerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form.get_BaseCertificateID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Asn1::X509::V2Form::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2Form::get_BaseCertificateID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3667cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "get_BaseCertificateID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form.get_ObjectDigestInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* (::Org::BouncyCastle::Asn1::X509::V2Form::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2Form::get_ObjectDigestInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3667cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "get_ObjectDigestInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2Form.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::V2Form::*)()>(&::Org::BouncyCastle::Asn1::X509::V2Form::ToAsn1Object)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3667cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_get_issuerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerName;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_get_issuerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerName;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_set_issuerName(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerName = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_get_baseCertificateID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCertificateID;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_get_baseCertificateID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCertificateID;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_set_baseCertificateID(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseCertificateID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*& Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_get_objectDigestInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDigestInfo;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* const& Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_get_objectDigestInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDigestInfo;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2Form::__cordl_internal_set_objectDigestInfo(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectDigestInfo = value;
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::V2Form*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::V2Form*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::V2Form::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerName);
}
inline void Org::BouncyCastle::Asn1::X509::V2Form::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerName, baseCertificateID);
}
inline void Org::BouncyCastle::Asn1::X509::V2Form::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerName, objectDigestInfo);
}
inline void Org::BouncyCastle::Asn1::X509::V2Form::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID,
                                                         ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerName, baseCertificateID, objectDigestInfo);
}
inline void Org::BouncyCastle::Asn1::X509::V2Form::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::X509::V2Form::get_IssuerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "get_IssuerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::X509::V2Form::get_BaseCertificateID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "get_BaseCertificateID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* Org::BouncyCastle::Asn1::X509::V2Form::get_ObjectDigestInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), { "get_ObjectDigestInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::V2Form::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2Form*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V2Form*>(issuerName));
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName,
                                                                                                ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V2Form*>(issuerName, baseCertificateID));
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName,
                                                                                                ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V2Form*>(issuerName, objectDigestInfo));
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName,
                                                                                                ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID,
                                                                                                ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V2Form*>(issuerName, baseCertificateID, objectDigestInfo));
}
inline ::Org::BouncyCastle::Asn1::X509::V2Form* Org::BouncyCastle::Asn1::X509::V2Form::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V2Form*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::V2Form::V2Form() {}
