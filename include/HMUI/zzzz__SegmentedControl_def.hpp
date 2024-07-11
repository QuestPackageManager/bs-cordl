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
class SelectableCell;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
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
class __SegmentedControl__IDataSource;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SegmentedControl);
MARK_REF_PTR_T(::HMUI::__SegmentedControl__IDataSource);
// Type: ::IDataSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::SegmentedControl::IDataSource*
class CORDL_TYPE __SegmentedControl__IDataSource {
public:
  // Declarations
  /// @brief Method CellForCellNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::HMUI::SegmentedControlCell> CellForCellNumber(int32_t cellNumber);

  /// @brief Method NumberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t NumberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "__SegmentedControl__IDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SegmentedControl__IDataSource(__SegmentedControl__IDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SegmentedControl__IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SegmentedControl__IDataSource(__SegmentedControl__IDataSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Type: HMUI::SegmentedControl
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::SegmentedControl*
class CORDL_TYPE SegmentedControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using IDataSource = ::HMUI::__SegmentedControl__IDataSource;

  /// @brief Field _callbacks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacks, put = __cordl_internal_set__callbacks))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* _callbacks;

  /// @brief Field _cellToPrefabMap, offset 0x68, size 0x8
  __declspec(
      property(get = __cordl_internal_get__cellToPrefabMap,
               put = __cordl_internal_set__cellToPrefabMap))::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* _cellToPrefabMap;

  /// @brief Field _cells, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cells, put = __cordl_internal_set__cells))::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* _cells;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _dataSource, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource))::HMUI::__SegmentedControl__IDataSource* _dataSource;

  /// @brief Field _numberOfCells, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfCells, put = __cordl_internal_set__numberOfCells)) int32_t _numberOfCells;

  /// @brief Field _reusableCellPools, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableCellPools, put = __cordl_internal_set__reusableCellPools))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* _reusableCellPools;

  /// @brief Field _selectedCellNumber, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedCellNumber, put = __cordl_internal_set__selectedCellNumber)) int32_t _selectedCellNumber;

  /// @brief Field _separatorPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__separatorPrefab, put = __cordl_internal_set__separatorPrefab))::UnityW<::UnityEngine::Transform> _separatorPrefab;

  /// @brief Field _separators, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__separators, put = __cordl_internal_set__separators))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _separators;

  __declspec(property(get = get_cells))::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* cells;

  __declspec(property(get = get_dataSource, put = set_dataSource))::HMUI::__SegmentedControl__IDataSource* dataSource;

  /// @brief Field didSelectCellEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellEvent, put = __cordl_internal_set_didSelectCellEvent))::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* didSelectCellEvent;

  __declspec(property(get = get_selectedCellNumber)) int32_t selectedCellNumber;

  /// @brief Method CreateCells, addr 0x252fc80, size 0x4cc, virtual false, abstract: false, final false
  inline void CreateCells();

  /// @brief Method GetReusableCell, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetReusableCell(::UnityEngine::Object* prefab);

  /// @brief Method HandleCellSelectionDidChange, addr 0x2530158, size 0x150, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* changeOwner);

  static inline ::HMUI::SegmentedControl* New_ctor();

  /// @brief Method ReloadData, addr 0x252f148, size 0x4e4, virtual false, abstract: false, final false
  inline void ReloadData();

  /// @brief Method SelectCellWithNumber, addr 0x2530310, size 0xa8, virtual false, abstract: false, final false
  inline void SelectCellWithNumber(int32_t selectCellNumber);

  /// @brief Method SetCallbackForCell, addr 0x25302a8, size 0x68, virtual false, abstract: false, final false
  inline void SetCallbackForCell(int32_t cellNumber, ::System::Action_1<int32_t>* callback);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>*& __cordl_internal_get__callbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>*> const& __cordl_internal_get__callbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__cellToPrefabMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>*> const&
  __cordl_internal_get__cellToPrefabMap() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*& __cordl_internal_get__cells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*> const& __cordl_internal_get__cells() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::HMUI::__SegmentedControl__IDataSource*& __cordl_internal_get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__SegmentedControl__IDataSource*> const& __cordl_internal_get__dataSource() const;

  constexpr int32_t const& __cordl_internal_get__numberOfCells() const;

  constexpr int32_t& __cordl_internal_get__numberOfCells();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*&
  __cordl_internal_get__reusableCellPools();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*> const&
  __cordl_internal_get__reusableCellPools() const;

  constexpr int32_t const& __cordl_internal_get__selectedCellNumber() const;

  constexpr int32_t& __cordl_internal_get__selectedCellNumber();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__separatorPrefab() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__separatorPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__separators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__separators() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*& __cordl_internal_get_didSelectCellEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*> const& __cordl_internal_get_didSelectCellEvent() const;

  constexpr void __cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* value);

  constexpr void __cordl_internal_set__cellToPrefabMap(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__dataSource(::HMUI::__SegmentedControl__IDataSource* value);

  constexpr void __cordl_internal_set__numberOfCells(int32_t value);

  constexpr void __cordl_internal_set__reusableCellPools(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* value);

  constexpr void __cordl_internal_set__selectedCellNumber(int32_t value);

  constexpr void __cordl_internal_set__separatorPrefab(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__separators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method .ctor, addr 0x252f8fc, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellEvent, addr 0x252fb08, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method get_cells, addr 0x252fc78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* get_cells();

  /// @brief Method get_dataSource, addr 0x252fc68, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::__SegmentedControl__IDataSource* get_dataSource();

  /// @brief Method get_selectedCellNumber, addr 0x252fc70, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedCellNumber();

  /// @brief Method remove_didSelectCellEvent, addr 0x252fbb8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value);

  /// @brief Method set_dataSource, addr 0x252f100, size 0x8, virtual false, abstract: false, final false
  inline void set_dataSource(::HMUI::__SegmentedControl__IDataSource* value);

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

  /// @brief Field _separatorPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____separatorPrefab;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field didSelectCellEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* ___didSelectCellEvent;

  /// @brief Field _numberOfCells, offset: 0x30, size: 0x4, def value: None
  int32_t ____numberOfCells;

  /// @brief Field _cells, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* ____cells;

  /// @brief Field _separators, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ____separators;

  /// @brief Field _dataSource, offset: 0x48, size: 0x8, def value: None
  ::HMUI::__SegmentedControl__IDataSource* ____dataSource;

  /// @brief Field _selectedCellNumber, offset: 0x50, size: 0x4, def value: None
  int32_t ____selectedCellNumber;

  /// @brief Field _callbacks, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* ____callbacks;

  /// @brief Field _reusableCellPools, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* ____reusableCellPools;

  /// @brief Field _cellToPrefabMap, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* ____cellToPrefabMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SegmentedControl, 0x70>, "Size mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____separatorPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ___didSelectCellEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____numberOfCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____cells) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____separators) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____dataSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____selectedCellNumber) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____callbacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____reusableCellPools) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControl, ____cellToPrefabMap) == 0x68, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControl*, "HMUI", "SegmentedControl");
NEED_NO_BOX(::HMUI::__SegmentedControl__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SegmentedControl__IDataSource*, "HMUI", "SegmentedControl/IDataSource");
