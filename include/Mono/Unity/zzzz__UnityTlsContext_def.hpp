#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
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
struct UnityTls_unitytls_errorstate;
}
namespace Mono::Unity {
struct UnityTls_unitytls_key;
}
namespace Mono::Unity {
struct UnityTls_unitytls_key_ref;
}
namespace Mono::Unity {
struct UnityTls_unitytls_tlsctx;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509list;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509list_ref;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509name;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509verify_result;
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
struct IntPtr;
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
// Dependencies Mono.Net.Security.MobileTlsContext, System.Runtime.InteropServices.GCHandle
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTlsContext
class CORDL_TYPE UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext {
public:
  // Declarations
  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_LocalClientCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* LocalClientCertificate;

  __declspec(property(get = get_RemoteCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* RemoteCertificate;

  /// @brief Field certificateCallback, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateCallback,
                      put = __cordl_internal_set_certificateCallback)) ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback;

  /// @brief Field closedGraceful, offset 0xaa, size 0x1
  __declspec(property(get = __cordl_internal_get_closedGraceful, put = __cordl_internal_set_closedGraceful)) bool closedGraceful;

  /// @brief Field connectioninfo, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_connectioninfo, put = __cordl_internal_set_connectioninfo)) ::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo;

  /// @brief Field handle, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::Runtime::InteropServices::GCHandle handle;

  /// @brief Field hasContext, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get_hasContext, put = __cordl_internal_set_hasContext)) bool hasContext;

  /// @brief Field isAuthenticated, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_isAuthenticated, put = __cordl_internal_set_isAuthenticated)) bool isAuthenticated;

  /// @brief Field lastException, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_lastException, put = __cordl_internal_set_lastException)) ::System::Exception* lastException;

  /// @brief Field localClientCertificate, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_localClientCertificate,
                      put = __cordl_internal_set_localClientCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate;

  /// @brief Field readBuffer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_readBuffer, put = __cordl_internal_set_readBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> readBuffer;

  /// @brief Field readCallback, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_readCallback, put = __cordl_internal_set_readCallback)) ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback;

  /// @brief Field remoteCertificate, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_remoteCertificate,
                      put = __cordl_internal_set_remoteCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* remoteCertificate;

  /// @brief Field requestedClientCertChain, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedClientCertChain, put = __cordl_internal_set_requestedClientCertChain)) ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>
      requestedClientCertChain;

  /// @brief Field requestedClientKey, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedClientKey, put = __cordl_internal_set_requestedClientKey)) ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> requestedClientKey;

  /// @brief Field tlsContext, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsContext, put = __cordl_internal_set_tlsContext)) ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> tlsContext;

  /// @brief Field verifyCallback, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_verifyCallback, put = __cordl_internal_set_verifyCallback)) ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback;

  /// @brief Field writeBuffer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_writeBuffer, put = __cordl_internal_set_writeBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> writeBuffer;

  /// @brief Field writeCallback, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_writeCallback, put = __cordl_internal_set_writeCallback)) ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback;

  /// @brief Method CertificateCallback, addr 0x4109cc0, size 0x2c4, virtual false, abstract: false, final false
  inline void CertificateCallback(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen,
                                  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name> caList, ::System::IntPtr caListLen,
                                  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref> chain, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref> key,
                                  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method CertificateCallback, addr 0x4107974, size 0xc8, virtual false, abstract: false, final false
  static inline void CertificateCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn,
                                         ::System::IntPtr cnLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name> caList, ::System::IntPtr caListLen,
                                         ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref> chain, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref> key,
                                         ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method Dispose, addr 0x4108ad8, size 0x78, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExtractNativeKeyAndChainFromManagedCertificate, addr 0x41082b8, size 0x354, virtual false, abstract: false, final false
  static inline void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState,
                                                                    ::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>> nativeCertChain,
                                                                    ::ByRef<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>> nativeKey);

  /// @brief Method FinishHandshake, addr 0x4108e8c, size 0x124, virtual true, abstract: false, final false
  inline void FinishHandshake();

  static inline ::Mono::Unity::UnityTlsContext* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method PendingRenegotiation, addr 0x41089bc, size 0x8, virtual true, abstract: false, final false
  inline bool PendingRenegotiation();

  /// @brief Method ProcessHandshake, addr 0x4108cd0, size 0x16c, virtual true, abstract: false, final false
  inline bool ProcessHandshake();

  /// @brief Method Read, addr 0x4108624, size 0x1b4, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadCallback, addr 0x4109418, size 0x2f8, virtual false, abstract: false, final false
  inline ::System::IntPtr ReadCallback(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method ReadCallback, addr 0x41077fc, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::IntPtr ReadCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method Renegotiate, addr 0x4108984, size 0x38, virtual true, abstract: false, final false
  inline void Renegotiate();

  /// @brief Method Shutdown, addr 0x41089c4, size 0xf8, virtual true, abstract: false, final false
  inline void Shutdown();

  /// @brief Method StartHandshake, addr 0x4108b50, size 0x180, virtual true, abstract: false, final false
  inline void StartHandshake();

  /// @brief Method VerifyCallback, addr 0x410981c, size 0x424, virtual false, abstract: false, final false
  inline ::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                           ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method VerifyCallback, addr 0x41078c4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(::cordl_internals::Ptr<void> userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                                  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method Write, addr 0x41087d8, size 0x1ac, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteCallback, addr 0x4108fd0, size 0x260, virtual false, abstract: false, final false
  inline ::System::IntPtr WriteCallback(::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method WriteCallback, addr 0x4107734, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::IntPtr WriteCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* const& __cordl_internal_get_certificateCallback() const;

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*& __cordl_internal_get_certificateCallback();

  constexpr bool const& __cordl_internal_get_closedGraceful() const;

  constexpr bool& __cordl_internal_get_closedGraceful();

  constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo* const& __cordl_internal_get_connectioninfo() const;

  constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo*& __cordl_internal_get_connectioninfo();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_handle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_handle();

  constexpr bool const& __cordl_internal_get_hasContext() const;

  constexpr bool& __cordl_internal_get_hasContext();

  constexpr bool const& __cordl_internal_get_isAuthenticated() const;

  constexpr bool& __cordl_internal_get_isAuthenticated();

  constexpr ::System::Exception* const& __cordl_internal_get_lastException() const;

  constexpr ::System::Exception*& __cordl_internal_get_lastException();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_localClientCertificate() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_localClientCertificate();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_readBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_readBuffer();

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* const& __cordl_internal_get_readCallback() const;

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*& __cordl_internal_get_readCallback();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get_remoteCertificate() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get_remoteCertificate();

  constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> const& __cordl_internal_get_requestedClientCertChain() const;

  constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>& __cordl_internal_get_requestedClientCertChain();

  constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> const& __cordl_internal_get_requestedClientKey() const;

  constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>& __cordl_internal_get_requestedClientKey();

  constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> const& __cordl_internal_get_tlsContext() const;

  constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>& __cordl_internal_get_tlsContext();

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* const& __cordl_internal_get_verifyCallback() const;

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*& __cordl_internal_get_verifyCallback();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_writeBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_writeBuffer();

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* const& __cordl_internal_get_writeCallback() const;

  constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*& __cordl_internal_get_writeCallback();

  constexpr void __cordl_internal_set_certificateCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* value);

  constexpr void __cordl_internal_set_closedGraceful(bool value);

  constexpr void __cordl_internal_set_connectioninfo(::Mono::Security::Interface::MonoTlsConnectionInfo* value);

  constexpr void __cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set_hasContext(bool value);

  constexpr void __cordl_internal_set_isAuthenticated(bool value);

  constexpr void __cordl_internal_set_lastException(::System::Exception* value);

  constexpr void __cordl_internal_set_localClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set_readBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_readCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* value);

  constexpr void __cordl_internal_set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* value);

  constexpr void __cordl_internal_set_requestedClientCertChain(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> value);

  constexpr void __cordl_internal_set_requestedClientKey(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> value);

  constexpr void __cordl_internal_set_tlsContext(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> value);

  constexpr void __cordl_internal_set_verifyCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* value);

  constexpr void __cordl_internal_set_writeBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_writeCallback(::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* value);

  /// @brief Method .ctor, addr 0x4107a3c, size 0x6d0, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method get_IsAuthenticated, addr 0x410860c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAuthenticated();

  /// @brief Method get_LocalClientCertificate, addr 0x4108614, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();

  /// @brief Method get_RemoteCertificate, addr 0x410861c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsContext(UnityTlsContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsContext(UnityTlsContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9130 };

  /// @brief Field tlsContext, offset: 0x58, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ___tlsContext;

  /// @brief Field requestedClientCertChain, offset: 0x60, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> ___requestedClientCertChain;

  /// @brief Field requestedClientKey, offset: 0x68, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> ___requestedClientKey;

  /// @brief Field readCallback, offset: 0x70, size: 0x8, def value: None
  ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* ___readCallback;

  /// @brief Field writeCallback, offset: 0x78, size: 0x8, def value: None
  ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* ___writeCallback;

  /// @brief Field certificateCallback, offset: 0x80, size: 0x8, def value: None
  ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* ___certificateCallback;

  /// @brief Field verifyCallback, offset: 0x88, size: 0x8, def value: None
  ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* ___verifyCallback;

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

static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsContext, 0xd0>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsContext*, "Mono.Unity", "UnityTlsContext");
