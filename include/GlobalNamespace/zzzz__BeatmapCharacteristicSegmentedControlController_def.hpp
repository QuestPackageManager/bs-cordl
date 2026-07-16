#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicSegmentedControlController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicSegmentedControlController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController___c;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
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
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*);
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c*, "", "BeatmapCharacteristicSegmentedControlController/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicSegmentedControlController/<>c
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Comparison_1<::GlobalNamespace::BeatmapCharacteristic>* __9__11_0;

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* New_ctor();

  /// @brief Method <SetData>b__11_0, addr 0x5a10d58, size 0x6c, virtual false, abstract: false, final false
  inline int32_t _SetData_b__11_0(::GlobalNamespace::BeatmapCharacteristic a, ::GlobalNamespace::BeatmapCharacteristic b);

  /// @brief Method .ctor, addr 0x5a10d54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::BeatmapCharacteristic>* getStaticF___9__11_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c* value);

  static inline void setStaticF___9__11_0(::System::Comparison_1<::GlobalNamespace::BeatmapCharacteristic>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6388 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapCharacteristic, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicSegmentedControlController
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController___c;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _currentlyAvailableBeatmapCharacteristics, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__currentlyAvailableBeatmapCharacteristics,
      put =
          __cordl_internal_set__currentlyAvailableBeatmapCharacteristics)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* _currentlyAvailableBeatmapCharacteristics;

  /// @brief Field _segmentedControl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentedControl, put = __cordl_internal_set__segmentedControl)) ::UnityW<::HMUI::IconSegmentedControl> _segmentedControl;

  /// @brief Field _selectedBeatmapCharacteristic, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedBeatmapCharacteristic,
                      put = __cordl_internal_set__selectedBeatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristic _selectedBeatmapCharacteristic;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectBeatmapCharacteristicEvent,
                      put = __cordl_internal_set_didSelectBeatmapCharacteristicEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>,
                                                                                                          ::GlobalNamespace::BeatmapCharacteristic>* didSelectBeatmapCharacteristicEvent;

  __declspec(property(get = get_selectedBeatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristic selectedBeatmapCharacteristic;

  /// @brief Method Awake, addr 0x5a1034c, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlDidSelectCell, addr 0x5a10bec, size 0x98, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* New_ctor();

  /// @brief Method OnDestroy, addr 0x5a103dc, size 0xdc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetData, addr 0x5a104b8, size 0x734, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapCharacteristic>* beatmapCharacteristics,
                      ::GlobalNamespace::BeatmapCharacteristic selectedBeatmapCharacteristic,
                      ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>* notAllowedCharacteristics);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* const& __cordl_internal_get__currentlyAvailableBeatmapCharacteristics() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>*& __cordl_internal_get__currentlyAvailableBeatmapCharacteristics();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__segmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__segmentedControl();

  constexpr ::GlobalNamespace::BeatmapCharacteristic const& __cordl_internal_get__selectedBeatmapCharacteristic() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristic& __cordl_internal_get__selectedBeatmapCharacteristic();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::GlobalNamespace::BeatmapCharacteristic>* const&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::GlobalNamespace::BeatmapCharacteristic>*&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__currentlyAvailableBeatmapCharacteristics(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  constexpr void __cordl_internal_set__segmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__selectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value);

  constexpr void __cordl_internal_set_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method .ctor, addr 0x5a10c84, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x5a101c4, size 0xc0, virtual false, abstract: false, final false
  inline void
  add_didSelectBeatmapCharacteristicEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x5a10344, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristic get_selectedBeatmapCharacteristic();

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x5a10284, size 0xc0, virtual false, abstract: false, final false
  inline void
  remove_didSelectBeatmapCharacteristicEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::GlobalNamespace::BeatmapCharacteristic>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6389 };

  /// @brief Field _segmentedControl, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____segmentedControl;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>, ::GlobalNamespace::BeatmapCharacteristic>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _selectedBeatmapCharacteristic, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapCharacteristic ____selectedBeatmapCharacteristic;

  /// @brief Field _currentlyAvailableBeatmapCharacteristics, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* ____currentlyAvailableBeatmapCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____segmentedControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____beatmapCharacteristicCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ___didSelectBeatmapCharacteristicEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____selectedBeatmapCharacteristic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, ____currentlyAvailableBeatmapCharacteristics) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
