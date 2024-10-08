#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiColumnCollectionHeader)
namespace GlobalNamespace {
struct __MultiColumnCollectionHeader__ViewState__ColumnState;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class Action;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::Internal {
class ColumnMover;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnResizeHandle;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumn;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader__ColumnData;
}
namespace UnityEngine::UIElements::Internal {
struct __MultiColumnCollectionHeader__SortedColumnState;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader__ViewState;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader____c__DisplayClass65_0;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader____c__DisplayClass71_0;
}
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
namespace UnityEngine::UIElements {
class ColumnLayout;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
class SortColumnDescriptions;
}
namespace UnityEngine::UIElements {
struct SortDirection;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader__ColumnData;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader__ViewState;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader____c__DisplayClass65_0;
}
namespace UnityEngine::UIElements::Internal {
class __MultiColumnCollectionHeader____c__DisplayClass71_0;
}
namespace GlobalNamespace {
struct __MultiColumnCollectionHeader__ViewState__ColumnState;
}
namespace UnityEngine::UIElements::Internal {
struct __MultiColumnCollectionHeader__SortedColumnState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0);
MARK_VAL_T(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState);
MARK_VAL_T(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState);
// Type: ::ColumnState
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 45, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiColumnCollectionHeader::ViewState::ColumnState
struct CORDL_TYPE __MultiColumnCollectionHeader__ViewState__ColumnState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiColumnCollectionHeader__ViewState__ColumnState();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "actualWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "visible",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr __MultiColumnCollectionHeader__ViewState__ColumnState(int32_t index, ::StringW name, float_t actualWidth, ::UnityEngine::UIElements::Length width, bool visible) noexcept;

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field actualWidth, offset: 0x10, size: 0x4, def value: None
  float_t actualWidth;

  /// @brief Field width, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length width;

  /// @brief Field visible, offset: 0x1c, size: 0x1, def value: None
  bool visible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, actualWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, width) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, visible) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ViewState
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::MultiColumnCollectionHeader::ViewState*
class CORDL_TYPE __MultiColumnCollectionHeader__ViewState : public ::System::Object {
public:
  // Declarations
  using ColumnState = ::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState;

  /// @brief Field m_HasPersistedData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasPersistedData, put = __cordl_internal_set_m_HasPersistedData)) bool m_HasPersistedData;

  /// @brief Field m_OrderedColumnStates, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_OrderedColumnStates,
      put = __cordl_internal_set_m_OrderedColumnStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState>* m_OrderedColumnStates;

  /// @brief Field m_SortDescriptions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortDescriptions,
                      put = __cordl_internal_set_m_SortDescriptions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortDescriptions;

  /// @brief Method Apply, addr 0x496f7c4, size 0x35c, virtual false, abstract: false, final false
  inline void Apply(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header);

  static inline ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState* New_ctor();

  /// @brief Method Save, addr 0x496fb20, size 0x710, virtual false, abstract: false, final false
  inline void Save(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header);

  constexpr bool const& __cordl_internal_get_m_HasPersistedData() const;

  constexpr bool& __cordl_internal_get_m_HasPersistedData();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState>*& __cordl_internal_get_m_OrderedColumnStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState>*> const&
  __cordl_internal_get_m_OrderedColumnStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortDescriptions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*> const& __cordl_internal_get_m_SortDescriptions() const;

  constexpr void __cordl_internal_set_m_HasPersistedData(bool value);

  constexpr void __cordl_internal_set_m_OrderedColumnStates(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState>* value);

  constexpr void __cordl_internal_set_m_SortDescriptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method .ctor, addr 0x4970804, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiColumnCollectionHeader__ViewState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader__ViewState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiColumnCollectionHeader__ViewState(__MultiColumnCollectionHeader__ViewState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader__ViewState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiColumnCollectionHeader__ViewState(__MultiColumnCollectionHeader__ViewState const&) = delete;

  /// @brief Field m_HasPersistedData, offset: 0x10, size: 0x1, def value: None
  bool ___m_HasPersistedData;

  /// @brief Field m_SortDescriptions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_SortDescriptions;

  /// @brief Field m_OrderedColumnStates, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState>* ___m_OrderedColumnStates;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState, ___m_HasPersistedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState, ___m_SortDescriptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState, ___m_OrderedColumnStates) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Type: ::ColumnData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::MultiColumnCollectionHeader::ColumnData*
class CORDL_TYPE __MultiColumnCollectionHeader__ColumnData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <control>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__control_k__BackingField,
                      put = __cordl_internal_set__control_k__BackingField)) ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* _control_k__BackingField;

  /// @brief Field <resizeHandle>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resizeHandle_k__BackingField,
                      put = __cordl_internal_set__resizeHandle_k__BackingField)) ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* _resizeHandle_k__BackingField;

  __declspec(property(get = get_control, put = set_control)) ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* control;

  __declspec(property(get = get_resizeHandle, put = set_resizeHandle)) ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* resizeHandle;

  static inline ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData* New_ctor();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*& __cordl_internal_get__control_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*> const& __cordl_internal_get__control_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*& __cordl_internal_get__resizeHandle_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*> const& __cordl_internal_get__resizeHandle_k__BackingField() const;

  constexpr void __cordl_internal_set__control_k__BackingField(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value);

  constexpr void __cordl_internal_set__resizeHandle_k__BackingField(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value);

  /// @brief Method .ctor, addr 0x496d610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_control, addr 0x49708c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* get_control();

  /// @brief Method get_resizeHandle, addr 0x49708d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* get_resizeHandle();

  /// @brief Method set_control, addr 0x49708d0, size 0x8, virtual false, abstract: false, final false
  inline void set_control(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value);

  /// @brief Method set_resizeHandle, addr 0x49708e0, size 0x8, virtual false, abstract: false, final false
  inline void set_resizeHandle(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiColumnCollectionHeader__ColumnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader__ColumnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiColumnCollectionHeader__ColumnData(__MultiColumnCollectionHeader__ColumnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader__ColumnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiColumnCollectionHeader__ColumnData(__MultiColumnCollectionHeader__ColumnData const&) = delete;

  /// @brief Field <control>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* ____control_k__BackingField;

  /// @brief Field <resizeHandle>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* ____resizeHandle_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData, ____control_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData, ____resizeHandle_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Type: ::SortedColumnState
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: true
// CS Name: ::MultiColumnCollectionHeader::SortedColumnState
struct CORDL_TYPE __MultiColumnCollectionHeader__SortedColumnState {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x496c568, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::SortColumnDescription* desc, ::UnityEngine::UIElements::SortDirection dir);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiColumnCollectionHeader__SortedColumnState();

  // Ctor Parameters [CppParam { name: "columnDesc", ty: "::UnityEngine::UIElements::SortColumnDescription*", modifiers: "", def_value: None }, CppParam { name: "direction", ty:
  // "::UnityEngine::UIElements::SortDirection", modifiers: "", def_value: None }]
  constexpr __MultiColumnCollectionHeader__SortedColumnState(::UnityEngine::UIElements::SortColumnDescription* columnDesc, ::UnityEngine::UIElements::SortDirection direction) noexcept;

  /// @brief Field columnDesc, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::SortColumnDescription* columnDesc;

  /// @brief Field direction, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::SortDirection direction;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6472 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState, columnDesc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState, direction) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Type: ::<>c__DisplayClass65_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::MultiColumnCollectionHeader::<>c__DisplayClass65_0*
class CORDL_TYPE __MultiColumnCollectionHeader____c__DisplayClass65_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* __4__this;

  /// @brief Field column, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) ::UnityEngine::UIElements::Column* column;

  static inline ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0* New_ctor();

  /// @brief Method <OnContextualMenuManipulator>b__1, addr 0x49708e8, size 0x28, virtual false, abstract: false, final false
  inline void _OnContextualMenuManipulator_b__1(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method <OnContextualMenuManipulator>b__2, addr 0x4970910, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DropdownMenuAction__Status _OnContextualMenuManipulator_b__2(::UnityEngine::UIElements::DropdownMenuAction* a);

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_column();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Column*> const& __cordl_internal_get_column() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value);

  constexpr void __cordl_internal_set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method .ctor, addr 0x496eb84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiColumnCollectionHeader____c__DisplayClass65_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader____c__DisplayClass65_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiColumnCollectionHeader____c__DisplayClass65_0(__MultiColumnCollectionHeader____c__DisplayClass65_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader____c__DisplayClass65_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiColumnCollectionHeader____c__DisplayClass65_0(__MultiColumnCollectionHeader____c__DisplayClass65_0 const&) = delete;

  /// @brief Field column, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___column;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0, ___column) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Type: ::<>c__DisplayClass71_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::MultiColumnCollectionHeader::<>c__DisplayClass71_0*
class CORDL_TYPE __MultiColumnCollectionHeader____c__DisplayClass71_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field column, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) ::UnityEngine::UIElements::Column* column;

  static inline ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0* New_ctor();

  /// @brief Method <UpdateSortColumnDescriptionsOnClick>b__0, addr 0x4970990, size 0x88, virtual false, abstract: false, final false
  inline bool _UpdateSortColumnDescriptionsOnClick_b__0(::UnityEngine::UIElements::SortColumnDescription* d);

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_column();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Column*> const& __cordl_internal_get_column() const;

  constexpr void __cordl_internal_set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method .ctor, addr 0x496f4e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiColumnCollectionHeader____c__DisplayClass71_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader____c__DisplayClass71_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiColumnCollectionHeader____c__DisplayClass71_0(__MultiColumnCollectionHeader____c__DisplayClass71_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiColumnCollectionHeader____c__DisplayClass71_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiColumnCollectionHeader____c__DisplayClass71_0(__MultiColumnCollectionHeader____c__DisplayClass71_0 const&) = delete;

  /// @brief Field column, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___column;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0, ___column) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Type: UnityEngine.UIElements.Internal::MultiColumnCollectionHeader
// SizeInfo { instance_size: 1096, native_size: -1, calculated_instance_size: 1096, calculated_native_size: 1096, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Internal::MultiColumnCollectionHeader*
class CORDL_TYPE MultiColumnCollectionHeader : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using ColumnData = ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData;

  using SortedColumnState = ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState;

  using ViewState = ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState;

  using __c__DisplayClass65_0 = ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0;

  using __c__DisplayClass71_0 = ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0;

  /// @brief Field <columnContainer>k__BackingField, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get__columnContainer_k__BackingField,
                      put = __cordl_internal_set__columnContainer_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _columnContainer_k__BackingField;

  /// @brief Field <columnDataMap>k__BackingField, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get__columnDataMap_k__BackingField, put = __cordl_internal_set__columnDataMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>* _columnDataMap_k__BackingField;

  /// @brief Field <columnLayout>k__BackingField, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get__columnLayout_k__BackingField,
                      put = __cordl_internal_set__columnLayout_k__BackingField)) ::UnityEngine::UIElements::ColumnLayout* _columnLayout_k__BackingField;

  /// @brief Field <columns>k__BackingField, offset 0x420, size 0x8
  __declspec(property(get = __cordl_internal_get__columns_k__BackingField, put = __cordl_internal_set__columns_k__BackingField)) ::UnityEngine::UIElements::Columns* _columns_k__BackingField;

  /// @brief Field <resizeHandleContainer>k__BackingField, offset 0x418, size 0x8
  __declspec(property(get = __cordl_internal_get__resizeHandleContainer_k__BackingField,
                      put = __cordl_internal_set__resizeHandleContainer_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _resizeHandleContainer_k__BackingField;

  __declspec(property(get = get_columnContainer)) ::UnityEngine::UIElements::VisualElement* columnContainer;

  /// @brief Field columnContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_columnContainerUssClassName, put = setStaticF_columnContainerUssClassName)) ::StringW columnContainerUssClassName;

  __declspec(property(get = get_columnDataMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*,
                                                                                             ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>* columnDataMap;

  __declspec(property(get = get_columnLayout)) ::UnityEngine::UIElements::ColumnLayout* columnLayout;

  /// @brief Field columnResized, offset 0x428, size 0x8
  __declspec(property(get = __cordl_internal_get_columnResized, put = __cordl_internal_set_columnResized)) ::System::Action_2<int32_t, float_t>* columnResized;

  /// @brief Field columnSortingChanged, offset 0x430, size 0x8
  __declspec(property(get = __cordl_internal_get_columnSortingChanged, put = __cordl_internal_set_columnSortingChanged)) ::System::Action* columnSortingChanged;

  __declspec(property(get = get_columns)) ::UnityEngine::UIElements::Columns* columns;

  /// @brief Field contextMenuPopulateEvent, offset 0x438, size 0x8
  __declspec(property(
      get = __cordl_internal_get_contextMenuPopulateEvent,
      put = __cordl_internal_set_contextMenuPopulateEvent)) ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* contextMenuPopulateEvent;

  /// @brief Field handleContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_handleContainerUssClassName, put = setStaticF_handleContainerUssClassName)) ::StringW handleContainerUssClassName;

  __declspec(property(get = get_isApplyingViewState)) bool isApplyingViewState;

  /// @brief Field m_ApplyingViewState, offset 0x3f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ApplyingViewState, put = __cordl_internal_set_m_ApplyingViewState)) bool m_ApplyingViewState;

  /// @brief Field m_DoLayoutScheduled, offset 0x3f9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DoLayoutScheduled, put = __cordl_internal_set_m_DoLayoutScheduled)) bool m_DoLayoutScheduled;

  /// @brief Field m_OldSortedColumnStates, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldSortedColumnStates, put = __cordl_internal_set_m_OldSortedColumnStates)) ::System::Collections::Generic::List_1<
      ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState>* m_OldSortedColumnStates;

  /// @brief Field m_SortDescriptions, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortDescriptions, put = __cordl_internal_set_m_SortDescriptions)) ::UnityEngine::UIElements::SortColumnDescriptions* m_SortDescriptions;

  /// @brief Field m_SortedColumns, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedColumns,
                      put = __cordl_internal_set_m_SortedColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortedColumns;

  /// @brief Field m_SortingEnabled, offset 0x3c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SortingEnabled, put = __cordl_internal_set_m_SortingEnabled)) bool m_SortingEnabled;

  /// @brief Field m_SortingUpdatesTemporarilyDisabled, offset 0x3e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SortingUpdatesTemporarilyDisabled, put = __cordl_internal_set_m_SortingUpdatesTemporarilyDisabled)) bool m_SortingUpdatesTemporarilyDisabled;

  /// @brief Field m_ViewState, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewState, put = __cordl_internal_set_m_ViewState)) ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState* m_ViewState;

  /// @brief Field reorderableUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reorderableUssClassName, put = setStaticF_reorderableUssClassName)) ::StringW reorderableUssClassName;

  __declspec(property(get = get_resizeHandleContainer)) ::UnityEngine::UIElements::VisualElement* resizeHandleContainer;

  __declspec(property(get = get_sortDescriptions, put = set_sortDescriptions)) ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions;

  __declspec(property(get = get_sortedColumns)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns;

  __declspec(property(get = get_sortingEnabled, put = set_sortingEnabled)) bool sortingEnabled;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field viewDataRestored, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_viewDataRestored, put = __cordl_internal_set_viewDataRestored)) ::System::Action* viewDataRestored;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ApplyColumnSorting, addr 0x496d8a8, size 0x8bc, virtual false, abstract: false, final false
  inline void ApplyColumnSorting();

  /// @brief Method Dispose, addr 0x4970230, size 0x4c8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DoLayout, addr 0x496ecf0, size 0x40, virtual false, abstract: false, final false
  inline void DoLayout();

  static inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* New_ctor(::UnityEngine::UIElements::Columns* columns,
                                                                                           ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method OnColumnAdded, addr 0x496c120, size 0x30c, virtual false, abstract: false, final false
  inline void OnColumnAdded(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnAdded, addr 0x496cd8c, size 0x4, virtual false, abstract: false, final false
  inline void OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index);

  /// @brief Method OnColumnChanged, addr 0x496d84c, size 0x5c, virtual false, abstract: false, final false
  inline void OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method OnColumnClicked, addr 0x496f068, size 0x228, virtual false, abstract: false, final false
  inline void OnColumnClicked(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnColumnControlGeometryChanged, addr 0x496ed30, size 0x248, virtual false, abstract: false, final false
  inline void OnColumnControlGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnColumnRemoved, addr 0x496d618, size 0x234, virtual false, abstract: false, final false
  inline void OnColumnRemoved(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnReordered, addr 0x496e164, size 0x17c, virtual false, abstract: false, final false
  inline void OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to);

  /// @brief Method OnColumnResized, addr 0x496e2e0, size 0x4, virtual false, abstract: false, final false
  inline void OnColumnResized(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnContextualMenuManipulator, addr 0x496e2e4, size 0x8a0, virtual false, abstract: false, final false
  inline void OnContextualMenuManipulator(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method OnGeometryChanged, addr 0x496ec70, size 0x80, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method OnMoveManipulatorActivated, addr 0x496eb8c, size 0xe4, virtual false, abstract: false, final false
  inline void OnMoveManipulatorActivated(::UnityEngine::UIElements::Internal::ColumnMover* mover);

  /// @brief Method OnViewDataReady, addr 0x496f6d0, size 0xf4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method RaiseColumnResized, addr 0x496ef78, size 0xf0, virtual false, abstract: false, final false
  inline void RaiseColumnResized(int32_t columnIndex);

  /// @brief Method RaiseColumnSortingChanged, addr 0x496c5ac, size 0x38, virtual false, abstract: false, final false
  inline void RaiseColumnSortingChanged();

  /// @brief Method ResizeToFit, addr 0x496c53c, size 0x2c, virtual false, abstract: false, final false
  inline void ResizeToFit();

  /// @brief Method SaveViewState, addr 0x496c574, size 0x38, virtual false, abstract: false, final false
  inline void SaveViewState();

  /// @brief Method ScheduleDoLayout, addr 0x496c42c, size 0x110, virtual false, abstract: false, final false
  inline void ScheduleDoLayout();

  /// @brief Method ScrollHorizontally, addr 0x496f4ec, size 0x1b8, virtual false, abstract: false, final false
  inline void ScrollHorizontally(float_t horizontalOffset);

  /// @brief Method UpdateColumnControls, addr 0x496c5e4, size 0x7a8, virtual false, abstract: false, final false
  inline void UpdateColumnControls();

  /// @brief Method UpdateSortColumnDescriptionsOnClick, addr 0x496f290, size 0x254, virtual false, abstract: false, final false
  inline void UpdateSortColumnDescriptionsOnClick(::UnityEngine::UIElements::Column* column, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method UpdateSortedColumns, addr 0x496a640, size 0x70c, virtual false, abstract: false, final false
  inline void UpdateSortedColumns();

  /// @brief Method UpdateSortingStatus, addr 0x496ad90, size 0x660, virtual false, abstract: false, final false
  inline void UpdateSortingStatus();

  /// @brief Method <OnContextualMenuManipulator>b__65_0, addr 0x4970800, size 0x4, virtual false, abstract: false, final false
  inline void _OnContextualMenuManipulator_b__65_0(::UnityEngine::UIElements::DropdownMenuAction* a);

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__columnContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get__columnContainer_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>*&
  __cordl_internal_get__columnDataMap_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>*> const&
  __cordl_internal_get__columnDataMap_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ColumnLayout*& __cordl_internal_get__columnLayout_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ColumnLayout*> const& __cordl_internal_get__columnLayout_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Columns*& __cordl_internal_get__columns_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Columns*> const& __cordl_internal_get__columns_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__resizeHandleContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get__resizeHandleContainer_k__BackingField() const;

  constexpr ::System::Action_2<int32_t, float_t>*& __cordl_internal_get_columnResized();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, float_t>*> const& __cordl_internal_get_columnResized() const;

  constexpr ::System::Action*& __cordl_internal_get_columnSortingChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_columnSortingChanged() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*& __cordl_internal_get_contextMenuPopulateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*> const&
  __cordl_internal_get_contextMenuPopulateEvent() const;

  constexpr bool const& __cordl_internal_get_m_ApplyingViewState() const;

  constexpr bool& __cordl_internal_get_m_ApplyingViewState();

  constexpr bool const& __cordl_internal_get_m_DoLayoutScheduled() const;

  constexpr bool& __cordl_internal_get_m_DoLayoutScheduled();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState>*& __cordl_internal_get_m_OldSortedColumnStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState>*> const&
  __cordl_internal_get_m_OldSortedColumnStates() const;

  constexpr ::UnityEngine::UIElements::SortColumnDescriptions*& __cordl_internal_get_m_SortDescriptions();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::SortColumnDescriptions*> const& __cordl_internal_get_m_SortDescriptions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortedColumns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*> const& __cordl_internal_get_m_SortedColumns() const;

  constexpr bool const& __cordl_internal_get_m_SortingEnabled() const;

  constexpr bool& __cordl_internal_get_m_SortingEnabled();

  constexpr bool const& __cordl_internal_get_m_SortingUpdatesTemporarilyDisabled() const;

  constexpr bool& __cordl_internal_get_m_SortingUpdatesTemporarilyDisabled();

  constexpr ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState*& __cordl_internal_get_m_ViewState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState*> const& __cordl_internal_get_m_ViewState() const;

  constexpr ::System::Action*& __cordl_internal_get_viewDataRestored();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_viewDataRestored() const;

  constexpr void __cordl_internal_set__columnContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__columnDataMap_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>* value);

  constexpr void __cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value);

  constexpr void __cordl_internal_set__columns_k__BackingField(::UnityEngine::UIElements::Columns* value);

  constexpr void __cordl_internal_set__resizeHandleContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_columnResized(::System::Action_2<int32_t, float_t>* value);

  constexpr void __cordl_internal_set_columnSortingChanged(::System::Action* value);

  constexpr void __cordl_internal_set_contextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_ApplyingViewState(bool value);

  constexpr void __cordl_internal_set_m_DoLayoutScheduled(bool value);

  constexpr void __cordl_internal_set_m_OldSortedColumnStates(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState>* value);

  constexpr void __cordl_internal_set_m_SortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);

  constexpr void __cordl_internal_set_m_SortedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  constexpr void __cordl_internal_set_m_SortingEnabled(bool value);

  constexpr void __cordl_internal_set_m_SortingUpdatesTemporarilyDisabled(bool value);

  constexpr void __cordl_internal_set_m_ViewState(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState* value);

  constexpr void __cordl_internal_set_viewDataRestored(::System::Action* value);

  /// @brief Method .ctor, addr 0x496b940, size 0x7e0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method add_columnResized, addr 0x496b3f0, size 0xb4, virtual false, abstract: false, final false
  inline void add_columnResized(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method add_columnSortingChanged, addr 0x496b558, size 0xa0, virtual false, abstract: false, final false
  inline void add_columnSortingChanged(::System::Action* value);

  /// @brief Method add_contextMenuPopulateEvent, addr 0x496b698, size 0xb4, virtual false, abstract: false, final false
  inline void add_contextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  /// @brief Method add_viewDataRestored, addr 0x496b800, size 0xa0, virtual false, abstract: false, final false
  inline void add_viewDataRestored(::System::Action* value);

  static inline ::StringW getStaticF_columnContainerUssClassName();

  static inline ::StringW getStaticF_handleContainerUssClassName();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_columnContainer, addr 0x496a584, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_columnContainer();

  /// @brief Method get_columnDataMap, addr 0x496a574, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>* get_columnDataMap();

  /// @brief Method get_columnLayout, addr 0x496a57c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ColumnLayout* get_columnLayout();

  /// @brief Method get_columns, addr 0x496ad4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns* get_columns();

  /// @brief Method get_isApplyingViewState, addr 0x496a56c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isApplyingViewState();

  /// @brief Method get_resizeHandleContainer, addr 0x496a58c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_resizeHandleContainer();

  /// @brief Method get_sortDescriptions, addr 0x496a59c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SortColumnDescriptions* get_sortDescriptions();

  /// @brief Method get_sortedColumns, addr 0x496a594, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* get_sortedColumns();

  /// @brief Method get_sortingEnabled, addr 0x496ad54, size 0x8, virtual false, abstract: false, final false
  inline bool get_sortingEnabled();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_columnResized, addr 0x496b4a4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_columnResized(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method remove_columnSortingChanged, addr 0x496b5f8, size 0xa0, virtual false, abstract: false, final false
  inline void remove_columnSortingChanged(::System::Action* value);

  /// @brief Method remove_contextMenuPopulateEvent, addr 0x496b74c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_contextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  /// @brief Method remove_viewDataRestored, addr 0x496b8a0, size 0xa0, virtual false, abstract: false, final false
  inline void remove_viewDataRestored(::System::Action* value);

  static inline void setStaticF_columnContainerUssClassName(::StringW value);

  static inline void setStaticF_handleContainerUssClassName(::StringW value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_sortDescriptions, addr 0x496a5a4, size 0x9c, virtual false, abstract: false, final false
  inline void set_sortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);

  /// @brief Method set_sortingEnabled, addr 0x496ad5c, size 0x34, virtual false, abstract: false, final false
  inline void set_sortingEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnCollectionHeader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnCollectionHeader(MultiColumnCollectionHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnCollectionHeader(MultiColumnCollectionHeader const&) = delete;

  /// @brief Field m_SortingEnabled, offset: 0x3c8, size: 0x1, def value: None
  bool ___m_SortingEnabled;

  /// @brief Field m_SortedColumns, offset: 0x3d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_SortedColumns;

  /// @brief Field m_SortDescriptions, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::SortColumnDescriptions* ___m_SortDescriptions;

  /// @brief Field m_OldSortedColumnStates, offset: 0x3e0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState>* ___m_OldSortedColumnStates;

  /// @brief Field m_SortingUpdatesTemporarilyDisabled, offset: 0x3e8, size: 0x1, def value: None
  bool ___m_SortingUpdatesTemporarilyDisabled;

  /// @brief Field m_ViewState, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState* ___m_ViewState;

  /// @brief Field m_ApplyingViewState, offset: 0x3f8, size: 0x1, def value: None
  bool ___m_ApplyingViewState;

  /// @brief Field m_DoLayoutScheduled, offset: 0x3f9, size: 0x1, def value: None
  bool ___m_DoLayoutScheduled;

  /// @brief Field <columnDataMap>k__BackingField, offset: 0x400, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*>* ____columnDataMap_k__BackingField;

  /// @brief Field <columnLayout>k__BackingField, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColumnLayout* ____columnLayout_k__BackingField;

  /// @brief Field <columnContainer>k__BackingField, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____columnContainer_k__BackingField;

  /// @brief Field <resizeHandleContainer>k__BackingField, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____resizeHandleContainer_k__BackingField;

  /// @brief Field <columns>k__BackingField, offset: 0x420, size: 0x8, def value: None
  ::UnityEngine::UIElements::Columns* ____columns_k__BackingField;

  /// @brief Field columnResized, offset: 0x428, size: 0x8, def value: None
  ::System::Action_2<int32_t, float_t>* ___columnResized;

  /// @brief Field columnSortingChanged, offset: 0x430, size: 0x8, def value: None
  ::System::Action* ___columnSortingChanged;

  /// @brief Field contextMenuPopulateEvent, offset: 0x438, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* ___contextMenuPopulateEvent;

  /// @brief Field viewDataRestored, offset: 0x440, size: 0x8, def value: None
  ::System::Action* ___viewDataRestored;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, 0x448>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortingEnabled) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortedColumns) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortDescriptions) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_OldSortedColumnStates) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortingUpdatesTemporarilyDisabled) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_ViewState) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_ApplyingViewState) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_DoLayoutScheduled) == 0x3f9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columnDataMap_k__BackingField) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columnLayout_k__BackingField) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columnContainer_k__BackingField) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____resizeHandleContainer_k__BackingField) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columns_k__BackingField) == 0x420, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___columnResized) == 0x428, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___columnSortingChanged) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___contextMenuPopulateEvent) == 0x438, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___viewDataRestored) == 0x440, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ColumnData*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ColumnData");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__ViewState*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass65_0*, "UnityEngine.UIElements.Internal",
                       "MultiColumnCollectionHeader/<>c__DisplayClass65_0");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader____c__DisplayClass71_0*, "UnityEngine.UIElements.Internal",
                       "MultiColumnCollectionHeader/<>c__DisplayClass71_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiColumnCollectionHeader__ViewState__ColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState/ColumnState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::__MultiColumnCollectionHeader__SortedColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/SortedColumnState");
