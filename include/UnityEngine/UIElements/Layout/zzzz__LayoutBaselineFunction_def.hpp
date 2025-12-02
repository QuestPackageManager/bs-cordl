#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutBaselineFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayoutBaselineFunction)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class LayoutBaselineFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutBaselineFunction);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutBaselineFunction
class CORDL_TYPE LayoutBaselineFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6ac9a64, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height);

  static inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6ac99e4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutBaselineFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutBaselineFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutBaselineFunction(LayoutBaselineFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutBaselineFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutBaselineFunction(LayoutBaselineFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutBaselineFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutBaselineFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutBaselineFunction*, "UnityEngine.UIElements.Layout", "LayoutBaselineFunction");
