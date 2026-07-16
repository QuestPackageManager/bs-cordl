#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsProtocol.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueueStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueue_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCloseable_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStream_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3475d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::*)(uint8_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x34760a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3477690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(), { "Write", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage.WriteToRecordStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::*)(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::WriteToRecordStream)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3475d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(),
                                                                                           { "WriteToRecordStream", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::_ctor(uint8_t handshakeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handshakeType);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::_ctor(uint8_t handshakeType, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handshakeType, length);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::Write(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(), { "Write", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::WriteToRecordStream(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* protocol) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(),
                                                                                         { "WriteToRecordStream", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protocol);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage* Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::New_ctor(uint8_t handshakeType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(handshakeType));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage* Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::New_ctor(uint8_t handshakeType, int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage*>(handshakeType, length));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol_HandshakeMessage::TlsProtocol_HandshakeMessage() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3473134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(
    ::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3473140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x347327c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Context)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_ContextAdmin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Peer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Peer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleAlertMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertMessage)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x34733f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleAlertWarningMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertWarningMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3473528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleChangeCipherSpecMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleChangeCipherSpecMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x347358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleClose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3473590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x34736a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleFailure)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x34736e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleHandshakeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ApplyMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplyMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3473754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CheckReceivedChangeCipherSpec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CheckReceivedChangeCipherSpec)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x34737e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CleanupHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3473834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.BlockForHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::BlockForHandshake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x34738e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CompleteHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CompleteHandshake)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x3473968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessRecord)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x346ba94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                { "ProcessRecord", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessHandshakeQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::Org::BouncyCastle::Crypto::Tls::ByteQueue*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessHandshakeQueue)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x3474030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                                                           { "ProcessHandshakeQueue", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ByteQueue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessApplicationDataQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessApplicationDataQueue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3473ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ProcessApplicationDataQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessAlertQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessAlertQueue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3473e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ProcessAlertQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessChangeCipherSpec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessChangeCipherSpec)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3473ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { "ProcessChangeCipherSpec", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ApplicationDataAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplicationDataAvailable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x347431c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadApplicationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadApplicationData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3474334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeCheckRecordHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeCheckRecordHeader)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x34744b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeReadRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeReadRecord)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x3474690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeWriteRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeWriteRecord)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3474920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3474af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SetAppDataSplitMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SetAppDataSplitMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3474cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteHandshakeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteHandshakeMessage)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3474d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Stream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Stream)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3474ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CloseInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CloseInput)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3474f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3475054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3475078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetAvailableInputBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableInputBytes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x34752b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadInput)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3475318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferOutput)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3475414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetAvailableOutputBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableOutputBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x34754bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadOutput)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3475530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.InvalidateSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x34755a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessFinishedMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessFinishedMessage)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3475660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.RaiseAlertFatal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertFatal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x34757fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.RaiseAlertWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertWarning)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x34759d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendCertificateMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendCertificateMessage)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3475b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendChangeCipherSpecMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendChangeCipherSpecMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3475ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendFinishedMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendFinishedMessage)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3475f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendSupplementalDataMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendSupplementalDataMessage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3476144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateVerifyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateVerifyData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x34765c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34768b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x34768c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_IsClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_IsClosed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34768e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::Collections::IDictionary*, ::System::Collections::IDictionary*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x34768f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.RefuseRenegotiation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::RefuseRenegotiation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x347699c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.AssertEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::AssertEmpty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3475778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "AssertEmpty", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateRandomBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(bool, ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRandomBlock)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3476a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { "CreateRandomBlock", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateRenegotiationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRenegotiationInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3476ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "CreateRenegotiationInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.EstablishMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::EstablishMasterSecret)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3476bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                         { "EstablishMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetCurrentPrfHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetCurrentPrfHash)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3476708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { "GetCurrentPrfHash",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)(::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadExtensions)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x346d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ReadExtensions", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadSupplementalDataMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadSupplementalDataMessage)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3476e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ReadSupplementalDataMessage", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteExtensions)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x346dfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { "WriteExtensions", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteSelectedExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::Collections::IDictionary*, bool)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSelectedExtensions)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x3477078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                            { "WriteSelectedExtensions", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteSupplementalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSupplementalData)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x34761c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { "WriteSupplementalData", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetPrfAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetPrfAlgorithm)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x347752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                             { "GetPrfAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mApplicationDataQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mApplicationDataQueue;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mApplicationDataQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mApplicationDataQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mApplicationDataQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mApplicationDataQueue = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAlertQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlertQueue;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAlertQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlertQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mAlertQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAlertQueue = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mHandshakeQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeQueue;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mHandshakeQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHandshakeQueue = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mRecordStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordStream;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mRecordStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordStream;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mRecordStream(::Org::BouncyCastle::Crypto::Tls::RecordStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRecordStream = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecureRandom = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mTlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsStream;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsStream* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mTlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsStream;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mTlsStream(::Org::BouncyCastle::Crypto::Tls::TlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTlsStream = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClosed;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClosed;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mClosed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mClosed = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mFailedWithError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFailedWithError;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mFailedWithError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFailedWithError;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mFailedWithError(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mFailedWithError = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAppDataReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataReady;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAppDataReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataReady;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mAppDataReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAppDataReady = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAppDataSplitEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitEnabled;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAppDataSplitEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitEnabled;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mAppDataSplitEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAppDataSplitEnabled = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAppDataSplitMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitMode;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAppDataSplitMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitMode;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mAppDataSplitMode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAppDataSplitMode = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mExpectedVerifyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectedVerifyData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mExpectedVerifyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectedVerifyData;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mExpectedVerifyData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mExpectedVerifyData = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mTlsSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSession;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mTlsSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mTlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mTlsSession = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionParameters;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSessionParameters = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSecurityParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityParameters;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSecurityParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mSecurityParameters(::Org::BouncyCastle::Crypto::Tls::SecurityParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityParameters = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mPeerCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mPeerCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPeerCertificate = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mOfferedCipherSuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCipherSuites;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mOfferedCipherSuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCipherSuites;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mOfferedCipherSuites(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mOfferedCipherSuites = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mOfferedCompressionMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCompressionMethods;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mOfferedCompressionMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCompressionMethods;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mOfferedCompressionMethods(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mOfferedCompressionMethods = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mClientExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClientExtensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mClientExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClientExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mClientExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mClientExtensions = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mServerExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerExtensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mServerExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mServerExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mServerExtensions = value;
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mConnectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mConnectionState;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mConnectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mConnectionState;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mConnectionState(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mConnectionState = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mResumedSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResumedSession;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mResumedSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResumedSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mResumedSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResumedSession = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mReceivedChangeCipherSpec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReceivedChangeCipherSpec;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mReceivedChangeCipherSpec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReceivedChangeCipherSpec;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mReceivedChangeCipherSpec(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReceivedChangeCipherSpec = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSecureRenegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRenegotiation;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mSecureRenegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRenegotiation;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mSecureRenegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecureRenegotiation = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAllowCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAllowCertificateStatus;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mAllowCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAllowCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mAllowCertificateStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAllowCertificateStatus = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mExpectSessionTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectSessionTicket;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mExpectSessionTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectSessionTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mExpectSessionTicket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mExpectSessionTicket = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mBlocking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlocking;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mBlocking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlocking;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mBlocking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBlocking = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mInputBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInputBuffers;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mInputBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInputBuffers;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mInputBuffers(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInputBuffers = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mOutputBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutputBuffer;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_get_mOutputBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutputBuffer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__cordl_internal_set_mOutputBuffer(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mOutputBuffer = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Context() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_ContextAdmin() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Peer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertLevel, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertWarningMessage(uint8_t alertDescription) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleChangeCipherSpecMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleClose(bool user_canceled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user_canceled);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleException(uint8_t alertDescription, ::StringW message, ::System::Exception* cause) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertDescription, message, cause);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleFailure() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplyMaxFragmentLengthExtension() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CheckReceivedChangeCipherSpec(bool expected) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expected);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CleanupHandshake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::BlockForHandshake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CompleteHandshake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessRecord(uint8_t protocol, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                              { "ProcessRecord", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protocol, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* queue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                                                         { "ProcessHandshakeQueue", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ByteQueue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queue);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessApplicationDataQueue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ProcessApplicationDataQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessAlertQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ProcessAlertQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessChangeCipherSpec(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { "ProcessChangeCipherSpec", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplicationDataAvailable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadApplicationData(::ArrayW<uint8_t> buf, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeCheckRecordHeader(::ArrayW<uint8_t> recordHeader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordHeader);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeReadRecord() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeWriteRecord(uint8_t type, ::ArrayW<uint8_t> buf, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, buf, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteData(::ArrayW<uint8_t> buf, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SetAppDataSplitMode(int32_t appDataSplitMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, appDataSplitMode);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteHandshakeMessage(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Stream() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CloseInput() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput(::ArrayW<uint8_t> input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput(::ArrayW<uint8_t> input, int32_t inputOff, int32_t inputLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inputOff, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableInputBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadInput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, length);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferOutput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableOutputBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadOutput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, length);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::InvalidateSession() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessFinishedMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertFatal(uint8_t alertDescription, ::StringW message, ::System::Exception* cause) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertDescription, message, cause);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertWarning(uint8_t alertDescription, ::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertDescription, message);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendCertificateMessage(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendChangeCipherSpecMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendFinishedMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendSupplementalDataMessage(::System::Collections::IList* supplementalData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supplementalData);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateVerifyData(bool isServer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, isServer);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_IsClosed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessMaxFragmentLengthExtension(::System::Collections::IDictionary* clientExtensions,
                                                                                              ::System::Collections::IDictionary* serverExtensions, uint8_t alertDescription) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, clientExtensions, serverExtensions, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RefuseRenegotiation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::AssertEmpty(::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "AssertEmpty", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRandomBlock(bool useGmtUnixTime, ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* randomGenerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { "CreateRandomBlock", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, useGmtUnixTime, randomGenerator);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRenegotiationInfo(::ArrayW<uint8_t> renegotiated_connection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "CreateRenegotiationInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, renegotiated_connection);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::EstablishMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                          { "EstablishMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, keyExchange);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetCurrentPrfHash(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                        ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, ::ArrayW<uint8_t> sslSender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { "GetCurrentPrfHash",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, handshakeHash, sslSender);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadExtensions(::System::IO::MemoryStream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ReadExtensions", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method, input);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadSupplementalDataMessage(::System::IO::MemoryStream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(), { "ReadSupplementalDataMessage", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { "WriteExtensions", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, extensions);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSelectedExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions, bool selectEmpty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                       { "WriteSelectedExtensions", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, extensions, selectEmpty);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSupplementalData(::System::IO::Stream* output, ::System::Collections::IList* supplementalData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { "WriteSupplementalData", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, supplementalData);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetPrfAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(),
                                                           { "GetPrfAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, ciphersuite);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::TlsProtocol::New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(stream, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::TlsProtocol::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output,
                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(input, output, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::TlsProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(secureRandom));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
constexpr Org::BouncyCastle::Crypto::Tls::TlsProtocol::operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCloseable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* Org::BouncyCastle::Crypto::Tls::TlsProtocol::i___Org__BouncyCastle__Crypto__Tls__TlsCloseable() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCloseable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol::TlsProtocol() {}
