#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberPlayerIdentityPacketData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BeatSaberPlayerIdentityPacketData)
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
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
struct BeatSaberPlayerIdentityPacketData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatSaberPlayerIdentityPacketData);
// Dependencies MultiplayerAvatarsData
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatSaberPlayerIdentityPacketData
struct CORDL_TYPE BeatSaberPlayerIdentityPacketData {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Method Deserialize, addr 0x31d2aa8, size 0x38, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Serialize, addr 0x31d2a80, size 0x28, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method .ctor, addr 0x31d2a6c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerAvatarsData playerAvatar);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberPlayerIdentityPacketData();

  // Ctor Parameters [CppParam { name: "playerAvatar", ty: "::GlobalNamespace::MultiplayerAvatarsData", modifiers: "", def_value: None }]
  constexpr BeatSaberPlayerIdentityPacketData(::GlobalNamespace::MultiplayerAvatarsData playerAvatar) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field playerAvatar, offset: 0x0, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberPlayerIdentityPacketData, playerAvatar) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberPlayerIdentityPacketData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberPlayerIdentityPacketData, "", "BeatSaberPlayerIdentityPacketData");
