#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ECBasisType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECBasisType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECBasisType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ECBasisType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.ECBasisType
class CORDL_TYPE ECBasisType : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x241aedc, size 0x14, virtual false, abstract: false, final false
  static inline bool IsValid(uint8_t ecBasisType);

  static inline ::Org::BouncyCastle::Crypto::Tls::ECBasisType* New_ctor();

  /// @brief Method .ctor, addr 0x241aef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECBasisType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECBasisType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECBasisType(ECBasisType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECBasisType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECBasisType(ECBasisType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1238 };

  /// @brief Field ec_basis_pentanomial offset 0xffffffff size 0x1
  static constexpr uint8_t ec_basis_pentanomial{ static_cast<uint8_t>(0x2u) };

  /// @brief Field ec_basis_trinomial offset 0xffffffff size 0x1
  static constexpr uint8_t ec_basis_trinomial{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ECBasisType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ECBasisType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ECBasisType*, "Org.BouncyCastle.Crypto.Tls", "ECBasisType");
