#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpKeyFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpKeyFlags)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyFlags;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyFlags
class CORDL_TYPE PgpKeyFlags : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags* New_ctor();

  /// @brief Method .ctor, addr 0x252b0b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyFlags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyFlags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyFlags(PgpKeyFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyFlags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyFlags(PgpKeyFlags const&) = delete;

  /// @brief Field CanCertify offset 0xffffffff size 0x4
  static constexpr int32_t CanCertify{ static_cast<int32_t>(0x1) };

  /// @brief Field CanEncryptCommunications offset 0xffffffff size 0x4
  static constexpr int32_t CanEncryptCommunications{ static_cast<int32_t>(0x4) };

  /// @brief Field CanEncryptStorage offset 0xffffffff size 0x4
  static constexpr int32_t CanEncryptStorage{ static_cast<int32_t>(0x8) };

  /// @brief Field CanSign offset 0xffffffff size 0x4
  static constexpr int32_t CanSign{ static_cast<int32_t>(0x2) };

  /// @brief Field MaybeShared offset 0xffffffff size 0x4
  static constexpr int32_t MaybeShared{ static_cast<int32_t>(0x80) };

  /// @brief Field MaybeSplit offset 0xffffffff size 0x4
  static constexpr int32_t MaybeSplit{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyFlags");
