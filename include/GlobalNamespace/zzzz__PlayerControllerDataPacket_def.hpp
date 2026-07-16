#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerControllerDataPacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerControllerDataPacket)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
struct MultiplayerActiveHand;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerControllerDataPacket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerControllerDataPacket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerControllerDataPacket*, "", "PlayerControllerDataPacket");
// Dependencies MultiplayerActiveHand, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerControllerDataPacket
class CORDL_TYPE PlayerControllerDataPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeHand, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_activeHand, put = __cordl_internal_set_activeHand)) ::GlobalNamespace::MultiplayerActiveHand activeHand;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x32a69d0, size 0x28, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x32a57fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerControllerDataPacket* Init(::GlobalNamespace::MultiplayerActiveHand activeHand);

  static inline ::GlobalNamespace::PlayerControllerDataPacket* New_ctor();

  /// @brief Method Release, addr 0x32a67e8, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x32a69b0, size 0x20, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::MultiplayerActiveHand const& __cordl_internal_get_activeHand() const;

  constexpr ::GlobalNamespace::MultiplayerActiveHand& __cordl_internal_get_activeHand();

  constexpr void __cordl_internal_set_activeHand(::GlobalNamespace::MultiplayerActiveHand value);

  /// @brief Method .ctor, addr 0x32a69f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x32a57b8, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerControllerDataPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerControllerDataPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerControllerDataPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerControllerDataPacket(PlayerControllerDataPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerControllerDataPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerControllerDataPacket(PlayerControllerDataPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18810 };

  /// @brief Field activeHand, offset: 0x10, size: 0x1, def value: None
  ::GlobalNamespace::MultiplayerActiveHand ___activeHand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerControllerDataPacket, ___activeHand) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerControllerDataPacket) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
