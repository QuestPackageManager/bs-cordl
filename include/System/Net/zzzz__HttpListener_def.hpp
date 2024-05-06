#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListener)
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
class AuthenticationSchemeSelector;
}
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpListenerPrefixCollection;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class ServiceNameStore;
}
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class HttpListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListener);
// Type: System.Net::HttpListener
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::HttpListener*
class CORDL_TYPE HttpListener : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationSchemeSelectorDelegate))::System::Net::AuthenticationSchemeSelector* AuthenticationSchemeSelectorDelegate;

  __declspec(property(get = get_AuthenticationSchemes))::System::Net::AuthenticationSchemes AuthenticationSchemes;

  __declspec(property(get = get_IgnoreWriteExceptions)) bool IgnoreWriteExceptions;

  __declspec(property(get = get_IsListening)) bool IsListening;

  __declspec(property(get = get_Prefixes))::System::Net::HttpListenerPrefixCollection* Prefixes;

  __declspec(property(get = get_Realm))::StringW Realm;

  /// @brief Field _internalLock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__internalLock, put = __cordl_internal_set__internalLock))::System::Object* _internalLock;

  /// @brief Field auth_schemes, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_auth_schemes, put = __cordl_internal_set_auth_schemes))::System::Net::AuthenticationSchemes auth_schemes;

  /// @brief Field auth_selector, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_auth_selector, put = __cordl_internal_set_auth_selector))::System::Net::AuthenticationSchemeSelector* auth_selector;

  /// @brief Field certificate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate))::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;

  /// @brief Field connections, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_connections, put = __cordl_internal_set_connections))::System::Collections::Hashtable* connections;

  /// @brief Field ctx_queue, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx_queue, put = __cordl_internal_set_ctx_queue))::System::Collections::ArrayList* ctx_queue;

  /// @brief Field defaultServiceNames, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultServiceNames, put = __cordl_internal_set_defaultServiceNames))::System::Net::ServiceNameStore* defaultServiceNames;

  /// @brief Field disposed, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field extendedProtectionPolicy, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_extendedProtectionPolicy,
                      put = __cordl_internal_set_extendedProtectionPolicy))::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy;

  /// @brief Field ignore_write_exceptions, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_ignore_write_exceptions, put = __cordl_internal_set_ignore_write_exceptions)) bool ignore_write_exceptions;

  /// @brief Field listening, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_listening, put = __cordl_internal_set_listening)) bool listening;

  /// @brief Field prefixes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_prefixes, put = __cordl_internal_set_prefixes))::System::Net::HttpListenerPrefixCollection* prefixes;

  /// @brief Field realm, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_realm, put = __cordl_internal_set_realm))::StringW realm;

  /// @brief Field registry, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_registry, put = __cordl_internal_set_registry))::System::Collections::Hashtable* registry;

  /// @brief Field tlsProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsProvider, put = __cordl_internal_set_tlsProvider))::Mono::Security::Interface::MonoTlsProvider* tlsProvider;

  /// @brief Field tlsSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsSettings, put = __cordl_internal_set_tlsSettings))::Mono::Security::Interface::MonoTlsSettings* tlsSettings;

  /// @brief Field wait_queue, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_wait_queue, put = __cordl_internal_set_wait_queue))::System::Collections::ArrayList* wait_queue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddConnection, addr 0x2ffc488, size 0x28, virtual false, abstract: false, final false
  inline void AddConnection(::System::Net::HttpConnection* cnc);

  /// @brief Method BeginGetContext, addr 0x2ffec98, size 0x2b4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetContext(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method CheckDisposed, addr 0x2ffe0d8, size 0x80, virtual false, abstract: false, final false
  inline void CheckDisposed();

  /// @brief Method Cleanup, addr 0x2ffe208, size 0xa90, virtual false, abstract: false, final false
  inline void Cleanup(bool close_existing);

  /// @brief Method Close, addr 0x2ffe160, size 0x34, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Close, addr 0x2ffe194, size 0x74, virtual false, abstract: false, final false
  inline void Close(bool force);

  /// @brief Method CreateSslStream, addr 0x2ffaf38, size 0x190, virtual false, abstract: false, final false
  inline ::System::Net::Security::SslStream* CreateSslStream(::System::IO::Stream* innerStream, bool ownsStream, ::System::Net::Security::RemoteCertificateValidationCallback* callback);

  /// @brief Method EndGetContext, addr 0x2fff010, size 0x2c8, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* EndGetContext(::System::IAsyncResult* asyncResult);

  /// @brief Method GetContext, addr 0x2fff430, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* GetContext();

  /// @brief Method GetContextFromQueue, addr 0x2ffef4c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* GetContextFromQueue();

  /// @brief Method LoadCertificateAndKey, addr 0x2ff6b54, size 0x40c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(::System::Net::IPAddress* addr, int32_t port);

  static inline ::System::Net::HttpListener* New_ctor();

  /// @brief Method RegisterContext, addr 0x2ffc4b0, size 0x36c, virtual false, abstract: false, final false
  inline void RegisterContext(::System::Net::HttpListenerContext* context);

  /// @brief Method RemoveConnection, addr 0x2ffc81c, size 0x24, virtual false, abstract: false, final false
  inline void RemoveConnection(::System::Net::HttpConnection* cnc);

  /// @brief Method SelectAuthenticationScheme, addr 0x2fff2d8, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::AuthenticationSchemes SelectAuthenticationScheme(::System::Net::HttpListenerContext* context);

  /// @brief Method Start, addr 0x2fff574, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x2fff5e4, size 0x20, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method System.IDisposable.Dispose, addr 0x2fff604, size 0x30, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method UnregisterContext, addr 0x2ff7edc, size 0x1c8, virtual false, abstract: false, final false
  inline void UnregisterContext(::System::Net::HttpListenerContext* context);

  constexpr ::System::Object*& __cordl_internal_get__internalLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__internalLock() const;

  constexpr ::System::Net::AuthenticationSchemes const& __cordl_internal_get_auth_schemes() const;

  constexpr ::System::Net::AuthenticationSchemes& __cordl_internal_get_auth_schemes();

  constexpr ::System::Net::AuthenticationSchemeSelector*& __cordl_internal_get_auth_selector();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::AuthenticationSchemeSelector*> const& __cordl_internal_get_auth_selector() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __cordl_internal_get_certificate() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_connections() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_ctx_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_ctx_queue() const;

  constexpr ::System::Net::ServiceNameStore*& __cordl_internal_get_defaultServiceNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServiceNameStore*> const& __cordl_internal_get_defaultServiceNames() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*& __cordl_internal_get_extendedProtectionPolicy();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*> const& __cordl_internal_get_extendedProtectionPolicy() const;

  constexpr bool const& __cordl_internal_get_ignore_write_exceptions() const;

  constexpr bool& __cordl_internal_get_ignore_write_exceptions();

  constexpr bool const& __cordl_internal_get_listening() const;

  constexpr bool& __cordl_internal_get_listening();

  constexpr ::System::Net::HttpListenerPrefixCollection*& __cordl_internal_get_prefixes();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerPrefixCollection*> const& __cordl_internal_get_prefixes() const;

  constexpr ::StringW const& __cordl_internal_get_realm() const;

  constexpr ::StringW& __cordl_internal_get_realm();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_registry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_registry() const;

  constexpr ::Mono::Security::Interface::MonoTlsProvider*& __cordl_internal_get_tlsProvider();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsProvider*> const& __cordl_internal_get_tlsProvider() const;

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_tlsSettings();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& __cordl_internal_get_tlsSettings() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_wait_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_wait_queue() const;

  constexpr void __cordl_internal_set__internalLock(::System::Object* value);

  constexpr void __cordl_internal_set_auth_schemes(::System::Net::AuthenticationSchemes value);

  constexpr void __cordl_internal_set_auth_selector(::System::Net::AuthenticationSchemeSelector* value);

  constexpr void __cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set_connections(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_ctx_queue(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_defaultServiceNames(::System::Net::ServiceNameStore* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_extendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* value);

  constexpr void __cordl_internal_set_ignore_write_exceptions(bool value);

  constexpr void __cordl_internal_set_listening(bool value);

  constexpr void __cordl_internal_set_prefixes(::System::Net::HttpListenerPrefixCollection* value);

  constexpr void __cordl_internal_set_realm(::StringW value);

  constexpr void __cordl_internal_set_registry(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_tlsProvider(::Mono::Security::Interface::MonoTlsProvider* value);

  constexpr void __cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr void __cordl_internal_set_wait_queue(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x2ffde7c, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AuthenticationSchemeSelectorDelegate, addr 0x2ffe0c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate();

  /// @brief Method get_AuthenticationSchemes, addr 0x2ffe0b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::AuthenticationSchemes get_AuthenticationSchemes();

  /// @brief Method get_IgnoreWriteExceptions, addr 0x2ffe0c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreWriteExceptions();

  /// @brief Method get_IsListening, addr 0x2ffe0d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsListening();

  /// @brief Method get_Prefixes, addr 0x2ff9da4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerPrefixCollection* get_Prefixes();

  /// @brief Method get_Realm, addr 0x2ffe158, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Realm();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListener(HttpListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListener(HttpListener const&) = delete;

  /// @brief Field tlsProvider, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsProvider* ___tlsProvider;

  /// @brief Field tlsSettings, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ___tlsSettings;

  /// @brief Field certificate, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ___certificate;

  /// @brief Field auth_schemes, offset: 0x28, size: 0x4, def value: None
  ::System::Net::AuthenticationSchemes ___auth_schemes;

  /// @brief Field prefixes, offset: 0x30, size: 0x8, def value: None
  ::System::Net::HttpListenerPrefixCollection* ___prefixes;

  /// @brief Field auth_selector, offset: 0x38, size: 0x8, def value: None
  ::System::Net::AuthenticationSchemeSelector* ___auth_selector;

  /// @brief Field realm, offset: 0x40, size: 0x8, def value: None
  ::StringW ___realm;

  /// @brief Field ignore_write_exceptions, offset: 0x48, size: 0x1, def value: None
  bool ___ignore_write_exceptions;

  /// @brief Field listening, offset: 0x49, size: 0x1, def value: None
  bool ___listening;

  /// @brief Field disposed, offset: 0x4a, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field _internalLock, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ____internalLock;

  /// @brief Field registry, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___registry;

  /// @brief Field ctx_queue, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___ctx_queue;

  /// @brief Field wait_queue, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___wait_queue;

  /// @brief Field connections, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___connections;

  /// @brief Field defaultServiceNames, offset: 0x78, size: 0x8, def value: None
  ::System::Net::ServiceNameStore* ___defaultServiceNames;

  /// @brief Field extendedProtectionPolicy, offset: 0x80, size: 0x8, def value: None
  ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* ___extendedProtectionPolicy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListener, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___tlsProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___tlsSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___certificate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___auth_schemes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___prefixes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___auth_selector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___realm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___ignore_write_exceptions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___listening) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___disposed) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ____internalLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___registry) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___ctx_queue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___wait_queue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___connections) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___defaultServiceNames) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___extendedProtectionPolicy) == 0x80, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListener*, "System.Net", "HttpListener");
