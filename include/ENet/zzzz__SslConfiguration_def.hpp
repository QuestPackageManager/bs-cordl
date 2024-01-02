#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__ENetSslConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SslConfiguration)
namespace ENet {
struct SslMode;
}
namespace ENet {
struct ENetSslConfiguration;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ENet {
struct SslConfiguration;
}
// Write type traits
MARK_VAL_T(::ENet::SslConfiguration);
// Type: ENet::SslConfiguration
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15218))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15229))
// CS Name: ::ENet::SslConfiguration
struct CORDL_TYPE SslConfiguration {
public:
  // Declarations
  __declspec(property(get = get_NativeSslConfiguration, put = set_NativeSslConfiguration))::ENet::ENetSslConfiguration NativeSslConfiguration;

  __declspec(property(get = get_Mode, put = set_Mode))::ENet::SslMode Mode;

  __declspec(property(get = get_CertificatePath, put = set_CertificatePath))::StringW CertificatePath;

  __declspec(property(get = get_Certificate, put = set_Certificate))::StringW Certificate;

  __declspec(property(get = get_PrivateKeyPath, put = set_PrivateKeyPath))::StringW PrivateKeyPath;

  __declspec(property(get = get_PrivateKey, put = set_PrivateKey))::StringW PrivateKey;

  __declspec(property(get = get_ValidateCertificate, put = set_ValidateCertificate)) bool ValidateCertificate;

  __declspec(property(get = get_RootCertificatePath, put = set_RootCertificatePath))::StringW RootCertificatePath;

  __declspec(property(get = get_RootCertificate, put = set_RootCertificate))::StringW RootCertificate;

  __declspec(property(get = get_HostName, put = set_HostName))::StringW HostName;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method get_NativeSslConfiguration, addr 0x21efc74, size 0x10, virtual false, abstract: false, final false
  inline ::ENet::ENetSslConfiguration get_NativeSslConfiguration();

  /// @brief Method set_NativeSslConfiguration, addr 0x21efc84, size 0x14, virtual false, abstract: false, final false
  inline void set_NativeSslConfiguration(::ENet::ENetSslConfiguration value);

  /// @brief Method .ctor, addr 0x21efc98, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ENet::ENetSslConfiguration sslConfiguration);

  /// @brief Method Dispose, addr 0x21efcac, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_Mode, addr 0x21efcfc, size 0x8, virtual false, abstract: false, final false
  inline ::ENet::SslMode get_Mode();

  /// @brief Method set_Mode, addr 0x21efd04, size 0x8, virtual false, abstract: false, final false
  inline void set_Mode(::ENet::SslMode value);

  /// @brief Method get_CertificatePath, addr 0x21efd0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CertificatePath();

  /// @brief Method set_CertificatePath, addr 0x21efcc4, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificatePath(::StringW value);

  /// @brief Method get_Certificate, addr 0x21efd14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Certificate();

  /// @brief Method set_Certificate, addr 0x21efccc, size 0x8, virtual false, abstract: false, final false
  inline void set_Certificate(::StringW value);

  /// @brief Method get_PrivateKeyPath, addr 0x21efd1c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PrivateKeyPath();

  /// @brief Method set_PrivateKeyPath, addr 0x21efcd4, size 0x8, virtual false, abstract: false, final false
  inline void set_PrivateKeyPath(::StringW value);

  /// @brief Method get_PrivateKey, addr 0x21efd24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PrivateKey();

  /// @brief Method set_PrivateKey, addr 0x21efcdc, size 0x8, virtual false, abstract: false, final false
  inline void set_PrivateKey(::StringW value);

  /// @brief Method get_ValidateCertificate, addr 0x21efd2c, size 0x10, virtual false, abstract: false, final false
  inline bool get_ValidateCertificate();

  /// @brief Method set_ValidateCertificate, addr 0x21efd3c, size 0xc, virtual false, abstract: false, final false
  inline void set_ValidateCertificate(bool value);

  /// @brief Method get_RootCertificatePath, addr 0x21efd48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RootCertificatePath();

  /// @brief Method set_RootCertificatePath, addr 0x21efce4, size 0x8, virtual false, abstract: false, final false
  inline void set_RootCertificatePath(::StringW value);

  /// @brief Method get_RootCertificate, addr 0x21efd50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RootCertificate();

  /// @brief Method set_RootCertificate, addr 0x21efcec, size 0x8, virtual false, abstract: false, final false
  inline void set_RootCertificate(::StringW value);

  /// @brief Method get_HostName, addr 0x21efd58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HostName();

  /// @brief Method set_HostName, addr 0x21efcf4, size 0x8, virtual false, abstract: false, final false
  inline void set_HostName(::StringW value);

  // Ctor Parameters [CppParam { name: "nativeSslConfiguration", ty: "::ENet::ENetSslConfiguration", modifiers: "", def_value: None }]
  constexpr SslConfiguration(::ENet::ENetSslConfiguration nativeSslConfiguration) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SslConfiguration();

  /// @brief Field nativeSslConfiguration, offset: 0x0, size: 0x48, def value: None
  ::ENet::ENetSslConfiguration nativeSslConfiguration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::SslConfiguration, 0x48>, "Size mismatch!");

static_assert(offsetof(::ENet::SslConfiguration, nativeSslConfiguration) == 0x0, "Offset mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::SslConfiguration, "ENet", "SslConfiguration");
