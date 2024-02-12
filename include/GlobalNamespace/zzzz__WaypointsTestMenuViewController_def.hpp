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
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __WaypointsTestMenuViewController___CheckBeatmaps_d__17;
}
namespace HMUI {
class ButtonBinder;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class __WaypointsTestMenuViewController___CheckBeatmaps_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestMenuViewController);
MARK_REF_PTR_T(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17);
// Type: ::<CheckBeatmaps>d__17
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3841)), TypeDefinitionIndex(TypeDefinitionIndex(10708)),
// TypeDefinitionIndex(TypeDefinitionIndex(10802)), TypeDefinitionIndex(TypeDefinitionIndex(15101)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 282 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 777 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1646 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15039)) CS Name: ::WaypointsTestMenuViewController::<CheckBeatmaps>d__17*
class CORDL_TYPE __WaypointsTestMenuViewController___CheckBeatmaps_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> __4__this;

  /// @brief Field <count>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__count_5__2, put = __cordl_internal_set__count_5__2)) int32_t _count_5__2;

  /// @brief Field <difficultiesToCheck>5__3, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultiesToCheck_5__3,
                      put = __cordl_internal_set__difficultiesToCheck_5__3))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* _difficultiesToCheck_5__3;

  /// @brief Field <>7__wrap3, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3,
                      put = __cordl_internal_set___7__wrap3))::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> __7__wrap3;

  /// @brief Field <previewLevel>5__5, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__previewLevel_5__5, put = __cordl_internal_set__previewLevel_5__5))::UnityW<::GlobalNamespace::BeatmapLevelSO> _previewLevel_5__5;

  /// @brief Field <beatmapLevelData>5__6, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData_5__6, put = __cordl_internal_set__beatmapLevelData_5__6))::UnityW<::GlobalNamespace::BeatmapLevelDataSO> _beatmapLevelData_5__6;

  /// @brief Field <>7__wrap6, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap6,
                      put = __cordl_internal_set___7__wrap6))::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> __7__wrap6;

  /// @brief Field <characteristic>5__8, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic_5__8, put = __cordl_internal_set__characteristic_5__8))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _characteristic_5__8;

  /// @brief Field <>7__wrap8, offset 0x80, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap8,
                      put = __cordl_internal_set___7__wrap8))::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> __7__wrap8;

  /// @brief Field <difficulty>5__10, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty_5__10, put = __cordl_internal_set__difficulty_5__10))::GlobalNamespace::BeatmapDifficulty _difficulty_5__10;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::WaypointsTestMenuViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::WaypointsTestMenuViewController> value);

  constexpr int32_t& __cordl_internal_get__count_5__2();

  constexpr int32_t const& __cordl_internal_get__count_5__2() const;

  constexpr void __cordl_internal_set__count_5__2(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get__difficultiesToCheck_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*> const& __cordl_internal_get__difficultiesToCheck_5__3() const;

  constexpr void __cordl_internal_set__difficultiesToCheck_5__3(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>>& __cordl_internal_get___7__wrap3();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> const& __cordl_internal_get___7__wrap3() const;

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__previewLevel_5__5();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__previewLevel_5__5() const;

  constexpr void __cordl_internal_set__previewLevel_5__5(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelDataSO>& __cordl_internal_get__beatmapLevelData_5__6();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> const& __cordl_internal_get__beatmapLevelData_5__6() const;

  constexpr void __cordl_internal_set__beatmapLevelData_5__6(::UnityW<::GlobalNamespace::BeatmapLevelDataSO> value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>& __cordl_internal_get___7__wrap6();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> const& __cordl_internal_get___7__wrap6() const;

  constexpr void __cordl_internal_set___7__wrap6(::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__characteristic_5__8();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__characteristic_5__8() const;

  constexpr void __cordl_internal_set__characteristic_5__8(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty>& __cordl_internal_get___7__wrap8();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> const& __cordl_internal_get___7__wrap8() const;

  constexpr void __cordl_internal_set___7__wrap8(::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty_5__10();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty_5__10() const;

  constexpr void __cordl_internal_set__difficulty_5__10(::GlobalNamespace::BeatmapDifficulty value);

  static inline ::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0xe32264, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0xe3242c, size 0x154, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0xe32580, size 0xaf0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0xe33110, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0xe330c0, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0xe33070, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe33160, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe33168, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe331a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__WaypointsTestMenuViewController___CheckBeatmaps_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WaypointsTestMenuViewController___CheckBeatmaps_d__17(__WaypointsTestMenuViewController___CheckBeatmaps_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WaypointsTestMenuViewController___CheckBeatmaps_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WaypointsTestMenuViewController___CheckBeatmaps_d__17(__WaypointsTestMenuViewController___CheckBeatmaps_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WaypointsTestMenuViewController___CheckBeatmaps_d__17();

public:
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
  ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapLevelSO>> _____7__wrap3;

  /// @brief Field <previewLevel>5__5, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____previewLevel_5__5;

  /// @brief Field <beatmapLevelData>5__6, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> ____beatmapLevelData_5__6;

  /// @brief Field <>7__wrap6, offset: 0x60, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>> _____7__wrap6;

  /// @brief Field <characteristic>5__8, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____characteristic_5__8;

  /// @brief Field <>7__wrap8, offset: 0x80, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::BeatmapDifficulty> _____7__wrap8;

  /// @brief Field <difficulty>5__10, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty_5__10;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, ____count_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, ____difficultiesToCheck_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, _____7__wrap3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, ____previewLevel_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, ____beatmapLevelData_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, _____7__wrap6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, ____characteristic_5__8) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, _____7__wrap8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17, ____difficulty_5__10) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WaypointsTestMenuViewController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 130, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15040))
// CS Name: ::WaypointsTestMenuViewController*
class CORDL_TYPE WaypointsTestMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _CheckBeatmaps_d__17 = ::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17;

  /// @brief Field _btsButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__btsButton, put = __cordl_internal_set__btsButton))::UnityW<::UnityEngine::UI::Button> _btsButton;

  /// @brief Field _cancelButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton))::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _progressText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__progressText, put = __cordl_internal_set__progressText))::UnityW<::TMPro::TextMeshProUGUI> _progressText;

  /// @brief Field _waypointsTestScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__waypointsTestScenesTransitionSetupData,
                      put = __cordl_internal_set__waypointsTestScenesTransitionSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _waypointsTestScenesTransitionSetupData;

  /// @brief Field _previewLevels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__previewLevels,
                      put = __cordl_internal_set__previewLevels))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* _previewLevels;

  /// @brief Field _characteristics, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristics,
                      put = __cordl_internal_set__characteristics))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* _characteristics;

  /// @brief Field _gameScenesManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _playerDataModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _coroutineStarter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _environmentsListModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel))::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _audioClipAsyncLoader, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader))::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _buttonBinder, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _isCancelled, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__isCancelled, put = __cordl_internal_set__isCancelled)) bool _isCancelled;

  /// @brief Field _waitingForLevelFinish, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__waitingForLevelFinish, put = __cordl_internal_set__waitingForLevelFinish)) bool _waitingForLevelFinish;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__btsButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__btsButton() const;

  constexpr void __cordl_internal_set__btsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__progressText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__progressText() const;

  constexpr void __cordl_internal_set__progressText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__waypointsTestScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__waypointsTestScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__waypointsTestScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& __cordl_internal_get__previewLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*> const& __cordl_internal_get__previewLevels() const;

  constexpr void __cordl_internal_set__previewLevels(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__characteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const& __cordl_internal_get__characteristics() const;

  constexpr void __cordl_internal_set__characteristics(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __cordl_internal_get__coroutineStarter() const;

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentsListModel() const;

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataLoader*> const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr bool& __cordl_internal_get__isCancelled();

  constexpr bool const& __cordl_internal_get__isCancelled() const;

  constexpr void __cordl_internal_set__isCancelled(bool value);

  constexpr bool& __cordl_internal_get__waitingForLevelFinish();

  constexpr bool const& __cordl_internal_get__waitingForLevelFinish() const;

  constexpr void __cordl_internal_set__waitingForLevelFinish(bool value);

  /// @brief Method Start, addr 0xe31fc0, size 0x158, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0xe32118, size 0xe4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method CheckBeatmaps, addr 0xe321fc, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CheckBeatmaps();

  /// @brief Method HandleMainGameSceneDidFinish, addr 0xe3228c, size 0x94, virtual false, abstract: false, final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* data, ::GlobalNamespace::LevelCompletionResults* results);

  static inline ::GlobalNamespace::WaypointsTestMenuViewController* New_ctor();

  /// @brief Method .ctor, addr 0xe32320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__15_0, addr 0xe32328, size 0xb0, virtual false, abstract: false, final false
  inline void _Start_b__15_0();

  /// @brief Method <Start>b__15_1, addr 0xe323d8, size 0x4c, virtual false, abstract: false, final false
  inline void _Start_b__15_1();

  /// @brief Method <HandleMainGameSceneDidFinish>b__18_0, addr 0xe32424, size 0x8, virtual false, abstract: false, final false
  inline void _HandleMainGameSceneDidFinish_b__18_0(::Zenject::DiContainer* container);

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
  ::UnityW<::UnityEngine::UI::Button> ____btsButton;

  /// @brief Field _cancelButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field _progressText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____progressText;

  /// @brief Field _waypointsTestScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____waypointsTestScenesTransitionSetupData;

  /// @brief Field _previewLevels, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* ____previewLevels;

  /// @brief Field _characteristics, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____characteristics;

  /// @brief Field _gameScenesManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _playerDataModel, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _coroutineStarter, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _environmentsListModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _buttonBinder, offset: 0x78, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _isCancelled, offset: 0x80, size: 0x1, def value: None
  bool ____isCancelled;

  /// @brief Field _waitingForLevelFinish, offset: 0x81, size: 0x1, def value: None
  bool ____waitingForLevelFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestMenuViewController, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____btsButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____cancelButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____progressText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____waypointsTestScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____previewLevels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____characteristics) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____gameScenesManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____playerDataModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____coroutineStarter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____environmentsListModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____audioClipAsyncLoader) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____beatmapDataLoader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____buttonBinder) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____isCancelled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestMenuViewController, ____waitingForLevelFinish) == 0x81, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestMenuViewController*, "", "WaypointsTestMenuViewController");
NEED_NO_BOX(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__WaypointsTestMenuViewController___CheckBeatmaps_d__17*, "", "WaypointsTestMenuViewController/<CheckBeatmaps>d__17");
