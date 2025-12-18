#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAvatarPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerAvatarPacket)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
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
class PlayerAvatarPacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerAvatarPacket);
// Dependencies MultiplayerAvatarsData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerAvatarPacket
class CORDL_TYPE PlayerAvatarPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerAvatar, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_playerAvatar, put = __cordl_internal_set_playerAvatar)) ::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x3232050, size 0x38, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x32320e0, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAvatarPacket* Init(::GlobalNamespace::MultiplayerAvatarsData avatar);

  static inline ::GlobalNamespace::PlayerAvatarPacket* New_ctor();

  /// @brief Method Release, addr 0x3232088, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x3232024, size 0x2c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get_playerAvatar() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get_playerAvatar();

  constexpr void __cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method .ctor, addr 0x32320f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x3231fe0, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerAvatarPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAvatarPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerAvatarPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAvatarPacket(PlayerAvatarPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAvatarPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAvatarPacket(PlayerAvatarPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18095 };

  /// @brief Field playerAvatar, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ___playerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAvatarPacket, ___playerAvatar) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAvatarPacket, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerAvatarPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAvatarPacket*, "", "PlayerAvatarPacket");
