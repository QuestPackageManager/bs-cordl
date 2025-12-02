#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutMeasureFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayoutMeasureFunction)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutMeasureMode;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutSize;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class LayoutMeasureFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutMeasureFunction);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutMeasureFunction
class CORDL_TYPE LayoutMeasureFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6ac99d0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width,
                     ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height, ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode,
                     ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize> result);

  static inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6ac9888, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutMeasureFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutMeasureFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutMeasureFunction(LayoutMeasureFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutMeasureFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutMeasureFunction(LayoutMeasureFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutMeasureFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutMeasureFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutMeasureFunction*, "UnityEngine.UIElements.Layout", "LayoutMeasureFunction");
