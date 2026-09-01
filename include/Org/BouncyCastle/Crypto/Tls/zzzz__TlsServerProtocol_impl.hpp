#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsServerProtocol.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x348bff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(
    ::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x348c020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x348c044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsServer*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::Accept)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x348c068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.CleanupHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x348c38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348c3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_ContextAdmin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348c3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_Peer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Peer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348c3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.HandleHandshakeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xcf4;
  constexpr static std::size_t addrs = 0x348c3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.HandleAlertWarningMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleAlertWarningMessage)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x348d464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.NotifyClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x348d5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveCertificateMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x348dbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x348dc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveClientHelloMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientHelloMessage)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x348e7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveClientKeyExchangeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientKeyExchangeMessage)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x348f284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendCertificateRequestMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateRequestMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x348f56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendCertificateStatusMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateStatusMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x348f600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendNewSessionTicketMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendNewSessionTicketMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x348f694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerHelloMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloMessage)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x348f75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerHelloDoneMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloDoneMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x34902cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerKeyExchangeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerKeyExchangeMessage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x34903f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ExpectCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ExpectCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x349049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 63 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mTlsServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsServer;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer* const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mTlsServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsServer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mTlsServer(::Org::BouncyCastle::Crypto::Tls::TlsServer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTlsServer = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mTlsServerContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsServerContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mTlsServerContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsServerContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mTlsServerContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTlsServerContext = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mKeyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mKeyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKeyExchange = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mServerCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerCredentials;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mServerCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mServerCredentials = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mCertificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateRequest;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mCertificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificateRequest = value;
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mClientCertificateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClientCertificateType;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mClientCertificateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClientCertificateType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mClientCertificateType(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mClientCertificateType = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mPrepareFinishHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrepareFinishHash;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_get_mPrepareFinishHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrepareFinishHash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__cordl_internal_set_mPrepareFinishHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPrepareFinishHash = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer* tlsServer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tlsServer);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::CleanupHandshake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Context() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_ContextAdmin() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Peer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleAlertWarningMessage(uint8_t alertDescription) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateVerifyMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientHelloMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientKeyExchangeMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateRequestMessage(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateStatusMessage(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateStatus);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendNewSessionTicketMessage(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSessionTicket);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloDoneMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerKeyExchangeMessage(::ArrayW<uint8_t> serverKeyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverKeyExchange);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ExpectCertificateVerifyMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::New_ctor(::System::IO::Stream* stream,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(stream, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(input, output, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(secureRandom));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::TlsServerProtocol() {}
