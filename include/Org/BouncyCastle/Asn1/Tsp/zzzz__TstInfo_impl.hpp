#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TstInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TstInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__Accuracy_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__MessageImprint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TstInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x354f010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::_ctor)> {
  constexpr static std::size_t size = 0x818;
  constexpr static std::size_t addrs = 0x354f0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*,
    ::Org::BouncyCastle::Asn1::Tsp::Accuracy*, ::Org::BouncyCastle::Asn1::DerBoolean*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::X509::GeneralName*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x354f8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_MessageImprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::MessageImprint* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_MessageImprint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_MessageImprint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Policy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Policy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Policy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_SerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Accuracy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::Accuracy* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Accuracy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Accuracy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_GenTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_GenTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_GenTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Ordering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Ordering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Ordering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Nonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Nonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Nonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Tsa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Tsa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Tsa", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354f9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TstInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Tsp::TstInfo::*)()>(&::Org::BouncyCastle::Asn1::Tsp::TstInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x354f9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_tsaPolicyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicyId;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_tsaPolicyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicyId;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_tsaPolicyId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsaPolicyId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_messageImprint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageImprint;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_messageImprint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageImprint;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageImprint = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serialNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_genTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genTime;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_genTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genTime;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_genTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___genTime = value;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_accuracy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracy;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_accuracy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracy;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_accuracy(::Org::BouncyCastle::Asn1::Tsp::Accuracy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracy = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_ordering(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ordering = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_nonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_nonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nonce = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_tsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsa;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_tsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsa;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsa = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TstInfo::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* Org::BouncyCastle::Asn1::Tsp::TstInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Tsp::TstInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Tsp::TstInfo::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint,
                                                         ::Org::BouncyCastle::Asn1::DerInteger* serialNumber, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime,
                                                         ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy, ::Org::BouncyCastle::Asn1::DerBoolean* ordering,
                                                         ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa,
                                                         ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tsaPolicyId, messageImprint, serialNumber, genTime, accuracy, ordering, nonce, tsa, extensions);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_MessageImprint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_MessageImprint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Policy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_SerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Accuracy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Accuracy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_GenTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_GenTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Ordering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Ordering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Nonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Tsa() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Tsa", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Tsp::TstInfo::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Tsp::TstInfo::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* Org::BouncyCastle::Asn1::Tsp::TstInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo*
Org::BouncyCastle::Asn1::Tsp::TstInfo::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint,
                                                ::Org::BouncyCastle::Asn1::DerInteger* serialNumber, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime,
                                                ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy, ::Org::BouncyCastle::Asn1::DerBoolean* ordering, ::Org::BouncyCastle::Asn1::DerInteger* nonce,
                                                ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(tsaPolicyId, messageImprint, serialNumber, genTime, accuracy, ordering, nonce, tsa, extensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Tsp::TstInfo::TstInfo() {}
