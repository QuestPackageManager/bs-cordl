#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatSaberConnectedPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatSaberConnectedPlayer)
namespace GlobalNamespace {
class ConnectedPlayerExtension;
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
namespace System {
template <typename T> class Action_1;
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

  __declspec(property(get = get_extension)) ::GlobalNamespace::ConnectedPlayerExtension* extension;

  __declspec(property(get = get_isAvatarResolved)) bool isAvatarResolved;

  __declspec(property(get = get_multiplayerAvatarsData)) ::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Method SetMultiplayerAvatarsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetMultiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData avatarsData);

  /// [CompilerGenerated]
  /// @brief Method add_avatarDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  /// @brief Method get_activeHand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerActiveHand get_activeHand();

  /// @brief Method get_extension, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::ConnectedPlayerExtension* get_extension();

  /// @brief Method get_isAvatarResolved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isAvatarResolved();

  /// @brief Method get_multiplayerAvatarsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_avatarDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberConnectedPlayer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatSaberConnectedPlayer(IBeatSaberConnectedPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
