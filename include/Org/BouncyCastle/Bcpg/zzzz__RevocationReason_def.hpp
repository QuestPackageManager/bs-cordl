#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/RevocationReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Org::BouncyCastle::Bcpg::RevocationReason*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::RevocationReason*, "Org.BouncyCastle.Bcpg", "RevocationReason");
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.RevocationReason
class CORDL_TYPE RevocationReason : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method CreateData, addr 0x36934d8, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateData(::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

  /// @brief Method GetRevocationDescription, addr 0x36935b0, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW GetRevocationDescription();

  /// @brief Method GetRevocationReason, addr 0x3693588, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::RevocationReasonTag GetRevocationReason();

  static inline ::Org::BouncyCastle::Bcpg::RevocationReason* New_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data);

  static inline ::Org::BouncyCastle::Bcpg::RevocationReason* New_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

  /// @brief Method .ctor, addr 0x3693484, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data);

  /// @brief Method .ctor, addr 0x369349c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationReason();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevocationReason", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationReason(RevocationReason&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationReason", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationReason(RevocationReason const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 544 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Bcpg::RevocationReason) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
