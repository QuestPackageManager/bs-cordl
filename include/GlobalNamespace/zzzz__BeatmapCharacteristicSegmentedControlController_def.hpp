#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicSegmentedControlController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicSegmentedControlController)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController___c;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicSegmentedControlController/<>c
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* __9__10_0;

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* New_ctor();

  /// @brief Method <SetData>b__10_0, addr 0x3c1108c, size 0x30, virtual false, abstract: false, final false
  inline int32_t _SetData_b__10_0(::GlobalNamespace::BeatmapCharacteristicSO* a, ::GlobalNamespace::BeatmapCharacteristicSO* b);

  /// @brief Method .ctor, addr 0x3c11084, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* value);

  static inline void setStaticF___9__10_0(::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicSegmentedControlController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicSegmentedControlController___c(BeatmapCharacteristicSegmentedControlController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicSegmentedControlController___c(BeatmapCharacteristicSegmentedControlController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicSegmentedControlController
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c;

  /// @brief Field _currentlyAvailableBeatmapCharacteristics, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentlyAvailableBeatmapCharacteristics,
                      put = __cordl_internal_set__currentlyAvailableBeatmapCharacteristics)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*
      _currentlyAvailableBeatmapCharacteristics;

  /// @brief Field _segmentedControl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentedControl, put = __cordl_internal_set__segmentedControl)) ::UnityW<::HMUI::IconSegmentedControl> _segmentedControl;

  /// @brief Field _selectedBeatmapCharacteristic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedBeatmapCharacteristic, put = __cordl_internal_set__selectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _selectedBeatmapCharacteristic;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectBeatmapCharacteristicEvent,
                      put = __cordl_internal_set_didSelectBeatmapCharacteristicEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>,
                                                                                                          ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* didSelectBeatmapCharacteristicEvent;

  __declspec(property(get = get_selectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> selectedBeatmapCharacteristic;

  /// @brief Method Awake, addr 0x3c106a8, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlDidSelectCell, addr 0x3c10f20, size 0x88, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c10738, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetData, addr 0x3c10808, size 0x718, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* beatmapCharacteristics,
                      ::GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic,
                      ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* notAllowedCharacteristics);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get__currentlyAvailableBeatmapCharacteristics() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__currentlyAvailableBeatmapCharacteristics();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__segmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__segmentedControl();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__selectedBeatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__selectedBeatmapCharacteristic();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent();

  constexpr void __cordl_internal_set__currentlyAvailableBeatmapCharacteristics(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set__segmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__selectedBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x3c10fa8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x3c10540, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x3c106a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_selectedBeatmapCharacteristic();

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x3c105f0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicSegmentedControlController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicSegmentedControlController(BeatmapCharacteristicSegmentedControlController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicSegmentedControlController(BeatmapCharacteristicSegmentedControlController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4868 };

  /// @brief Field _segmentedControl, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____segmentedControl;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _selectedBeatmapCharacteristic, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____selectedBeatmapCharacteristic;

  /// @brief Field _currentlyAvailableBeatmapCharacteristics, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____currentlyAvailableBeatmapCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____segmentedControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ___didSelectBeatmapCharacteristicEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____selectedBeatmapCharacteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____currentlyAvailableBeatmapCharacteristics) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*, "", "BeatmapCharacteristicSegmentedControlController/<>c");
