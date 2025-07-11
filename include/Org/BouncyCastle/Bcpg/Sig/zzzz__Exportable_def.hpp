#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/Exportable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Exportable)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Exportable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::Exportable);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.Exportable
class CORDL_TYPE Exportable : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method BooleanToByteArray, addr 0x263e48c, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BooleanToByteArray(bool val);

  /// @brief Method IsExportable, addr 0x263e58c, size 0x30, virtual false, abstract: false, final false
  inline bool IsExportable();

  static inline ::Org::BouncyCastle::Bcpg::Sig::Exportable* New_ctor(bool critical, bool isExportable);

  static inline ::Org::BouncyCastle::Bcpg::Sig::Exportable* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x263e540, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isExportable);

  /// @brief Method .ctor, addr 0x263e4f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Exportable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Exportable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Exportable(Exportable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Exportable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Exportable(Exportable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::Exportable, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::Exportable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::Exportable*, "Org.BouncyCastle.Bcpg.Sig", "Exportable");
