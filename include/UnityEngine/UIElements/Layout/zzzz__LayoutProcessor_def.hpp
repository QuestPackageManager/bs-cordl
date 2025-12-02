#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayoutProcessor)
namespace UnityEngine::UIElements::Layout {
class ILayoutProcessor;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDirection;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class LayoutProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutProcessor);
// Dependencies System.Object
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutProcessor
class CORDL_TYPE LayoutProcessor : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Processor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Processor, put = setStaticF_s_Processor)) ::UnityEngine::UIElements::Layout::ILayoutProcessor* s_Processor;

  /// @brief Method CalculateLayout, addr 0x6acdc44, size 0x130, virtual false, abstract: false, final false
  static inline void CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight, ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection);

  static inline ::UnityEngine::UIElements::Layout::ILayoutProcessor* getStaticF_s_Processor();

  static inline void setStaticF_s_Processor(::UnityEngine::UIElements::Layout::ILayoutProcessor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutProcessor(LayoutProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutProcessor(LayoutProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutProcessor*, "UnityEngine.UIElements.Layout", "LayoutProcessor");
