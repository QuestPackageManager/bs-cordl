#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaypointsTestMenuViewController)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class ButtonBinder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __WaypointsTestMenuViewController___CheckBeatmaps_d__14;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointsTestMenuViewController;
}
namespace GlobalNamespace {
class __WaypointsTestMenuViewController___CheckBeatmaps_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestMenuViewController);
MARK_REF_PTR_T(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__14);
// Type: ::<CheckBeatmaps>d__14
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1689 }), TypeDefinitionIndex(TypeDefinitionIndex(14717)),
// TypeDefinitionIndex(TypeDefinitionIndex(3842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1688 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3842), inst: 284 }), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4241)), TypeDefinitionIndex(TypeDefinitionIndex(4375))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(3998)) CS Name: ::WaypointsTestMenuViewController::<CheckBeatmaps>d__14*
class CORDL_TYPE __WaypointsTestMenuViewController___CheckBeatmaps_d__14 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::WaypointsTestMenuViewController* __4__this;

  /// @brief Field levels, offset 0x28, size 0x8
  __declspec(property(get = __get_levels, put = __set_levels))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* levels;

  /// @brief Field <count>5__2, offset 0x30, size 0x4
  __declspec(property(get = __get__count_5__2, put = __set__count_5__2)) int32_t _count_5__2;

  /// @brief Field <difficultiesToCheck>5__3, offset 0x38, size 0x8
  __declspec(property(get = __get__difficultiesToCheck_5__3,
                      put = __set__difficultiesToCheck_5__3))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* _difficultiesToCheck_5__3;

  /// @brief Field <>7__wrap3, offset 0x40, size 0x18
  __declspec(property(get = __get___7__wrap3, put = __set___7__wrap3))::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapLevelSO*> __7__wrap3;

  /// @brief Field <level>5__5, offset 0x58, size 0x8
  __declspec(property(get = __get__level_5__5, put = __set__level_5__5))::GlobalNamespace::BeatmapLevelSO* _level_5__5;

  /// @brief Field <>7__wrap5, offset 0x60, size 0x18
  __declspec(property(get = __get___7__wrap5, put = __set___7__wrap5))::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapCharacteristicSO*> __7__wrap5;

  /// @brief Field <characteristic>5__7, offset 0x78, size 0x8
  __declspec(property(get = __get__characteristic_5__7, put = __set__characteristic_5__7))::GlobalNamespace::BeatmapCharacteristicSO* _characteristic_5__7;

  /// @brief Field <>7__wrap7, offset 0x80, size 0x18
  __declspec(property(get = __get___7__wrap7, put = __set___7__wrap7))::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> __7__wrap7;

  /// @brief Field <difficulty>5__9, offset 0x98, size 0x4
  __declspec(property(get = __get__difficulty_5__9, put = __set__difficulty_5__9))::GlobalNamespace::BeatmapDifficulty _difficulty_5__9;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::WaypointsTestMenuViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::WaypointsTestMenuViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::WaypointsTestMenuViewController* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*& __get_levels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*> const& __get_levels() const;

  constexpr void __set_levels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* value);

  constexpr int32_t& __get__count_5__2();

  constexpr int32_t const& __get__count_5__2() const;

  constexpr void __set__count_5__2(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& __get__difficultiesToCheck_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*> const& __get__difficultiesToCheck_5__3() const;

  constexpr void __set__difficultiesToCheck_5__3(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapLevelSO*>& __get___7__wrap3();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapLevelSO*> const& __get___7__wrap3() const;

  constexpr void __set___7__wrap3(::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapLevelSO*> value);

  constexpr ::GlobalNamespace::BeatmapLevelSO*& __get__level_5__5();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& __get__level_5__5() const;

  constexpr void __set__level_5__5(::GlobalNamespace::BeatmapLevelSO* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapCharacteristicSO*>& __get___7__wrap5();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get___7__wrap5() const;

  constexpr void __set___7__wrap5(::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapCharacteristicSO*> value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__characteristic_5__7();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__characteristic_5__7() const;

  constexpr void __set__characteristic_5__7(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty>& __get___7__wrap7();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> const& __get___7__wrap7() const;

  constexpr void __set___7__wrap7(::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__difficulty_5__9();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__difficulty_5__9() const;

  constexpr void __set__difficulty_5__9(::GlobalNamespace::BeatmapDifficulty value);

  static inline ::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__14* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x221f408 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x221f5d4 size 0x154 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x221f728 size 0xa70 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2220238 size 0x50 virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0x22201e8 size 0x50 virtual false final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3 addr 0x2220198 size 0x50 virtual false final false
  inline void __m__Finally3();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2220288 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2220290 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x22202d0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__WaypointsTestMenuViewController___CheckBeatmaps_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WaypointsTestMenuViewController___CheckBeatmaps_d__14(__WaypointsTestMenuViewController___CheckBeatmaps_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WaypointsTestMenuViewController___CheckBeatmaps_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WaypointsTestMenuViewController___CheckBeatmaps_d__14(__WaypointsTestMenuViewController___CheckBeatmaps_d__14 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WaypointsTestMenuViewController___CheckBeatmaps_d__14();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::WaypointsTestMenuViewController* _____4__this;

  /// @brief Field levels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* ___levels;

  /// @brief Field <count>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____count_5__2;

  /// @brief Field <difficultiesToCheck>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* ____difficultiesToCheck_5__3;

  /// @brief Field <>7__wrap3, offset: 0x40, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapLevelSO*> _____7__wrap3;

  /// @brief Field <level>5__5, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* ____level_5__5;

  /// @brief Field <>7__wrap5, offset: 0x60, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapCharacteristicSO*> _____7__wrap5;

  /// @brief Field <characteristic>5__7, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____characteristic_5__7;

  /// @brief Field <>7__wrap7, offset: 0x80, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> _____7__wrap7;

  /// @brief Field <difficulty>5__9, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty_5__9;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__14, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::WaypointsTestMenuViewController
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 106, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3999))
// CS Name: ::WaypointsTestMenuViewController*
class CORDL_TYPE WaypointsTestMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _CheckBeatmaps_d__14 = ::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__14;

  /// @brief Field _btsButton, offset 0x18, size 0x8
  __declspec(property(get = __get__btsButton, put = __set__btsButton))::UnityEngine::UI::Button* _btsButton;

  /// @brief Field _cancelButton, offset 0x20, size 0x8
  __declspec(property(get = __get__cancelButton, put = __set__cancelButton))::UnityEngine::UI::Button* _cancelButton;

  /// @brief Field _progressText, offset 0x28, size 0x8
  __declspec(property(get = __get__progressText, put = __set__progressText))::TMPro::TextMeshProUGUI* _progressText;

  /// @brief Field _waypointsTestScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get__waypointsTestScenesTransitionSetupData,
                      put = __set__waypointsTestScenesTransitionSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _waypointsTestScenesTransitionSetupData;

  /// @brief Field _levels, offset 0x38, size 0x8
  __declspec(property(get = __get__levels, put = __set__levels))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* _levels;

  /// @brief Field _characteristics, offset 0x40, size 0x8
  __declspec(property(get = __get__characteristics, put = __set__characteristics))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>* _characteristics;

  /// @brief Field _gameScenesManager, offset 0x48, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _playerDataModel, offset 0x50, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _coroutineStarter, offset 0x58, size 0x8
  __declspec(property(get = __get__coroutineStarter, put = __set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _buttonBinder, offset 0x60, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _isCancelled, offset 0x68, size 0x1
  __declspec(property(get = __get__isCancelled, put = __set__isCancelled)) bool _isCancelled;

  /// @brief Field _waitingForLevelFinish, offset 0x69, size 0x1
  __declspec(property(get = __get__waitingForLevelFinish, put = __set__waitingForLevelFinish)) bool _waitingForLevelFinish;

  constexpr ::UnityEngine::UI::Button*& __get__btsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__btsButton() const;

  constexpr void __set__btsButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelButton() const;

  constexpr void __set__cancelButton(::UnityEngine::UI::Button* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__progressText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__progressText() const;

  constexpr void __set__progressText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__waypointsTestScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__waypointsTestScenesTransitionSetupData() const;

  constexpr void __set__waypointsTestScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*& __get__levels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*> const& __get__levels() const;

  constexpr void __set__levels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& __get__characteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__characteristics() const;

  constexpr void __set__characteristics(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::ICoroutineStarter*& __get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __get__coroutineStarter() const;

  constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr bool& __get__isCancelled();

  constexpr bool const& __get__isCancelled() const;

  constexpr void __set__isCancelled(bool value);

  constexpr bool& __get__waitingForLevelFinish();

  constexpr bool const& __get__waitingForLevelFinish() const;

  constexpr void __set__waitingForLevelFinish(bool value);

  /// @brief Method Start addr 0x221f158 size 0x158 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x221f2b0 size 0xe4 virtual false final false
  inline void OnDestroy();

  /// @brief Method CheckBeatmaps addr 0x221f394 size 0x74 virtual false final false
  inline ::System::Collections::IEnumerator* CheckBeatmaps(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* levels);

  /// @brief Method HandleMainGameSceneDidFinish addr 0x221f430 size 0x94 virtual false final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* data, ::GlobalNamespace::LevelCompletionResults* results);

  static inline ::GlobalNamespace::WaypointsTestMenuViewController* New_ctor();

  /// @brief Method .ctor addr 0x221f4c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Start>b__12_0 addr 0x221f4cc size 0xb4 virtual false final false
  inline void _Start_b__12_0();

  /// @brief Method <Start>b__12_1 addr 0x221f580 size 0x4c virtual false final false
  inline void _Start_b__12_1();

  /// @brief Method <HandleMainGameSceneDidFinish>b__15_0 addr 0x221f5cc size 0x8 virtual false final false
  inline void _HandleMainGameSceneDidFinish_b__15_0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointsTestMenuViewController(WaypointsTestMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointsTestMenuViewController(WaypointsTestMenuViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointsTestMenuViewController();

public:
  /// @brief Field _btsButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____btsButton;

  /// @brief Field _cancelButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelButton;

  /// @brief Field _progressText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____progressText;

  /// @brief Field _waypointsTestScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____waypointsTestScenesTransitionSetupData;

  /// @brief Field _levels, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* ____levels;

  /// @brief Field _characteristics, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>* ____characteristics;

  /// @brief Field _gameScenesManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _playerDataModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _coroutineStarter, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _buttonBinder, offset: 0x60, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _isCancelled, offset: 0x68, size: 0x1, def value: None
  bool ____isCancelled;

  /// @brief Field _waitingForLevelFinish, offset: 0x69, size: 0x1, def value: None
  bool ____waitingForLevelFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestMenuViewController, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestMenuViewController*, "", "WaypointsTestMenuViewController");
NEED_NO_BOX(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__14*, "", "WaypointsTestMenuViewController/<CheckBeatmaps>d__14");
