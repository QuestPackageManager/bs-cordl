#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\EmbeddedSignature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EmbeddedSignature)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class EmbeddedSignature;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature*, "Org.BouncyCastle.Bcpg.Sig", "EmbeddedSignature");
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.EmbeddedSignature
class CORDL_TYPE EmbeddedSignature : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  /// @brief Method .ctor, addr 0x36944f4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmbeddedSignature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmbeddedSignature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmbeddedSignature(EmbeddedSignature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmbeddedSignature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmbeddedSignature(EmbeddedSignature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
