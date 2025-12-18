#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ContainedPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContainedPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ContainedPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ContainedPacket);
// Dependencies Org.BouncyCastle.Bcpg.Packet
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.ContainedPacket
class CORDL_TYPE ContainedPacket : public ::Org::BouncyCastle::Bcpg::Packet {
public:
  // Declarations
  /// @brief Method Encode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x35a14bc, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::ContainedPacket* New_ctor();

  /// @brief Method .ctor, addr 0x35a1574, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainedPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainedPacket(ContainedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainedPacket(ContainedPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ContainedPacket, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ContainedPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ContainedPacket*, "Org.BouncyCastle.Bcpg", "ContainedPacket");
