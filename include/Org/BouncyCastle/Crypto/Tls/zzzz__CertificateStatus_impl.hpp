#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\CertificateStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateStatus::*)(uint8_t, ::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x343a9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus.get_StatusType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::CertificateStatus::*)()>(&::Org::BouncyCastle::Crypto::Tls::CertificateStatus::get_StatusType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343ab70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus.get_Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Tls::CertificateStatus::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatus::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343ab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus.GetOcspResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* (::Org::BouncyCastle::Crypto::Tls::CertificateStatus::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatus::GetOcspResponse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x343ab80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateStatus::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatus::Encode)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x343ac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateStatus* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::CertificateStatus::Parse)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x343adb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatus.IsCorrectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::System::Object*)>(&::Org::BouncyCastle::Crypto::Tls::CertificateStatus::IsCorrectType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x343aa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                           { "IsCorrectType", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::CertificateStatus::__cordl_internal_get_mStatusType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStatusType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::CertificateStatus::__cordl_internal_get_mStatusType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStatusType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateStatus::__cordl_internal_set_mStatusType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mStatusType = value;
}
constexpr ::System::Object*& Org::BouncyCastle::Crypto::Tls::CertificateStatus::__cordl_internal_get_mResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResponse;
}
constexpr ::System::Object* const& Org::BouncyCastle::Crypto::Tls::CertificateStatus::__cordl_internal_get_mResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResponse;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateStatus::__cordl_internal_set_mResponse(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResponse = value;
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateStatus::_ctor(uint8_t statusType, ::System::Object* response) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusType, response);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::CertificateStatus::get_StatusType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Tls::CertificateStatus::get_Response() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* Org::BouncyCastle::Crypto::Tls::CertificateStatus::GetOcspResponse() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateStatus::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* Org::BouncyCastle::Crypto::Tls::CertificateStatus::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(nullptr, ___internal_method, input);
}
inline bool Org::BouncyCastle::Crypto::Tls::CertificateStatus::IsCorrectType(uint8_t statusType, ::System::Object* response) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(),
                                                                                         { "IsCorrectType", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, statusType, response);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* Org::BouncyCastle::Crypto::Tls::CertificateStatus::New_ctor(uint8_t statusType, ::System::Object* response) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>(statusType, response));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus::CertificateStatus() {}
