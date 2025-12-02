#pragma once
// IWYU pragma private; include "ENet/ENetSslConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__SslMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENetSslConfiguration)
// Forward declare root types
namespace ENet {
struct ENetSslConfiguration;
}
// Write type traits
MARK_VAL_T(::ENet::ENetSslConfiguration);
// Dependencies ENet.SslMode
namespace ENet {
// Is value type: true
// CS Name: ENet.ENetSslConfiguration
struct CORDL_TYPE ENetSslConfiguration {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ENetSslConfiguration();

  // Ctor Parameters [CppParam { name: "mode", ty: "::ENet::SslMode", modifiers: "", def_value: None }, CppParam { name: "certificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "certificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKeyPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "validateCertificate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rootCertificatePath", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "rootCertificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value:
  // None }]
  constexpr ENetSslConfiguration(::ENet::SslMode mode, ::StringW certificatePath, ::StringW certificate, ::StringW privateKeyPath, ::StringW privateKey, int32_t validateCertificate,
                                 ::StringW rootCertificatePath, ::StringW rootCertificate, ::StringW hostName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21498 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field mode, offset: 0x0, size: 0x4, def value: None
  ::ENet::SslMode mode;

  /// @brief Field certificatePath, offset: 0x8, size: 0x8, def value: None
  ::StringW certificatePath;

  /// @brief Field certificate, offset: 0x10, size: 0x8, def value: None
  ::StringW certificate;

  /// @brief Field privateKeyPath, offset: 0x18, size: 0x8, def value: None
  ::StringW privateKeyPath;

  /// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
  ::StringW privateKey;

  /// @brief Field validateCertificate, offset: 0x28, size: 0x4, def value: None
  int32_t validateCertificate;

  /// @brief Field rootCertificatePath, offset: 0x30, size: 0x8, def value: None
  ::StringW rootCertificatePath;

  /// @brief Field rootCertificate, offset: 0x38, size: 0x8, def value: None
  ::StringW rootCertificate;

  /// @brief Field hostName, offset: 0x40, size: 0x8, def value: None
  ::StringW hostName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::ENetSslConfiguration, mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, certificatePath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, certificate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, privateKeyPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, privateKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, validateCertificate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, rootCertificatePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, rootCertificate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetSslConfiguration, hostName) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::ENetSslConfiguration, 0x48>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetSslConfiguration, "ENet", "ENetSslConfiguration");
