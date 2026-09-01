#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\IssuingDistributionPoint.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuingDistributionPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPointName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ReasonFlags_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3660234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3660248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)(::Org::BouncyCastle::Asn1::X509::DistributionPointName*, bool, bool,
                                                                                                                           ::Org::BouncyCastle::Asn1::X509::ReasonFlags*, bool, bool)>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::_ctor)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x366068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPointName*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x36603cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.get_OnlyContainsUserCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlyContainsUserCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3660990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlyContainsUserCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.get_OnlyContainsCACerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlyContainsCACerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3660998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlyContainsCACerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.get_IsIndirectCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_IsIndirectCrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36609a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_IsIndirectCrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.get_OnlyContainsAttributeCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlyContainsAttributeCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36609a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlyContainsAttributeCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.get_DistributionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DistributionPointName* (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_DistributionPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36609b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_DistributionPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.get_OnlySomeReasons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ReasonFlags* (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlySomeReasons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36609b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlySomeReasons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36609c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x36609c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint.appendObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::StringW)>(
    &::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::appendObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3660cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                            { "appendObject", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__distributionPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionPoint;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName* const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__distributionPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionPoint;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set__distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distributionPoint = value;
}
constexpr bool& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlyContainsUserCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlyContainsUserCerts;
}
constexpr bool const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlyContainsUserCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlyContainsUserCerts;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set__onlyContainsUserCerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onlyContainsUserCerts = value;
}
constexpr bool& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlyContainsCACerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlyContainsCACerts;
}
constexpr bool const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlyContainsCACerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlyContainsCACerts;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set__onlyContainsCACerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onlyContainsCACerts = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlySomeReasons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlySomeReasons;
}
constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags* const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlySomeReasons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlySomeReasons;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set__onlySomeReasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onlySomeReasons = value;
}
constexpr bool& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__indirectCRL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indirectCRL;
}
constexpr bool const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__indirectCRL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indirectCRL;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set__indirectCRL(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indirectCRL = value;
}
constexpr bool& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlyContainsAttributeCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlyContainsAttributeCerts;
}
constexpr bool const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get__onlyContainsAttributeCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlyContainsAttributeCerts;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set__onlyContainsAttributeCerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onlyContainsAttributeCerts = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj,
                                                                                                                                       bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint, bool onlyContainsUserCerts,
                                                                           bool onlyContainsCACerts, ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons, bool indirectCRL,
                                                                           bool onlyContainsAttributeCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPointName*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distributionPoint, onlyContainsUserCerts, onlyContainsCACerts, onlySomeReasons, indirectCRL, onlyContainsAttributeCerts);
}
inline void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline bool Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlyContainsUserCerts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlyContainsUserCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlyContainsCACerts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlyContainsCACerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_IsIndirectCrl() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_IsIndirectCrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlyContainsAttributeCerts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlyContainsAttributeCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_DistributionPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_DistributionPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DistributionPointName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_OnlySomeReasons() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), { "get_OnlySomeReasons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(),
                          { "appendObject", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, sep, name, val);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*
Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::New_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint, bool onlyContainsUserCerts, bool onlyContainsCACerts,
                                                                  ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons, bool indirectCRL, bool onlyContainsAttributeCerts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(distributionPoint, onlyContainsUserCerts, onlyContainsCACerts, onlySomeReasons,
                                                                                                                      indirectCRL, onlyContainsAttributeCerts));
}
inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::IssuingDistributionPoint() {}
