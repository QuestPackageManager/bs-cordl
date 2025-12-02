#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/InvokeBaselineFunctionDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InvokeBaselineFunctionDelegate)
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
class InvokeBaselineFunctionDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.InvokeBaselineFunctionDelegate
class CORDL_TYPE InvokeBaselineFunctionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6acdf4c, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height);

  static inline ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6acdecc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeBaselineFunctionDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeBaselineFunctionDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeBaselineFunctionDelegate(InvokeBaselineFunctionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeBaselineFunctionDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeBaselineFunctionDelegate(InvokeBaselineFunctionDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*, "UnityEngine.UIElements.Layout", "InvokeBaselineFunctionDelegate");
