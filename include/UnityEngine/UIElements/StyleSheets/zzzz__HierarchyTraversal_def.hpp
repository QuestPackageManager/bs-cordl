#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/HierarchyTraversal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyTraversal)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class HierarchyTraversal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::HierarchyTraversal);
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
class CORDL_TYPE HierarchyTraversal : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal* New_ctor();

  /// @brief Method Recurse, addr 0x49c5664, size 0xd0, virtual false, abstract: false, final false
  inline void Recurse(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  /// @brief Method Traverse, addr 0x49c5654, size 0x10, virtual true, abstract: false, final false
  inline void Traverse(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method TraverseRecursive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  /// @brief Method .ctor, addr 0x49c5734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyTraversal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyTraversal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyTraversal(HierarchyTraversal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyTraversal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyTraversal(HierarchyTraversal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::HierarchyTraversal, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::HierarchyTraversal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::HierarchyTraversal*, "UnityEngine.UIElements.StyleSheets", "HierarchyTraversal");
