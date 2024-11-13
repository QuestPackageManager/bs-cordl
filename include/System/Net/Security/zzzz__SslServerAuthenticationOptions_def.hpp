#pragma once
// IWYU pragma private; include "System/Net/Security/SslServerAuthenticationOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SslServerAuthenticationOptions)
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
// Forward declare root types
namespace System::Net::Security {
class SslServerAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::SslServerAuthenticationOptions);
// Type: System.Net.Security::SslServerAuthenticationOptions
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// CS Name: ::System.Net.Security::SslServerAuthenticationOptions*
class CORDL_TYPE SslServerAuthenticationOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_CertificateRevocationCheckMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode CertificateRevocationCheckMode;

  __declspec(property(get = get_ClientCertificateRequired, put = set_ClientCertificateRequired)) bool ClientCertificateRequired;

  __declspec(property(get = get_EnabledSslProtocols, put = set_EnabledSslProtocols)) ::System::Security::Authentication::SslProtocols EnabledSslProtocols;

  __declspec(property(put = set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(get = get_ServerCertificate, put = set_ServerCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* ServerCertificate;

  /// @brief Field <ClientCertificateRequired>k__BackingField, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get__ClientCertificateRequired_k__BackingField,
                      put = __cordl_internal_set__ClientCertificateRequired_k__BackingField)) bool _ClientCertificateRequired_k__BackingField;

  /// @brief Field <ServerCertificate>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ServerCertificate_k__BackingField,
                      put = __cordl_internal_set__ServerCertificate_k__BackingField)) ::System::Security::Cryptography::X509Certificates::X509Certificate* _ServerCertificate_k__BackingField;

  /// @brief Field _allowRenegotiation, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__allowRenegotiation, put = __cordl_internal_set__allowRenegotiation)) bool _allowRenegotiation;

  /// @brief Field _checkCertificateRevocation, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__checkCertificateRevocation,
                      put = __cordl_internal_set__checkCertificateRevocation)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode _checkCertificateRevocation;

  /// @brief Field _enabledSslProtocols, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__enabledSslProtocols, put = __cordl_internal_set__enabledSslProtocols)) ::System::Security::Authentication::SslProtocols _enabledSslProtocols;

  /// @brief Field _encryptionPolicy, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__encryptionPolicy, put = __cordl_internal_set__encryptionPolicy)) ::System::Net::Security::EncryptionPolicy _encryptionPolicy;

  static inline ::System::Net::Security::SslServerAuthenticationOptions* New_ctor();

  constexpr bool const& __cordl_internal_get__ClientCertificateRequired_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ClientCertificateRequired_k__BackingField();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get__ServerCertificate_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __cordl_internal_get__ServerCertificate_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__allowRenegotiation() const;

  constexpr bool& __cordl_internal_get__allowRenegotiation();

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& __cordl_internal_get__checkCertificateRevocation() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& __cordl_internal_get__checkCertificateRevocation();

  constexpr ::System::Security::Authentication::SslProtocols const& __cordl_internal_get__enabledSslProtocols() const;

  constexpr ::System::Security::Authentication::SslProtocols& __cordl_internal_get__enabledSslProtocols();

  constexpr ::System::Net::Security::EncryptionPolicy const& __cordl_internal_get__encryptionPolicy() const;

  constexpr ::System::Net::Security::EncryptionPolicy& __cordl_internal_get__encryptionPolicy();

  constexpr void __cordl_internal_set__ClientCertificateRequired_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set__allowRenegotiation(bool value);

  constexpr void __cordl_internal_set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  constexpr void __cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  constexpr void __cordl_internal_set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method .ctor, addr 0x43a34d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientCertificateRequired, addr 0x43a3364, size 0x8, virtual false, abstract: false, final false
  inline bool get_ClientCertificateRequired();

  /// @brief Method get_EnabledSslProtocols, addr 0x43a3388, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols();

  /// @brief Method get_ServerCertificate, addr 0x43a3378, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate();

  /// @brief Method set_CertificateRevocationCheckMode, addr 0x43a3398, size 0x9c, virtual false, abstract: false, final false
  inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method set_ClientCertificateRequired, addr 0x43a336c, size 0xc, virtual false, abstract: false, final false
  inline void set_ClientCertificateRequired(bool value);

  /// @brief Method set_EnabledSslProtocols, addr 0x43a3390, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  /// @brief Method set_EncryptionPolicy, addr 0x43a3434, size 0x9c, virtual false, abstract: false, final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method set_ServerCertificate, addr 0x43a3380, size 0x8, virtual false, abstract: false, final false
  inline void set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SslServerAuthenticationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SslServerAuthenticationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SslServerAuthenticationOptions(SslServerAuthenticationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SslServerAuthenticationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SslServerAuthenticationOptions(SslServerAuthenticationOptions const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9863 };

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
