#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RevocationReason)
namespace Org::BouncyCastle::Bcpg {
struct RevocationReasonTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RevocationReason;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::RevocationReason);
// Type: Org.BouncyCastle.Bcpg::RevocationReason
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(544))
// CS Name: ::Org.BouncyCastle.Bcpg::RevocationReason*
class CORDL_TYPE RevocationReason : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::RevocationReason* New_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x11c8a08 size 0x48 virtual false final false
  inline void _ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::RevocationReason* New_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

  /// @brief Method .ctor addr 0x11c8a50 size 0x50 virtual false final false
  inline void _ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

  /// @brief Method CreateData addr 0x11c8aa0 size 0xa4 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateData(::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

  /// @brief Method GetRevocationReason addr 0x11c8b44 size 0x28 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::RevocationReasonTag GetRevocationReason();

  /// @brief Method GetRevocationDescription addr 0x11c8b6c size 0xc0 virtual true final false
  inline ::StringW GetRevocationDescription();

  // Ctor Parameters [CppParam { name: "", ty: "RevocationReason", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationReason(RevocationReason&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationReason", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationReason(RevocationReason const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationReason();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RevocationReason, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RevocationReason);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationReason*, "Org.BouncyCastle.Bcpg", "RevocationReason");
