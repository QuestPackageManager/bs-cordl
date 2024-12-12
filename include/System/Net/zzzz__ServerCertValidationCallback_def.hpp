#pragma once
// IWYU pragma private; include "System/Net/ServerCertValidationCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerCertValidationCallback)
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net {
class ServerCertValidationCallback_CallbackContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class ServerCertValidationCallback_CallbackContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServerCertValidationCallback);
MARK_REF_PTR_T(::System::Net::ServerCertValidationCallback_CallbackContext);
// Dependencies System.Net.Security.SslPolicyErrors, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServerCertValidationCallback/CallbackContext
class CORDL_TYPE ServerCertValidationCallback_CallbackContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;

  /// @brief Field chain, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_chain, put = __cordl_internal_set_chain)) ::System::Security::Cryptography::X509Certificates::X509Chain* chain;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::System::Object* request;

  /// @brief Field result, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) bool result;

  /// @brief Field sslPolicyErrors, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_sslPolicyErrors, put = __cordl_internal_set_sslPolicyErrors)) ::System::Net::Security::SslPolicyErrors sslPolicyErrors;

  static inline ::System::Net::ServerCertValidationCallback_CallbackContext* New_ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                                      ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                                      ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_certificate() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_certificate();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Chain* const& __cordl_internal_get_chain() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Chain*& __cordl_internal_get_chain();

  constexpr ::System::Object* const& __cordl_internal_get_request() const;

  constexpr ::System::Object*& __cordl_internal_get_request();

  constexpr bool const& __cordl_internal_get_result() const;

  constexpr bool& __cordl_internal_get_result();

  constexpr ::System::Net::Security::SslPolicyErrors const& __cordl_internal_get_sslPolicyErrors() const;

  constexpr ::System::Net::Security::SslPolicyErrors& __cordl_internal_get_sslPolicyErrors();

  constexpr void __cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set_chain(::System::Security::Cryptography::X509Certificates::X509Chain* value);

  constexpr void __cordl_internal_set_request(::System::Object* value);

  constexpr void __cordl_internal_set_result(bool value);

  constexpr void __cordl_internal_set_sslPolicyErrors(::System::Net::Security::SslPolicyErrors value);

  /// @brief Method .ctor, addr 0x44b954c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                    ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCertValidationCallback_CallbackContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback_CallbackContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCertValidationCallback_CallbackContext(ServerCertValidationCallback_CallbackContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback_CallbackContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCertValidationCallback_CallbackContext(ServerCertValidationCallback_CallbackContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9662 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___request;

  /// @brief Field certificate, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ___certificate;

  /// @brief Field chain, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Chain* ___chain;

  /// @brief Field sslPolicyErrors, offset: 0x28, size: 0x4, def value: None
  ::System::Net::Security::SslPolicyErrors ___sslPolicyErrors;

  /// @brief Field result, offset: 0x2c, size: 0x1, def value: None
  bool ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ServerCertValidationCallback_CallbackContext, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback_CallbackContext, ___certificate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback_CallbackContext, ___chain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback_CallbackContext, ___sslPolicyErrors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback_CallbackContext, ___result) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ServerCertValidationCallback_CallbackContext, 0x30>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServerCertValidationCallback
class CORDL_TYPE ServerCertValidationCallback : public ::System::Object {
public:
  // Declarations
  using CallbackContext = ::System::Net::ServerCertValidationCallback_CallbackContext;

  __declspec(property(get = get_ValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback* ValidationCallback;

  /// @brief Field m_Context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context)) ::System::Threading::ExecutionContext* m_Context;

  /// @brief Field m_ValidationCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValidationCallback,
                      put = __cordl_internal_set_m_ValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback;

  /// @brief Method Callback, addr 0x44b9334, size 0xac, virtual false, abstract: false, final false
  inline void Callback(::System::Object* state);

  /// @brief Method Invoke, addr 0x44b93e0, size 0x16c, virtual false, abstract: false, final false
  inline bool Invoke(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                     ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

  static inline ::System::Net::ServerCertValidationCallback* New_ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback);

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_m_Context() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_Context();

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& __cordl_internal_get_m_ValidationCallback() const;

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __cordl_internal_get_m_ValidationCallback();

  constexpr void __cordl_internal_set_m_Context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_ValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value);

  /// @brief Method .ctor, addr 0x44b92b4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback);

  /// @brief Method get_ValidationCallback, addr 0x44b932c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ValidationCallback();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCertValidationCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCertValidationCallback(ServerCertValidationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCertValidationCallback(ServerCertValidationCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9663 };

  /// @brief Field m_ValidationCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Security::RemoteCertificateValidationCallback* ___m_ValidationCallback;

  /// @brief Field m_Context, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_Context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ServerCertValidationCallback, ___m_ValidationCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback, ___m_Context) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ServerCertValidationCallback, 0x20>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ServerCertValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServerCertValidationCallback*, "System.Net", "ServerCertValidationCallback");
NEED_NO_BOX(::System::Net::ServerCertValidationCallback_CallbackContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServerCertValidationCallback_CallbackContext*, "System.Net", "ServerCertValidationCallback/CallbackContext");
