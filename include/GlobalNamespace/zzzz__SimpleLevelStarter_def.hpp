#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SimpleLevelStarter)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class TextAsset;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleLevelStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleLevelStarter);
// Type: ::SimpleLevelStarter
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6085))
// CS Name: ::SimpleLevelStarter*
class CORDL_TYPE SimpleLevelStarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _level, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__level, put = __cordl_internal_set__level))::UnityW<::GlobalNamespace::BeatmapLevelSO> _level;

  /// @brief Field _beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty, put = __cordl_internal_set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _useTestNoteCutSoundEffects, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__useTestNoteCutSoundEffects, put = __cordl_internal_set__useTestNoteCutSoundEffects)) bool _useTestNoteCutSoundEffects;

  /// @brief Field _overrideStrobeFilterSettingsToAllEffects, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideStrobeFilterSettingsToAllEffects,
                      put = __cordl_internal_set__overrideStrobeFilterSettingsToAllEffects)) bool _overrideStrobeFilterSettingsToAllEffects;

  /// @brief Field _recordingTextAsset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingTextAsset, put = __cordl_internal_set__recordingTextAsset))::UnityW<::UnityEngine::TextAsset> _recordingTextAsset;

  /// @brief Field _prefabBindings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabBindings,
                      put = __cordl_internal_set__prefabBindings))::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> _prefabBindings;

  /// @brief Field _forceOverrideEnvironment, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__forceOverrideEnvironment, put = __cordl_internal_set__forceOverrideEnvironment)) bool _forceOverrideEnvironment;

  /// @brief Field _button, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _menuTransitionsHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _gameScenesManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _playerDataModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _buttonBinder, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _gameplayModifiers, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__level();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__level() const;

  constexpr void __cordl_internal_set__level(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty() const;

  constexpr void __cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr bool& __cordl_internal_get__useTestNoteCutSoundEffects();

  constexpr bool const& __cordl_internal_get__useTestNoteCutSoundEffects() const;

  constexpr void __cordl_internal_set__useTestNoteCutSoundEffects(bool value);

  constexpr bool& __cordl_internal_get__overrideStrobeFilterSettingsToAllEffects();

  constexpr bool const& __cordl_internal_get__overrideStrobeFilterSettingsToAllEffects() const;

  constexpr void __cordl_internal_set__overrideStrobeFilterSettingsToAllEffects(bool value);

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__recordingTextAsset();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__recordingTextAsset() const;

  constexpr void __cordl_internal_set__recordingTextAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>& __cordl_internal_get__prefabBindings();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get__prefabBindings() const;

  constexpr void __cordl_internal_set__prefabBindings(::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> value);

  constexpr bool& __cordl_internal_get__forceOverrideEnvironment();

  constexpr bool const& __cordl_internal_get__forceOverrideEnvironment() const;

  constexpr void __cordl_internal_set__forceOverrideEnvironment(bool value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method Awake, addr 0x23202d4, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x2320398, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method StartLevel, addr 0x23203b4, size 0x4dc, virtual false, abstract: false, final false
  inline void StartLevel();

  /// @brief Method InstallEarlyBindings, addr 0x2320890, size 0x128, virtual false, abstract: false, final false
  inline void InstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);

  /// @brief Method ButtonPressed, addr 0x23209b8, size 0x4, virtual false, abstract: false, final false
  inline void ButtonPressed();

  /// @brief Method HandleLevelDidFinish, addr 0x23209bc, size 0x28, virtual false, abstract: false, final false
  inline void HandleLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::SimpleLevelStarter* New_ctor();

  /// @brief Method .ctor, addr 0x23209e4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <StartLevel>g__AfterSceneSwitchCallback|16_0, addr 0x2320abc, size 0x13c, virtual false, abstract: false, final false
  inline void _StartLevel_g__AfterSceneSwitchCallback_16_0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleLevelStarter(SimpleLevelStarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleLevelStarter(SimpleLevelStarter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleLevelStarter();

public:
  /// @brief Field _level, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____level;

  /// @brief Field _beatmapCharacteristic, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _useTestNoteCutSoundEffects, offset: 0x2c, size: 0x1, def value: None
  bool ____useTestNoteCutSoundEffects;

  /// @brief Field _overrideStrobeFilterSettingsToAllEffects, offset: 0x2d, size: 0x1, def value: None
  bool ____overrideStrobeFilterSettingsToAllEffects;

  /// @brief Field _recordingTextAsset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____recordingTextAsset;

  /// @brief Field _prefabBindings, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> ____prefabBindings;

  /// @brief Field _forceOverrideEnvironment, offset: 0x40, size: 0x1, def value: None
  bool ____forceOverrideEnvironment;

  /// @brief Field _button, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _menuTransitionsHelper, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _gameScenesManager, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _playerDataModel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _buttonBinder, offset: 0x68, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _gameplayModifiers, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleLevelStarter, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____beatmapCharacteristic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____beatmapDifficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____useTestNoteCutSoundEffects) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____overrideStrobeFilterSettingsToAllEffects) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____recordingTextAsset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____prefabBindings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____forceOverrideEnvironment) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____button) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____menuTransitionsHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____gameScenesManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____playerDataModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____buttonBinder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____gameplayModifiers) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleLevelStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
