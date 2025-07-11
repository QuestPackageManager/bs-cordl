#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsClientProtocol.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2425270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(
    ::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2425290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24252a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsClient*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::Connect)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x24252c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.CleanupHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2425728;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242574c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_ContextAdmin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2425754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.get_Peer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Peer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242575c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.HandleHandshakeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x2425764;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.HandleSupplementalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleSupplementalData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2426a04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.ReceiveNewSessionTicketMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveNewSessionTicketMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2426bb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.ReceiveServerHelloMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveServerHelloMessage)> {
  constexpr static std::size_t size = 0xea4;
  constexpr static std::size_t addrs = 0x2426c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2427b18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendClientHelloMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientHelloMessage)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x2427ba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol.SendClientKeyExchangeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientKeyExchangeMessage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x242823c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 57));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsClientContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mSelectedSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSelectedSessionID;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_get_mSelectedSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSelectedSessionID;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::__cordl_internal_set_mSelectedSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSelectedSessionID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mKeyExchange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mAuthentication)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCertificateStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCertificateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* tlsClient) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tlsClient);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::CleanupHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Context() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_ContextAdmin() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::get_Peer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::HandleSupplementalData(::System::Collections::IList* serverSupplementalData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverSupplementalData);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveNewSessionTicketMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::ReceiveServerHelloMessage(::System::IO::MemoryStream* buf) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateVerify);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientHelloMessage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::SendClientKeyExchangeMessage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::System::IO::Stream* stream,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(stream, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(input, output, secureRandom));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*>(secureRandom));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol::TlsClientProtocol() {}
