#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\MarkerPacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarkerPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class MarkerPacket;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::MarkerPacket*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::MarkerPacket*, "Org.BouncyCastle.Bcpg", "MarkerPacket");
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.MarkerPacket
class CORDL_TYPE MarkerPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field marker, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_marker, put = __cordl_internal_set_marker)) ::ArrayW<uint8_t> marker;

  /// @brief Method Encode, addr 0x369e7e4, size 0x20, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  static inline ::Org::BouncyCastle::Bcpg::MarkerPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_marker() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_marker();

  constexpr void __cordl_internal_set_marker(::ArrayW<uint8_t> value);

  /// @brief Method .ctor, addr 0x369b760, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkerPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarkerPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarkerPacket(MarkerPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarkerPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarkerPacket(MarkerPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 574 };

  /// @brief Field marker, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___marker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::MarkerPacket, ___marker) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Bcpg::MarkerPacket) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
