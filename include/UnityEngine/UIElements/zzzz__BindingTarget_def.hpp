#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindingTarget)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingTarget;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingTarget);
// Dependencies UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingTarget
struct CORDL_TYPE BindingTarget {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x69fc430, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingTarget();

  // Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "bindingId", ty:
  // "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None }]
  constexpr BindingTarget(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::BindingId bindingId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field bindingId, offset: 0x8, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId bindingId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingTarget, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingTarget, bindingId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingTarget, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingTarget, "UnityEngine.UIElements", "BindingTarget");
