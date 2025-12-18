#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerStatePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerStatePacket)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
struct PlayerStateHash;
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
class PlayerStatePacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStatePacket);
// Dependencies PlayerStateHash, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerStatePacket
class CORDL_TYPE PlayerStatePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_playerState, put = __cordl_internal_set_playerState)) ::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x3232150, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x32321d0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerStatePacket* Init(::GlobalNamespace::PlayerStateHash states);

  static inline ::GlobalNamespace::PlayerStatePacket* New_ctor();

  /// @brief Method Release, addr 0x3232178, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x323213c, size 0xc, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get_playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get_playerState();

  constexpr void __cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value);

  /// @brief Method .ctor, addr 0x32321d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x32320f8, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerStatePacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStatePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerStatePacket(PlayerStatePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerStatePacket(PlayerStatePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18096 };

  /// @brief Field playerState, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ___playerState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerStatePacket, ___playerState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatePacket, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatePacket*, "", "PlayerStatePacket");
