#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoSslServerAuthenticationOptions)
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Net::Security {
class SslServerAuthenticationOptions;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslServerAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoSslServerAuthenticationOptions);
// Type: Mono.Net.Security::MonoSslServerAuthenticationOptions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8841))
// CS Name: ::Mono.Net.Security::MonoSslServerAuthenticationOptions*
class CORDL_TYPE MonoSslServerAuthenticationOptions : public ::Mono::Net::Security::MonoSslAuthenticationOptions {
public:
  // Declarations
  /// @brief Field <Options>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Options_k__BackingField, put = __set__Options_k__BackingField))::System::Net::Security::SslServerAuthenticationOptions* _Options_k__BackingField;

  __declspec(property(get = get_Options))::System::Net::Security::SslServerAuthenticationOptions* Options;

  __declspec(property(get = get_ServerMode)) bool ServerMode;

  __declspec(property(put = set_CertificateRevocationCheckMode))::System::Security::Cryptography::X509Certificates::X509RevocationMode CertificateRevocationCheckMode;

  __declspec(property(put = set_EncryptionPolicy))::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(get = get_EnabledSslProtocols, put = set_EnabledSslProtocols))::System::Security::Authentication::SslProtocols EnabledSslProtocols;

  __declspec(property(get = get_ClientCertificateRequired, put = set_ClientCertificateRequired)) bool ClientCertificateRequired;

  __declspec(property(get = get_TargetHost, put = set_TargetHost))::StringW TargetHost;

  __declspec(property(get = get_ServerCertificate, put = set_ServerCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* ServerCertificate;

  __declspec(property(get = get_ClientCertificates, put = set_ClientCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  constexpr ::System::Net::Security::SslServerAuthenticationOptions*& __get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslServerAuthenticationOptions*> const& __get__Options_k__BackingField() const;

  constexpr void __set__Options_k__BackingField(::System::Net::Security::SslServerAuthenticationOptions* value);

  /// @brief Method get_Options addr 0x2824184 size 0x8 virtual false final false
  inline ::System::Net::Security::SslServerAuthenticationOptions* get_Options();

  /// @brief Method get_ServerMode addr 0x282418c size 0x8 virtual true final false
  inline bool get_ServerMode();

  static inline ::Mono::Net::Security::MonoSslServerAuthenticationOptions* New_ctor();

  /// @brief Method .ctor addr 0x2821644 size 0x6c virtual false final false
  inline void _ctor();

  /// @brief Method set_CertificateRevocationCheckMode addr 0x2824194 size 0x1c virtual true final false
  inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method set_EncryptionPolicy addr 0x28241b0 size 0x1c virtual true final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method get_EnabledSslProtocols addr 0x28241cc size 0x1c virtual true final false
  inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols();

  /// @brief Method set_EnabledSslProtocols addr 0x28241e8 size 0x1c virtual true final false
  inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  /// @brief Method get_ClientCertificateRequired addr 0x2824204 size 0x1c virtual true final false
  inline bool get_ClientCertificateRequired();

  /// @brief Method set_ClientCertificateRequired addr 0x2824220 size 0x20 virtual true final false
  inline void set_ClientCertificateRequired(bool value);

  /// @brief Method get_TargetHost addr 0x2824240 size 0x40 virtual true final false
  inline ::StringW get_TargetHost();

  /// @brief Method set_TargetHost addr 0x2824280 size 0x40 virtual true final false
  inline void set_TargetHost(::StringW value);

  /// @brief Method get_ServerCertificate addr 0x28242c0 size 0x1c virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate();

  /// @brief Method set_ServerCertificate addr 0x28242dc size 0x1c virtual true final false
  inline void set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  /// @brief Method get_ClientCertificates addr 0x28242f8 size 0x40 virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method set_ClientCertificates addr 0x2824338 size 0x40 virtual true final false
  inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  // Ctor Parameters [CppParam { name: "", ty: "MonoSslServerAuthenticationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoSslServerAuthenticationOptions(MonoSslServerAuthenticationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoSslServerAuthenticationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoSslServerAuthenticationOptions(MonoSslServerAuthenticationOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoSslServerAuthenticationOptions();

public:
  /// @brief Field <Options>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Security::SslServerAuthenticationOptions* ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoSslServerAuthenticationOptions, 0x20>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoSslServerAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoSslServerAuthenticationOptions*, "Mono.Net.Security", "MonoSslServerAuthenticationOptions");
