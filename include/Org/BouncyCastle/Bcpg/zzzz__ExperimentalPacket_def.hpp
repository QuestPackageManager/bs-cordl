#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ExperimentalPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExperimentalPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ExperimentalPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ExperimentalPacket);
// Type: Org.BouncyCastle.Bcpg::ExperimentalPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::ExperimentalPacket*
class CORDL_TYPE ExperimentalPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  __declspec(property(get = get_Tag))::Org::BouncyCastle::Bcpg::PacketTag Tag;

  /// @brief Field contents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contents, put = __cordl_internal_set_contents))::ArrayW<uint8_t, ::Array<uint8_t>*> contents;

  /// @brief Field tag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tag, put = __cordl_internal_set_tag))::Org::BouncyCastle::Bcpg::PacketTag tag;

  /// @brief Method Encode, addr 0x1435470, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetContents, addr 0x14353f8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContents();

  static inline ::Org::BouncyCastle::Bcpg::ExperimentalPacket* New_ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_contents() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_contents();

  constexpr ::Org::BouncyCastle::Bcpg::PacketTag const& __cordl_internal_get_tag() const;

  constexpr ::Org::BouncyCastle::Bcpg::PacketTag& __cordl_internal_get_tag();

  constexpr void __cordl_internal_set_contents(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_tag(::Org::BouncyCastle::Bcpg::PacketTag value);

  /// @brief Method .ctor, addr 0x1432aa4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method get_Tag, addr 0x14353f0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PacketTag get_Tag();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExperimentalPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExperimentalPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExperimentalPacket(ExperimentalPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExperimentalPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExperimentalPacket(ExperimentalPacket const&) = delete;

  /// @brief Field tag, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PacketTag ___tag;

  /// @brief Field contents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___contents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ExperimentalPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ExperimentalPacket, ___tag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ExperimentalPacket, ___contents) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ExperimentalPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ExperimentalPacket*, "Org.BouncyCastle.Bcpg", "ExperimentalPacket");
