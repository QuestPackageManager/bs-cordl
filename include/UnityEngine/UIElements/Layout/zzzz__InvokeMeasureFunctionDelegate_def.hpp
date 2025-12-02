#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/InvokeMeasureFunctionDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InvokeMeasureFunctionDelegate)
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
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class InvokeMeasureFunctionDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.InvokeMeasureFunctionDelegate
class CORDL_TYPE InvokeMeasureFunctionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6acdeb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height,
                     ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode, ::ByRef<::System::IntPtr> exception, ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize> result);

  static inline ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6acde38, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeMeasureFunctionDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeMeasureFunctionDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeMeasureFunctionDelegate(InvokeMeasureFunctionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeMeasureFunctionDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeMeasureFunctionDelegate(InvokeMeasureFunctionDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5399 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*, "UnityEngine.UIElements.Layout", "InvokeMeasureFunctionDelegate");
