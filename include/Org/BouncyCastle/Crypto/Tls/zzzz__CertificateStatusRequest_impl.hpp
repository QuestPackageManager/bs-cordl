#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\CertificateStatusRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatusRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__OcspStatusRequest_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::*)(uint8_t, ::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x343aec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest.get_StatusType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::get_StatusType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343b044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest.get_Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343b04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest.GetOcspStatusRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* (::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::GetOcspStatusRequest)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x343b054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::Encode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x343b128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::Parse)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x343b248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest.IsCorrectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::System::Object*)>(&::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::IsCorrectType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x343af54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                           { "IsCorrectType", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::__cordl_internal_get_mStatusType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStatusType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::__cordl_internal_get_mStatusType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStatusType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::__cordl_internal_set_mStatusType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mStatusType = value;
}
constexpr ::System::Object*& Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::__cordl_internal_get_mRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRequest;
}
constexpr ::System::Object* const& Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::__cordl_internal_get_mRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::__cordl_internal_set_mRequest(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRequest = value;
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::_ctor(uint8_t statusType, ::System::Object* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusType, request);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::get_StatusType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::get_Request() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::GetOcspStatusRequest() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(nullptr, ___internal_method, input);
}
inline bool Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::IsCorrectType(uint8_t statusType, ::System::Object* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(),
                                                                                         { "IsCorrectType", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, statusType, request);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::New_ctor(uint8_t statusType, ::System::Object* request) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(statusType, request));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest::CertificateStatusRequest() {}
