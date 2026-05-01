#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/ILayoutProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ILayoutProcessor)
namespace UnityEngine::UIElements::Layout {
struct LayoutDirection;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class ILayoutProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::ILayoutProcessor);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.ILayoutProcessor
class CORDL_TYPE ILayoutProcessor {
public:
  // Declarations
  /// @brief Method CalculateLayout, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight, ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection);

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutProcessor(ILayoutProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5397 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::ILayoutProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::ILayoutProcessor*, "UnityEngine.UIElements.Layout", "ILayoutProcessor");
