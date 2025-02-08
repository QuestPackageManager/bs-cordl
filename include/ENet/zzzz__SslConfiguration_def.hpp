#pragma once
// IWYU pragma private; include "ENet/SslConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__ENetSslConfiguration_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SslConfiguration)
namespace ENet {
struct ENetSslConfiguration;
}
namespace ENet {
struct SslMode;
}
// Forward declare root types
namespace ENet {
struct SslConfiguration;
}
// Write type traits
MARK_VAL_T(::ENet::SslConfiguration);
// Dependencies ENet.ENetSslConfiguration, System.IDisposable
namespace ENet {
// Is value type: true
// CS Name: ENet.SslConfiguration
struct CORDL_TYPE SslConfiguration {
public:
  // Declarations
  __declspec(property(get = get_Certificate, put = set_Certificate)) ::StringW Certificate;

  __declspec(property(get = get_CertificatePath, put = set_CertificatePath)) ::StringW CertificatePath;

  __declspec(property(get = get_HostName, put = set_HostName)) ::StringW HostName;

  __declspec(property(get = get_Mode, put = set_Mode)) ::ENet::SslMode Mode;

  __declspec(property(get = get_NativeSslConfiguration, put = set_NativeSslConfiguration)) ::ENet::ENetSslConfiguration NativeSslConfiguration;

  __declspec(property(get = get_PrivateKey, put = set_PrivateKey)) ::StringW PrivateKey;

  __declspec(property(get = get_PrivateKeyPath, put = set_PrivateKeyPath)) ::StringW PrivateKeyPath;

  __declspec(property(get = get_RootCertificate, put = set_RootCertificate)) ::StringW RootCertificate;

  __declspec(property(get = get_RootCertificatePath, put = set_RootCertificatePath)) ::StringW RootCertificatePath;

  __declspec(property(get = get_ValidateCertificate, put = set_ValidateCertificate)) bool ValidateCertificate;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3aa8abc, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x3aa8aa8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ENet::ENetSslConfiguration sslConfiguration);

  /// @brief Method get_Certificate, addr 0x3aa8b24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Certificate();

  /// @brief Method get_CertificatePath, addr 0x3aa8b1c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CertificatePath();

  /// @brief Method get_HostName, addr 0x3aa8b68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HostName();

  /// @brief Method get_Mode, addr 0x3aa8b0c, size 0x8, virtual false, abstract: false, final false
  inline ::ENet::SslMode get_Mode();

  /// @brief Method get_NativeSslConfiguration, addr 0x3aa8a84, size 0x10, virtual false, abstract: false, final false
  inline ::ENet::ENetSslConfiguration get_NativeSslConfiguration();

  /// @brief Method get_PrivateKey, addr 0x3aa8b34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PrivateKey();

  /// @brief Method get_PrivateKeyPath, addr 0x3aa8b2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PrivateKeyPath();

  /// @brief Method get_RootCertificate, addr 0x3aa8b60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RootCertificate();

  /// @brief Method get_RootCertificatePath, addr 0x3aa8b58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RootCertificatePath();

  /// @brief Method get_ValidateCertificate, addr 0x3aa8b3c, size 0x10, virtual false, abstract: false, final false
  inline bool get_ValidateCertificate();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_Certificate, addr 0x3aa8adc, size 0x8, virtual false, abstract: false, final false
  inline void set_Certificate(::StringW value);

  /// @brief Method set_CertificatePath, addr 0x3aa8ad4, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificatePath(::StringW value);

  /// @brief Method set_HostName, addr 0x3aa8b04, size 0x8, virtual false, abstract: false, final false
  inline void set_HostName(::StringW value);

  /// @brief Method set_Mode, addr 0x3aa8b14, size 0x8, virtual false, abstract: false, final false
  inline void set_Mode(::ENet::SslMode value);

  /// @brief Method set_NativeSslConfiguration, addr 0x3aa8a94, size 0x14, virtual false, abstract: false, final false
  inline void set_NativeSslConfiguration(::ENet::ENetSslConfiguration value);

  /// @brief Method set_PrivateKey, addr 0x3aa8aec, size 0x8, virtual false, abstract: false, final false
  inline void set_PrivateKey(::StringW value);

  /// @brief Method set_PrivateKeyPath, addr 0x3aa8ae4, size 0x8, virtual false, abstract: false, final false
  inline void set_PrivateKeyPath(::StringW value);

  /// @brief Method set_RootCertificate, addr 0x3aa8afc, size 0x8, virtual false, abstract: false, final false
  inline void set_RootCertificate(::StringW value);

  /// @brief Method set_RootCertificatePath, addr 0x3aa8af4, size 0x8, virtual false, abstract: false, final false
  inline void set_RootCertificatePath(::StringW value);

  /// @brief Method set_ValidateCertificate, addr 0x3aa8b4c, size 0xc, virtual false, abstract: false, final false
  inline void set_ValidateCertificate(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SslConfiguration();

  // Ctor Parameters [CppParam { name: "nativeSslConfiguration", ty: "::ENet::ENetSslConfiguration", modifiers: "", def_value: None }]
  constexpr SslConfiguration(::ENet::ENetSslConfiguration nativeSslConfiguration) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field nativeSslConfiguration, offset: 0x0, size: 0x48, def value: None
  ::ENet::ENetSslConfiguration nativeSslConfiguration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::SslConfiguration, nativeSslConfiguration) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::SslConfiguration, 0x48>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::SslConfiguration, "ENet", "SslConfiguration");
