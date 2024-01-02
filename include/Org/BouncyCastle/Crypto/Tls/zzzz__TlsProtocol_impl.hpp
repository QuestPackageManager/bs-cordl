#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueue_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueueStream_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCloseable_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9e554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::*)(uint8_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf9e848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::Write)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf9fe40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage.WriteToRecordStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*)>(&::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::WriteToRecordStream)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf9e55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), "WriteToRecordStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage* Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::New_ctor(uint8_t handshakeType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>(handshakeType));
}
inline void Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::_ctor(uint8_t handshakeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handshakeType);
}
inline ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage* Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::New_ctor(uint8_t handshakeType, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>(handshakeType, length));
}
inline void Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::_ctor(uint8_t handshakeType, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handshakeType, length);
}
inline void Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), "Write",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::WriteToRecordStream(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* protocol) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*>::get(), "WriteToRecordStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocol);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage::__TlsProtocol__HandshakeMessage() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf9b7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(
    ::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xf9b7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xf9b914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Context)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_ContextAdmin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Peer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Peer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleAlertMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertMessage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xf9bab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleAlertWarningMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertWarningMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf9bbf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleChangeCipherSpecMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleChangeCipherSpecMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf9bc78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleClose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleClose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf9bc7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf9bd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleFailure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf9bdf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleHandshakeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ApplyMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplyMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf9be74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CheckReceivedChangeCipherSpec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CheckReceivedChangeCipherSpec)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf9bf0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CleanupHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf9bf68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.BlockForHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::BlockForHandshake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf9c004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CompleteHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CompleteHandshake)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xf9c094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessRecord)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xf93f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ProcessRecord", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessHandshakeQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::Org::BouncyCastle::Crypto::Tls::ByteQueue*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessHandshakeQueue)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xf9c794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ProcessHandshakeQueue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ByteQueue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessApplicationDataQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessApplicationDataQueue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf9c630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                               "ProcessApplicationDataQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessAlertQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessAlertQueue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf9c5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                               "ProcessAlertQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessChangeCipherSpec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessChangeCipherSpec)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xf9c634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ProcessChangeCipherSpec", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ApplicationDataAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplicationDataAvailable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf9ca70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadApplicationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadApplicationData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf9ca8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeCheckRecordHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeCheckRecordHeader)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf9cc1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeReadRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeReadRecord)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xf9cdf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeWriteRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeWriteRecord)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf9d088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xf9d25c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SetAppDataSplitMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SetAppDataSplitMode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf9d444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteHandshakeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteHandshakeMessage)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf9d4f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Stream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Stream)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xf9d688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CloseInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CloseInput)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf9d6ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf9d810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xf9d838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetAvailableInputBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableInputBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf9da7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadInput)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf9dae8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferOutput)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xf9dbe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetAvailableOutputBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableOutputBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf9dcc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadOutput)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf9dd40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.InvalidateSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xf9ddb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessFinishedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessFinishedMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xf9de70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.RaiseAlertFatal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertFatal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf9e018;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.RaiseAlertWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertWarning)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xf9e1e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendCertificateMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendCertificateMessage)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xf9e324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendChangeCipherSpecMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendChangeCipherSpecMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf9e680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendFinishedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendFinishedMessage)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf9e718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendSupplementalDataMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendSupplementalDataMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf9e8d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateVerifyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateVerifyData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xf9ed74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf9f034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf9f044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_IsClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_IsClosed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf9f068;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(
    ::System::Collections::IDictionary*, ::System::Collections::IDictionary*, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf9f080;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.RefuseRenegotiation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::RefuseRenegotiation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xf9f130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.AssertEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::MemoryStream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsProtocol::AssertEmpty)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf9df8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "AssertEmpty", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateRandomBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(bool, ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRandomBlock)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf9f214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "CreateRandomBlock", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateRenegotiationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRenegotiationInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xf9f328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "CreateRenegotiationInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.EstablishMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::EstablishMasterSecret)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xf9f380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "EstablishMasterSecret", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetCurrentPrfHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetCurrentPrfHash)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xf9ee94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "GetCurrentPrfHash", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadExtensions)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xf95f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ReadExtensions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadSupplementalDataMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadSupplementalDataMessage)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xf9f5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ReadSupplementalDataMessage",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteExtensions)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf96570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "WriteExtensions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteSelectedExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::Collections::IDictionary*, bool)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSelectedExtensions)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xf9f7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "WriteSelectedExtensions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteSupplementalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSupplementalData)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xf9e954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "WriteSupplementalData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetPrfAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetPrfAlgorithm)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xf9fcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "GetPrfAlgorithm", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
constexpr Org::BouncyCastle::Crypto::Tls::TlsProtocol::operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCloseable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mApplicationDataQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mApplicationDataQueue;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mApplicationDataQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mApplicationDataQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mApplicationDataQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mApplicationDataQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAlertQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlertQueue;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAlertQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlertQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAlertQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mAlertQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mHandshakeQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeQueue;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mHandshakeQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHandshakeQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mRecordStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordStream;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::RecordStream*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mRecordStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordStream;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mRecordStream(::Org::BouncyCastle::Crypto::Tls::RecordStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRecordStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSecureRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mTlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsStream;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsStream*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mTlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsStream;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mTlsStream(::Org::BouncyCastle::Crypto::Tls::TlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClosed;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClosed;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mClosed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mClosed = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mFailedWithError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFailedWithError;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mFailedWithError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFailedWithError;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mFailedWithError(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mFailedWithError = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataReady;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataReady;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAppDataReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAppDataReady = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataSplitEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitEnabled;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataSplitEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitEnabled;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAppDataSplitEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAppDataSplitEnabled = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataSplitMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitMode;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataSplitMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAppDataSplitMode;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAppDataSplitMode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAppDataSplitMode = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mExpectedVerifyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectedVerifyData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mExpectedVerifyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectedVerifyData;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mExpectedVerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mExpectedVerifyData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mTlsSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSession;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mTlsSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mTlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsSession)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionParameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSessionParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecurityParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityParameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecurityParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSecurityParameters(::Org::BouncyCastle::Crypto::Tls::SecurityParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSecurityParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mPeerCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mPeerCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPeerCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOfferedCipherSuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCipherSuites;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOfferedCipherSuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCipherSuites;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOfferedCipherSuites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOfferedCompressionMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCompressionMethods;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOfferedCompressionMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOfferedCompressionMethods;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOfferedCompressionMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mClientExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClientExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mClientExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClientExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mClientExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mClientExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mServerExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mServerExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mServerExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mConnectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mConnectionState;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mConnectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mConnectionState;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mConnectionState(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mConnectionState = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mResumedSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResumedSession;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mResumedSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResumedSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mResumedSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResumedSession = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mReceivedChangeCipherSpec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReceivedChangeCipherSpec;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mReceivedChangeCipherSpec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReceivedChangeCipherSpec;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mReceivedChangeCipherSpec(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReceivedChangeCipherSpec = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecureRenegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRenegotiation;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecureRenegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRenegotiation;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSecureRenegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecureRenegotiation = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAllowCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAllowCertificateStatus;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAllowCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAllowCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAllowCertificateStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAllowCertificateStatus = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mExpectSessionTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectSessionTicket;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mExpectSessionTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExpectSessionTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mExpectSessionTicket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mExpectSessionTicket = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mBlocking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlocking;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mBlocking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlocking;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mBlocking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBlocking = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mInputBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInputBuffers;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mInputBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInputBuffers;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mInputBuffers(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mInputBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOutputBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutputBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*> const& Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOutputBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutputBuffer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mOutputBuffer(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOutputBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::TlsProtocol::New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(stream, secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::TlsProtocol::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output,
                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(input, output, secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* Org::BouncyCastle::Crypto::Tls::TlsProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>(secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Context() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_ContextAdmin() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Peer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertLevel, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertWarningMessage(uint8_t alertDescription) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleChangeCipherSpecMessage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleClose(bool user_canceled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user_canceled);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleException(uint8_t alertDescription, ::StringW message, ::System::Exception* cause) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription, message, cause);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleFailure() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplyMaxFragmentLengthExtension() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CheckReceivedChangeCipherSpec(bool expected) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expected);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CleanupHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::BlockForHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CompleteHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessRecord(uint8_t protocol, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ProcessRecord", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocol, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* queue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ProcessHandshakeQueue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ByteQueue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queue);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessApplicationDataQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                             "ProcessApplicationDataQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessAlertQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                             "ProcessAlertQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessChangeCipherSpec(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ProcessChangeCipherSpec", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplicationDataAvailable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadApplicationData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buf, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeCheckRecordHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> recordHeader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordHeader);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeReadRecord() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeWriteRecord(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, buf, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SetAppDataSplitMode(int32_t appDataSplitMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appDataSplitMode);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteHandshakeMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Stream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CloseInput() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inputOff, int32_t inputLen) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, inputOff, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableInputBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadInput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, length);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, length);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableOutputBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, length);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::InvalidateSession() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessFinishedMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertFatal(uint8_t alertDescription, ::StringW message, ::System::Exception* cause) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription, message, cause);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertWarning(uint8_t alertDescription, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription, message);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendCertificateMessage(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendChangeCipherSpecMessage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendFinishedMessage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendSupplementalDataMessage(::System::Collections::IList* supplementalData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, supplementalData);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateVerifyData(bool isServer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, isServer);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_IsClosed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessMaxFragmentLengthExtension(::System::Collections::IDictionary* clientExtensions,
                                                                                              ::System::Collections::IDictionary* serverExtensions, uint8_t alertDescription) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, clientExtensions, serverExtensions, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RefuseRenegotiation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::AssertEmpty(::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "AssertEmpty", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buf);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRandomBlock(bool useGmtUnixTime, ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* randomGenerator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "CreateRandomBlock", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, useGmtUnixTime, randomGenerator);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRenegotiationInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> renegotiated_connection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "CreateRenegotiationInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, renegotiated_connection);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::EstablishMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "EstablishMasterSecret", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, keyExchange);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetCurrentPrfHash(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                           ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> sslSender) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "GetCurrentPrfHash", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, context, handshakeHash, sslSender);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadExtensions(::System::IO::MemoryStream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ReadExtensions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(nullptr, ___internal_method, input);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadSupplementalDataMessage(::System::IO::MemoryStream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "ReadSupplementalDataMessage",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "WriteExtensions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, extensions);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSelectedExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions, bool selectEmpty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "WriteSelectedExtensions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, extensions, selectEmpty);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSupplementalData(::System::IO::Stream* output, ::System::Collections::IList* supplementalData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "WriteSupplementalData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, supplementalData);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetPrfAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t ciphersuite) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(), "GetPrfAlgorithm", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, context, ciphersuite);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol::TlsProtocol() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
