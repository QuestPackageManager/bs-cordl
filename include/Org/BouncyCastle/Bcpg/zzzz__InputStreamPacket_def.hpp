#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/InputStreamPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
CORDL_MODULE_EXPORT(InputStreamPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::InputStreamPacket);
// Dependencies Org.BouncyCastle.Bcpg.Packet
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.InputStreamPacket
class CORDL_TYPE InputStreamPacket : public ::Org::BouncyCastle::Bcpg::Packet {
public:
  // Declarations
  /// @brief Field bcpgIn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bcpgIn, put = __cordl_internal_set_bcpgIn)) ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn;

  /// @brief Method GetInputStream, addr 0x3576c68, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* GetInputStream();

  static inline ::Org::BouncyCastle::Bcpg::InputStreamPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* const& __cordl_internal_get_bcpgIn() const;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& __cordl_internal_get_bcpgIn();

  constexpr void __cordl_internal_set_bcpgIn(::Org::BouncyCastle::Bcpg::BcpgInputStream* value);

  /// @brief Method .ctor, addr 0x3573c08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStreamPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputStreamPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputStreamPacket(InputStreamPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputStreamPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputStreamPacket(InputStreamPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 557 };

  /// @brief Field bcpgIn, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgInputStream* ___bcpgIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::InputStreamPacket, ___bcpgIn) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::InputStreamPacket, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::InputStreamPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::InputStreamPacket*, "Org.BouncyCastle.Bcpg", "InputStreamPacket");
