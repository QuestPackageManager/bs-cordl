#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerInstaller)
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
// Type: ::MultiplayerLocalInactivePlayerInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5162))
// CS Name: ::MultiplayerLocalInactivePlayerInstaller*
class CORDL_TYPE MultiplayerLocalInactivePlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _audioManager, offset 0x20, size 0x8
  __declspec(property(get = __get__audioManager, put = __set__audioManager))::GlobalNamespace::AudioManagerSO* _audioManager;

  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _beatmapLoudnessModel, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapLoudnessModel, put = __set__beatmapLoudnessModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _beatmapLoudnessModel;

  /// @brief Field _relativeSfxVolumePerLevelModel, offset 0x38, size 0x8
  __declspec(property(get = __get__relativeSfxVolumePerLevelModel, put = __set__relativeSfxVolumePerLevelModel))::GlobalNamespace::RelativeSfxVolumePerLevelModel* _relativeSfxVolumePerLevelModel;

  /// @brief Field _playerDataModel, offset 0x40, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset 0x48, size 0x8
  __declspec(property(get = __get__optionalAvatarDataSender, put = __set__optionalAvatarDataSender))::BeatSaber::AvatarCore::OptionalAvatarDataSender* _optionalAvatarDataSender;

  constexpr ::GlobalNamespace::AudioManagerSO*& __get__audioManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& __get__audioManager() const;

  constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __get__beatmapLoudnessModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __get__beatmapLoudnessModel() const;

  constexpr void __set__beatmapLoudnessModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel*& __get__relativeSfxVolumePerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> const& __get__relativeSfxVolumePerLevelModel() const;

  constexpr void __set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& __get__optionalAvatarDataSender();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> const& __get__optionalAvatarDataSender() const;

  constexpr void __set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value);

  /// @brief Method InstallBindings addr 0x23dcc48 size 0x5d0 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller* New_ctor();

  /// @brief Method .ctor addr 0x23dd264 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerInstaller(MultiplayerLocalInactivePlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerInstaller(MultiplayerLocalInactivePlayerInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerInstaller();

public:
  /// @brief Field _audioManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioManagerSO* ____audioManager;

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _beatmapLoudnessModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____beatmapLoudnessModel;

  /// @brief Field _relativeSfxVolumePerLevelModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::RelativeSfxVolumePerLevelModel* ____relativeSfxVolumePerLevelModel;

  /// @brief Field _playerDataModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSender* ____optionalAvatarDataSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*, "", "MultiplayerLocalInactivePlayerInstaller");
