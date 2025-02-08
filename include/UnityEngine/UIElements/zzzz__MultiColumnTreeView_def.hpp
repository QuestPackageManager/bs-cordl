#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MultiColumnTreeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
CORDL_MODULE_EXPORT(MultiColumnTreeView)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
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
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class MultiColumnTreeViewController;
}
namespace UnityEngine::UIElements {
class MultiColumnTreeView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class MultiColumnTreeView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
class SortColumnDescriptions;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MultiColumnTreeView;
}
namespace UnityEngine::UIElements {
class MultiColumnTreeView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class MultiColumnTreeView_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MultiColumnTreeView);
MARK_REF_PTR_T(::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MultiColumnTreeView/UxmlFactory
class CORDL_TYPE MultiColumnTreeView_UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::MultiColumnTreeView*, ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a042b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnTreeView_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeView_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnTreeView_UxmlFactory(MultiColumnTreeView_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeView_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnTreeView_UxmlFactory(MultiColumnTreeView_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseTreeView::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MultiColumnTreeView/UxmlTraits
class CORDL_TYPE MultiColumnTreeView_UxmlTraits : public ::UnityEngine::UIElements::BaseTreeView_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Columns, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Columns,
                      put = __cordl_internal_set_m_Columns)) ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>* m_Columns;

  /// @brief Field m_SortColumnDescriptions, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_SortColumnDescriptions,
      put = __cordl_internal_set_m_SortColumnDescriptions)) ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>* m_SortColumnDescriptions;

  /// @brief Field m_SortingEnabled, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortingEnabled, put = __cordl_internal_set_m_SortingEnabled)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SortingEnabled;

  /// @brief Method Init, addr 0x4a042f8, size 0x170, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>* const& __cordl_internal_get_m_Columns() const;

  constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>*& __cordl_internal_get_m_Columns();

  constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>* const& __cordl_internal_get_m_SortColumnDescriptions() const;

  constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>*& __cordl_internal_get_m_SortColumnDescriptions();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SortingEnabled() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SortingEnabled();

  constexpr void __cordl_internal_set_m_Columns(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>* value);

  constexpr void __cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>* value);

  constexpr void __cordl_internal_set_m_SortingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a04468, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnTreeView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnTreeView_UxmlTraits(MultiColumnTreeView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnTreeView_UxmlTraits(MultiColumnTreeView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5656 };

  /// @brief Field m_SortingEnabled, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SortingEnabled;

  /// @brief Field m_Columns, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>* ___m_Columns;

  /// @brief Field m_SortColumnDescriptions, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>* ___m_SortColumnDescriptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits, ___m_SortingEnabled) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits, ___m_Columns) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits, ___m_SortColumnDescriptions) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseTreeView
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MultiColumnTreeView
class CORDL_TYPE MultiColumnTreeView : public ::UnityEngine::UIElements::BaseTreeView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits;

  /// @brief Field columnSortingChanged, offset 0x4d8, size 0x8
  __declspec(property(get = __cordl_internal_get_columnSortingChanged, put = __cordl_internal_set_columnSortingChanged)) ::System::Action* columnSortingChanged;

  __declspec(property(get = get_columns, put = set_columns)) ::UnityEngine::UIElements::Columns* columns;

  /// @brief Field headerContextMenuPopulateEvent, offset 0x4e0, size 0x8
  __declspec(property(get = __cordl_internal_get_headerContextMenuPopulateEvent,
                      put = __cordl_internal_set_headerContextMenuPopulateEvent)) ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*
      headerContextMenuPopulateEvent;

  /// @brief Field m_Columns, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Columns, put = __cordl_internal_set_m_Columns)) ::UnityEngine::UIElements::Columns* m_Columns;

  /// @brief Field m_SortColumnDescriptions, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortColumnDescriptions,
                      put = __cordl_internal_set_m_SortColumnDescriptions)) ::UnityEngine::UIElements::SortColumnDescriptions* m_SortColumnDescriptions;

  /// @brief Field m_SortedColumns, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedColumns,
                      put = __cordl_internal_set_m_SortedColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortedColumns;

  /// @brief Field m_SortingEnabled, offset 0x4c0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SortingEnabled, put = __cordl_internal_set_m_SortingEnabled)) bool m_SortingEnabled;

  __declspec(property(get = get_sortColumnDescriptions, put = set_sortColumnDescriptions)) ::UnityEngine::UIElements::SortColumnDescriptions* sortColumnDescriptions;

  __declspec(property(put = set_sortingEnabled)) bool sortingEnabled;

  __declspec(property(get = get_viewController)) ::UnityEngine::UIElements::MultiColumnTreeViewController* viewController;

  /// @brief Method CreateViewController, addr 0x4a03fd4, size 0x8c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController();

  /// @brief Method CreateVirtualizationController, addr 0x4a0424c, size 0x48, virtual true, abstract: false, final false
  inline void CreateVirtualizationController();

  static inline ::UnityEngine::UIElements::MultiColumnTreeView* New_ctor();

  static inline ::UnityEngine::UIElements::MultiColumnTreeView* New_ctor(::UnityEngine::UIElements::Columns* columns);

  /// @brief Method RaiseColumnSortingChanged, addr 0x4a03dcc, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseColumnSortingChanged();

  /// @brief Method RaiseHeaderContextMenuPopulate, addr 0x4a04294, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseHeaderContextMenuPopulate(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt, ::UnityEngine::UIElements::Column* column);

  /// @brief Method SetViewController, addr 0x4a04060, size 0x1ec, virtual true, abstract: false, final false
  inline void SetViewController(::UnityEngine::UIElements::CollectionViewController* controller);

  constexpr ::System::Action* const& __cordl_internal_get_columnSortingChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_columnSortingChanged();

  constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_headerContextMenuPopulateEvent() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*& __cordl_internal_get_headerContextMenuPopulateEvent();

  constexpr ::UnityEngine::UIElements::Columns* const& __cordl_internal_get_m_Columns() const;

  constexpr ::UnityEngine::UIElements::Columns*& __cordl_internal_get_m_Columns();

  constexpr ::UnityEngine::UIElements::SortColumnDescriptions* const& __cordl_internal_get_m_SortColumnDescriptions() const;

  constexpr ::UnityEngine::UIElements::SortColumnDescriptions*& __cordl_internal_get_m_SortColumnDescriptions();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* const& __cordl_internal_get_m_SortedColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortedColumns();

  constexpr bool const& __cordl_internal_get_m_SortingEnabled() const;

  constexpr bool& __cordl_internal_get_m_SortingEnabled();

  constexpr void __cordl_internal_set_columnSortingChanged(::System::Action* value);

  constexpr void __cordl_internal_set_headerContextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_Columns(::UnityEngine::UIElements::Columns* value);

  constexpr void __cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);

  constexpr void __cordl_internal_set_m_SortedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  constexpr void __cordl_internal_set_m_SortingEnabled(bool value);

  /// @brief Method .ctor, addr 0x4a03e48, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a03ea0, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns);

  /// @brief Method get_columns, addr 0x4a03ce0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns* get_columns();

  /// @brief Method get_sortColumnDescriptions, addr 0x4a03d34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SortColumnDescriptions* get_sortColumnDescriptions();

  /// @brief Method get_viewController, addr 0x4a03c5c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MultiColumnTreeViewController* get_viewController();

  /// @brief Method set_columns, addr 0x4a03ce8, size 0x4c, virtual false, abstract: false, final false
  inline void set_columns(::UnityEngine::UIElements::Columns* value);

  /// @brief Method set_sortColumnDescriptions, addr 0x4a03d3c, size 0x90, virtual false, abstract: false, final false
  inline void set_sortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value);

  /// @brief Method set_sortingEnabled, addr 0x4a03de8, size 0x60, virtual false, abstract: false, final false
  inline void set_sortingEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnTreeView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnTreeView(MultiColumnTreeView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnTreeView(MultiColumnTreeView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5657 };

  /// @brief Field m_Columns, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Columns* ___m_Columns;

  /// @brief Field m_SortingEnabled, offset: 0x4c0, size: 0x1, def value: None
  bool ___m_SortingEnabled;

  /// @brief Field m_SortColumnDescriptions, offset: 0x4c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::SortColumnDescriptions* ___m_SortColumnDescriptions;

  /// @brief Field m_SortedColumns, offset: 0x4d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_SortedColumns;

  /// @brief Field columnSortingChanged, offset: 0x4d8, size: 0x8, def value: None
  ::System::Action* ___columnSortingChanged;

  /// @brief Field headerContextMenuPopulateEvent, offset: 0x4e0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* ___headerContextMenuPopulateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView, ___m_Columns) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView, ___m_SortingEnabled) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView, ___m_SortColumnDescriptions) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView, ___m_SortedColumns) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView, ___columnSortingChanged) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeView, ___headerContextMenuPopulateEvent) == 0x4e0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MultiColumnTreeView, 0x4e8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnTreeView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnTreeView*, "UnityEngine.UIElements", "MultiColumnTreeView");
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory*, "UnityEngine.UIElements", "MultiColumnTreeView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*, "UnityEngine.UIElements", "MultiColumnTreeView/UxmlTraits");
