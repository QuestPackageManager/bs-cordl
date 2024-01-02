#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListener)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class ServiceNameStore;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class IPAddress;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class HttpListenerPrefixCollection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpConnection;
}
namespace System {
class Object;
}
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
namespace System {
class IDisposable;
}
namespace System::Net {
class AuthenticationSchemeSelector;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace Mono::Security::Interface {
class MonoTlsProvider;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9056))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9171))
// CS Name: ::System.Net::HttpListener*
class CORDL_TYPE HttpListener : public ::System::Object {
public:
  // Declarations
  /// @brief Field tlsProvider, offset 0x10, size 0x8
  __declspec(property(get = __get_tlsProvider, put = __set_tlsProvider))::Mono::Security::Interface::MonoTlsProvider* tlsProvider;

  /// @brief Field tlsSettings, offset 0x18, size 0x8
  __declspec(property(get = __get_tlsSettings, put = __set_tlsSettings))::Mono::Security::Interface::MonoTlsSettings* tlsSettings;

  /// @brief Field certificate, offset 0x20, size 0x8
  __declspec(property(get = __get_certificate, put = __set_certificate))::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;

  /// @brief Field auth_schemes, offset 0x28, size 0x4
  __declspec(property(get = __get_auth_schemes, put = __set_auth_schemes))::System::Net::AuthenticationSchemes auth_schemes;

  /// @brief Field prefixes, offset 0x30, size 0x8
  __declspec(property(get = __get_prefixes, put = __set_prefixes))::System::Net::HttpListenerPrefixCollection* prefixes;

  /// @brief Field auth_selector, offset 0x38, size 0x8
  __declspec(property(get = __get_auth_selector, put = __set_auth_selector))::System::Net::AuthenticationSchemeSelector* auth_selector;

  /// @brief Field realm, offset 0x40, size 0x8
  __declspec(property(get = __get_realm, put = __set_realm))::StringW realm;

  /// @brief Field ignore_write_exceptions, offset 0x48, size 0x1
  __declspec(property(get = __get_ignore_write_exceptions, put = __set_ignore_write_exceptions)) bool ignore_write_exceptions;

  /// @brief Field listening, offset 0x49, size 0x1
  __declspec(property(get = __get_listening, put = __set_listening)) bool listening;

  /// @brief Field disposed, offset 0x4a, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field _internalLock, offset 0x50, size 0x8
  __declspec(property(get = __get__internalLock, put = __set__internalLock))::System::Object* _internalLock;

  /// @brief Field registry, offset 0x58, size 0x8
  __declspec(property(get = __get_registry, put = __set_registry))::System::Collections::Hashtable* registry;

  /// @brief Field ctx_queue, offset 0x60, size 0x8
  __declspec(property(get = __get_ctx_queue, put = __set_ctx_queue))::System::Collections::ArrayList* ctx_queue;

  /// @brief Field wait_queue, offset 0x68, size 0x8
  __declspec(property(get = __get_wait_queue, put = __set_wait_queue))::System::Collections::ArrayList* wait_queue;

  /// @brief Field connections, offset 0x70, size 0x8
  __declspec(property(get = __get_connections, put = __set_connections))::System::Collections::Hashtable* connections;

  /// @brief Field defaultServiceNames, offset 0x78, size 0x8
  __declspec(property(get = __get_defaultServiceNames, put = __set_defaultServiceNames))::System::Net::ServiceNameStore* defaultServiceNames;

  /// @brief Field extendedProtectionPolicy, offset 0x80, size 0x8
  __declspec(property(get = __get_extendedProtectionPolicy,
                      put = __set_extendedProtectionPolicy))::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy;

  __declspec(property(get = get_AuthenticationSchemes))::System::Net::AuthenticationSchemes AuthenticationSchemes;

  __declspec(property(get = get_AuthenticationSchemeSelectorDelegate))::System::Net::AuthenticationSchemeSelector* AuthenticationSchemeSelectorDelegate;

  __declspec(property(get = get_IgnoreWriteExceptions)) bool IgnoreWriteExceptions;

  __declspec(property(get = get_IsListening)) bool IsListening;

  __declspec(property(get = get_Prefixes))::System::Net::HttpListenerPrefixCollection* Prefixes;

  __declspec(property(get = get_Realm))::StringW Realm;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::Mono::Security::Interface::MonoTlsProvider*& __get_tlsProvider();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsProvider*> const& __get_tlsProvider() const;

  constexpr void __set_tlsProvider(::Mono::Security::Interface::MonoTlsProvider* value);

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __get_tlsSettings();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& __get_tlsSettings() const;

  constexpr void __set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __get_certificate() const;

  constexpr void __set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr ::System::Net::AuthenticationSchemes& __get_auth_schemes();

  constexpr ::System::Net::AuthenticationSchemes const& __get_auth_schemes() const;

  constexpr void __set_auth_schemes(::System::Net::AuthenticationSchemes value);

  constexpr ::System::Net::HttpListenerPrefixCollection*& __get_prefixes();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerPrefixCollection*> const& __get_prefixes() const;

  constexpr void __set_prefixes(::System::Net::HttpListenerPrefixCollection* value);

  constexpr ::System::Net::AuthenticationSchemeSelector*& __get_auth_selector();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::AuthenticationSchemeSelector*> const& __get_auth_selector() const;

  constexpr void __set_auth_selector(::System::Net::AuthenticationSchemeSelector* value);

  constexpr ::StringW& __get_realm();

  constexpr ::StringW const& __get_realm() const;

  constexpr void __set_realm(::StringW value);

  constexpr bool& __get_ignore_write_exceptions();

  constexpr bool const& __get_ignore_write_exceptions() const;

  constexpr void __set_ignore_write_exceptions(bool value);

  constexpr bool& __get_listening();

  constexpr bool const& __get_listening() const;

  constexpr void __set_listening(bool value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Object*& __get__internalLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__internalLock() const;

  constexpr void __set__internalLock(::System::Object* value);

  constexpr ::System::Collections::Hashtable*& __get_registry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_registry() const;

  constexpr void __set_registry(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::ArrayList*& __get_ctx_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_ctx_queue() const;

  constexpr void __set_ctx_queue(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __get_wait_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_wait_queue() const;

  constexpr void __set_wait_queue(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::Hashtable*& __get_connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_connections() const;

  constexpr void __set_connections(::System::Collections::Hashtable* value);

  constexpr ::System::Net::ServiceNameStore*& __get_defaultServiceNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServiceNameStore*> const& __get_defaultServiceNames() const;

  constexpr void __set_defaultServiceNames(::System::Net::ServiceNameStore* value);

  constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*& __get_extendedProtectionPolicy();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*> const& __get_extendedProtectionPolicy() const;

  constexpr void __set_extendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* value);

  /// @brief Method LoadCertificateAndKey, addr 0x29c09f8, size 0x40c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(::System::Net::IPAddress* addr, int32_t port);

  /// @brief Method CreateSslStream, addr 0x29c4ddc, size 0x190, virtual false, abstract: false, final false
  inline ::System::Net::Security::SslStream* CreateSslStream(::System::IO::Stream* innerStream, bool ownsStream, ::System::Net::Security::RemoteCertificateValidationCallback* callback);

  static inline ::System::Net::HttpListener* New_ctor();

  /// @brief Method .ctor, addr 0x29c7d20, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AuthenticationSchemes, addr 0x29c7f5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::AuthenticationSchemes get_AuthenticationSchemes();

  /// @brief Method get_AuthenticationSchemeSelectorDelegate, addr 0x29c7f64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate();

  /// @brief Method get_IgnoreWriteExceptions, addr 0x29c7f6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreWriteExceptions();

  /// @brief Method get_IsListening, addr 0x29c7f74, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsListening();

  /// @brief Method get_Prefixes, addr 0x29c3c48, size 0x18, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerPrefixCollection* get_Prefixes();

  /// @brief Method get_Realm, addr 0x29c7ffc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Realm();

  /// @brief Method Close, addr 0x29c8004, size 0x34, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Close, addr 0x29c8038, size 0x74, virtual false, abstract: false, final false
  inline void Close(bool force);

  /// @brief Method Cleanup, addr 0x29c80ac, size 0xa90, virtual false, abstract: false, final false
  inline void Cleanup(bool close_existing);

  /// @brief Method BeginGetContext, addr 0x29c8b3c, size 0x2b4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetContext(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndGetContext, addr 0x29c8eb4, size 0x2c8, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* EndGetContext(::System::IAsyncResult* asyncResult);

  /// @brief Method SelectAuthenticationScheme, addr 0x29c917c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::AuthenticationSchemes SelectAuthenticationScheme(::System::Net::HttpListenerContext* context);

  /// @brief Method GetContext, addr 0x29c92d4, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* GetContext();

  /// @brief Method Start, addr 0x29c9418, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x29c9488, size 0x20, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method System.IDisposable.Dispose, addr 0x29c94a8, size 0x30, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method CheckDisposed, addr 0x29c7f7c, size 0x80, virtual false, abstract: false, final false
  inline void CheckDisposed();

  /// @brief Method GetContextFromQueue, addr 0x29c8df0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* GetContextFromQueue();

  /// @brief Method RegisterContext, addr 0x29c6354, size 0x36c, virtual false, abstract: false, final false
  inline void RegisterContext(::System::Net::HttpListenerContext* context);

  /// @brief Method UnregisterContext, addr 0x29c1d80, size 0x1c8, virtual false, abstract: false, final false
  inline void UnregisterContext(::System::Net::HttpListenerContext* context);

  /// @brief Method AddConnection, addr 0x29c632c, size 0x28, virtual false, abstract: false, final false
  inline void AddConnection(::System::Net::HttpConnection* cnc);

  /// @brief Method RemoveConnection, addr 0x29c66c0, size 0x24, virtual false, abstract: false, final false
  inline void RemoveConnection(::System::Net::HttpConnection* cnc);

  // Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListener(HttpListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListener(HttpListener const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListener();

public:
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
