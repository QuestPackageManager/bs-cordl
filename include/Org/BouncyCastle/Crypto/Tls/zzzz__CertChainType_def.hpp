#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertChainType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertChainType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertChainType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertChainType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CertChainType
class CORDL_TYPE CertChainType : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x23e8d88, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValid(uint8_t certChainType);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertChainType* New_ctor();

  /// @brief Method .ctor, addr 0x23e8d98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertChainType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertChainType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertChainType(CertChainType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertChainType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertChainType(CertChainType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1185 };

  /// @brief Field individual_certs offset 0xffffffff size 0x1
  static constexpr uint8_t individual_certs{ static_cast<uint8_t>(0x0u) };

  /// @brief Field pkipath offset 0xffffffff size 0x1
  static constexpr uint8_t pkipath{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertChainType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertChainType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertChainType*, "Org.BouncyCastle.Crypto.Tls", "CertChainType");
