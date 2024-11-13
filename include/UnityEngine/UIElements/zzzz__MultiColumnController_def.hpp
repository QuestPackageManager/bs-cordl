#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MultiColumnController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiColumnController)
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
class MultiColumnCollectionHeader;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
struct ColumnsDataType;
}
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
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
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MultiColumnController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MultiColumnController);
// Type: UnityEngine.UIElements::MultiColumnController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MultiColumnController*
class CORDL_TYPE MultiColumnController : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_baseUssClassName, put = setStaticF_baseUssClassName)) ::StringW baseUssClassName;

  /// @brief Field bindableElementPropertyName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_bindableElementPropertyName, put = setStaticF_bindableElementPropertyName)) ::UnityEngine::PropertyName bindableElementPropertyName;

  /// @brief Field cellLabelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cellLabelUssClassName, put = setStaticF_cellLabelUssClassName)) ::StringW cellLabelUssClassName;

  /// @brief Field cellUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cellUssClassName, put = setStaticF_cellUssClassName)) ::StringW cellUssClassName;

  /// @brief Field columnSortingChanged, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_columnSortingChanged, put = __cordl_internal_set_columnSortingChanged)) ::System::Action* columnSortingChanged;

  __declspec(property(get = get_header)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header;

  /// @brief Field headerContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_headerContainerUssClassName, put = setStaticF_headerContainerUssClassName)) ::StringW headerContainerUssClassName;

  /// @brief Field headerContextMenuPopulateEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_headerContextMenuPopulateEvent,
                      put = __cordl_internal_set_headerContextMenuPopulateEvent)) ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*
      headerContextMenuPopulateEvent;

  /// @brief Field k_BoundColumnVePropertyName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_BoundColumnVePropertyName, put = setStaticF_k_BoundColumnVePropertyName)) ::UnityEngine::PropertyName k_BoundColumnVePropertyName;

  /// @brief Field k_HeaderContainerViewDataKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HeaderContainerViewDataKey, put = setStaticF_k_HeaderContainerViewDataKey)) ::StringW k_HeaderContainerViewDataKey;

  /// @brief Field k_HeaderViewDataKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HeaderViewDataKey, put = setStaticF_k_HeaderViewDataKey)) ::StringW k_HeaderViewDataKey;

  /// @brief Field m_HeaderContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderContainer, put = __cordl_internal_set_m_HeaderContainer)) ::UnityEngine::UIElements::VisualElement* m_HeaderContainer;

  /// @brief Field m_MultiColumnHeader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MultiColumnHeader,
                      put = __cordl_internal_set_m_MultiColumnHeader)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* m_MultiColumnHeader;

  /// @brief Field m_View, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_View, put = __cordl_internal_set_m_View)) ::UnityEngine::UIElements::BaseVerticalCollectionView* m_View;

  /// @brief Field rowContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rowContainerUssClassName, put = setStaticF_rowContainerUssClassName)) ::StringW rowContainerUssClassName;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BindCellItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void BindCellItem(::UnityEngine::UIElements::VisualElement* ve, int32_t rowIndex, ::UnityEngine::UIElements::Column* column, T item);

  /// @brief Method BindItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index, T item);

  /// @brief Method DefaultBindCellItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DefaultBindCellItem(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::Column* column, T item);

  /// @brief Method DefaultMakeCellItem, addr 0x4996940, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* DefaultMakeCellItem();

  /// @brief Method DestroyItem, addr 0x4997280, size 0x468, virtual false, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Dispose, addr 0x49979a0, size 0x4fc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MakeItem, addr 0x49969d4, size 0x48c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* MakeItem();

  static inline ::UnityEngine::UIElements::MultiColumnController* New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method OnColumnAdded, addr 0x4998714, size 0x1c, virtual false, abstract: false, final false
  inline void OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index);

  /// @brief Method OnColumnChanged, addr 0x49987bc, size 0x38, virtual false, abstract: false, final false
  inline void OnColumnChanged(::UnityEngine::UIElements::ColumnsDataType type);

  /// @brief Method OnColumnContainerGeometryChanged, addr 0x4998300, size 0x8, virtual false, abstract: false, final false
  inline void OnColumnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnColumnRemoved, addr 0x4998730, size 0x1c, virtual false, abstract: false, final false
  inline void OnColumnRemoved(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnReordered, addr 0x499874c, size 0x34, virtual false, abstract: false, final false
  inline void OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to);

  /// @brief Method OnColumnResized, addr 0x4998340, size 0x3d4, virtual false, abstract: false, final false
  inline void OnColumnResized(int32_t index, float_t width);

  /// @brief Method OnColumnSortingChanged, addr 0x4998308, size 0x1c, virtual false, abstract: false, final false
  inline void OnColumnSortingChanged();

  /// @brief Method OnColumnsChanged, addr 0x4998780, size 0x3c, virtual false, abstract: false, final false
  inline void OnColumnsChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method OnContextMenuPopulateEvent, addr 0x4998324, size 0x1c, virtual false, abstract: false, final false
  inline void OnContextMenuPopulateEvent(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt, ::UnityEngine::UIElements::Column* column);

  /// @brief Method OnHorizontalScrollerValueChanged, addr 0x4997e9c, size 0x1c, virtual false, abstract: false, final false
  inline void OnHorizontalScrollerValueChanged(float_t v);

  /// @brief Method OnViewDataRestored, addr 0x49987f4, size 0x1c, virtual false, abstract: false, final false
  inline void OnViewDataRestored();

  /// @brief Method OnViewportGeometryChanged, addr 0x4997eb8, size 0x2a0, virtual false, abstract: false, final false
  inline void OnViewportGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method PrepareView, addr 0x49976e8, size 0x2b8, virtual false, abstract: false, final false
  inline void PrepareView(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method UnbindCellItem, addr 0x4996904, size 0x3c, virtual false, abstract: false, final false
  static inline void UnbindCellItem(::UnityEngine::UIElements::VisualElement* ve, int32_t rowIndex, ::UnityEngine::UIElements::Column* column);

  /// @brief Method UnbindItem, addr 0x4996e60, size 0x420, virtual false, abstract: false, final false
  inline void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method UpdateContentContainer, addr 0x4998158, size 0x1a8, virtual false, abstract: false, final false
  inline void UpdateContentContainer(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  constexpr ::System::Action*& __cordl_internal_get_columnSortingChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_columnSortingChanged() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*& __cordl_internal_get_headerContextMenuPopulateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*> const&
  __cordl_internal_get_headerContextMenuPopulateEvent() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_HeaderContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_HeaderContainer() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& __cordl_internal_get_m_MultiColumnHeader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*> const& __cordl_internal_get_m_MultiColumnHeader() const;

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __cordl_internal_get_m_View();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> const& __cordl_internal_get_m_View() const;

  constexpr void __cordl_internal_set_columnSortingChanged(::System::Action* value);

  constexpr void __cordl_internal_set_headerContextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_HeaderContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_MultiColumnHeader(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value);

  constexpr void __cordl_internal_set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value);

  /// @brief Method .ctor, addr 0x4996504, size 0x400, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method add_columnSortingChanged, addr 0x4996264, size 0x9c, virtual false, abstract: false, final false
  inline void add_columnSortingChanged(::System::Action* value);

  /// @brief Method add_headerContextMenuPopulateEvent, addr 0x499639c, size 0xb0, virtual false, abstract: false, final false
  inline void add_headerContextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  static inline ::StringW getStaticF_baseUssClassName();

  static inline ::UnityEngine::PropertyName getStaticF_bindableElementPropertyName();

  static inline ::StringW getStaticF_cellLabelUssClassName();

  static inline ::StringW getStaticF_cellUssClassName();

  static inline ::StringW getStaticF_headerContainerUssClassName();

  static inline ::UnityEngine::PropertyName getStaticF_k_BoundColumnVePropertyName();

  static inline ::StringW getStaticF_k_HeaderContainerViewDataKey();

  static inline ::StringW getStaticF_k_HeaderViewDataKey();

  static inline ::StringW getStaticF_rowContainerUssClassName();

  /// @brief Method get_header, addr 0x49964fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* get_header();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_columnSortingChanged, addr 0x4996300, size 0x9c, virtual false, abstract: false, final false
  inline void remove_columnSortingChanged(::System::Action* value);

  /// @brief Method remove_headerContextMenuPopulateEvent, addr 0x499644c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_headerContextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value);

  static inline void setStaticF_baseUssClassName(::StringW value);

  static inline void setStaticF_bindableElementPropertyName(::UnityEngine::PropertyName value);

  static inline void setStaticF_cellLabelUssClassName(::StringW value);

  static inline void setStaticF_cellUssClassName(::StringW value);

  static inline void setStaticF_headerContainerUssClassName(::StringW value);

  static inline void setStaticF_k_BoundColumnVePropertyName(::UnityEngine::PropertyName value);

  static inline void setStaticF_k_HeaderContainerViewDataKey(::StringW value);

  static inline void setStaticF_k_HeaderViewDataKey(::StringW value);

  static inline void setStaticF_rowContainerUssClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnController(MultiColumnController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnController(MultiColumnController const&) = delete;

  /// @brief Field columnSortingChanged, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___columnSortingChanged;

  /// @brief Field headerContextMenuPopulateEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* ___headerContextMenuPopulateEvent;

  /// @brief Field m_View, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* ___m_View;

  /// @brief Field m_HeaderContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_HeaderContainer;

  /// @brief Field m_MultiColumnHeader, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* ___m_MultiColumnHeader;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5622 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MultiColumnController, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnController, ___columnSortingChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnController, ___headerContextMenuPopulateEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnController, ___m_View) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnController, ___m_HeaderContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MultiColumnController, ___m_MultiColumnHeader) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnController*, "UnityEngine.UIElements", "MultiColumnController");
