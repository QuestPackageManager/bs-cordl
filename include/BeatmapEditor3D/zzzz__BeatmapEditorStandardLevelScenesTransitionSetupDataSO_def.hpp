#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorStandardLevelScenesTransitionSetupDataSO)
namespace System {
class Action;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO);
// Type: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapEditor3D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6125))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6146))
// CS Name: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*
class CORDL_TYPE BeatmapEditorStandardLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _standardGameplaySceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __get__standardGameplaySceneInfo, put = __set__standardGameplaySceneInfo))::GlobalNamespace::SceneInfo* _standardGameplaySceneInfo;

  /// @brief Field _beatmapEditorGameplaySceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapEditorGameplaySceneInfo, put = __set__beatmapEditorGameplaySceneInfo))::GlobalNamespace::SceneInfo* _beatmapEditorGameplaySceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset 0x48, size 0x8
  __declspec(property(get = __get__gameCoreSceneInfo, put = __set__gameCoreSceneInfo))::GlobalNamespace::SceneInfo* _gameCoreSceneInfo;

  /// @brief Field _mainSettingsModel, offset 0x50, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field didFinishEvent, offset 0x58, size 0x8
  __declspec(
      property(get = __get_didFinishEvent,
               put = __set_didFinishEvent))::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* didFinishEvent;

  constexpr ::GlobalNamespace::SceneInfo*& __get__standardGameplaySceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__standardGameplaySceneInfo() const;

  constexpr void __set__standardGameplaySceneInfo(::GlobalNamespace::SceneInfo* value);

  constexpr ::GlobalNamespace::SceneInfo*& __get__beatmapEditorGameplaySceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__beatmapEditorGameplaySceneInfo() const;

  constexpr void __set__beatmapEditorGameplaySceneInfo(::GlobalNamespace::SceneInfo* value);

  constexpr ::GlobalNamespace::SceneInfo*& __get__gameCoreSceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__gameCoreSceneInfo() const;

  constexpr void __set__gameCoreSceneInfo(::GlobalNamespace::SceneInfo* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method add_didFinishEvent addr 0x21e4338 size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method remove_didFinishEvent addr 0x21e4288 size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method Init addr 0x21e43e8 size 0x5e0 virtual false final false
  inline void Init(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                   ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useFirstPersonFlyingController,
                   ::System::Action* beforeSceneSwitchCallback,
                   ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  /// @brief Method Finish addr 0x21e62f0 size 0x28 virtual false final false
  inline void Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor addr 0x21e6318 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorStandardLevelScenesTransitionSetupDataSO(BeatmapEditorStandardLevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorStandardLevelScenesTransitionSetupDataSO(BeatmapEditorStandardLevelScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO();

public:
  /// @brief Field _standardGameplaySceneInfo, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____standardGameplaySceneInfo;

  /// @brief Field _beatmapEditorGameplaySceneInfo, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____beatmapEditorGameplaySceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____gameCoreSceneInfo;

  /// @brief Field _mainSettingsModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field didFinishEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, 0x60>, "Size mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____standardGameplaySceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____beatmapEditorGameplaySceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____mainSettingsModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x58, "Offset mismatch!");

} // namespace BeatmapEditor3D
NEED_NO_BOX(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, "BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO");
