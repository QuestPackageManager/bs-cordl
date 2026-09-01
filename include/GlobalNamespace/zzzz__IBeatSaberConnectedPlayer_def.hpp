#pragma once
// IWYU pragma private; include "GlobalNamespace\IBeatSaberConnectedPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatSaberConnectedPlayer)
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
class IBeatSaberConnectedPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBeatSaberConnectedPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBeatSaberConnectedPlayer*, "", "IBeatSaberConnectedPlayer");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatSaberConnectedPlayer
class CORDL_TYPE IBeatSaberConnectedPlayer {
public:
  // Declarations
  __declspec(property(get = get_activeHand)) ::GlobalNamespace::MultiplayerActiveHand activeHand;

  __declspec(property(get = get_multiplayerAvatarsData)) ::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Method get_activeHand, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerActiveHand get_activeHand();

  /// @brief Method get_multiplayerAvatarsData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberConnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatSaberConnectedPlayer(IBeatSaberConnectedPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
