#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/SigPolicyQualifierInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__SigPolicyQualifierInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3376658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x33778f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3377af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo.get_SigPolicyQualifierId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::get_SigPolicyQualifierId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3377b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { "get_SigPolicyQualifierId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo.get_SigQualifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::get_SigQualifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3377b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { "get_SigQualifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3377b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::__cordl_internal_get_sigPolicyQualifierId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyQualifierId;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::__cordl_internal_get_sigPolicyQualifierId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyQualifierId;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::__cordl_internal_set_sigPolicyQualifierId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigPolicyQualifierId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::__cordl_internal_get_sigQualifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigQualifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::__cordl_internal_get_sigQualifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigQualifier;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::__cordl_internal_set_sigQualifier(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigQualifier = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable* sigQualifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigPolicyQualifierId, sigQualifier);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::get_SigPolicyQualifierId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { "get_SigPolicyQualifierId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::get_SigQualifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), { "get_SigQualifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyQualifierId,
                                                                                                                              ::Org::BouncyCastle::Asn1::Asn1Encodable* sigQualifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>(sigPolicyQualifierId, sigQualifier));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo::SigPolicyQualifierInfo() {}
