#pragma once
// IWYU pragma private; include "BeatmapEditor3D/BeatmapEditorStandardLevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorStandardLevelScenesTransitionSetupDataSO)
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO);
// Type: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapEditor3D {
// Is value type: false
// CS Name: ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*
class CORDL_TYPE BeatmapEditorStandardLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _beatmapEditorGameplaySceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorGameplaySceneInfo,
                      put = __cordl_internal_set__beatmapEditorGameplaySceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _beatmapEditorGameplaySceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Field _standardGameplaySceneInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__standardGameplaySceneInfo, put = __cordl_internal_set__standardGameplaySceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _standardGameplaySceneInfo;

  /// @brief Field didFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>,
                                                                                    ::GlobalNamespace::LevelCompletionResults*>* didFinishEvent;

  /// @brief Method Finish, addr 0x26a7974, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Init, addr 0x26a799c, size 0x468, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                   ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                   ::BeatSaber::PerformancePresets::PerformancePreset* performancePreset, bool useFirstPersonFlyingController, ::System::Action* beforeSceneSwitchCallback,
                   ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  static inline ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__beatmapEditorGameplaySceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__beatmapEditorGameplaySceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__standardGameplaySceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__standardGameplaySceneInfo();

  constexpr ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__beatmapEditorGameplaySceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__standardGameplaySceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void
  __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x26a7e04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x26a78c4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x26a5cd0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorStandardLevelScenesTransitionSetupDataSO(BeatmapEditorStandardLevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorStandardLevelScenesTransitionSetupDataSO(BeatmapEditorStandardLevelScenesTransitionSetupDataSO const&) = delete;

  /// @brief Field _standardGameplaySceneInfo, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____standardGameplaySceneInfo;

  /// @brief Field _beatmapEditorGameplaySceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____beatmapEditorGameplaySceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  /// @brief Field didFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____standardGameplaySceneInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____beatmapEditorGameplaySceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x48, "Offset mismatch!");

} // namespace BeatmapEditor3D
NEED_NO_BOX(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, "BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO");
