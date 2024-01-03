#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExperimentalPacket)
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(579))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(571))
// CS Name: ::Org.BouncyCastle.Bcpg::ExperimentalPacket*
class CORDL_TYPE ExperimentalPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field tag, offset 0x10, size 0x4
  __declspec(property(get = __get_tag, put = __set_tag))::Org::BouncyCastle::Bcpg::PacketTag tag;

  /// @brief Field contents, offset 0x18, size 0x8
  __declspec(property(get = __get_contents, put = __set_contents))::ArrayW<uint8_t, ::Array<uint8_t>*> contents;

  __declspec(property(get = get_Tag))::Org::BouncyCastle::Bcpg::PacketTag Tag;

  constexpr ::Org::BouncyCastle::Bcpg::PacketTag& __get_tag();

  constexpr ::Org::BouncyCastle::Bcpg::PacketTag const& __get_tag() const;

  constexpr void __set_tag(::Org::BouncyCastle::Bcpg::PacketTag value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_contents();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_contents() const;

  constexpr void __set_contents(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::ExperimentalPacket* New_ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11cf298, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method get_Tag, addr 0x11d1be4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PacketTag get_Tag();

  /// @brief Method GetContents, addr 0x11d1bec, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContents();

  /// @brief Method Encode, addr 0x11d1c64, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "ExperimentalPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExperimentalPacket(ExperimentalPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExperimentalPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExperimentalPacket(ExperimentalPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExperimentalPacket();

public:
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
