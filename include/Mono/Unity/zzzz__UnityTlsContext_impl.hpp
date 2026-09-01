#pragma once
// IWYU pragma private; include "Mono\Unity\UnityTlsContext.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(::Mono::Net::Security::MobileAuthenticatedStream*,
                                                                                                ::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Unity::UnityTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x5fd2b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ExtractNativeKeyAndChainFromManagedCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*,
                                                                ::by_ref<::Mono::Unity::UnityTls_unitytls_x509list*>, ::by_ref<::Mono::Unity::UnityTls_unitytls_key*>)>(
    &::Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5fd338c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                         { "ExtractNativeKeyAndChainFromManagedCertificate",
                                           {},
                                           { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>(),
                                             ::i2c::type_of<::by_ref<::Mono::Unity::UnityTls_unitytls_x509list*>>(), ::i2c::type_of<::by_ref<::Mono::Unity::UnityTls_unitytls_key*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd36a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_LocalClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Unity::UnityTlsContext::*)()>(
    &::Mono::Unity::UnityTlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd36b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_RemoteCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::Mono::Unity::UnityTlsContext::*)()>(
    &::Mono::Unity::UnityTlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd36b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Unity::UnityTlsContext::Read)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5fd36c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Unity::UnityTlsContext::Write)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5fd382c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Renegotiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd3990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.PendingRenegotiation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd39c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Shutdown)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fd39d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(bool)>(&::Mono::Unity::UnityTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fd3ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.StartHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5fd3b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ProcessHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fd3cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.FinishHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fd3e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(void*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
    &::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fd2740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
            { "WriteCallback", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::UnityTlsContext::*)(uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
    &::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5fd3fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                         { "WriteCallback", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(void*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
    &::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fd2850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
            { "ReadCallback", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::UnityTlsContext::*)(uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
    &::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5fd4380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                         { "ReadCallback", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (*)(
    void*, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fd2960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
            { "VerifyCallback", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::UnityTlsContext::*)(
    ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5fd4734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                            { "VerifyCallback", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*,
                                                                ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*,
                                                                ::Mono::Unity::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fd2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                            { "CertificateCallback",
                              {},
                              { ::i2c::type_of<void*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_tlsctx*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(),
                                ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509name*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref*>(),
                                ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_key_ref*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(
    ::Mono::Unity::UnityTls_unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*,
    ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5fd4b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                            { "CertificateCallback",
                              {},
                              { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_tlsctx*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(),
                                ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509name*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref*>(),
                                ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_key_ref*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx*& Mono::Unity::UnityTlsContext::__cordl_internal_get_tlsContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsContext;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_tlsContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsContext;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_tlsContext(::Mono::Unity::UnityTls_unitytls_tlsctx* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tlsContext = value;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list*& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientCertChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientCertChain;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientCertChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientCertChain;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_requestedClientCertChain(::Mono::Unity::UnityTls_unitytls_x509list* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestedClientCertChain = value;
}
constexpr ::Mono::Unity::UnityTls_unitytls_key*& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientKey;
}
constexpr ::Mono::Unity::UnityTls_unitytls_key* const& Mono::Unity::UnityTlsContext::__cordl_internal_get_requestedClientKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedClientKey;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_requestedClientKey(::Mono::Unity::UnityTls_unitytls_key* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestedClientKey = value;
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
  this->___readCallback = value;
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
  this->___writeCallback = value;
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
  this->___certificateCallback = value;
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
  this->___verifyCallback = value;
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
  this->___localClientCertificate = value;
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
  this->___remoteCertificate = value;
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
  this->___connectioninfo = value;
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
constexpr ::ArrayW<uint8_t>& Mono::Unity::UnityTlsContext::__cordl_internal_get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr ::ArrayW<uint8_t> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_writeBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeBuffer = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Unity::UnityTlsContext::__cordl_internal_get_readBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr ::ArrayW<uint8_t> const& Mono::Unity::UnityTlsContext::__cordl_internal_get_readBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr void Mono::Unity::UnityTlsContext::__cordl_internal_set_readBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readBuffer = value;
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
  this->___lastException = value;
}
inline void Mono::Unity::UnityTlsContext::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, options);
}
inline void Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                         ::Mono::Unity::UnityTls_unitytls_errorstate* errorState,
                                                                                         ::by_ref<::Mono::Unity::UnityTls_unitytls_x509list*> nativeCertChain,
                                                                                         ::by_ref<::Mono::Unity::UnityTls_unitytls_key*> nativeKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                       { "ExtractNativeKeyAndChainFromManagedCertificate",
                                         {},
                                         { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>(),
                                           ::i2c::type_of<::by_ref<::Mono::Unity::UnityTls_unitytls_x509list*>>(), ::i2c::type_of<::by_ref<::Mono::Unity::UnityTls_unitytls_key*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cert, errorState, nativeCertChain, nativeKey);
}
inline bool Mono::Unity::UnityTlsContext::get_IsAuthenticated() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Unity::UnityTlsContext::get_LocalClientCertificate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Unity::UnityTlsContext::get_RemoteCertificate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Unity::UnityTlsContext::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>>(this, ___internal_method, buffer, offset, count);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Unity::UnityTlsContext::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>>(this, ___internal_method, buffer, offset, count);
}
inline void Mono::Unity::UnityTlsContext::Renegotiate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::PendingRenegotiation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Shutdown() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Mono::Unity::UnityTlsContext::StartHandshake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::ProcessHandshake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::FinishHandshake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::WriteCallback(void* userData, uint8_t* data, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
          { "WriteCallback", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, userData, data, bufferLen, errorState);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::WriteCallback(uint8_t* data, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                       { "WriteCallback", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, data, bufferLen, errorState);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::ReadCallback(void* userData, uint8_t* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
          { "ReadCallback", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, userData, buffer, bufferLen, errorState);
}
inline ::System::IntPtr Mono::Unity::UnityTlsContext::ReadCallback(uint8_t* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                       { "ReadCallback", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(void* userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                                                       ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
          { "VerifyCallback", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result>(nullptr, ___internal_method, userData, chain, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                                                       ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                                       { "VerifyCallback", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result>(this, ___internal_method, chain, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, ::System::IntPtr cnLen,
                                                              ::Mono::Unity::UnityTls_unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls_unitytls_x509list_ref* chain,
                                                              ::Mono::Unity::UnityTls_unitytls_key_ref* key, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                          { "CertificateCallback",
                            {},
                            { ::i2c::type_of<void*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_tlsctx*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(),
                              ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509name*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref*>(),
                              ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_key_ref*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509name* caList,
                                                              ::System::IntPtr caListLen, ::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls_unitytls_key_ref* key,
                                                              ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsContext*>(),
                          { "CertificateCallback",
                            {},
                            { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_tlsctx*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(),
                              ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509name*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref*>(),
                              ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_key_ref*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline ::Mono::Unity::UnityTlsContext* Mono::Unity::UnityTlsContext::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTlsContext*>(parent, options));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsContext::UnityTlsContext() {}
