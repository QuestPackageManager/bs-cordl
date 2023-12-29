#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerInstaller)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
// Type: ::MultiplayerLocalInactivePlayerInstaller
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5267))
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

  /// @brief Method InstallBindings addr 0x20fc3a4 size 0x598 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller* New_ctor();

  /// @brief Method .ctor addr 0x20fc988 size 0x8 virtual false final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____audioManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____sceneSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____beatmapLoudnessModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____relativeSfxVolumePerLevelModel) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*, "", "MultiplayerLocalInactivePlayerInstaller");
