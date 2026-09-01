#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\PrivateKeyUsagePeriod.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PrivateKeyUsagePeriod_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::GetInstance)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3663db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::_ctor)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x3663fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod.get_NotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::get_NotBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3664288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { "get_NotBefore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod.get_NotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::get_NotAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3664290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { "get_NotAfter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::ToAsn1Object)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3664298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::__cordl_internal_get__notBefore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notBefore;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::__cordl_internal_get__notBefore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notBefore;
}
constexpr void Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::__cordl_internal_set__notBefore(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notBefore = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::__cordl_internal_get__notAfter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAfter;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::__cordl_internal_get__notAfter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAfter;
}
constexpr void Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::__cordl_internal_set__notAfter(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notAfter = value;
}
inline ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::get_NotBefore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { "get_NotBefore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::get_NotAfter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), { "get_NotAfter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod::PrivateKeyUsagePeriod() {}
