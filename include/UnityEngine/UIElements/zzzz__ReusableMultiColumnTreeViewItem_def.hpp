#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReusableMultiColumnTreeViewItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ReusableTreeViewItem_def.hpp"
CORDL_MODULE_EXPORT(ReusableMultiColumnTreeViewItem)
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableMultiColumnTreeViewItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem);
// Type: UnityEngine.UIElements::ReusableMultiColumnTreeViewItem
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ReusableMultiColumnTreeViewItem*
class CORDL_TYPE ReusableMultiColumnTreeViewItem : public ::UnityEngine::UIElements::ReusableTreeViewItem {
public:
  // Declarations
  __declspec(property(get = get_rootElement)) ::UnityEngine::UIElements::VisualElement* rootElement;

  /// @brief Method Init, addr 0x4916724, size 0x3dc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* container, ::UnityEngine::UIElements::Columns* columns);

  /// @brief Method Init, addr 0x4917d08, size 0x4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* item);

  static inline ::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem* New_ctor();

  /// @brief Method .ctor, addr 0x49181b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rootElement, addr 0x4917d00, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootElement();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReusableMultiColumnTreeViewItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReusableMultiColumnTreeViewItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReusableMultiColumnTreeViewItem(ReusableMultiColumnTreeViewItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReusableMultiColumnTreeViewItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReusableMultiColumnTreeViewItem(ReusableMultiColumnTreeViewItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableMultiColumnTreeViewItem*, "UnityEngine.UIElements", "ReusableMultiColumnTreeViewItem");
