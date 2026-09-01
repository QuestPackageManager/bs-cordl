#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\RevokedStatus.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RevokedStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__RevokedInfo_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::RevokedStatus::*)(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*)>(
    &::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x357ae48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::RevokedStatus::*)(::System::DateTime, int32_t)>(&::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x357aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_RevocationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(&::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3574e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { "get_RevocationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_HasRevocationReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(&::Org::BouncyCastle::Ocsp::RevokedStatus::get_HasRevocationReason)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3574e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { "get_HasRevocationReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_RevocationReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(&::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationReason)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3574e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { "get_RevocationReason", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*& Org::BouncyCastle::Ocsp::RevokedStatus::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* const& Org::BouncyCastle::Ocsp::RevokedStatus::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Ocsp::RevokedStatus::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
inline void Org::BouncyCastle::Ocsp::RevokedStatus::_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Ocsp::RevokedStatus::_ctor(::System::DateTime revocationDate, int32_t reason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, revocationDate, reason);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { "get_RevocationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::RevokedStatus::get_HasRevocationReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { "get_HasRevocationReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RevokedStatus*>(), { "get_RevocationReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RevokedStatus* Org::BouncyCastle::Ocsp::RevokedStatus::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::RevokedStatus*>(info));
}
inline ::Org::BouncyCastle::Ocsp::RevokedStatus* Org::BouncyCastle::Ocsp::RevokedStatus::New_ctor(::System::DateTime revocationDate, int32_t reason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::RevokedStatus*>(revocationDate, reason));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::RevokedStatus::RevokedStatus() {}
