#pragma once
// IWYU pragma private; include "HMUI/SegmentedControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SegmentedControl)
namespace HMUI {
class SegmentedControlCell;
}
namespace HMUI {
class SegmentedControl_IDataSource;
}
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace HMUI {
class SelectableCell;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class SegmentedControl_IDataSource;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SegmentedControl);
MARK_REF_PTR_T(::HMUI::SegmentedControl_IDataSource);
// Dependencies
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SegmentedControl/IDataSource
class CORDL_TYPE SegmentedControl_IDataSource {
public:
  // Declarations
  /// @brief Method CellForCellNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::SegmentedControlCell> CellForCellNumber(int32_t cellNumber);

  /// @brief Method NumberOfCells, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t NumberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControl_IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SegmentedControl_IDataSource(SegmentedControl_IDataSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SegmentedControl
class CORDL_TYPE SegmentedControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using IDataSource = ::HMUI::SegmentedControl_IDataSource;

  /// @brief Field _callbacks, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacks, put = __cordl_internal_set__callbacks)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* _callbacks;

  /// @brief Field _cellToPrefabMap, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cellToPrefabMap,
      put = __cordl_internal_set__cellToPrefabMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* _cellToPrefabMap;

  /// @brief Field _cells, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__cells, put = __cordl_internal_set__cells)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* _cells;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _dataSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource)) ::HMUI::SegmentedControl_IDataSource* _dataSource;

  /// @brief Field _numberOfCells, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfCells, put = __cordl_internal_set__numberOfCells)) int32_t _numberOfCells;

  /// @brief Field _reusableCellPools, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableCellPools, put = __cordl_internal_set__reusableCellPools)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* _reusableCellPools;

  /// @brief Field _selectedCellNumber, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedCellNumber, put = __cordl_internal_set__selectedCellNumber)) int32_t _selectedCellNumber;

  /// @brief Field _separatorPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__separatorPrefab, put = __cordl_internal_set__separatorPrefab)) ::UnityW<::UnityEngine::Transform> _separatorPrefab;

  /// @brief Field _separators, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__separators, put = __cordl_internal_set__separators)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _separators;

  __declspec(property(get = get_cells)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* cells;

  __declspec(property(get = get_dataSource, put = set_dataSource)) ::HMUI::SegmentedControl_IDataSource* dataSource;

  /// @brief Field didPressNonInteractableCellEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressNonInteractableCellEvent,
                      put = __cordl_internal_set_didPressNonInteractableCellEvent)) ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* didPressNonInteractableCellEvent;

  /// @brief Field didSelectCellEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellEvent,
                      put = __cordl_internal_set_didSelectCellEvent)) ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* didSelectCellEvent;

  __declspec(property(get = get_selectedCellNumber)) int32_t selectedCellNumber;

  /// @brief Method CreateCells, addr 0x408ef1c, size 0x554, virtual false, abstract: false, final false
  inline void CreateCells();

  /// @brief Method GetReusableCell, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetReusableCell(::UnityEngine::Object* prefab);

  /// @brief Method HandleCellSelectionDidChange, addr 0x408f47c, size 0x150, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType, ::System::Object* changeOwner);

  /// @brief Method HandleNonInteractableCellWasPressed, addr 0x408f5cc, size 0xa8, virtual false, abstract: false, final false
  inline void HandleNonInteractableCellWasPressed(::HMUI::SelectableCell* selectableCell);

  static inline ::HMUI::SegmentedControl* New_ctor();

  /// @brief Method ReloadData, addr 0x408dc08, size 0x4e4, virtual false, abstract: false, final false
  inline void ReloadData();

  /// @brief Method SelectCellWithNumber, addr 0x408f6dc, size 0xa8, virtual false, abstract: false, final false
  inline void SelectCellWithNumber(int32_t selectCellNumber);

  /// @brief Method SetCallbackForCell, addr 0x408f674, size 0x68, virtual false, abstract: false, final false
  inline void SetCallbackForCell(int32_t cellNumber, ::System::Action_1<int32_t>* callback);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* const& __cordl_internal_get__callbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>*& __cordl_internal_get__callbacks();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__cellToPrefabMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__cellToPrefabMap();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* const& __cordl_internal_get__cells() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*& __cordl_internal_get__cells();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::HMUI::SegmentedControl_IDataSource* const& __cordl_internal_get__dataSource() const;

  constexpr ::HMUI::SegmentedControl_IDataSource*& __cordl_internal_get__dataSource();

  constexpr int32_t const& __cordl_internal_get__numberOfCells() const;

  constexpr int32_t& __cordl_internal_get__numberOfCells();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* const&
  __cordl_internal_get__reusableCellPools() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*&
  __cordl_internal_get__reusableCellPools();

  constexpr int32_t const& __cordl_internal_get__selectedCellNumber() const;

  constexpr int32_t& __cordl_internal_get__selectedCellNumber();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__separatorPrefab() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__separatorPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__separators() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__separators();

  constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* const& __cordl_internal_get_didPressNonInteractableCellEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*& __cordl_internal_get_didPressNonInteractableCellEvent();

  constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* const& __cordl_internal_get_didSelectCellEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*& __cordl_internal_get_didSelectCellEvent();

  constexpr void __cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* value);

  constexpr void __cordl_internal_set__cellToPrefabMap(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__dataSource(::HMUI::SegmentedControl_IDataSource* value);

  constexpr void __cordl_internal_set__numberOfCells(int32_t value);

  constexpr void __cordl_internal_set__reusableCellPools(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* value);

  constexpr void __cordl_internal_set__selectedCellNumber(int32_t value);

  constexpr void __cordl_internal_set__separatorPrefab(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__separators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  constexpr void __cordl_internal_set_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method .ctor, addr 0x408e5f0, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressNonInteractableCellEvent, addr 0x408eda4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method add_didSelectCellEvent, addr 0x408ec44, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method get_cells, addr 0x408ef14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* get_cells();

  /// @brief Method get_dataSource, addr 0x408ef04, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::SegmentedControl_IDataSource* get_dataSource();

  /// @brief Method get_selectedCellNumber, addr 0x408ef0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedCellNumber();

  /// @brief Method remove_didPressNonInteractableCellEvent, addr 0x408ee54, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method remove_didSelectCellEvent, addr 0x408ecf4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method set_dataSource, addr 0x408dbc0, size 0x8, virtual false, abstract: false, final false
  inline void set_dataSource(::HMUI::SegmentedControl_IDataSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SegmentedControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SegmentedControl(SegmentedControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SegmentedControl(SegmentedControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18797 };

  /// @brief Field _separatorPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____separatorPrefab;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field didSelectCellEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* ___didSelectCellEvent;

  /// @brief Field didPressNonInteractableCellEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* ___didPressNonInteractableCellEvent;

  /// @brief Field _numberOfCells, offset: 0x40, size: 0x4, def value: None
  int32_t ____numberOfCells;

  /// @brief Field _cells, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* ____cells;

  /// @brief Field _separators, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ____separators;

  /// @brief Field _dataSource, offset: 0x58, size: 0x8, def value: None
  ::HMUI::SegmentedControl_IDataSource* ____dataSource;

  /// @brief Field _selectedCellNumber, offset: 0x60, size: 0x4, def value: None
  int32_t ____selectedCellNumber;

  /// @brief Field _callbacks, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* ____callbacks;

  /// @brief Field _reusableCellPools, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* ____reusableCellPools;

  /// @brief Field _cellToPrefabMap, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* ____cellToPrefabMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SegmentedControl, ____separatorPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ___didSelectCellEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ___didPressNonInteractableCellEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____numberOfCells) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____cells) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____separators) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____dataSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____selectedCellNumber) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____callbacks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____reusableCellPools) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____cellToPrefabMap) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SegmentedControl, 0x80>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControl*, "HMUI", "SegmentedControl");
NEED_NO_BOX(::HMUI::SegmentedControl_IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControl_IDataSource*, "HMUI", "SegmentedControl/IDataSource");
