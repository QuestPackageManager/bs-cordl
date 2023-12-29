#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SslServerAuthenticationOptions)
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
// Forward declare root types
namespace System::Net::Security {
class SslServerAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::SslServerAuthenticationOptions);
// Type: System.Net.Security::SslServerAuthenticationOptions
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7824)), TypeDefinitionIndex(TypeDefinitionIndex(7801)), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// TypeDefinitionIndex(TypeDefinitionIndex(8203))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8200)) CS Name: ::System.Net.Security::SslServerAuthenticationOptions*
class CORDL_TYPE SslServerAuthenticationOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field _checkCertificateRevocation, offset 0x10, size 0x4
  __declspec(property(get = __get__checkCertificateRevocation,
                      put = __set__checkCertificateRevocation))::System::Security::Cryptography::X509Certificates::X509RevocationMode _checkCertificateRevocation;

  /// @brief Field _enabledSslProtocols, offset 0x14, size 0x4
  __declspec(property(get = __get__enabledSslProtocols, put = __set__enabledSslProtocols))::System::Security::Authentication::SslProtocols _enabledSslProtocols;

  /// @brief Field _encryptionPolicy, offset 0x18, size 0x4
  __declspec(property(get = __get__encryptionPolicy, put = __set__encryptionPolicy))::System::Net::Security::EncryptionPolicy _encryptionPolicy;

  /// @brief Field _allowRenegotiation, offset 0x1c, size 0x1
  __declspec(property(get = __get__allowRenegotiation, put = __set__allowRenegotiation)) bool _allowRenegotiation;

  /// @brief Field <ClientCertificateRequired>k__BackingField, offset 0x1d, size 0x1
  __declspec(property(get = __get__ClientCertificateRequired_k__BackingField, put = __set__ClientCertificateRequired_k__BackingField)) bool _ClientCertificateRequired_k__BackingField;

  /// @brief Field <ServerCertificate>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__ServerCertificate_k__BackingField,
                      put = __set__ServerCertificate_k__BackingField))::System::Security::Cryptography::X509Certificates::X509Certificate* _ServerCertificate_k__BackingField;

  __declspec(property(get = get_ClientCertificateRequired, put = set_ClientCertificateRequired)) bool ClientCertificateRequired;

  __declspec(property(get = get_ServerCertificate, put = set_ServerCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* ServerCertificate;

  __declspec(property(get = get_EnabledSslProtocols, put = set_EnabledSslProtocols))::System::Security::Authentication::SslProtocols EnabledSslProtocols;

  __declspec(property(put = set_CertificateRevocationCheckMode))::System::Security::Cryptography::X509Certificates::X509RevocationMode CertificateRevocationCheckMode;

  __declspec(property(put = set_EncryptionPolicy))::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& __get__checkCertificateRevocation();

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& __get__checkCertificateRevocation() const;

  constexpr void __set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  constexpr ::System::Security::Authentication::SslProtocols& __get__enabledSslProtocols();

  constexpr ::System::Security::Authentication::SslProtocols const& __get__enabledSslProtocols() const;

  constexpr void __set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  constexpr ::System::Net::Security::EncryptionPolicy& __get__encryptionPolicy();

  constexpr ::System::Net::Security::EncryptionPolicy const& __get__encryptionPolicy() const;

  constexpr void __set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  constexpr bool& __get__allowRenegotiation();

  constexpr bool const& __get__allowRenegotiation() const;

  constexpr void __set__allowRenegotiation(bool value);

  constexpr bool& __get__ClientCertificateRequired_k__BackingField();

  constexpr bool const& __get__ClientCertificateRequired_k__BackingField() const;

  constexpr void __set__ClientCertificateRequired_k__BackingField(bool value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __get__ServerCertificate_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __get__ServerCertificate_k__BackingField() const;

  constexpr void __set__ServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  /// @brief Method get_ClientCertificateRequired addr 0x27815b8 size 0x8 virtual false final false
  inline bool get_ClientCertificateRequired();

  /// @brief Method set_ClientCertificateRequired addr 0x27815c0 size 0xc virtual false final false
  inline void set_ClientCertificateRequired(bool value);

  /// @brief Method get_ServerCertificate addr 0x27815cc size 0x8 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate();

  /// @brief Method set_ServerCertificate addr 0x27815d4 size 0x8 virtual false final false
  inline void set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  /// @brief Method get_EnabledSslProtocols addr 0x27815dc size 0x8 virtual false final false
  inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols();

  /// @brief Method set_EnabledSslProtocols addr 0x27815e4 size 0x8 virtual false final false
  inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  /// @brief Method set_CertificateRevocationCheckMode addr 0x27815ec size 0xa0 virtual false final false
  inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method set_EncryptionPolicy addr 0x278168c size 0xa0 virtual false final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  static inline ::System::Net::Security::SslServerAuthenticationOptions* New_ctor();

  /// @brief Method .ctor addr 0x278172c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SslServerAuthenticationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SslServerAuthenticationOptions(SslServerAuthenticationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SslServerAuthenticationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SslServerAuthenticationOptions(SslServerAuthenticationOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SslServerAuthenticationOptions();

public:
  /// @brief Field _checkCertificateRevocation, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509RevocationMode ____checkCertificateRevocation;

  /// @brief Field _enabledSslProtocols, offset: 0x14, size: 0x4, def value: None
  ::System::Security::Authentication::SslProtocols ____enabledSslProtocols;

  /// @brief Field _encryptionPolicy, offset: 0x18, size: 0x4, def value: None
  ::System::Net::Security::EncryptionPolicy ____encryptionPolicy;

  /// @brief Field _allowRenegotiation, offset: 0x1c, size: 0x1, def value: None
  bool ____allowRenegotiation;

  /// @brief Field <ClientCertificateRequired>k__BackingField, offset: 0x1d, size: 0x1, def value: None
  bool ____ClientCertificateRequired_k__BackingField;

  /// @brief Field <ServerCertificate>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ____ServerCertificate_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::SslServerAuthenticationOptions, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Security::SslServerAuthenticationOptions, ____checkCertificateRevocation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslServerAuthenticationOptions, ____enabledSslProtocols) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslServerAuthenticationOptions, ____encryptionPolicy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslServerAuthenticationOptions, ____allowRenegotiation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslServerAuthenticationOptions, ____ClientCertificateRequired_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SslServerAuthenticationOptions, ____ServerCertificate_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::SslServerAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslServerAuthenticationOptions*, "System.Net.Security", "SslServerAuthenticationOptions");
