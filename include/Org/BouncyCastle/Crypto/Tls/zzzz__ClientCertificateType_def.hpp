#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ClientCertificateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientCertificateType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ClientCertificateType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.ClientCertificateType
class CORDL_TYPE ClientCertificateType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ClientCertificateType* New_ctor();

  /// @brief Method .ctor, addr 0x23e6f90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientCertificateType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientCertificateType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientCertificateType(ClientCertificateType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientCertificateType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientCertificateType(ClientCertificateType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1200 };

  /// @brief Field dss_ephemeral_dh_RESERVED offset 0xffffffff size 0x1
  static constexpr uint8_t dss_ephemeral_dh_RESERVED{ static_cast<uint8_t>(0x6u) };

  /// @brief Field dss_fixed_dh offset 0xffffffff size 0x1
  static constexpr uint8_t dss_fixed_dh{ static_cast<uint8_t>(0x4u) };

  /// @brief Field dss_sign offset 0xffffffff size 0x1
  static constexpr uint8_t dss_sign{ static_cast<uint8_t>(0x2u) };

  /// @brief Field ecdsa_fixed_ecdh offset 0xffffffff size 0x1
  static constexpr uint8_t ecdsa_fixed_ecdh{ static_cast<uint8_t>(0x42u) };

  /// @brief Field ecdsa_sign offset 0xffffffff size 0x1
  static constexpr uint8_t ecdsa_sign{ static_cast<uint8_t>(0x40u) };

  /// @brief Field fortezza_dms_RESERVED offset 0xffffffff size 0x1
  static constexpr uint8_t fortezza_dms_RESERVED{ static_cast<uint8_t>(0x14u) };

  /// @brief Field rsa_ephemeral_dh_RESERVED offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_ephemeral_dh_RESERVED{ static_cast<uint8_t>(0x5u) };

  /// @brief Field rsa_fixed_dh offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_fixed_dh{ static_cast<uint8_t>(0x3u) };

  /// @brief Field rsa_fixed_ecdh offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_fixed_ecdh{ static_cast<uint8_t>(0x41u) };

  /// @brief Field rsa_sign offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_sign{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ClientCertificateType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType*, "Org.BouncyCastle.Crypto.Tls", "ClientCertificateType");
