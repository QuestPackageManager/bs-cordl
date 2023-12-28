#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerBigAvatarInstaller)
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class __SaberManager__InitData;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBigAvatarInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBigAvatarInstaller);
// Type: ::MultiplayerBigAvatarInstaller
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5192))
// CS Name: ::MultiplayerBigAvatarInstaller*
class CORDL_TYPE MultiplayerBigAvatarInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _saberManagerInitData, offset 0x28, size 0x8
  __declspec(property(get = __get__saberManagerInitData, put = __set__saberManagerInitData))::GlobalNamespace::__SaberManager__InitData* _saberManagerInitData;

  /// @brief Field _playerSpecificSettings, offset 0x30, size 0x8
  __declspec(property(get = __get__playerSpecificSettings, put = __set__playerSpecificSettings))::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playerSpecificSettings;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::__SaberManager__InitData*& __get__saberManagerInitData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> const& __get__saberManagerInitData() const;

  constexpr void __set__saberManagerInitData(::GlobalNamespace::__SaberManager__InitData* value);

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& __get__playerSpecificSettings() const;

  constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  /// @brief Method InstallBindings addr 0x2245108 size 0x414 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerBigAvatarInstaller* New_ctor();

  /// @brief Method .ctor addr 0x224551c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBigAvatarInstaller(MultiplayerBigAvatarInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBigAvatarInstaller(MultiplayerBigAvatarInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBigAvatarInstaller();

public:
  /// @brief Field _connectedPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _saberManagerInitData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__SaberManager__InitData* ____saberManagerInitData;

  /// @brief Field _playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBigAvatarInstaller, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBigAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBigAvatarInstaller*, "", "MultiplayerBigAvatarInstaller");
