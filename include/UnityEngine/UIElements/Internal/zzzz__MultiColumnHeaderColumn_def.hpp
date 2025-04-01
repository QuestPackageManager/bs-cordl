#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumn.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiColumnHeaderColumn)
namespace UnityEngine::UIElements::Internal {
class ColumnMover;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnSortIndicator;
}
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumn;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn);
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnHeaderColumn
class CORDL_TYPE MultiColumnHeaderColumn : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field <clickable>k__BackingField, offset 0x3e8, size 0x8
  __declspec(property(get = __cordl_internal_get__clickable_k__BackingField, put = __cordl_internal_set__clickable_k__BackingField)) ::UnityEngine::UIElements::Clickable* _clickable_k__BackingField;

  /// @brief Field <column>k__BackingField, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get__column_k__BackingField, put = __cordl_internal_set__column_k__BackingField)) ::UnityEngine::UIElements::Column* _column_k__BackingField;

  /// @brief Field <mover>k__BackingField, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get__mover_k__BackingField, put = __cordl_internal_set__mover_k__BackingField)) ::UnityEngine::UIElements::Internal::ColumnMover* _mover_k__BackingField;

  __declspec(property(get = get_clickable, put = set_clickable)) ::UnityEngine::UIElements::Clickable* clickable;

  __declspec(property(get = get_column, put = set_column)) ::UnityEngine::UIElements::Column* column;

  __declspec(property(get = get_content, put = set_content)) ::UnityEngine::UIElements::VisualElement* content;

  /// @brief Field contentContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentContainerUssClassName, put = setStaticF_contentContainerUssClassName)) ::StringW contentContainerUssClassName;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName)) ::StringW contentUssClassName;

  /// @brief Field defaultContentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultContentUssClassName, put = setStaticF_defaultContentUssClassName)) ::StringW defaultContentUssClassName;

  /// @brief Field hasIconUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hasIconUssClassName, put = setStaticF_hasIconUssClassName)) ::StringW hasIconUssClassName;

  /// @brief Field hasTitleUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hasTitleUssClassName, put = setStaticF_hasTitleUssClassName)) ::StringW hasTitleUssClassName;

  /// @brief Field iconElementName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconElementName, put = setStaticF_iconElementName)) ::StringW iconElementName;

  __declspec(property(get = get_isContentBound, put = set_isContentBound)) bool isContentBound;

  /// @brief Field m_Content, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Content, put = __cordl_internal_set_m_Content)) ::UnityEngine::UIElements::VisualElement* m_Content;

  /// @brief Field m_ContentContainer, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_ScheduledHeaderTemplateUpdate, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScheduledHeaderTemplateUpdate,
                      put = __cordl_internal_set_m_ScheduledHeaderTemplateUpdate)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScheduledHeaderTemplateUpdate;

  /// @brief Field m_SortIndicatorContainer, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortIndicatorContainer,
                      put = __cordl_internal_set_m_SortIndicatorContainer)) ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* m_SortIndicatorContainer;

  __declspec(property(get = get_mover, put = set_mover)) ::UnityEngine::UIElements::Internal::ColumnMover* mover;

  /// @brief Field movingUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_movingUssClassName, put = setStaticF_movingUssClassName)) ::StringW movingUssClassName;

  /// @brief Field s_BindingCallbackVEPropertyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BindingCallbackVEPropertyName, put = setStaticF_s_BindingCallbackVEPropertyName)) ::StringW s_BindingCallbackVEPropertyName;

  /// @brief Field s_BoundVEPropertyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BoundVEPropertyName, put = setStaticF_s_BoundVEPropertyName)) ::StringW s_BoundVEPropertyName;

  /// @brief Field s_DestroyCallbackVEPropertyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DestroyCallbackVEPropertyName, put = setStaticF_s_DestroyCallbackVEPropertyName)) ::StringW s_DestroyCallbackVEPropertyName;

  /// @brief Field s_UnbindingCallbackVEPropertyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UnbindingCallbackVEPropertyName, put = setStaticF_s_UnbindingCallbackVEPropertyName)) ::StringW s_UnbindingCallbackVEPropertyName;

  __declspec(property(put = set_sortOrderLabel)) ::StringW sortOrderLabel;

  /// @brief Field sortableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sortableUssClassName, put = setStaticF_sortableUssClassName)) ::StringW sortableUssClassName;

  /// @brief Field sortedAscendingUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sortedAscendingUssClassName, put = setStaticF_sortedAscendingUssClassName)) ::StringW sortedAscendingUssClassName;

  /// @brief Field sortedDescendingUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sortedDescendingUssClassName, put = setStaticF_sortedDescendingUssClassName)) ::StringW sortedDescendingUssClassName;

  /// @brief Field titleElementName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_titleElementName, put = setStaticF_titleElementName)) ::StringW titleElementName;

  /// @brief Field titleUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_titleUssClassName, put = setStaticF_titleUssClassName)) ::StringW titleUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method BindHeaderContent, addr 0x49e742c, size 0xd8, virtual false, abstract: false, final false
  inline void BindHeaderContent();

  /// @brief Method CreateDefaultHeaderContent, addr 0x49e7504, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* CreateDefaultHeaderContent();

  /// @brief Method DefaultBindHeaderContent, addr 0x49e7690, size 0x344, virtual false, abstract: false, final false
  inline void DefaultBindHeaderContent(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method DestroyHeaderContent, addr 0x49e6bbc, size 0xc8, virtual false, abstract: false, final false
  inline void DestroyHeaderContent();

  /// @brief Method InitManipulators, addr 0x49e70e4, size 0x23c, virtual false, abstract: false, final false
  inline void InitManipulators();

  static inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* New_ctor(::UnityEngine::UIElements::Column* column);

  /// @brief Method UnbindHeaderContent, addr 0x49e7354, size 0xd8, virtual false, abstract: false, final false
  inline void UnbindHeaderContent();

  /// @brief Method UpdateDataFromColumn, addr 0x49e7320, size 0x34, virtual false, abstract: false, final false
  inline void UpdateDataFromColumn();

  /// @brief Method UpdateGeometryFromColumn, addr 0x49e6fe4, size 0x100, virtual false, abstract: false, final false
  inline void UpdateGeometryFromColumn();

  /// @brief Method UpdateHeaderTemplate, addr 0x49e6e10, size 0x1d4, virtual false, abstract: false, final false
  inline void UpdateHeaderTemplate();

  /// @brief Method <InitManipulators>b__46_0, addr 0x49e7eb8, size 0x84, virtual false, abstract: false, final false
  inline void _InitManipulators_b__46_0(::UnityEngine::UIElements::Internal::ColumnMover* mv);

  constexpr ::UnityEngine::UIElements::Clickable* const& __cordl_internal_get__clickable_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get__clickable_k__BackingField();

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get__column_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get__column_k__BackingField();

  constexpr ::UnityEngine::UIElements::Internal::ColumnMover* const& __cordl_internal_get__mover_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Internal::ColumnMover*& __cordl_internal_get__mover_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Content() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Content();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_ScheduledHeaderTemplateUpdate() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ScheduledHeaderTemplateUpdate();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* const& __cordl_internal_get_m_SortIndicatorContainer() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*& __cordl_internal_get_m_SortIndicatorContainer();

  constexpr void __cordl_internal_set__clickable_k__BackingField(::UnityEngine::UIElements::Clickable* value);

  constexpr void __cordl_internal_set__column_k__BackingField(::UnityEngine::UIElements::Column* value);

  constexpr void __cordl_internal_set__mover_k__BackingField(::UnityEngine::UIElements::Internal::ColumnMover* value);

  constexpr void __cordl_internal_set_m_Content(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_ScheduledHeaderTemplateUpdate(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_SortIndicatorContainer(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* value);

  /// @brief Method <.ctor>b__45_0, addr 0x49e7d1c, size 0x198, virtual false, abstract: false, final false
  inline void __ctor_b__45_0(::UnityEngine::UIElements::Column* c, ::UnityEngine::UIElements::ColumnDataType role);

  /// @brief Method <.ctor>b__45_1, addr 0x49e7eb4, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__45_1(::UnityEngine::UIElements::Column* c);

  /// @brief Method .ctor, addr 0x49e2884, size 0x79c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Column* column);

  static inline ::StringW getStaticF_contentContainerUssClassName();

  static inline ::StringW getStaticF_contentUssClassName();

  static inline ::StringW getStaticF_defaultContentUssClassName();

  static inline ::StringW getStaticF_hasIconUssClassName();

  static inline ::StringW getStaticF_hasTitleUssClassName();

  static inline ::StringW getStaticF_iconElementName();

  static inline ::StringW getStaticF_movingUssClassName();

  static inline ::StringW getStaticF_s_BindingCallbackVEPropertyName();

  static inline ::StringW getStaticF_s_BoundVEPropertyName();

  static inline ::StringW getStaticF_s_DestroyCallbackVEPropertyName();

  static inline ::StringW getStaticF_s_UnbindingCallbackVEPropertyName();

  static inline ::StringW getStaticF_sortableUssClassName();

  static inline ::StringW getStaticF_sortedAscendingUssClassName();

  static inline ::StringW getStaticF_sortedDescendingUssClassName();

  static inline ::StringW getStaticF_titleElementName();

  static inline ::StringW getStaticF_titleUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_clickable, addr 0x49e6abc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Clickable* get_clickable();

  /// @brief Method get_column, addr 0x49e6adc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_column();

  /// @brief Method get_content, addr 0x49e6aec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_content();

  /// @brief Method get_isContentBound, addr 0x49e6c84, size 0xcc, virtual false, abstract: false, final false
  inline bool get_isContentBound();

  /// @brief Method get_mover, addr 0x49e6acc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::ColumnMover* get_mover();

  static inline void setStaticF_contentContainerUssClassName(::StringW value);

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline void setStaticF_defaultContentUssClassName(::StringW value);

  static inline void setStaticF_hasIconUssClassName(::StringW value);

  static inline void setStaticF_hasTitleUssClassName(::StringW value);

  static inline void setStaticF_iconElementName(::StringW value);

  static inline void setStaticF_movingUssClassName(::StringW value);

  static inline void setStaticF_s_BindingCallbackVEPropertyName(::StringW value);

  static inline void setStaticF_s_BoundVEPropertyName(::StringW value);

  static inline void setStaticF_s_DestroyCallbackVEPropertyName(::StringW value);

  static inline void setStaticF_s_UnbindingCallbackVEPropertyName(::StringW value);

  static inline void setStaticF_sortableUssClassName(::StringW value);

  static inline void setStaticF_sortedAscendingUssClassName(::StringW value);

  static inline void setStaticF_sortedDescendingUssClassName(::StringW value);

  static inline void setStaticF_titleElementName(::StringW value);

  static inline void setStaticF_titleUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_clickable, addr 0x49e6ac4, size 0x8, virtual false, abstract: false, final false
  inline void set_clickable(::UnityEngine::UIElements::Clickable* value);

  /// @brief Method set_column, addr 0x49e6ae4, size 0x8, virtual false, abstract: false, final false
  inline void set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method set_content, addr 0x49e6af4, size 0xc8, virtual false, abstract: false, final false
  inline void set_content(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_isContentBound, addr 0x49e6d50, size 0xc0, virtual false, abstract: false, final false
  inline void set_isContentBound(bool value);

  /// @brief Method set_mover, addr 0x49e6ad4, size 0x8, virtual false, abstract: false, final false
  inline void set_mover(::UnityEngine::UIElements::Internal::ColumnMover* value);

  /// @brief Method set_sortOrderLabel, addr 0x49e5198, size 0x2c, virtual false, abstract: false, final false
  inline void set_sortOrderLabel(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnHeaderColumn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnHeaderColumn(MultiColumnHeaderColumn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnHeaderColumn(MultiColumnHeaderColumn const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6513 };

  /// @brief Field m_ContentContainer, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_Content, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Content;

  /// @brief Field m_SortIndicatorContainer, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* ___m_SortIndicatorContainer;

  /// @brief Field m_ScheduledHeaderTemplateUpdate, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ScheduledHeaderTemplateUpdate;

  /// @brief Field <clickable>k__BackingField, offset: 0x3e8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ____clickable_k__BackingField;

  /// @brief Field <mover>k__BackingField, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::ColumnMover* ____mover_k__BackingField;

  /// @brief Field <column>k__BackingField, offset: 0x3f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ____column_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ___m_ContentContainer) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ___m_Content) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ___m_SortIndicatorContainer) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ___m_ScheduledHeaderTemplateUpdate) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ____clickable_k__BackingField) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ____mover_k__BackingField) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, ____column_k__BackingField) == 0x3f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn, 0x400>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumn");
