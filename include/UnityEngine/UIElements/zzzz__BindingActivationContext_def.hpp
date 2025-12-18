#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingActivationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindingActivationContext)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingActivationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingActivationContext);
// Dependencies UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingActivationContext
struct CORDL_TYPE BindingActivationContext {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6a65214, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::ByRef<::UnityEngine::UIElements::BindingId> property);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingActivationContext();

  // Ctor Parameters [CppParam { name: "m_TargetElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_BindingId", ty:
  // "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None }]
  constexpr BindingActivationContext(::UnityEngine::UIElements::VisualElement* m_TargetElement, ::UnityEngine::UIElements::BindingId m_BindingId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4022 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field m_TargetElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_TargetElement;

  /// @brief Field m_BindingId, offset: 0x8, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId m_BindingId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingActivationContext, m_TargetElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingActivationContext, m_BindingId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingActivationContext, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingActivationContext, "UnityEngine.UIElements", "BindingActivationContext");
