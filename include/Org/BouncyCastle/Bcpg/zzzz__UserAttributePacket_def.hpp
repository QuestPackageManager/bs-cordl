#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/UserAttributePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
CORDL_MODULE_EXPORT(UserAttributePacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributePacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserAttributePacket);
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.UserAttributePacket
class CORDL_TYPE UserAttributePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field subpackets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subpackets,
                      put = __cordl_internal_set_subpackets)) ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>
      subpackets;

  /// @brief Method Encode, addr 0x264bc4c, size 0xd8, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetSubpackets, addr 0x264bc44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> GetSubpackets();

  static inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::UserAttributePacket*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> const& __cordl_internal_get_subpackets() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>& __cordl_internal_get_subpackets();

  constexpr void __cordl_internal_set_subpackets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> value);

  /// @brief Method .ctor, addr 0x2645cf0, size 0x32c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x264bc1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAttributePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserAttributePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAttributePacket(UserAttributePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAttributePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAttributePacket(UserAttributePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 597 };

  /// @brief Field subpackets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> ___subpackets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributePacket, ___subpackets) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributePacket, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributePacket*, "Org.BouncyCastle.Bcpg", "UserAttributePacket");
