#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(UserAttributePacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributePacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserAttributePacket);
// Type: Org.BouncyCastle.Bcpg::UserAttributePacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(597))
// CS Name: ::Org.BouncyCastle.Bcpg::UserAttributePacket*
class CORDL_TYPE UserAttributePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field subpackets, offset 0x10, size 0x8
  __declspec(property(get = __get_subpackets,
                      put = __set_subpackets))::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>& __get_subpackets();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> const& __get_subpackets() const;

  constexpr void __set_subpackets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> value);

  static inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x115dc20 size 0x324 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::UserAttributePacket*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets);

  /// @brief Method .ctor addr 0x1163cbc size 0x28 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets);

  /// @brief Method GetSubpackets addr 0x1163ce4 size 0x8 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> GetSubpackets();

  /// @brief Method Encode addr 0x1163cec size 0xd8 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "UserAttributePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAttributePacket(UserAttributePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAttributePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAttributePacket(UserAttributePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAttributePacket();

public:
  /// @brief Field subpackets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> ___subpackets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributePacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributePacket, ___subpackets) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributePacket*, "Org.BouncyCastle.Bcpg", "UserAttributePacket");
