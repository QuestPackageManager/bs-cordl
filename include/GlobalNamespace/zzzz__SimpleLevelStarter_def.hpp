#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleLevelStarter)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
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
namespace GlobalNamespace {
class __SimpleLevelStarter___StartLevel_d__17;
}
namespace HMUI {
class ButtonBinder;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
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
namespace GlobalNamespace {
class __SimpleLevelStarter___StartLevel_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleLevelStarter);
MARK_REF_PTR_T(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17);
// Type: ::<StartLevel>d__17
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleLevelStarter::<StartLevel>d__17*
class CORDL_TYPE __SimpleLevelStarter___StartLevel_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::SimpleLevelStarter> __4__this;

  /// @brief Field <handle>5__2, offset 0x28, size 0x20
  __declspec(property(get = __cordl_internal_get__handle_5__2,
                      put = __cordl_internal_set__handle_5__2))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>> _handle_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x241b460, size 0x6d0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x241bb30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x241bb38, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x241bb78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x241b45c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleLevelStarter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleLevelStarter>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>> const& __cordl_internal_get__handle_5__2() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>& __cordl_internal_get__handle_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SimpleLevelStarter> value);

  constexpr void __cordl_internal_set__handle_5__2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>> value);

  /// @brief Method .ctor, addr 0x241b09c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleLevelStarter___StartLevel_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SimpleLevelStarter___StartLevel_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimpleLevelStarter___StartLevel_d__17(__SimpleLevelStarter___StartLevel_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleLevelStarter___StartLevel_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimpleLevelStarter___StartLevel_d__17(__SimpleLevelStarter___StartLevel_d__17 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleLevelStarter> _____4__this;

  /// @brief Field <handle>5__2, offset: 0x28, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>> ____handle_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17, ____handle_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SimpleLevelStarter
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleLevelStarter*
class CORDL_TYPE SimpleLevelStarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _StartLevel_d__17 = ::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17;

  /// @brief Field _beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty, put = __cordl_internal_set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel,
                      put = __cordl_internal_set__beatmapLevel))::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* _beatmapLevel;

  /// @brief Field _button, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _buttonBinder, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _environmentsListModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel))::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _forceOverrideEnvironment, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__forceOverrideEnvironment, put = __cordl_internal_set__forceOverrideEnvironment)) bool _forceOverrideEnvironment;

  /// @brief Field _gameScenesManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameplayModifiers, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _menuTransitionsHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _overrideStrobeFilterSettingsToAllEffects, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideStrobeFilterSettingsToAllEffects,
                      put = __cordl_internal_set__overrideStrobeFilterSettingsToAllEffects)) bool _overrideStrobeFilterSettingsToAllEffects;

  /// @brief Field _playerDataModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _prefabBindings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabBindings,
                      put = __cordl_internal_set__prefabBindings))::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> _prefabBindings;

  /// @brief Field _recordingTextAsset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingTextAsset, put = __cordl_internal_set__recordingTextAsset))::UnityW<::UnityEngine::TextAsset> _recordingTextAsset;

  /// @brief Field _useTestNoteCutSoundEffects, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__useTestNoteCutSoundEffects, put = __cordl_internal_set__useTestNoteCutSoundEffects)) bool _useTestNoteCutSoundEffects;

  /// @brief Method Awake, addr 0x241af1c, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ButtonPressed, addr 0x241b1ec, size 0x20, virtual false, abstract: false, final false
  inline void ButtonPressed();

  /// @brief Method HandleLevelDidFinish, addr 0x241b20c, size 0x3c, virtual false, abstract: false, final false
  inline void HandleLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method InstallEarlyBindings, addr 0x241b0c4, size 0x128, virtual false, abstract: false, final false
  inline void InstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::SimpleLevelStarter* New_ctor();

  /// @brief Method OnDestroy, addr 0x241afe0, size 0x54, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method StartLevel, addr 0x241b034, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartLevel();

  /// @brief Method <StartLevel>g__AfterSceneSwitchCallback|17_0, addr 0x241b320, size 0x13c, virtual false, abstract: false, final false
  inline void _StartLevel_g__AfterSceneSwitchCallback_17_0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& __cordl_internal_get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*> const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentsListModel() const;

  constexpr bool const& __cordl_internal_get__forceOverrideEnvironment() const;

  constexpr bool& __cordl_internal_get__forceOverrideEnvironment();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr bool const& __cordl_internal_get__overrideStrobeFilterSettingsToAllEffects() const;

  constexpr bool& __cordl_internal_get__overrideStrobeFilterSettingsToAllEffects();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get__prefabBindings() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>& __cordl_internal_get__prefabBindings();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__recordingTextAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__recordingTextAsset();

  constexpr bool const& __cordl_internal_get__useTestNoteCutSoundEffects() const;

  constexpr bool& __cordl_internal_get__useTestNoteCutSoundEffects();

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__beatmapLevel(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value);

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__forceOverrideEnvironment(bool value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__overrideStrobeFilterSettingsToAllEffects(bool value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__prefabBindings(::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> value);

  constexpr void __cordl_internal_set__recordingTextAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__useTestNoteCutSoundEffects(bool value);

  /// @brief Method .ctor, addr 0x241b248, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleLevelStarter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleLevelStarter(SimpleLevelStarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleLevelStarter(SimpleLevelStarter const&) = delete;

  /// @brief Field _beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* ____beatmapLevel;

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

  /// @brief Field _environmentsListModel, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _buttonBinder, offset: 0x70, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _gameplayModifiers, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleLevelStarter, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____beatmapLevel) == 0x18, "Offset mismatch!");

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

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____environmentsListModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____buttonBinder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleLevelStarter, ____gameplayModifiers) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleLevelStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
NEED_NO_BOX(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleLevelStarter___StartLevel_d__17*, "", "SimpleLevelStarter/<StartLevel>d__17");
