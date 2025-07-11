#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewItemWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TreeItem_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeViewItemWrapper)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct TreeItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TreeViewItemWrapper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TreeViewItemWrapper);
// Dependencies UnityEngine.UIElements.TreeItem
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TreeViewItemWrapper
struct CORDL_TYPE TreeViewItemWrapper {
public:
  // Declarations
  __declspec(property(get = get_childrenIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>* childrenIds;

  __declspec(property(get = get_hasChildren)) bool hasChildren;

  __declspec(property(get = get_id)) int32_t id;

  /// @brief Method .ctor, addr 0x4a0ea68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TreeItem item, int32_t depth);

  /// @brief Method get_childrenIds, addr 0x4a0ea5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_childrenIds();

  /// @brief Method get_hasChildren, addr 0x4a0ea64, size 0x4, virtual false, abstract: false, final false
  inline bool get_hasChildren();

  /// @brief Method get_id, addr 0x4a0ea54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeViewItemWrapper();

  // Ctor Parameters [CppParam { name: "item", ty: "::UnityEngine::UIElements::TreeItem", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TreeViewItemWrapper(::UnityEngine::UIElements::TreeItem item, int32_t depth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field item, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::TreeItem item;

  /// @brief Field depth, offset: 0x10, size: 0x4, def value: None
  int32_t depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeViewItemWrapper, item) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewItemWrapper, depth) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeViewItemWrapper, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewItemWrapper, "UnityEngine.UIElements", "TreeViewItemWrapper");
