#pragma once
// IWYU pragma private; include "GlobalNamespace/WaypointsTestMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaypointsTestMenuViewController)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO;
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
class ICoroutineStarter;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class WaypointsTestMenuViewController__CheckBeatmaps_d__18;
}
namespace HMUI {
class ButtonBinder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointsTestMenuViewController;
}
namespace GlobalNamespace {
class WaypointsTestMenuViewController__CheckBeatmaps_d__18;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestMenuViewController);
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18);
// Dependencies BeatmapDifficulty, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaypointsTestMenuViewController/<CheckBeatmaps>d__18
class CORDL_TYPE WaypointsTestMenuViewController__CheckBeatmaps_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> __4__this;

  /// @brief Field <>7__wrap3, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>>
      __7__wrap3;

  /// @brief Field <>7__wrap6, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap6,
                      put = __cordl_internal_set___7__wrap6)) ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>
      __7__wrap6;

  /// @brief Field <>7__wrap8, offset 0x80, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap8, put = __cordl_internal_set___7__wrap8)) ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapDifficulty> __7__wrap8;

  /// @brief Field <beatmapLevelData>5__6, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData_5__6, put = __cordl_internal_set__beatmapLevelData_5__6)) ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> _beatmapLevelData_5__6;

  /// @brief Field <characteristic>5__8, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic_5__8, put = __cordl_internal_set__characteristic_5__8)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _characteristic_5__8;

  /// @brief Field <count>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__count_5__2, put = __cordl_internal_set__count_5__2)) int32_t _count_5__2;

  /// @brief Field <difficultiesToCheck>5__3, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultiesToCheck_5__3,
                      put = __cordl_internal_set__difficultiesToCheck_5__3)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* _difficultiesToCheck_5__3;

  /// @brief Field <difficulty>5__10, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty_5__10, put = __cordl_internal_set__difficulty_5__10)) ::GlobalNamespace::BeatmapDifficulty _difficulty_5__10;

  /// @brief Field <previewLevel>5__5, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__previewLevel_5__5, put = __cordl_internal_set__previewLevel_5__5)) ::UnityW<::GlobalNamespace::BeatmapLevelSO> _previewLevel_5__5;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2267644, size 0xab8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22681ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22681f4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x226822c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22674e8, size 0x15c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::WaypointsTestMenuViewController>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>>& __cordl_internal_get___7__wrap3();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> const& __cordl_internal_get___7__wrap6() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>& __cordl_internal_get___7__wrap6();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapDifficulty> const& __cordl_internal_get___7__wrap8() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapDifficulty>& __cordl_internal_get___7__wrap8();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> const& __cordl_internal_get__beatmapLevelData_5__6() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelDataSO>& __cordl_internal_get__beatmapLevelData_5__6();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__characteristic_5__8() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__characteristic_5__8();

  constexpr int32_t const& __cordl_internal_get__count_5__2() const;

  constexpr int32_t& __cordl_internal_get__count_5__2();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* const& __cordl_internal_get__difficultiesToCheck_5__3() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get__difficultiesToCheck_5__3();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty_5__10() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty_5__10();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__previewLevel_5__5() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__previewLevel_5__5();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> value);

  constexpr void __cordl_internal_set___7__wrap6(::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> value);

  constexpr void __cordl_internal_set___7__wrap8(::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapDifficulty> value);

  constexpr void __cordl_internal_set__beatmapLevelData_5__6(::UnityW<::GlobalNamespace::BeatmapLevelDataSO> value);

  constexpr void __cordl_internal_set__characteristic_5__8(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__count_5__2(int32_t value);

  constexpr void __cordl_internal_set__difficultiesToCheck_5__3(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr void __cordl_internal_set__difficulty_5__10(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__previewLevel_5__5(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  /// @brief Method <>m__Finally1, addr 0x226819c, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x226814c, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x22680fc, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method .ctor, addr 0x226731c, size 0x28, virtual false, abstract: false, final false
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
  constexpr WaypointsTestMenuViewController__CheckBeatmaps_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController__CheckBeatmaps_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointsTestMenuViewController__CheckBeatmaps_d__18(WaypointsTestMenuViewController__CheckBeatmaps_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController__CheckBeatmaps_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointsTestMenuViewController__CheckBeatmaps_d__18(WaypointsTestMenuViewController__CheckBeatmaps_d__18 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17698 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> _____4__this;

  /// @brief Field <count>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____count_5__2;

  /// @brief Field <difficultiesToCheck>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* ____difficultiesToCheck_5__3;

  /// @brief Field <>7__wrap3, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> _____7__wrap3;

  /// @brief Field <previewLevel>5__5, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____previewLevel_5__5;

  /// @brief Field <beatmapLevelData>5__6, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> ____beatmapLevelData_5__6;

  /// @brief Field <>7__wrap6, offset: 0x60, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> _____7__wrap6;

  /// @brief Field <characteristic>5__8, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____characteristic_5__8;

  /// @brief Field <>7__wrap8, offset: 0x80, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapDifficulty> _____7__wrap8;

  /// @brief Field <difficulty>5__10, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty_5__10;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, ____count_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, ____difficultiesToCheck_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, _____7__wrap3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, ____previewLevel_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, ____beatmapLevelData_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, _____7__wrap6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, ____characteristic_5__8) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, _____7__wrap8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, ____difficulty_5__10) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaypointsTestMenuViewController
class CORDL_TYPE WaypointsTestMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _CheckBeatmaps_d__18 = ::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18;

  /// @brief Field _audioClipAsyncLoader, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _btsButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__btsButton, put = __cordl_internal_set__btsButton)) ::UnityW<::UnityEngine::UI::Button> _btsButton;

  /// @brief Field _buttonBinder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _cancelButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _characteristics, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristics,
                      put = __cordl_internal_set__characteristics)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* _characteristics;

  /// @brief Field _coroutineStarter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _environmentsListModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameScenesManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _isCancelled, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__isCancelled, put = __cordl_internal_set__isCancelled)) bool _isCancelled;

  /// @brief Field _playerDataModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _previewLevels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__previewLevels,
                      put = __cordl_internal_set__previewLevels)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* _previewLevels;

  /// @brief Field _progressText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__progressText, put = __cordl_internal_set__progressText)) ::UnityW<::TMPro::TextMeshProUGUI> _progressText;

  /// @brief Field _settingsManager, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _waitingForLevelFinish, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get__waitingForLevelFinish, put = __cordl_internal_set__waitingForLevelFinish)) bool _waitingForLevelFinish;

  /// @brief Field _waypointsTestScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__waypointsTestScenesTransitionSetupData,
                      put = __cordl_internal_set__waypointsTestScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _waypointsTestScenesTransitionSetupData;

  /// @brief Method CheckBeatmaps, addr 0x22672bc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CheckBeatmaps();

  /// @brief Method HandleMainGameSceneDidFinish, addr 0x2267344, size 0x98, virtual false, abstract: false, final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* data, ::GlobalNamespace::LevelCompletionResults* results);

  static inline ::GlobalNamespace::WaypointsTestMenuViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x22671dc, size 0xe0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2267088, size 0x154, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <HandleMainGameSceneDidFinish>b__19_0, addr 0x22674e0, size 0x8, virtual false, abstract: false, final false
  inline void _HandleMainGameSceneDidFinish_b__19_0(::Zenject::DiContainer* container);

  /// @brief Method <Start>b__16_0, addr 0x22673e4, size 0xb0, virtual false, abstract: false, final false
  inline void _Start_b__16_0();

  /// @brief Method <Start>b__16_1, addr 0x2267494, size 0x4c, virtual false, abstract: false, final false
  inline void _Start_b__16_1();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::GlobalNamespace::BeatmapDataLoader* const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__btsButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__btsButton();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get__characteristics() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__characteristics();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr bool const& __cordl_internal_get__isCancelled() const;

  constexpr bool& __cordl_internal_get__isCancelled();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* const& __cordl_internal_get__previewLevels() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& __cordl_internal_get__previewLevels();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__progressText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__progressText();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr bool const& __cordl_internal_get__waitingForLevelFinish() const;

  constexpr bool& __cordl_internal_get__waitingForLevelFinish();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__waypointsTestScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__waypointsTestScenesTransitionSetupData();

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__btsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__characteristics(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__isCancelled(bool value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__previewLevels(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value);

  constexpr void __cordl_internal_set__progressText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__waitingForLevelFinish(bool value);

  constexpr void __cordl_internal_set__waypointsTestScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x22673dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointsTestMenuViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointsTestMenuViewController(WaypointsTestMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointsTestMenuViewController(WaypointsTestMenuViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17699 };

  /// @brief Field _btsButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____btsButton;

  /// @brief Field _cancelButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field _progressText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____progressText;

  /// @brief Field _waypointsTestScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____waypointsTestScenesTransitionSetupData;

  /// @brief Field _previewLevels, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* ____previewLevels;

  /// @brief Field _characteristics, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____characteristics;

  /// @brief Field _gameScenesManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _playerDataModel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _coroutineStarter, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _environmentsListModel, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _settingsManager, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _buttonBinder, offset: 0x88, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _isCancelled, offset: 0x90, size: 0x1, def value: None
  bool ____isCancelled;

  /// @brief Field _waitingForLevelFinish, offset: 0x91, size: 0x1, def value: None
  bool ____waitingForLevelFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____btsButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____cancelButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____progressText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____waypointsTestScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____previewLevels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____characteristics) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____gameScenesManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____playerDataModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____coroutineStarter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____environmentsListModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____audioClipAsyncLoader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____beatmapDataLoader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____settingsManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____buttonBinder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____isCancelled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____waitingForLevelFinish) == 0x91, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestMenuViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestMenuViewController*, "", "WaypointsTestMenuViewController");
NEED_NO_BOX(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestMenuViewController__CheckBeatmaps_d__18*, "", "WaypointsTestMenuViewController/<CheckBeatmaps>d__18");
