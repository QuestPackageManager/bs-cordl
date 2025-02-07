#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReusableListViewItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
CORDL_MODULE_EXPORT(ReusableListViewItem)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableListViewItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReusableListViewItem);
// Dependencies UnityEngine.UIElements.ReusableCollectionItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ReusableListViewItem
class CORDL_TYPE ReusableListViewItem : public ::UnityEngine::UIElements::ReusableCollectionItem {
public:
  // Declarations
  /// @brief Field m_Container, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityEngine::UIElements::VisualElement* m_Container;

  /// @brief Field m_DragHandle, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragHandle, put = __cordl_internal_set_m_DragHandle)) ::UnityEngine::UIElements::VisualElement* m_DragHandle;

  /// @brief Field m_ItemContainer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemContainer, put = __cordl_internal_set_m_ItemContainer)) ::UnityEngine::UIElements::VisualElement* m_ItemContainer;

  __declspec(property(get = get_rootElement)) ::UnityEngine::UIElements::VisualElement* rootElement;

  /// @brief Method DetachElement, addr 0x49821d0, size 0x8c, virtual true, abstract: false, final false
  inline void DetachElement();

  /// @brief Method Init, addr 0x4979bb4, size 0xc4, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* item, bool usesAnimatedDragger);

  static inline ::UnityEngine::UIElements::ReusableListViewItem* New_ctor();

  /// @brief Method PreAttachElement, addr 0x4982144, size 0x8c, virtual true, abstract: false, final false
  inline void PreAttachElement();

  /// @brief Method SetDragGhost, addr 0x498225c, size 0xfc, virtual true, abstract: false, final false
  inline void SetDragGhost(bool dragGhost);

  /// @brief Method UpdateDragHandle, addr 0x497a1ac, size 0x144, virtual false, abstract: false, final false
  inline void UpdateDragHandle(bool needsDragHandle);

  /// @brief Method UpdateHierarchy, addr 0x4981ef4, size 0x250, virtual false, abstract: false, final false
  inline void UpdateHierarchy(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::VisualElement* item, bool usesAnimatedDragger);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHandle() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHandle();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ItemContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ItemContainer();

  constexpr void __cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHandle(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_ItemContainer(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4982358, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rootElement, addr 0x4981edc, size 0x18, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootElement();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReusableListViewItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReusableListViewItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReusableListViewItem(ReusableListViewItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReusableListViewItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReusableListViewItem(ReusableListViewItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5487 };

  /// @brief Field m_Container, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Container;

  /// @brief Field m_DragHandle, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHandle;

  /// @brief Field m_ItemContainer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ItemContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ReusableListViewItem, ___m_Container) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableListViewItem, ___m_DragHandle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableListViewItem, ___m_ItemContainer) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableListViewItem, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableListViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableListViewItem*, "UnityEngine.UIElements", "ReusableListViewItem");
