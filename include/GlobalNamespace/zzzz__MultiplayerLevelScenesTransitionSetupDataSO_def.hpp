#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
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
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO);
// Type: ::MultiplayerLevelScenesTransitionSetupDataSO
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6067)), TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6076))
// CS Name: ::MultiplayerLevelScenesTransitionSetupDataSO*
class CORDL_TYPE MultiplayerLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _multiplayerLevelSceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelSceneInfo, put = __cordl_internal_set__multiplayerLevelSceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _multiplayerLevelSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Field _multiplayerEnvironmentInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerEnvironmentInfo,
                      put = __cordl_internal_set__multiplayerEnvironmentInfo))::UnityW<::GlobalNamespace::EnvironmentInfoSO> _multiplayerEnvironmentInfo;

  /// @brief Field _mainSettingsModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field didFinishEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                                                               ::GlobalNamespace::MultiplayerResultsData*>* didFinishEvent;

  /// @brief Field didDisconnectEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_didDisconnectEvent,
                      put = __cordl_internal_set_didDisconnectEvent))::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                        ::GlobalNamespace::DisconnectedReason>* didDisconnectEvent;

  /// @brief Field <gameMode>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__gameMode_k__BackingField, put = __cordl_internal_set__gameMode_k__BackingField))::StringW _gameMode_k__BackingField;

  /// @brief Field <previewBeatmapLevel>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__previewBeatmapLevel_k__BackingField,
                      put = __cordl_internal_set__previewBeatmapLevel_k__BackingField))::GlobalNamespace::IPreviewBeatmapLevel* _previewBeatmapLevel_k__BackingField;

  /// @brief Field <beatmapDifficulty>k__BackingField, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty_k__BackingField,
                      put = __cordl_internal_set__beatmapDifficulty_k__BackingField))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty_k__BackingField;

  /// @brief Field <difficultyBeatmap>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmap_k__BackingField,
                      put = __cordl_internal_set__difficultyBeatmap_k__BackingField))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap_k__BackingField;

  /// @brief Field <beatmapCharacteristic>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic_k__BackingField,
                      put = __cordl_internal_set__beatmapCharacteristic_k__BackingField))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic_k__BackingField;

  /// @brief Field <usingOverrideColorScheme>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__usingOverrideColorScheme_k__BackingField,
                      put = __cordl_internal_set__usingOverrideColorScheme_k__BackingField)) bool _usingOverrideColorScheme_k__BackingField;

  /// @brief Field <colorScheme>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme_k__BackingField, put = __cordl_internal_set__colorScheme_k__BackingField))::GlobalNamespace::ColorScheme* _colorScheme_k__BackingField;

  __declspec(property(get = get_gameMode, put = set_gameMode))::StringW gameMode;

  __declspec(property(get = get_previewBeatmapLevel, put = set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  __declspec(property(get = get_beatmapDifficulty, put = set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  __declspec(property(get = get_difficultyBeatmap, put = set_difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  __declspec(property(get = get_beatmapCharacteristic, put = set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  __declspec(property(get = get_usingOverrideColorScheme, put = set_usingOverrideColorScheme)) bool usingOverrideColorScheme;

  __declspec(property(get = get_colorScheme, put = set_colorScheme))::GlobalNamespace::ColorScheme* colorScheme;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__multiplayerLevelSceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__multiplayerLevelSceneInfo() const;

  constexpr void __cordl_internal_set__multiplayerLevelSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__multiplayerEnvironmentInfo();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__multiplayerEnvironmentInfo() const;

  constexpr void __cordl_internal_set__multiplayerEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_didDisconnectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>*> const&
  __cordl_internal_get_didDisconnectEvent() const;

  constexpr void __cordl_internal_set_didDisconnectEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::StringW& __cordl_internal_get__gameMode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__gameMode_k__BackingField() const;

  constexpr void __cordl_internal_set__gameMode_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __cordl_internal_get__previewBeatmapLevel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __cordl_internal_get__previewBeatmapLevel_k__BackingField() const;

  constexpr void __cordl_internal_set__previewBeatmapLevel_k__BackingField(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty_k__BackingField() const;

  constexpr void __cordl_internal_set__beatmapDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __cordl_internal_get__difficultyBeatmap_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __cordl_internal_get__difficultyBeatmap_k__BackingField() const;

  constexpr void __cordl_internal_set__difficultyBeatmap_k__BackingField(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic_k__BackingField() const;

  constexpr void __cordl_internal_set__beatmapCharacteristic_k__BackingField(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr bool& __cordl_internal_get__usingOverrideColorScheme_k__BackingField();

  constexpr bool const& __cordl_internal_get__usingOverrideColorScheme_k__BackingField() const;

  constexpr void __cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value);

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get__colorScheme_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __cordl_internal_get__colorScheme_k__BackingField() const;

  constexpr void __cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value);

  /// @brief Method add_didFinishEvent, addr 0x231d778, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x231db6c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method add_didDisconnectEvent, addr 0x231e914, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDisconnectEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_didDisconnectEvent, addr 0x231e230, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDisconnectEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method get_gameMode, addr 0x231febc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method set_gameMode, addr 0x231fec4, size 0x8, virtual false, abstract: false, final false
  inline void set_gameMode(::StringW value);

  /// @brief Method get_previewBeatmapLevel, addr 0x231fecc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();

  /// @brief Method set_previewBeatmapLevel, addr 0x231fed4, size 0x8, virtual false, abstract: false, final false
  inline void set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  /// @brief Method get_beatmapDifficulty, addr 0x231fedc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();

  /// @brief Method set_beatmapDifficulty, addr 0x231fee4, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method get_difficultyBeatmap, addr 0x231feec, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();

  /// @brief Method set_difficultyBeatmap, addr 0x231fef4, size 0x8, virtual false, abstract: false, final false
  inline void set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  /// @brief Method get_beatmapCharacteristic, addr 0x231fefc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_beatmapCharacteristic();

  /// @brief Method set_beatmapCharacteristic, addr 0x231ff04, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method get_usingOverrideColorScheme, addr 0x231ff0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_usingOverrideColorScheme();

  /// @brief Method set_usingOverrideColorScheme, addr 0x231ff14, size 0xc, virtual false, abstract: false, final false
  inline void set_usingOverrideColorScheme(bool value);

  /// @brief Method get_colorScheme, addr 0x231ff20, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* get_colorScheme();

  /// @brief Method set_colorScheme, addr 0x231ff28, size 0x8, virtual false, abstract: false, final false
  inline void set_colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method Init, addr 0x231e9c4, size 0x3b0, virtual false, abstract: false, final false
  inline void Init(::StringW gameMode, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                   ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                   bool useTestNoteCutSoundEffects);

  /// @brief Method Finish, addr 0x231ff30, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::MultiplayerResultsData* resultsData);

  /// @brief Method FinishWithDisconnect, addr 0x231ff58, size 0x28, virtual false, abstract: false, final false
  inline void FinishWithDisconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  static inline ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x231ff80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelScenesTransitionSetupDataSO(MultiplayerLevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelScenesTransitionSetupDataSO(MultiplayerLevelScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelScenesTransitionSetupDataSO();

public:
  /// @brief Field _multiplayerLevelSceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____multiplayerLevelSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  /// @brief Field _multiplayerEnvironmentInfo, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____multiplayerEnvironmentInfo;

  /// @brief Field _mainSettingsModel, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field didFinishEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* ___didFinishEvent;

  /// @brief Field didDisconnectEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* ___didDisconnectEvent;

  /// @brief Field <gameMode>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____gameMode_k__BackingField;

  /// @brief Field <previewBeatmapLevel>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____previewBeatmapLevel_k__BackingField;

  /// @brief Field <beatmapDifficulty>k__BackingField, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty_k__BackingField;

  /// @brief Field <difficultyBeatmap>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap_k__BackingField;

  /// @brief Field <beatmapCharacteristic>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic_k__BackingField;

  /// @brief Field <usingOverrideColorScheme>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____usingOverrideColorScheme_k__BackingField;

  /// @brief Field <colorScheme>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____multiplayerLevelSceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____multiplayerEnvironmentInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____mainSettingsModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ___didDisconnectEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____gameMode_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____previewBeatmapLevel_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____beatmapDifficulty_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____difficultyBeatmap_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____beatmapCharacteristic_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____usingOverrideColorScheme_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____colorScheme_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, "", "MultiplayerLevelScenesTransitionSetupDataSO");
