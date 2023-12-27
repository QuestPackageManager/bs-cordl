#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Bcpg::ContainedPacket
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(560))
// CS Name: ::Org.BouncyCastle.Bcpg::ContainedPacket*
class CORDL_TYPE ContainedPacket : public ::Org::BouncyCastle::Bcpg::Packet {
public:
  // Declarations
  /// @brief Method GetEncoded addr 0x11d041c size 0xb0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  static inline ::Org::BouncyCastle::Bcpg::ContainedPacket* New_ctor();

  /// @brief Method .ctor addr 0x11d04cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ContainedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainedPacket(ContainedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainedPacket(ContainedPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainedPacket();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ContainedPacket, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ContainedPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ContainedPacket*, "Org.BouncyCastle.Bcpg", "ContainedPacket");
