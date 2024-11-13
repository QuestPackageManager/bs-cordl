#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseListViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewController)
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewController);
// Type: UnityEngine.UIElements::ListViewController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewController*
class CORDL_TYPE ListViewController : public ::UnityEngine::UIElements::BaseListViewController {
public:
  // Declarations
  __declspec(property(get = get_listView)) ::UnityEngine::UIElements::ListView* listView;

  /// @brief Method BindItem, addr 0x4915958, size 0x1f8, virtual true, abstract: false, final false
  inline void BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method DestroyItem, addr 0x4915ba0, size 0x3c, virtual true, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method MakeItem, addr 0x491586c, size 0xec, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* MakeItem();

  static inline ::UnityEngine::UIElements::ListViewController* New_ctor();

  /// @brief Method UnbindItem, addr 0x4915b50, size 0x50, virtual true, abstract: false, final false
  inline void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method .ctor, addr 0x4915bdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_listView, addr 0x49157f0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListView* get_listView();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewController(ListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewController(ListViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewController, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewController*, "UnityEngine.UIElements", "ListViewController");
