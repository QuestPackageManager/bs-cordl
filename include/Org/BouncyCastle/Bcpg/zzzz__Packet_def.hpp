#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Packet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Packet)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Packet);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Packet
class CORDL_TYPE Packet : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::Packet* New_ctor();

  /// @brief Method .ctor, addr 0x3576c64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Packet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Packet(Packet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Packet(Packet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Packet, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Packet*, "Org.BouncyCastle.Bcpg", "Packet");
