#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/DistributionPoint.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPointName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ReasonFlags_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DistributionPoint* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3658b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DistributionPoint* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::DistributionPoint::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3657bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3658b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)(
    ::Org::BouncyCastle::Asn1::X509::DistributionPointName*, ::Org::BouncyCastle::Asn1::X509::ReasonFlags*, ::Org::BouncyCastle::Asn1::X509::GeneralNames*)>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3658dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPointName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.get_DistributionPointName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DistributionPointName* (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::get_DistributionPointName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3658de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "get_DistributionPointName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.get_Reasons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ReasonFlags* (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::get_Reasons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3658dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "get_Reasons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.get_CrlIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::get_CrlIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3658df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "get_CrlIssuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::ToAsn1Object)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3658dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(&::Org::BouncyCastle::Asn1::X509::DistributionPoint::ToString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3658ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::DistributionPoint.appendObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::DistributionPoint::*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::StringW)>(
    &::Org::BouncyCastle::Asn1::X509::DistributionPoint::appendObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3659094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                            { "appendObject", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_get_distributionPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distributionPoint;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName* const& Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_get_distributionPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distributionPoint;
}
constexpr void Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_set_distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distributionPoint = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_get_reasons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reasons;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags* const& Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_get_reasons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reasons;
}
constexpr void Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_set_reasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reasons = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_get_cRLIssuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cRLIssuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_get_cRLIssuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cRLIssuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::DistributionPoint::__cordl_internal_set_cRLIssuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cRLIssuer = value;
}
inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* Org::BouncyCastle::Asn1::X509::DistributionPoint::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* Org::BouncyCastle::Asn1::X509::DistributionPoint::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::DistributionPoint::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::DistributionPoint::_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPointName,
                                                                    ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons, ::Org::BouncyCastle::Asn1::X509::GeneralNames* crlIssuer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPointName*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distributionPointName, reasons, crlIssuer);
}
inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* Org::BouncyCastle::Asn1::X509::DistributionPoint::get_DistributionPointName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "get_DistributionPointName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DistributionPointName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* Org::BouncyCastle::Asn1::X509::DistributionPoint::get_Reasons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "get_Reasons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::X509::DistributionPoint::get_CrlIssuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), { "get_CrlIssuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::DistributionPoint::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::DistributionPoint::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::DistributionPoint::appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                          { "appendObject", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, sep, name, val);
}
inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* Org::BouncyCastle::Asn1::X509::DistributionPoint::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* Org::BouncyCastle::Asn1::X509::DistributionPoint::New_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPointName,
                                                                                                                      ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons,
                                                                                                                      ::Org::BouncyCastle::Asn1::X509::GeneralNames* crlIssuer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(distributionPointName, reasons, crlIssuer));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPoint::DistributionPoint() {}
