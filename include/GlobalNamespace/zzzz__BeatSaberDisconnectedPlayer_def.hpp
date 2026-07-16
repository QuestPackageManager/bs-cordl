#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberDisconnectedPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatSaberDisconnectedPlayer)
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct MultiplayerActiveHand;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberDisconnectedPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatSaberDisconnectedPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberDisconnectedPlayer*, "", "BeatSaberDisconnectedPlayer");
// Dependencies DisconnectedPlayer, MultiplayerActiveHand, MultiplayerAvatarsData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberDisconnectedPlayer
class CORDL_TYPE BeatSaberDisconnectedPlayer : public ::GlobalNamespace::DisconnectedPlayer {
public:
  // Declarations
  /// @brief Field <activeHand>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__activeHand_k__BackingField,
                      put = __cordl_internal_set__activeHand_k__BackingField)) ::GlobalNamespace::MultiplayerActiveHand _activeHand_k__BackingField;

  /// @brief Field <multiplayerAvatarsData>k__BackingField, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__multiplayerAvatarsData_k__BackingField,
                      put = __cordl_internal_set__multiplayerAvatarsData_k__BackingField)) ::GlobalNamespace::MultiplayerAvatarsData _multiplayerAvatarsData_k__BackingField;

  __declspec(property(get = get_activeHand)) ::GlobalNamespace::MultiplayerActiveHand activeHand;

  __declspec(property(get = get_multiplayerAvatarsData)) ::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
  constexpr operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  static inline ::GlobalNamespace::BeatSaberDisconnectedPlayer* New_ctor(::StringW userId, ::StringW userName, int32_t sortIndex);

  constexpr ::GlobalNamespace::MultiplayerActiveHand const& __cordl_internal_get__activeHand_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerActiveHand& __cordl_internal_get__activeHand_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__multiplayerAvatarsData_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__multiplayerAvatarsData_k__BackingField();

  constexpr void __cordl_internal_set__activeHand_k__BackingField(::GlobalNamespace::MultiplayerActiveHand value);

  constexpr void __cordl_internal_set__multiplayerAvatarsData_k__BackingField(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method .ctor, addr 0x32a69fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW userId, ::StringW userName, int32_t sortIndex);

  /// @brief Method get_activeHand, addr 0x32a6a1c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerActiveHand get_activeHand();

  /// @brief Method get_multiplayerAvatarsData, addr 0x32a6a08, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept;

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberDisconnectedPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberDisconnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberDisconnectedPlayer(BeatSaberDisconnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberDisconnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberDisconnectedPlayer(BeatSaberDisconnectedPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18811 };

  /// @brief Field <multiplayerAvatarsData>k__BackingField, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____multiplayerAvatarsData_k__BackingField;

  /// @brief Field <activeHand>k__BackingField, offset: 0x40, size: 0x1, def value: None
  ::GlobalNamespace::MultiplayerActiveHand ____activeHand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberDisconnectedPlayer, ____multiplayerAvatarsData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberDisconnectedPlayer, ____activeHand_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatSaberDisconnectedPlayer) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
