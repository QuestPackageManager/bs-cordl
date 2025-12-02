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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
class MultiColumnCollectionHeader_ColumnData;
}
namespace UnityEngine::UIElements::Internal {
struct MultiColumnCollectionHeader_SortedColumnState;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader_ViewState;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader___c__DisplayClass67_0;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader___c__DisplayClass73_0;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnResizeHandle;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumn;
}
namespace UnityEngine::UIElements::Internal {
struct ViewState_MultiColumnCollectionHeader_ColumnState;
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
struct DropdownMenuAction_Status;
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
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader_ColumnData;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader_ViewState;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader___c__DisplayClass67_0;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader___c__DisplayClass73_0;
}
namespace UnityEngine::UIElements::Internal {
struct MultiColumnCollectionHeader_SortedColumnState;
}
namespace UnityEngine::UIElements::Internal {
struct ViewState_MultiColumnCollectionHeader_ColumnState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0);
MARK_VAL_T(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState);
MARK_VAL_T(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState);
// Dependencies UnityEngine.UIElements.Length
namespace UnityEngine::UIElements::Internal {
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState/ColumnState
struct CORDL_TYPE ViewState_MultiColumnCollectionHeader_ColumnState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewState_MultiColumnCollectionHeader_ColumnState();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "actualWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "visible",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr ViewState_MultiColumnCollectionHeader_ColumnState(int32_t index, ::StringW name, float_t actualWidth, ::UnityEngine::UIElements::Length width, bool visible) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5515 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, actualWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, width) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, visible) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies System.Object
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState
class CORDL_TYPE MultiColumnCollectionHeader_ViewState : public ::System::Object {
public:
  // Declarations
  using ColumnState = ::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState;

  /// @brief Field m_HasPersistedData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasPersistedData, put = __cordl_internal_set_m_HasPersistedData)) bool m_HasPersistedData;

  /// @brief Field m_OrderedColumnStates, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OrderedColumnStates,
                      put = __cordl_internal_set_m_OrderedColumnStates)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>*
      m_OrderedColumnStates;

  /// @brief Field m_SortDescriptions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortDescriptions,
                      put = __cordl_internal_set_m_SortDescriptions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortDescriptions;

  /// @brief Method Apply, addr 0x6af4640, size 0x338, virtual false, abstract: false, final false
  inline void Apply(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header);

  static inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* New_ctor();

  /// @brief Method Save, addr 0x6af4978, size 0x684, virtual false, abstract: false, final false
  inline void Save(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header);

  constexpr bool const& __cordl_internal_get_m_HasPersistedData() const;

  constexpr bool& __cordl_internal_get_m_HasPersistedData();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>* const& __cordl_internal_get_m_OrderedColumnStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>*& __cordl_internal_get_m_OrderedColumnStates();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* const& __cordl_internal_get_m_SortDescriptions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortDescriptions();

  constexpr void __cordl_internal_set_m_HasPersistedData(bool value);

  constexpr void __cordl_internal_set_m_OrderedColumnStates(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>* value);

  constexpr void __cordl_internal_set_m_SortDescriptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method .ctor, addr 0x6af56c0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnCollectionHeader_ViewState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader_ViewState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnCollectionHeader_ViewState(MultiColumnCollectionHeader_ViewState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader_ViewState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnCollectionHeader_ViewState(MultiColumnCollectionHeader_ViewState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5516 };

  /// @brief Field m_HasPersistedData, offset: 0x10, size: 0x1, def value: None
  bool ___m_HasPersistedData;

  /// @brief Field m_SortDescriptions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_SortDescriptions;

  /// @brief Field m_OrderedColumnStates, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>* ___m_OrderedColumnStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState, ___m_HasPersistedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState, ___m_SortDescriptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState, ___m_OrderedColumnStates) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies System.Object
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ColumnData
class CORDL_TYPE MultiColumnCollectionHeader_ColumnData : public ::System::Object {
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

  static inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData* New_ctor();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* const& __cordl_internal_get__control_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*& __cordl_internal_get__control_k__BackingField();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* const& __cordl_internal_get__resizeHandle_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*& __cordl_internal_get__resizeHandle_k__BackingField();

  constexpr void __cordl_internal_set__control_k__BackingField(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value);

  constexpr void __cordl_internal_set__resizeHandle_k__BackingField(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value);

  /// @brief Method .ctor, addr 0x6af255c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_control, addr 0x6af577c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* get_control();

  /// @brief Method get_resizeHandle, addr 0x6af578c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* get_resizeHandle();

  /// @brief Method set_control, addr 0x6af5784, size 0x8, virtual false, abstract: false, final false
  inline void set_control(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value);

  /// @brief Method set_resizeHandle, addr 0x6af5794, size 0x8, virtual false, abstract: false, final false
  inline void set_resizeHandle(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnCollectionHeader_ColumnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader_ColumnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnCollectionHeader_ColumnData(MultiColumnCollectionHeader_ColumnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader_ColumnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnCollectionHeader_ColumnData(MultiColumnCollectionHeader_ColumnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5517 };

  /// @brief Field <control>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* ____control_k__BackingField;

  /// @brief Field <resizeHandle>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* ____resizeHandle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData, ____control_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData, ____resizeHandle_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies UnityEngine.UIElements.SortDirection
namespace UnityEngine::UIElements::Internal {
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/SortedColumnState
struct CORDL_TYPE MultiColumnCollectionHeader_SortedColumnState {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6af15ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::SortColumnDescription* desc, ::UnityEngine::UIElements::SortDirection dir);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnCollectionHeader_SortedColumnState();

  // Ctor Parameters [CppParam { name: "columnDesc", ty: "::UnityEngine::UIElements::SortColumnDescription*", modifiers: "", def_value: None }, CppParam { name: "direction", ty:
  // "::UnityEngine::UIElements::SortDirection", modifiers: "", def_value: None }]
  constexpr MultiColumnCollectionHeader_SortedColumnState(::UnityEngine::UIElements::SortColumnDescription* columnDesc, ::UnityEngine::UIElements::SortDirection direction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5518 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field columnDesc, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::SortColumnDescription* columnDesc;

  /// @brief Field direction, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::SortDirection direction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState, columnDesc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState, direction) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies System.Object
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/<>c__DisplayClass67_0
class CORDL_TYPE MultiColumnCollectionHeader___c__DisplayClass67_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* __4__this;

  /// @brief Field column, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) ::UnityEngine::UIElements::Column* column;

  static inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0* New_ctor();

  /// @brief Method <OnContextualMenuManipulator>b__1, addr 0x6af579c, size 0x24, virtual false, abstract: false, final false
  inline void _OnContextualMenuManipulator_b__1(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method <OnContextualMenuManipulator>b__2, addr 0x6af57c0, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status _OnContextualMenuManipulator_b__2(::UnityEngine::UIElements::DropdownMenuAction* a);

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get_column() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_column();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value);

  constexpr void __cordl_internal_set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method .ctor, addr 0x6af3a6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnCollectionHeader___c__DisplayClass67_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader___c__DisplayClass67_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnCollectionHeader___c__DisplayClass67_0(MultiColumnCollectionHeader___c__DisplayClass67_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader___c__DisplayClass67_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnCollectionHeader___c__DisplayClass67_0(MultiColumnCollectionHeader___c__DisplayClass67_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5519 };

  /// @brief Field column, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___column;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0, ___column) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies System.Object
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/<>c__DisplayClass73_0
class CORDL_TYPE MultiColumnCollectionHeader___c__DisplayClass73_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field column, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) ::UnityEngine::UIElements::Column* column;

  static inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0* New_ctor();

  /// @brief Method <UpdateSortColumnDescriptionsOnClick>b__0, addr 0x6af5830, size 0x88, virtual false, abstract: false, final false
  inline bool _UpdateSortColumnDescriptionsOnClick_b__0(::UnityEngine::UIElements::SortColumnDescription* d);

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get_column() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_column();

  constexpr void __cordl_internal_set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method .ctor, addr 0x6af43a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnCollectionHeader___c__DisplayClass73_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader___c__DisplayClass73_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnCollectionHeader___c__DisplayClass73_0(MultiColumnCollectionHeader___c__DisplayClass73_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnCollectionHeader___c__DisplayClass73_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnCollectionHeader___c__DisplayClass73_0(MultiColumnCollectionHeader___c__DisplayClass73_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5520 };

  /// @brief Field column, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___column;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0, ___column) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader
class CORDL_TYPE MultiColumnCollectionHeader : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using ColumnData = ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData;

  using SortedColumnState = ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState;

  using ViewState = ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState;

  using __c__DisplayClass67_0 = ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0;

  using __c__DisplayClass73_0 = ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0;

  /// @brief Field <columnContainer>k__BackingField, offset 0x4f0, size 0x8
  __declspec(property(get = __cordl_internal_get__columnContainer_k__BackingField,
                      put = __cordl_internal_set__columnContainer_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _columnContainer_k__BackingField;

  /// @brief Field <columnDataMap>k__BackingField, offset 0x4e0, size 0x8
  __declspec(property(get = __cordl_internal_get__columnDataMap_k__BackingField, put = __cordl_internal_set__columnDataMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* _columnDataMap_k__BackingField;

  /// @brief Field <columnLayout>k__BackingField, offset 0x4e8, size 0x8
  __declspec(property(get = __cordl_internal_get__columnLayout_k__BackingField,
                      put = __cordl_internal_set__columnLayout_k__BackingField)) ::UnityEngine::UIElements::ColumnLayout* _columnLayout_k__BackingField;

  /// @brief Field <columns>k__BackingField, offset 0x500, size 0x8
  __declspec(property(get = __cordl_internal_get__columns_k__BackingField, put = __cordl_internal_set__columns_k__BackingField)) ::UnityEngine::UIElements::Columns* _columns_k__BackingField;

  /// @brief Field <resizeHandleContainer>k__BackingField, offset 0x4f8, size 0x8
  __declspec(property(get = __cordl_internal_get__resizeHandleContainer_k__BackingField,
                      put = __cordl_internal_set__resizeHandleContainer_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _resizeHandleContainer_k__BackingField;

  __declspec(property(get = get_columnContainer)) ::UnityEngine::UIElements::VisualElement* columnContainer;

  /// @brief Field columnContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_columnContainerUssClassName, put = setStaticF_columnContainerUssClassName)) ::StringW columnContainerUssClassName;

  __declspec(property(get = get_columnDataMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*,
                                                                                             ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* columnDataMap;

  __declspec(property(get = get_columnLayout)) ::UnityEngine::UIElements::ColumnLayout* columnLayout;

  /// @brief Field columnResized, offset 0x508, size 0x8
  __declspec(property(get = __cordl_internal_get_columnResized, put = __cordl_internal_set_columnResized)) ::System::Action_2<int32_t, float_t>* columnResized;

  /// @brief Field columnSortingChanged, offset 0x510, size 0x8
  __declspec(property(get = __cordl_internal_get_columnSortingChanged, put = __cordl_internal_set_columnSortingChanged)) ::System::Action* columnSortingChanged;

  __declspec(property(get = get_columns)) ::UnityEngine::UIElements::Columns* columns;

  /// @brief Field contextMenuPopulateEvent, offset 0x518, size 0x8
  __declspec(property(
      get = __cordl_internal_get_contextMenuPopulateEvent,
      put = __cordl_internal_set_contextMenuPopulateEvent)) ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* contextMenuPopulateEvent;

  /// @brief Field handleContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_handleContainerUssClassName, put = setStaticF_handleContainerUssClassName)) ::StringW handleContainerUssClassName;

  __declspec(property(get = get_isApplyingViewState)) bool isApplyingViewState;

  /// @brief Field m_ApplyingViewState, offset 0x4d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ApplyingViewState, put = __cordl_internal_set_m_ApplyingViewState)) bool m_ApplyingViewState;

  /// @brief Field m_DoLayoutScheduled, offset 0x4d9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DoLayoutScheduled, put = __cordl_internal_set_m_DoLayoutScheduled)) bool m_DoLayoutScheduled;

  /// @brief Field m_OldSortedColumnStates, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldSortedColumnStates,
                      put = __cordl_internal_set_m_OldSortedColumnStates)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>*
      m_OldSortedColumnStates;

  /// @brief Field m_SortDescriptions, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortDescriptions, put = __cordl_internal_set_m_SortDescriptions)) ::UnityEngine::UIElements::SortColumnDescriptions* m_SortDescriptions;

  /// @brief Field m_SortedColumns, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedColumns,
                      put = __cordl_internal_set_m_SortedColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortedColumns;

  /// @brief Field m_SortingEnabled, offset 0x4a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SortingEnabled, put = __cordl_internal_set_m_SortingEnabled)) bool m_SortingEnabled;

  /// @brief Field m_SortingUpdatesTemporarilyDisabled, offset 0x4c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SortingUpdatesTemporarilyDisabled, put = __cordl_internal_set_m_SortingUpdatesTemporarilyDisabled)) bool m_SortingUpdatesTemporarilyDisabled;

  /// @brief Field m_ViewState, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewState, put = __cordl_internal_set_m_ViewState)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* m_ViewState;

  /// @brief Field reorderableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableUssClassName, put = setStaticF_reorderableUssClassName)) ::StringW reorderableUssClassName;

  __declspec(property(get = get_resizeHandleContainer)) ::UnityEngine::UIElements::VisualElement* resizeHandleContainer;

  __declspec(property(get = get_sortDescriptions, put = set_sortDescriptions)) ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions;

  __declspec(property(get = get_sortedColumnReadonly)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumnReadonly;

  __declspec(property(get = get_sortedColumns)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns;

  __declspec(property(get = get_sortingEnabled, put = set_sortingEnabled)) bool sortingEnabled;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field viewDataRestored, offset 0x520, size 0x8
  __declspec(property(get = __cordl_internal_get_viewDataRestored, put = __cordl_internal_set_viewDataRestored)) ::System::Action* viewDataRestored;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ApplyColumnSorting, addr 0x6af2840, size 0x850, virtual false, abstract: false, final false
  inline void ApplyColumnSorting();

  /// @brief Method CleanupColumnData, addr 0x6af2628, size 0x1bc, virtual false, abstract: false, final false
  inline void CleanupColumnData(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData* data);

  /// @brief Method Dispose, addr 0x6af518c, size 0x41c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DoLayout, addr 0x6af3be4, size 0x40, virtual false, abstract: false, final false
  inline void DoLayout();

  static inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* New_ctor(::UnityEngine::UIElements::Columns* columns,
                                                                                           ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method OnColumnAdded, addr 0x6af10f8, size 0x350, virtual false, abstract: false, final false
  inline void OnColumnAdded(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnAdded, addr 0x6af1d88, size 0x4, virtual false, abstract: false, final false
  inline void OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index);

  /// @brief Method OnColumnChanged, addr 0x6af27e4, size 0x5c, virtual false, abstract: false, final false
  inline void OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method OnColumnClicked, addr 0x6af3f1c, size 0x224, virtual false, abstract: false, final false
  inline void OnColumnClicked(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnColumnControlGeometryChanged, addr 0x6af3c24, size 0x1f8, virtual false, abstract: false, final false
  inline void OnColumnControlGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnColumnRemoved, addr 0x6af2560, size 0xc8, virtual false, abstract: false, final false
  inline void OnColumnRemoved(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnReordered, addr 0x6af3090, size 0x18c, virtual false, abstract: false, final false
  inline void OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to);

  /// @brief Method OnColumnResized, addr 0x6af321c, size 0x4, virtual false, abstract: false, final false
  inline void OnColumnResized(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnContextualMenuManipulator, addr 0x6af3220, size 0x84c, virtual false, abstract: false, final false
  inline void OnContextualMenuManipulator(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method OnGeometryChanged, addr 0x6af3b64, size 0x80, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method OnMoveManipulatorActivated, addr 0x6af3a70, size 0xf4, virtual false, abstract: false, final false
  inline void OnMoveManipulatorActivated(::UnityEngine::UIElements::Internal::ColumnMover* mover);

  /// @brief Method OnViewDataReady, addr 0x6af4554, size 0xec, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method RaiseColumnResized, addr 0x6af3e1c, size 0x100, virtual false, abstract: false, final false
  inline void RaiseColumnResized(int32_t columnIndex);

  /// @brief Method RaiseColumnSortingChanged, addr 0x6af15ec, size 0x38, virtual false, abstract: false, final false
  inline void RaiseColumnSortingChanged();

  /// @brief Method ResizeToFit, addr 0x6af1580, size 0x2c, virtual false, abstract: false, final false
  inline void ResizeToFit();

  /// @brief Method SaveViewState, addr 0x6af15b8, size 0x34, virtual false, abstract: false, final false
  inline void SaveViewState();

  /// @brief Method ScheduleDoLayout, addr 0x6af1448, size 0x138, virtual false, abstract: false, final false
  inline void ScheduleDoLayout();

  /// @brief Method ScrollHorizontally, addr 0x6af43ac, size 0x17c, virtual false, abstract: false, final false
  inline void ScrollHorizontally(float_t horizontalOffset);

  /// @brief Method UpdateColumnControls, addr 0x6af1624, size 0x764, virtual false, abstract: false, final false
  inline void UpdateColumnControls();

  /// @brief Method UpdateSortColumnDescriptionsOnClick, addr 0x6af4140, size 0x268, virtual false, abstract: false, final false
  inline void UpdateSortColumnDescriptionsOnClick(::UnityEngine::UIElements::Column* column, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method UpdateSortedColumns, addr 0x6aef640, size 0x658, virtual false, abstract: false, final false
  inline void UpdateSortedColumns();

  /// @brief Method UpdateSortingStatus, addr 0x6aefcd8, size 0x608, virtual false, abstract: false, final false
  inline void UpdateSortingStatus();

  /// @brief Method <OnContextualMenuManipulator>b__67_0, addr 0x6af56bc, size 0x4, virtual false, abstract: false, final false
  inline void _OnContextualMenuManipulator_b__67_0(::UnityEngine::UIElements::DropdownMenuAction* a);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__columnContainer_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__columnContainer_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* const&
  __cordl_internal_get__columnDataMap_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>*&
  __cordl_internal_get__columnDataMap_k__BackingField();

  constexpr ::UnityEngine::UIElements::ColumnLayout* const& __cordl_internal_get__columnLayout_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ColumnLayout*& __cordl_internal_get__columnLayout_k__BackingField();

  constexpr ::UnityEngine::UIElements::Columns* const& __cordl_internal_get__columns_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Columns*& __cordl_internal_get__columns_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__resizeHandleContainer_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__resizeHandleContainer_k__BackingField();

  constexpr ::System::Action_2<int32_t, float_t>* const& __cordl_internal_get_columnResized() const;

  constexpr ::System::Action_2<int32_t, float_t>*& __cordl_internal_get_columnResized();

  constexpr ::System::Action* const& __cordl_internal_get_columnSortingChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_columnSortingChanged();

  constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_contextMenuPopulateEvent() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*& __cordl_internal_get_contextMenuPopulateEvent();

  constexpr bool const& __cordl_internal_get_m_ApplyingViewState() const;

  constexpr bool& __cordl_internal_get_m_ApplyingViewState();

  constexpr bool const& __cordl_internal_get_m_DoLayoutScheduled() const;

  constexpr bool& __cordl_internal_get_m_DoLayoutScheduled();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>* const& __cordl_internal_get_m_OldSortedColumnStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>*& __cordl_internal_get_m_OldSortedColumnStates();

  constexpr ::UnityEngine::UIElements::SortColumnDescriptions* const& __cordl_internal_get_m_SortDescriptions() const;

  constexpr ::UnityEngine::UIElements::SortColumnDescriptions*& __cordl_internal_get_m_SortDescriptions();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* const& __cordl_internal_get_m_SortedColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortedColumns();

  constexpr bool const& __cordl_internal_get_m_SortingEnabled() const;

  constexpr bool& __cordl_internal_get_m_SortingEnabled();

  constexpr bool const& __cordl_internal_get_m_SortingUpdatesTemporarilyDisabled() const;

  constexpr bool& __cordl_internal_get_m_SortingUpdatesTemporarilyDisabled();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* const& __cordl_internal_get_m_ViewState() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*& __cordl_internal_get_m_ViewState();

  constexpr ::System::Action* const& __cordl_internal_get_viewDataRestored() const;

  constexpr ::System::Action*& __cordl_internal_get_viewDataRestored();

  constexpr void __cordl_internal_set__columnContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__columnDataMap_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* value);

  constexpr void __cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value);

  constexpr void __cordl_internal_set__columns_k__BackingField(::UnityEngine::UIElements::Columns* value);

  constexpr void __cordl_internal_set__resizeHandleContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_columnResized(::System::Action_2<int32_t, float_t>* value);

  constexpr void __cordl_internal_set_columnSortingChanged(::System::Action* value);

  constexpr void __cordl_internal_set_contextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_ApplyingViewState(bool value);

  constexpr void __cordl_internal_set_m_DoLayoutScheduled(bool value);

  constexpr void __cordl_internal_set_m_OldSortedColumnStates(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>* value);

  constexpr void __cordl_internal_set_m_SortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);

  constexpr void __cordl_internal_set_m_SortedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  constexpr void __cordl_internal_set_m_SortingEnabled(bool value);

  constexpr void __cordl_internal_set_m_SortingUpdatesTemporarilyDisabled(bool value);

  constexpr void __cordl_internal_set_m_ViewState(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* value);

  constexpr void __cordl_internal_set_viewDataRestored(::System::Action* value);

  /// @brief Method .ctor, addr 0x6af0890, size 0x868, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method add_columnResized, addr 0x6af02e0, size 0xc0, virtual false, abstract: false, final false
  inline void add_columnResized(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method add_columnSortingChanged, addr 0x6af0460, size 0xac, virtual false, abstract: false, final false
  inline void add_columnSortingChanged(::System::Action* value);

  /// @brief Method add_contextMenuPopulateEvent, addr 0x6af05b8, size 0xc0, virtual false, abstract: false, final false
  inline void add_contextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  /// @brief Method add_viewDataRestored, addr 0x6af0738, size 0xac, virtual false, abstract: false, final false
  inline void add_viewDataRestored(::System::Action* value);

  static inline ::StringW getStaticF_columnContainerUssClassName();

  static inline ::StringW getStaticF_handleContainerUssClassName();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_columnContainer, addr 0x6aef574, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_columnContainer();

  /// @brief Method get_columnDataMap, addr 0x6aef564, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* get_columnDataMap();

  /// @brief Method get_columnLayout, addr 0x6aef56c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ColumnLayout* get_columnLayout();

  /// @brief Method get_columns, addr 0x6aefc98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns* get_columns();

  /// @brief Method get_isApplyingViewState, addr 0x6aef55c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isApplyingViewState();

  /// @brief Method get_resizeHandleContainer, addr 0x6aef57c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_resizeHandleContainer();

  /// @brief Method get_sortDescriptions, addr 0x6aef594, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SortColumnDescriptions* get_sortDescriptions();

  /// @brief Method get_sortedColumnReadonly, addr 0x6aef58c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::SortColumnDescription*>* get_sortedColumnReadonly();

  /// @brief Method get_sortedColumns, addr 0x6aef584, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* get_sortedColumns();

  /// @brief Method get_sortingEnabled, addr 0x6aefca0, size 0x8, virtual false, abstract: false, final false
  inline bool get_sortingEnabled();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_columnResized, addr 0x6af03a0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_columnResized(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method remove_columnSortingChanged, addr 0x6af050c, size 0xac, virtual false, abstract: false, final false
  inline void remove_columnSortingChanged(::System::Action* value);

  /// @brief Method remove_contextMenuPopulateEvent, addr 0x6af0678, size 0xc0, virtual false, abstract: false, final false
  inline void remove_contextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  /// @brief Method remove_viewDataRestored, addr 0x6af07e4, size 0xac, virtual false, abstract: false, final false
  inline void remove_viewDataRestored(::System::Action* value);

  static inline void setStaticF_columnContainerUssClassName(::StringW value);

  static inline void setStaticF_handleContainerUssClassName(::StringW value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_sortDescriptions, addr 0x6aef59c, size 0xa4, virtual false, abstract: false, final false
  inline void set_sortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);

  /// @brief Method set_sortingEnabled, addr 0x6aefca8, size 0x30, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5521 };

  /// @brief Field m_SortingEnabled, offset: 0x4a8, size: 0x1, def value: None
  bool ___m_SortingEnabled;

  /// @brief Field m_SortedColumns, offset: 0x4b0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_SortedColumns;

  /// @brief Field m_SortDescriptions, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::SortColumnDescriptions* ___m_SortDescriptions;

  /// @brief Field m_OldSortedColumnStates, offset: 0x4c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>* ___m_OldSortedColumnStates;

  /// @brief Field m_SortingUpdatesTemporarilyDisabled, offset: 0x4c8, size: 0x1, def value: None
  bool ___m_SortingUpdatesTemporarilyDisabled;

  /// @brief Field m_ViewState, offset: 0x4d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* ___m_ViewState;

  /// @brief Field m_ApplyingViewState, offset: 0x4d8, size: 0x1, def value: None
  bool ___m_ApplyingViewState;

  /// @brief Field m_DoLayoutScheduled, offset: 0x4d9, size: 0x1, def value: None
  bool ___m_DoLayoutScheduled;

  /// @brief Field <columnDataMap>k__BackingField, offset: 0x4e0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* ____columnDataMap_k__BackingField;

  /// @brief Field <columnLayout>k__BackingField, offset: 0x4e8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColumnLayout* ____columnLayout_k__BackingField;

  /// @brief Field <columnContainer>k__BackingField, offset: 0x4f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____columnContainer_k__BackingField;

  /// @brief Field <resizeHandleContainer>k__BackingField, offset: 0x4f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____resizeHandleContainer_k__BackingField;

  /// @brief Field <columns>k__BackingField, offset: 0x500, size: 0x8, def value: None
  ::UnityEngine::UIElements::Columns* ____columns_k__BackingField;

  /// @brief Field columnResized, offset: 0x508, size: 0x8, def value: None
  ::System::Action_2<int32_t, float_t>* ___columnResized;

  /// @brief Field columnSortingChanged, offset: 0x510, size: 0x8, def value: None
  ::System::Action* ___columnSortingChanged;

  /// @brief Field contextMenuPopulateEvent, offset: 0x518, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* ___contextMenuPopulateEvent;

  /// @brief Field viewDataRestored, offset: 0x520, size: 0x8, def value: None
  ::System::Action* ___viewDataRestored;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortingEnabled) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortedColumns) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortDescriptions) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_OldSortedColumnStates) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_SortingUpdatesTemporarilyDisabled) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_ViewState) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_ApplyingViewState) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___m_DoLayoutScheduled) == 0x4d9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columnDataMap_k__BackingField) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columnLayout_k__BackingField) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columnContainer_k__BackingField) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____resizeHandleContainer_k__BackingField) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ____columns_k__BackingField) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___columnResized) == 0x508, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___columnSortingChanged) == 0x510, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___contextMenuPopulateEvent) == 0x518, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, ___viewDataRestored) == 0x520, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader, 0x528>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ColumnData");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/<>c__DisplayClass67_0");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/<>c__DisplayClass73_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/SortedColumnState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState/ColumnState");
