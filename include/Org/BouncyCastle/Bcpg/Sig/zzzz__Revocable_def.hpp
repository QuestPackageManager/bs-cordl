#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/Revocable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Revocable)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Revocable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::Revocable);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.Revocable
class CORDL_TYPE Revocable : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method BooleanToByteArray, addr 0x263e314, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BooleanToByteArray(bool value);

  /// @brief Method IsRevocable, addr 0x263e414, size 0x30, virtual false, abstract: false, final false
  inline bool IsRevocable();

  static inline ::Org::BouncyCastle::Bcpg::Sig::Revocable* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::Revocable* New_ctor(bool critical, bool isRevocable);

  /// @brief Method .ctor, addr 0x263e380, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x263e3c8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isRevocable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Revocable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Revocable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Revocable(Revocable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Revocable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Revocable(Revocable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::Revocable, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::Revocable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::Revocable*, "Org.BouncyCastle.Bcpg.Sig", "Revocable");
