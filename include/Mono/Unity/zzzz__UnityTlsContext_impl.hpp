#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsContext.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsContext_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsConnectionInfo_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(
    ::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Unity::UnityTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x410c5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ExtractNativeKeyAndChainFromManagedCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>,
                         ::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>>, ::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>>)>(
        &::Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x410ce4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ExtractNativeKeyAndChainFromManagedCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410d1a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_LocalClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Unity::UnityTlsContext::*)()>(
    &::Mono::Unity::UnityTlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410d1a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_RemoteCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::Mono::Unity::UnityTlsContext::*)()>(
    &::Mono::Unity::UnityTlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410d1b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Unity::UnityTlsContext::Read)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x410d1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Unity::UnityTlsContext::Write)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x410d36c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Renegotiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x410d518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.PendingRenegotiation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410d550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Shutdown)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x410d558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(bool)>(&::Mono::Unity::UnityTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x410d66c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.StartHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x410d6e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ProcessHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x410d864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.FinishHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x410da20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x410c2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::UnityTlsContext::*)(
    ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x410db64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x410c390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::UnityTlsContext::*)(
    ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x410dfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (*)(
    ::cordl_internals::Ptr<void>, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x410c458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list_ref>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::UnityTlsContext::*)(
    ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x410e3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list_ref>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x410c508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>,
    ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x410e854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>& Mono::Unity::UnityTlsContext::__cordl_internal_get_tlsContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsContext;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_tlsContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsContext;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_tlsContext(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientCertChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientCertChain;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientCertChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientCertChain;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_requestedClientCertChain(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedClientCertChain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientKey;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientKey;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_requestedClientKey(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedClientKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*& Mono::Unity::UnityTlsContext::__cordl_internal_get_readCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readCallback;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_readCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_readCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*& Mono::Unity::UnityTlsContext::__cordl_internal_get_writeCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeCallback;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_writeCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_writeCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*& Mono::Unity::UnityTlsContext::__cordl_internal_get_certificateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateCallback;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_certificateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_certificateCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*& Mono::Unity::UnityTlsContext::__cordl_internal_get_verifyCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verifyCallback;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_verifyCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verifyCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_verifyCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___verifyCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& Mono::Unity::UnityTlsContext::__cordl_internal_get_localClientCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localClientCertificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_localClientCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localClientCertificate;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_localClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localClientCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& Mono::Unity::UnityTlsContext::__cordl_internal_get_remoteCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteCertificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_remoteCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteCertificate;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___remoteCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo*& Mono::Unity::UnityTlsContext::__cordl_internal_get_connectioninfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectioninfo;
}
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_connectioninfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectioninfo;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_connectioninfo(::Mono::Security::Interface::MonoTlsConnectionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectioninfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Unity::UnityTlsContext::__cordl_internal_get_isAuthenticated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAuthenticated;
}
constexpr bool const& Mono::Unity::UnityTlsContext::__cordl_internal_get_isAuthenticated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAuthenticated;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_isAuthenticated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAuthenticated = value;
}
constexpr bool& Mono::Unity::UnityTlsContext::__cordl_internal_get_hasContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasContext;
}
constexpr bool const& Mono::Unity::UnityTlsContext::__cordl_internal_get_hasContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasContext;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_hasContext(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasContext = value;
}
constexpr bool& Mono::Unity::UnityTlsContext::__cordl_internal_get_closedGraceful() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closedGraceful;
}
constexpr bool const& Mono::Unity::UnityTlsContext::__cordl_internal_get_closedGraceful() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closedGraceful;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_closedGraceful(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closedGraceful = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Unity::UnityTlsContext::__cordl_internal_get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_writeBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Unity::UnityTlsContext::__cordl_internal_get_readBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_readBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_readBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& Mono::Unity::UnityTlsContext::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Mono::Unity::UnityTlsContext::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handle = value;
}
constexpr ::System::Exception*& Mono::Unity::UnityTlsContext::__cordl_internal_get_lastException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastException;
}
constexpr ::System::Exception* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_lastException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastException;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_lastException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Unity::UnityTlsContext::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, options);
}
inline void Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                         ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState,
                                                                                         ::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>> nativeCertChain,
                                                                                         ::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>> nativeKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ExtractNativeKeyAndChainFromManagedCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert, errorState, nativeCertChain, nativeKey);
}
inline bool Mono::Unity::UnityTlsContext::get_IsAuthenticated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Unity::UnityTlsContext::get_LocalClientCertificate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Unity::UnityTlsContext::get_RemoteCertificate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Unity::UnityTlsContext::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Unity::UnityTlsContext::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, buffer, offset, count);
}
inline void Mono::Unity::UnityTlsContext::Renegotiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::PendingRenegotiation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Shutdown() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Mono::Unity::UnityTlsContext::StartHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::ProcessHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::FinishHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::WriteCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                                                    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, userData, data, bufferLen, errorState);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::WriteCallback(::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                                                    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, data, bufferLen, errorState);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::ReadCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                                                   ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, userData, buffer, bufferLen, errorState);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::ReadCallback(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                                                   ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::cordl_internals::Ptr<void> userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                                                       ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list_ref>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(nullptr, ___internal_method, userData, chain, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                                                       ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list_ref>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(this, ___internal_method, chain, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                              ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name> caList,
                                                              ::System::IntPtr caListLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref> chain,
                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref> key,
                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen,
                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name> caList, ::System::IntPtr caListLen,
                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref> chain,
                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref> key,
                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline ::Mono::Unity::UnityTlsContext* Mono::Unity::UnityTlsContext::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTlsContext*>(parent, options));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsContext::UnityTlsContext() {}
