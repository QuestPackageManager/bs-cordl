#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\OcspIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OcspIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponderID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x337400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3374190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::*)(::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, ::System::DateTime)>(
    &::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3374394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier.get_OcspResponderID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponderID* (::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::get_OcspResponderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3374440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { "get_OcspResponderID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier.get_ProducedAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::*)()>(&::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::get_ProducedAt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3374448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { "get_ProducedAt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3374460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& Org::BouncyCastle::Asn1::Esf::OcspIdentifier::__cordl_internal_get_ocspResponderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspResponderID;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* const& Org::BouncyCastle::Asn1::Esf::OcspIdentifier::__cordl_internal_get_ocspResponderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspResponderID;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OcspIdentifier::__cordl_internal_set_ocspResponderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ocspResponderID = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Esf::OcspIdentifier::__cordl_internal_get_producedAt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___producedAt;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Esf::OcspIdentifier::__cordl_internal_get_producedAt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___producedAt;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OcspIdentifier::__cordl_internal_set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___producedAt = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* Org::BouncyCastle::Asn1::Esf::OcspIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspIdentifier::_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID, ::System::DateTime producedAt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ocspResponderID, producedAt);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* Org::BouncyCastle::Asn1::Esf::OcspIdentifier::get_OcspResponderID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { "get_OcspResponderID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Asn1::Esf::OcspIdentifier::get_ProducedAt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), { "get_ProducedAt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::OcspIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* Org::BouncyCastle::Asn1::Esf::OcspIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* Org::BouncyCastle::Asn1::Esf::OcspIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID,
                                                                                                              ::System::DateTime producedAt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(ocspResponderID, producedAt));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier::OcspIdentifier() {}
