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
class __BeatmapCharacteristicSegmentedControlController____c;
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
class __BeatmapCharacteristicSegmentedControlController____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicSegmentedControlController::<>c*
class CORDL_TYPE __BeatmapCharacteristicSegmentedControlController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* __9__10_0;

  static inline ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c* New_ctor();

  /// @brief Method <SetData>b__10_0, addr 0x3bae670, size 0x30, virtual false, abstract: false, final false
  inline int32_t _SetData_b__10_0(::GlobalNamespace::BeatmapCharacteristicSO* a, ::GlobalNamespace::BeatmapCharacteristicSO* b);

  /// @brief Method .ctor, addr 0x3bae668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c* value);

  static inline void setStaticF___9__10_0(::System::Comparison_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapCharacteristicSegmentedControlController____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicSegmentedControlController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapCharacteristicSegmentedControlController____c(__BeatmapCharacteristicSegmentedControlController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicSegmentedControlController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapCharacteristicSegmentedControlController____c(__BeatmapCharacteristicSegmentedControlController____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapCharacteristicSegmentedControlController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicSegmentedControlController*
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c;

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

  /// @brief Method Awake, addr 0x3badc8c, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlDidSelectCell, addr 0x3bae504, size 0x88, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3badd1c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetData, addr 0x3baddec, size 0x718, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* beatmapCharacteristics,
                      ::GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic,
                      ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* notAllowedCharacteristics);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__currentlyAvailableBeatmapCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__currentlyAvailableBeatmapCharacteristics() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__segmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__segmentedControl();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__selectedBeatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__selectedBeatmapCharacteristic();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent() const;

  constexpr void __cordl_internal_set__currentlyAvailableBeatmapCharacteristics(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set__segmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__selectedBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x3bae58c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x3badb24, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x3badc84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_selectedBeatmapCharacteristic();

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x3badbd4, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field _segmentedControl, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____segmentedControl;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _selectedBeatmapCharacteristic, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____selectedBeatmapCharacteristic;

  /// @brief Field _currentlyAvailableBeatmapCharacteristics, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____currentlyAvailableBeatmapCharacteristics;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____segmentedControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ___didSelectBeatmapCharacteristicEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____selectedBeatmapCharacteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____currentlyAvailableBeatmapCharacteristics) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c*, "", "BeatmapCharacteristicSegmentedControlController/<>c");
