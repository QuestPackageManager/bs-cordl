#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpPad.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPad)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPad;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPad");
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPad
class CORDL_TYPE PgpPad : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad* New_ctor();

  /// @brief Method PadSessionData, addr 0x3588070, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> PadSessionData(::ArrayW<uint8_t> sessionInfo);

  /// @brief Method PadSessionData, addr 0x3582928, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> PadSessionData(::ArrayW<uint8_t> sessionInfo, bool obfuscate);

  /// @brief Method UnpadSessionData, addr 0x3588078, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UnpadSessionData(::ArrayW<uint8_t> encoded);

  /// @brief Method .ctor, addr 0x358806c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPad();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPad(PgpPad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPad(PgpPad const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
