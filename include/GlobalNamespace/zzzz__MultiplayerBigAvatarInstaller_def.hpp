#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBigAvatarInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerBigAvatarInstaller)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class SaberManager_InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBigAvatarInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBigAvatarInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBigAvatarInstaller
class CORDL_TYPE MultiplayerBigAvatarInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _playerSpecificSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings,
                      put = __cordl_internal_set__playerSpecificSettings)) ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playerSpecificSettings;

  /// @brief Field _saberManagerInitData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManagerInitData, put = __cordl_internal_set__saberManagerInitData)) ::GlobalNamespace::SaberManager_InitData* _saberManagerInitData;

  /// @brief Method InstallBindings, addr 0x3bda6c0, size 0x414, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerBigAvatarInstaller* New_ctor();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& __cordl_internal_get__playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __cordl_internal_get__playerSpecificSettings();

  constexpr ::GlobalNamespace::SaberManager_InitData* const& __cordl_internal_get__saberManagerInitData() const;

  constexpr ::GlobalNamespace::SaberManager_InitData*& __cordl_internal_get__saberManagerInitData();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr void __cordl_internal_set__saberManagerInitData(::GlobalNamespace::SaberManager_InitData* value);

  /// @brief Method .ctor, addr 0x3bdaad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBigAvatarInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBigAvatarInstaller(MultiplayerBigAvatarInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBigAvatarInstaller(MultiplayerBigAvatarInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4555 };

  /// @brief Field _connectedPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _saberManagerInitData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager_InitData* ____saberManagerInitData;

  /// @brief Field _playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarInstaller, ____connectedPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarInstaller, ____saberManagerInitData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBigAvatarInstaller, ____playerSpecificSettings) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBigAvatarInstaller, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBigAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBigAvatarInstaller*, "", "MultiplayerBigAvatarInstaller");
