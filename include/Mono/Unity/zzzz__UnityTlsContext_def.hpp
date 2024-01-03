#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTlsContext)
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsConnectionInfo;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_errorstate;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_key;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_key_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509name;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509verify_result;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Exception;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsContext;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::UnityTlsContext);
// Type: Mono.Unity::UnityTlsContext
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8837)), TypeDefinitionIndex(TypeDefinitionIndex(3336))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8810))
// CS Name: ::Mono.Unity::UnityTlsContext*
class CORDL_TYPE UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext {
public:
  // Declarations
  /// @brief Field tlsContext, offset 0x58, size 0x8
  __declspec(property(get = __get_tlsContext, put = __set_tlsContext))::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> tlsContext;

  /// @brief Field requestedClientCertChain, offset 0x60, size 0x8
  __declspec(property(get = __get_requestedClientCertChain, put = __set_requestedClientCertChain))::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> requestedClientCertChain;

  /// @brief Field requestedClientKey, offset 0x68, size 0x8
  __declspec(property(get = __get_requestedClientKey, put = __set_requestedClientKey))::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> requestedClientKey;

  /// @brief Field readCallback, offset 0x70, size 0x8
  __declspec(property(get = __get_readCallback, put = __set_readCallback))::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* readCallback;

  /// @brief Field writeCallback, offset 0x78, size 0x8
  __declspec(property(get = __get_writeCallback, put = __set_writeCallback))::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* writeCallback;

  /// @brief Field certificateCallback, offset 0x80, size 0x8
  __declspec(property(get = __get_certificateCallback, put = __set_certificateCallback))::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* certificateCallback;

  /// @brief Field verifyCallback, offset 0x88, size 0x8
  __declspec(property(get = __get_verifyCallback, put = __set_verifyCallback))::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* verifyCallback;

  /// @brief Field localClientCertificate, offset 0x90, size 0x8
  __declspec(property(get = __get_localClientCertificate, put = __set_localClientCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate;

  /// @brief Field remoteCertificate, offset 0x98, size 0x8
  __declspec(property(get = __get_remoteCertificate, put = __set_remoteCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate2* remoteCertificate;

  /// @brief Field connectioninfo, offset 0xa0, size 0x8
  __declspec(property(get = __get_connectioninfo, put = __set_connectioninfo))::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo;

  /// @brief Field isAuthenticated, offset 0xa8, size 0x1
  __declspec(property(get = __get_isAuthenticated, put = __set_isAuthenticated)) bool isAuthenticated;

  /// @brief Field hasContext, offset 0xa9, size 0x1
  __declspec(property(get = __get_hasContext, put = __set_hasContext)) bool hasContext;

  /// @brief Field closedGraceful, offset 0xaa, size 0x1
  __declspec(property(get = __get_closedGraceful, put = __set_closedGraceful)) bool closedGraceful;

  /// @brief Field writeBuffer, offset 0xb0, size 0x8
  __declspec(property(get = __get_writeBuffer, put = __set_writeBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> writeBuffer;

  /// @brief Field readBuffer, offset 0xb8, size 0x8
  __declspec(property(get = __get_readBuffer, put = __set_readBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> readBuffer;

  /// @brief Field handle, offset 0xc0, size 0x8
  __declspec(property(get = __get_handle, put = __set_handle))::System::Runtime::InteropServices::GCHandle handle;

  /// @brief Field lastException, offset 0xc8, size 0x8
  __declspec(property(get = __get_lastException, put = __set_lastException))::System::Exception* lastException;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_LocalClientCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* LocalClientCertificate;

  __declspec(property(get = get_RemoteCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate2* RemoteCertificate;

  constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>& __get_tlsContext();

  constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> const& __get_tlsContext() const;

  constexpr void __set_tlsContext(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> value);

  constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>& __get_requestedClientCertChain();

  constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> const& __get_requestedClientCertChain() const;

  constexpr void __set_requestedClientCertChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> value);

  constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>& __get_requestedClientKey();

  constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> const& __get_requestedClientKey() const;

  constexpr void __set_requestedClientKey(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> value);

  constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*& __get_readCallback();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*> const& __get_readCallback() const;

  constexpr void __set_readCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* value);

  constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*& __get_writeCallback();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*> const& __get_writeCallback() const;

  constexpr void __set_writeCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* value);

  constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*& __get_certificateCallback();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*> const& __get_certificateCallback() const;

  constexpr void __set_certificateCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* value);

  constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*& __get_verifyCallback();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*> const& __get_verifyCallback() const;

  constexpr void __set_verifyCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __get_localClientCertificate();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __get_localClientCertificate() const;

  constexpr void __set_localClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __get_remoteCertificate();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> const& __get_remoteCertificate() const;

  constexpr void __set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* value);

  constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo*& __get_connectioninfo();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsConnectionInfo*> const& __get_connectioninfo() const;

  constexpr void __set_connectioninfo(::Mono::Security::Interface::MonoTlsConnectionInfo* value);

  constexpr bool& __get_isAuthenticated();

  constexpr bool const& __get_isAuthenticated() const;

  constexpr void __set_isAuthenticated(bool value);

  constexpr bool& __get_hasContext();

  constexpr bool const& __get_hasContext() const;

  constexpr void __set_hasContext(bool value);

  constexpr bool& __get_closedGraceful();

  constexpr bool const& __get_closedGraceful() const;

  constexpr void __set_closedGraceful(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_writeBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_writeBuffer() const;

  constexpr void __set_writeBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_readBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_readBuffer() const;

  constexpr void __set_readBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get_handle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get_handle() const;

  constexpr void __set_handle(::System::Runtime::InteropServices::GCHandle value);

  constexpr ::System::Exception*& __get_lastException();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_lastException() const;

  constexpr void __set_lastException(::System::Exception* value);

  static inline ::Mono::Unity::UnityTlsContext* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method .ctor, addr 0x281a03c, size 0x708, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method ExtractNativeKeyAndChainFromManagedCertificate, addr 0x281a8f4, size 0x340, virtual false, abstract: false, final false
  static inline void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState,
                                                                    ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>> nativeCertChain,
                                                                    ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>> nativeKey);

  /// @brief Method get_IsAuthenticated, addr 0x281ac34, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAuthenticated();

  /// @brief Method get_LocalClientCertificate, addr 0x281ac3c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();

  /// @brief Method get_RemoteCertificate, addr 0x281ac44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate();

  /// @brief Method Read, addr 0x281ac4c, size 0x1a8, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x281adf4, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Renegotiate, addr 0x281af94, size 0x40, virtual true, abstract: false, final false
  inline void Renegotiate();

  /// @brief Method PendingRenegotiation, addr 0x281afd4, size 0x8, virtual true, abstract: false, final false
  inline bool PendingRenegotiation();

  /// @brief Method Shutdown, addr 0x281afdc, size 0xf8, virtual true, abstract: false, final false
  inline void Shutdown();

  /// @brief Method Dispose, addr 0x281b0f0, size 0x78, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method StartHandshake, addr 0x281b168, size 0x180, virtual true, abstract: false, final false
  inline void StartHandshake();

  /// @brief Method ProcessHandshake, addr 0x281b2e8, size 0x174, virtual true, abstract: false, final false
  inline bool ProcessHandshake();

  /// @brief Method FinishHandshake, addr 0x281b4ac, size 0x128, virtual true, abstract: false, final false
  inline void FinishHandshake();

  /// @brief Method WriteCallback, addr 0x2819d34, size 0xc8, virtual false, abstract: false, final false
  static inline void* WriteCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, void* bufferLen,
                                    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method WriteCallback, addr 0x281b5f4, size 0x260, virtual false, abstract: false, final false
  inline void* WriteCallback(::cordl_internals::Ptr<uint8_t> data, void* bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method ReadCallback, addr 0x2819dfc, size 0xc8, virtual false, abstract: false, final false
  static inline void* ReadCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen,
                                   ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method ReadCallback, addr 0x281ba44, size 0x2f8, virtual false, abstract: false, final false
  inline void* ReadCallback(::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method VerifyCallback, addr 0x2819ec4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result VerifyCallback(::cordl_internals::Ptr<void> userData, ::Mono::Unity::__UnityTls__unitytls_x509list_ref chain,
                                                                                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method VerifyCallback, addr 0x281be48, size 0x408, virtual false, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result VerifyCallback(::Mono::Unity::__UnityTls__unitytls_x509list_ref chain,
                                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method CertificateCallback, addr 0x2819f74, size 0xc8, virtual false, abstract: false, final false
  static inline void CertificateCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn, void* cnLen,
                                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name> caList, void* caListLen,
                                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref> chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref> key,
                                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  /// @brief Method CertificateCallback, addr 0x281c2d8, size 0x2cc, virtual false, abstract: false, final false
  inline void CertificateCallback(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn, void* cnLen,
                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name> caList, void* caListLen,
                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref> chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref> key,
                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsContext(UnityTlsContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsContext(UnityTlsContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsContext();

public:
  /// @brief Field tlsContext, offset: 0x58, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ___tlsContext;

  /// @brief Field requestedClientCertChain, offset: 0x60, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> ___requestedClientCertChain;

  /// @brief Field requestedClientKey, offset: 0x68, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> ___requestedClientKey;

  /// @brief Field readCallback, offset: 0x70, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* ___readCallback;

  /// @brief Field writeCallback, offset: 0x78, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* ___writeCallback;

  /// @brief Field certificateCallback, offset: 0x80, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* ___certificateCallback;

  /// @brief Field verifyCallback, offset: 0x88, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* ___verifyCallback;

  /// @brief Field localClientCertificate, offset: 0x90, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ___localClientCertificate;

  /// @brief Field remoteCertificate, offset: 0x98, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2* ___remoteCertificate;

  /// @brief Field connectioninfo, offset: 0xa0, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsConnectionInfo* ___connectioninfo;

  /// @brief Field isAuthenticated, offset: 0xa8, size: 0x1, def value: None
  bool ___isAuthenticated;

  /// @brief Field hasContext, offset: 0xa9, size: 0x1, def value: None
  bool ___hasContext;

  /// @brief Field closedGraceful, offset: 0xaa, size: 0x1, def value: None
  bool ___closedGraceful;

  /// @brief Field writeBuffer, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___writeBuffer;

  /// @brief Field readBuffer, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___readBuffer;

  /// @brief Field handle, offset: 0xc0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___handle;

  /// @brief Field lastException, offset: 0xc8, size: 0x8, def value: None
  ::System::Exception* ___lastException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsContext, 0xd0>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___tlsContext) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___requestedClientCertChain) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___requestedClientKey) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___readCallback) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___writeCallback) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___certificateCallback) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___verifyCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___localClientCertificate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___remoteCertificate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___connectioninfo) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___isAuthenticated) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___hasContext) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___closedGraceful) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___writeBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___readBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___handle) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTlsContext, ___lastException) == 0xc8, "Offset mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsContext*, "Mono.Unity", "UnityTlsContext");
