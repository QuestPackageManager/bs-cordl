#pragma once
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
class __ServerCertValidationCallback__CallbackContext;
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
class __ServerCertValidationCallback__CallbackContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServerCertValidationCallback);
MARK_REF_PTR_T(::System::Net::__ServerCertValidationCallback__CallbackContext);
// Type: ::CallbackContext
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::ServerCertValidationCallback::CallbackContext*
class CORDL_TYPE __ServerCertValidationCallback__CallbackContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate))::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;

  /// @brief Field chain, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_chain, put = __cordl_internal_set_chain))::System::Security::Cryptography::X509Certificates::X509Chain* chain;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::System::Object* request;

  /// @brief Field result, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) bool result;

  /// @brief Field sslPolicyErrors, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_sslPolicyErrors, put = __cordl_internal_set_sslPolicyErrors))::System::Net::Security::SslPolicyErrors sslPolicyErrors;

  static inline ::System::Net::__ServerCertValidationCallback__CallbackContext* New_ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                                         ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                                         ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __cordl_internal_get_certificate() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Chain*& __cordl_internal_get_chain();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Chain*> const& __cordl_internal_get_chain() const;

  constexpr ::System::Object*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_request() const;

  constexpr bool const& __cordl_internal_get_result() const;

  constexpr bool& __cordl_internal_get_result();

  constexpr ::System::Net::Security::SslPolicyErrors const& __cordl_internal_get_sslPolicyErrors() const;

  constexpr ::System::Net::Security::SslPolicyErrors& __cordl_internal_get_sslPolicyErrors();

  constexpr void __cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set_chain(::System::Security::Cryptography::X509Certificates::X509Chain* value);

  constexpr void __cordl_internal_set_request(::System::Object* value);

  constexpr void __cordl_internal_set_result(bool value);

  constexpr void __cordl_internal_set_sslPolicyErrors(::System::Net::Security::SslPolicyErrors value);

  /// @brief Method .ctor, addr 0x2ff0c30, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                    ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServerCertValidationCallback__CallbackContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ServerCertValidationCallback__CallbackContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ServerCertValidationCallback__CallbackContext(__ServerCertValidationCallback__CallbackContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ServerCertValidationCallback__CallbackContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ServerCertValidationCallback__CallbackContext(__ServerCertValidationCallback__CallbackContext const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Net::__ServerCertValidationCallback__CallbackContext, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ServerCertValidationCallback__CallbackContext, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServerCertValidationCallback__CallbackContext, ___certificate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServerCertValidationCallback__CallbackContext, ___chain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServerCertValidationCallback__CallbackContext, ___sslPolicyErrors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServerCertValidationCallback__CallbackContext, ___result) == 0x2c, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::ServerCertValidationCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ServerCertValidationCallback*
class CORDL_TYPE ServerCertValidationCallback : public ::System::Object {
public:
  // Declarations
  using CallbackContext = ::System::Net::__ServerCertValidationCallback__CallbackContext;

  __declspec(property(get = get_ValidationCallback))::System::Net::Security::RemoteCertificateValidationCallback* ValidationCallback;

  /// @brief Field m_Context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context))::System::Threading::ExecutionContext* m_Context;

  /// @brief Field m_ValidationCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValidationCallback,
                      put = __cordl_internal_set_m_ValidationCallback))::System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback;

  /// @brief Method Callback, addr 0x2ff0a1c, size 0xac, virtual false, abstract: false, final false
  inline void Callback(::System::Object* state);

  /// @brief Method Invoke, addr 0x2ff0ac8, size 0x168, virtual false, abstract: false, final false
  inline bool Invoke(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                     ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

  static inline ::System::Net::ServerCertValidationCallback* New_ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback);

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_Context();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get_m_Context() const;

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __cordl_internal_get_m_ValidationCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const& __cordl_internal_get_m_ValidationCallback() const;

  constexpr void __cordl_internal_set_m_Context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_ValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value);

  /// @brief Method .ctor, addr 0x2ff099c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback);

  /// @brief Method get_ValidationCallback, addr 0x2ff0a14, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_ValidationCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Security::RemoteCertificateValidationCallback* ___m_ValidationCallback;

  /// @brief Field m_Context, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_Context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServerCertValidationCallback, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback, ___m_ValidationCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServerCertValidationCallback, ___m_Context) == 0x18, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ServerCertValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServerCertValidationCallback*, "System.Net", "ServerCertValidationCallback");
NEED_NO_BOX(::System::Net::__ServerCertValidationCallback__CallbackContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServerCertValidationCallback__CallbackContext*, "System.Net", "ServerCertValidationCallback/CallbackContext");
