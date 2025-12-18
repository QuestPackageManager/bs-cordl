#pragma once
// IWYU pragma private; include "System/Net/Security/SslClientAuthenticationOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SslClientAuthenticationOptions)
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
// Forward declare root types
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::SslClientAuthenticationOptions);
// Dependencies System.Net.Security.EncryptionPolicy, System.Object, System.Security.Authentication.SslProtocols, System.Security.Cryptography.X509Certificates.X509RevocationMode
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SslClientAuthenticationOptions
class CORDL_TYPE SslClientAuthenticationOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_CertificateRevocationCheckMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode CertificateRevocationCheckMode;

  __declspec(property(get = get_ClientCertificates, put = set_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(get = get_EnabledSslProtocols, put = set_EnabledSslProtocols)) ::System::Security::Authentication::SslProtocols EnabledSslProtocols;

  __declspec(property(put = set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(get = get_LocalCertificateSelectionCallback,
                      put = set_LocalCertificateSelectionCallback)) ::System::Net::Security::LocalCertificateSelectionCallback* LocalCertificateSelectionCallback;

  __declspec(property(get = get_RemoteCertificateValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback* RemoteCertificateValidationCallback;

  __declspec(property(get = get_TargetHost, put = set_TargetHost)) ::StringW TargetHost;

  /// @brief Field <ClientCertificates>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientCertificates_k__BackingField,
                      put =
                          __cordl_internal_set__ClientCertificates_k__BackingField)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _ClientCertificates_k__BackingField;

  /// @brief Field <LocalCertificateSelectionCallback>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField,
      put = __cordl_internal_set__LocalCertificateSelectionCallback_k__BackingField)) ::System::Net::Security::LocalCertificateSelectionCallback* _LocalCertificateSelectionCallback_k__BackingField;

  /// @brief Field <RemoteCertificateValidationCallback>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField,
                      put = __cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField)) ::System::Net::Security::RemoteCertificateValidationCallback*
      _RemoteCertificateValidationCallback_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetHost_k__BackingField, put = __cordl_internal_set__TargetHost_k__BackingField)) ::StringW _TargetHost_k__BackingField;

  /// @brief Field _allowRenegotiation, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__allowRenegotiation, put = __cordl_internal_set__allowRenegotiation)) bool _allowRenegotiation;

  /// @brief Field _checkCertificateRevocation, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__checkCertificateRevocation,
                      put = __cordl_internal_set__checkCertificateRevocation)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode _checkCertificateRevocation;

  /// @brief Field _enabledSslProtocols, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__enabledSslProtocols, put = __cordl_internal_set__enabledSslProtocols)) ::System::Security::Authentication::SslProtocols _enabledSslProtocols;

  /// @brief Field _encryptionPolicy, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__encryptionPolicy, put = __cordl_internal_set__encryptionPolicy)) ::System::Net::Security::EncryptionPolicy _encryptionPolicy;

  static inline ::System::Net::Security::SslClientAuthenticationOptions* New_ctor();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get__ClientCertificates_k__BackingField() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__ClientCertificates_k__BackingField();

  constexpr ::System::Net::Security::LocalCertificateSelectionCallback* const& __cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField() const;

  constexpr ::System::Net::Security::LocalCertificateSelectionCallback*& __cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField();

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() const;

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TargetHost_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TargetHost_k__BackingField();

  constexpr bool const& __cordl_internal_get__allowRenegotiation() const;

  constexpr bool& __cordl_internal_get__allowRenegotiation();

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& __cordl_internal_get__checkCertificateRevocation() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& __cordl_internal_get__checkCertificateRevocation();

  constexpr ::System::Security::Authentication::SslProtocols const& __cordl_internal_get__enabledSslProtocols() const;

  constexpr ::System::Security::Authentication::SslProtocols& __cordl_internal_get__enabledSslProtocols();

  constexpr ::System::Net::Security::EncryptionPolicy const& __cordl_internal_get__encryptionPolicy() const;

  constexpr ::System::Net::Security::EncryptionPolicy& __cordl_internal_get__encryptionPolicy();

  constexpr void __cordl_internal_set__ClientCertificates_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__LocalCertificateSelectionCallback_k__BackingField(::System::Net::Security::LocalCertificateSelectionCallback* value);

  constexpr void __cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField(::System::Net::Security::RemoteCertificateValidationCallback* value);

  constexpr void __cordl_internal_set__TargetHost_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__allowRenegotiation(bool value);

  constexpr void __cordl_internal_set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  constexpr void __cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  constexpr void __cordl_internal_set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method .ctor, addr 0x61bbb5c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientCertificates, addr 0x61bba14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_EnabledSslProtocols, addr 0x61bbb4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols();

  /// @brief Method get_LocalCertificateSelectionCallback, addr 0x61bb9ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Security::LocalCertificateSelectionCallback* get_LocalCertificateSelectionCallback();

  /// @brief Method get_RemoteCertificateValidationCallback, addr 0x61bb9fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Security::RemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();

  /// @brief Method get_TargetHost, addr 0x61bba04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetHost();

  /// @brief Method set_CertificateRevocationCheckMode, addr 0x61bba24, size 0x94, virtual false, abstract: false, final false
  inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method set_ClientCertificates, addr 0x61bba1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method set_EnabledSslProtocols, addr 0x61bbb54, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  /// @brief Method set_EncryptionPolicy, addr 0x61bbab8, size 0x94, virtual false, abstract: false, final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method set_LocalCertificateSelectionCallback, addr 0x61bb9f4, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalCertificateSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* value);

  /// @brief Method set_TargetHost, addr 0x61bba0c, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetHost(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SslClientAuthenticationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SslClientAuthenticationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SslClientAuthenticationOptions(SslClientAuthenticationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SslClientAuthenticationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SslClientAuthenticationOptions(SslClientAuthenticationOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11773 };

  /// @brief Field _encryptionPolicy, offset: 0x10, size: 0x4, def value: None
  ::System::Net::Security::EncryptionPolicy ____encryptionPolicy;

  /// @brief Field _checkCertificateRevocation, offset: 0x14, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509RevocationMode ____checkCertificateRevocation;

  /// @brief Field _enabledSslProtocols, offset: 0x18, size: 0x4, def value: None
  ::System::Security::Authentication::SslProtocols ____enabledSslProtocols;

  /// @brief Field _allowRenegotiation, offset: 0x1c, size: 0x1, def value: None
  bool ____allowRenegotiation;

  /// @brief Field <LocalCertificateSelectionCallback>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Security::LocalCertificateSelectionCallback* ____LocalCertificateSelectionCallback_k__BackingField;

  /// @brief Field <RemoteCertificateValidationCallback>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Security::RemoteCertificateValidationCallback* ____RemoteCertificateValidationCallback_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____TargetHost_k__BackingField;

  /// @brief Field <ClientCertificates>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ____ClientCertificates_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____encryptionPolicy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____checkCertificateRevocation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____enabledSslProtocols) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____allowRenegotiation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____LocalCertificateSelectionCallback_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____RemoteCertificateValidationCallback_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____TargetHost_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslClientAuthenticationOptions, ____ClientCertificates_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Security::SslClientAuthenticationOptions, 0x40>, "Size mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::SslClientAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslClientAuthenticationOptions*, "System.Net.Security", "SslClientAuthenticationOptions");
