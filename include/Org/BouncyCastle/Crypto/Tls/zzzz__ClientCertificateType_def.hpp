#pragma once
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
// Type: Org.BouncyCastle.Crypto.Tls::ClientCertificateType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1200))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ClientCertificateType*
class CORDL_TYPE ClientCertificateType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ClientCertificateType* New_ctor();

  /// @brief Method .ctor, addr 0xf61e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ClientCertificateType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientCertificateType(ClientCertificateType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientCertificateType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientCertificateType(ClientCertificateType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientCertificateType();

public:
  /// @brief Field rsa_sign offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_sign{ static_cast<uint8_t>(0x1u) };

  /// @brief Field dss_sign offset 0xffffffff size 0x1
  static constexpr uint8_t dss_sign{ static_cast<uint8_t>(0x2u) };

  /// @brief Field rsa_fixed_dh offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_fixed_dh{ static_cast<uint8_t>(0x3u) };

  /// @brief Field dss_fixed_dh offset 0xffffffff size 0x1
  static constexpr uint8_t dss_fixed_dh{ static_cast<uint8_t>(0x4u) };

  /// @brief Field rsa_ephemeral_dh_RESERVED offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_ephemeral_dh_RESERVED{ static_cast<uint8_t>(0x5u) };

  /// @brief Field dss_ephemeral_dh_RESERVED offset 0xffffffff size 0x1
  static constexpr uint8_t dss_ephemeral_dh_RESERVED{ static_cast<uint8_t>(0x6u) };

  /// @brief Field fortezza_dms_RESERVED offset 0xffffffff size 0x1
  static constexpr uint8_t fortezza_dms_RESERVED{ static_cast<uint8_t>(0x14u) };

  /// @brief Field ecdsa_sign offset 0xffffffff size 0x1
  static constexpr uint8_t ecdsa_sign{ static_cast<uint8_t>(0x40u) };

  /// @brief Field rsa_fixed_ecdh offset 0xffffffff size 0x1
  static constexpr uint8_t rsa_fixed_ecdh{ static_cast<uint8_t>(0x41u) };

  /// @brief Field ecdsa_fixed_ecdh offset 0xffffffff size 0x1
  static constexpr uint8_t ecdsa_fixed_ecdh{ static_cast<uint8_t>(0x42u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ClientCertificateType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ClientCertificateType*, "Org.BouncyCastle.Crypto.Tls", "ClientCertificateType");
