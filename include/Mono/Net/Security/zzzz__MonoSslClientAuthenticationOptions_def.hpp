#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoSslClientAuthenticationOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoSslClientAuthenticationOptions)
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslClientAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoSslClientAuthenticationOptions);
// Dependencies Mono.Net.Security.MonoSslAuthenticationOptions
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MonoSslClientAuthenticationOptions
class CORDL_TYPE MonoSslClientAuthenticationOptions : public ::Mono::Net::Security::MonoSslAuthenticationOptions {
public:
  // Declarations
  __declspec(property(put = set_CertificateRevocationCheckMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode CertificateRevocationCheckMode;

  __declspec(property(get = get_ClientCertificateRequired, put = set_ClientCertificateRequired)) bool ClientCertificateRequired;

  __declspec(property(get = get_ClientCertificates, put = set_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(get = get_EnabledSslProtocols, put = set_EnabledSslProtocols)) ::System::Security::Authentication::SslProtocols EnabledSslProtocols;

  __declspec(property(put = set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(get = get_Options)) ::System::Net::Security::SslClientAuthenticationOptions* Options;

  __declspec(property(get = get_ServerCertificate, put = set_ServerCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* ServerCertificate;

  __declspec(property(get = get_ServerMode)) bool ServerMode;

  __declspec(property(get = get_TargetHost, put = set_TargetHost)) ::StringW TargetHost;

  /// @brief Field <Options>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField)) ::System::Net::Security::SslClientAuthenticationOptions* _Options_k__BackingField;

  static inline ::Mono::Net::Security::MonoSslClientAuthenticationOptions* New_ctor();

  constexpr ::System::Net::Security::SslClientAuthenticationOptions* const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::System::Net::Security::SslClientAuthenticationOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr void __cordl_internal_set__Options_k__BackingField(::System::Net::Security::SslClientAuthenticationOptions* value);

  /// @brief Method .ctor, addr 0x4113928, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientCertificateRequired, addr 0x411683c, size 0x38, virtual true, abstract: false, final false
  inline bool get_ClientCertificateRequired();

  /// @brief Method get_ClientCertificates, addr 0x41168ac, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_EnabledSslProtocols, addr 0x41167cc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols();

  /// @brief Method get_Options, addr 0x4116784, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Security::SslClientAuthenticationOptions* get_Options();

  /// @brief Method get_ServerCertificate, addr 0x41168e4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate();

  /// @brief Method get_ServerMode, addr 0x411678c, size 0x8, virtual true, abstract: false, final false
  inline bool get_ServerMode();

  /// @brief Method get_TargetHost, addr 0x4116804, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_TargetHost();

  /// @brief Method set_CertificateRevocationCheckMode, addr 0x4116794, size 0x1c, virtual true, abstract: false, final false
  inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method set_ClientCertificateRequired, addr 0x4116874, size 0x38, virtual true, abstract: false, final false
  inline void set_ClientCertificateRequired(bool value);

  /// @brief Method set_ClientCertificates, addr 0x41168c8, size 0x1c, virtual true, abstract: false, final false
  inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method set_EnabledSslProtocols, addr 0x41167e8, size 0x1c, virtual true, abstract: false, final false
  inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  /// @brief Method set_EncryptionPolicy, addr 0x41167b0, size 0x1c, virtual true, abstract: false, final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method set_ServerCertificate, addr 0x411691c, size 0x38, virtual true, abstract: false, final false
  inline void set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  /// @brief Method set_TargetHost, addr 0x4116820, size 0x1c, virtual true, abstract: false, final false
  inline void set_TargetHost(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoSslClientAuthenticationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoSslClientAuthenticationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoSslClientAuthenticationOptions(MonoSslClientAuthenticationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoSslClientAuthenticationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoSslClientAuthenticationOptions(MonoSslClientAuthenticationOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9160 };

  /// @brief Field <Options>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Security::SslClientAuthenticationOptions* ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MonoSslClientAuthenticationOptions, ____Options_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoSslClientAuthenticationOptions, 0x20>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoSslClientAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoSslClientAuthenticationOptions*, "Mono.Net.Security", "MonoSslClientAuthenticationOptions");
