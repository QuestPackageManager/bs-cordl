#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsClientProtocol.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3479a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(
    ::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3479a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3479a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsClient*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::Connect)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x3479a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.CleanupHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3479efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3479f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_ContextAdmin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3479f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_Peer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Peer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3479f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.HandleHandshakeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xfcc;
  constexpr static std::size_t addrs = 0x3479f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.HandleSupplementalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleSupplementalData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x347af04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.ReceiveNewSessionTicketMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveNewSessionTicketMessage)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x347b0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.ReceiveServerHelloMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveServerHelloMessage)> {
  constexpr static std::size_t size = 0xe74;
  constexpr static std::size_t addrs = 0x347b188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x347bffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendClientHelloMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientHelloMessage)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x347c08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendClientKeyExchangeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientKeyExchangeMessage)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x347c738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 57 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient*& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mTlsClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsClient;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mTlsClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsClient;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTlsClient = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mTlsClientContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsClientContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mTlsClientContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsClientContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mTlsClientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTlsClientContext = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mSelectedSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSelectedSessionID;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mSelectedSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSelectedSessionID;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mSelectedSessionID(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSelectedSessionID = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mKeyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mKeyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKeyExchange = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mAuthentication() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAuthentication;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mAuthentication() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAuthentication;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mAuthentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAuthentication = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateStatus;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mCertificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificateStatus = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mCertificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateRequest;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mCertificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificateRequest = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* tlsClient) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tlsClient);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::CleanupHandshake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Context() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_ContextAdmin() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Peer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleSupplementalData(::System::Collections::IList* serverSupplementalData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverSupplementalData);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveNewSessionTicketMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveServerHelloMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateVerify);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientHelloMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientKeyExchangeMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::System::IO::Stream* stream,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(stream, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(input, output, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(secureRandom));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::TlsClientProtocol() {}
