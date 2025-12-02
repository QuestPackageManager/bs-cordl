#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReusableMultiColumnListViewItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ReusableListViewItem_def.hpp"
CORDL_MODULE_EXPORT(ReusableMultiColumnListViewItem)
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableMultiColumnListViewItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReusableMultiColumnListViewItem);
// Dependencies UnityEngine.UIElements.ReusableListViewItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ReusableMultiColumnListViewItem
class CORDL_TYPE ReusableMultiColumnListViewItem : public ::UnityEngine::UIElements::ReusableListViewItem {
public:
  // Declarations
  __declspec(property(get = get_rootElement)) ::UnityEngine::UIElements::VisualElement* rootElement;

  /// @brief Method Init, addr 0x6a1f54c, size 0x3cc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* container, ::UnityEngine::UIElements::Columns* columns, bool usesAnimatedDrag);

  /// @brief Method Init, addr 0x6a217cc, size 0x4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* item);

  static inline ::UnityEngine::UIElements::ReusableMultiColumnListViewItem* New_ctor();

  /// @brief Method .ctor, addr 0x6a217d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rootElement, addr 0x6a217c4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootElement();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReusableMultiColumnListViewItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReusableMultiColumnListViewItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReusableMultiColumnListViewItem(ReusableMultiColumnListViewItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReusableMultiColumnListViewItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReusableMultiColumnListViewItem(ReusableMultiColumnListViewItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableMultiColumnListViewItem, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableMultiColumnListViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableMultiColumnListViewItem*, "UnityEngine.UIElements", "ReusableMultiColumnListViewItem");
