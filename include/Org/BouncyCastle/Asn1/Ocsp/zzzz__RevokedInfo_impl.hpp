#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\RevokedInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__RevokedInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlReason_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x345a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x345d9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345dd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::*)(
    ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::X509::CrlReason*)>(&::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x345dd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x345db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo.get_RevocationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::get_RevocationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345dd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { "get_RevocationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo.get_RevocationReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CrlReason* (::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::get_RevocationReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345dd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { "get_RevocationReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x345dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::__cordl_internal_get_revocationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationTime;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::__cordl_internal_get_revocationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationTime;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::__cordl_internal_set_revocationTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revocationTime = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::CrlReason*& Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::__cordl_internal_get_revocationReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationReason;
}
constexpr ::Org::BouncyCastle::Asn1::X509::CrlReason* const& Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::__cordl_internal_get_revocationReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationReason;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::__cordl_internal_set_revocationReason(::Org::BouncyCastle::Asn1::X509::CrlReason* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revocationReason = value;
}
inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, revocationTime);
}
inline void Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime, ::Org::BouncyCastle::Asn1::X509::CrlReason* revocationReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, revocationTime, revocationReason);
}
inline void Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::get_RevocationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { "get_RevocationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::CrlReason* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::get_RevocationReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), { "get_RevocationReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CrlReason*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(revocationTime));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime,
                                                                                                          ::Org::BouncyCastle::Asn1::X509::CrlReason* revocationReason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(revocationTime, revocationReason));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo::RevokedInfo() {}
