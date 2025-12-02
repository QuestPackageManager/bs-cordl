#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataSourceContextChanged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DataSourceContextChanged)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
struct DataSourceContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct DataSourceContextChanged;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DataSourceContextChanged);
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.DataSourceContext
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataSourceContextChanged
struct CORDL_TYPE DataSourceContextChanged {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6a10c90, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId, ::ByRef<::UnityEngine::UIElements::DataSourceContext> previousContext,
                    ::ByRef<::UnityEngine::UIElements::DataSourceContext> newContext);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataSourceContextChanged();

  // Ctor Parameters [CppParam { name: "m_TargetElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_BindingId", ty:
  // "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None }, CppParam { name: "m_PreviousContext", ty: "::UnityEngine::UIElements::DataSourceContext", modifiers: "", def_value: None
  // }, CppParam { name: "m_NewContext", ty: "::UnityEngine::UIElements::DataSourceContext", modifiers: "", def_value: None }]
  constexpr DataSourceContextChanged(::UnityEngine::UIElements::VisualElement* m_TargetElement, ::UnityEngine::UIElements::BindingId m_BindingId,
                                     ::UnityEngine::UIElements::DataSourceContext m_PreviousContext, ::UnityEngine::UIElements::DataSourceContext m_NewContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4056 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1d0 };

  /// @brief Field m_TargetElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_TargetElement;

  /// @brief Field m_BindingId, offset: 0x8, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId m_BindingId;

  /// @brief Field m_PreviousContext, offset: 0xa0, size: 0x98, def value: None
  ::UnityEngine::UIElements::DataSourceContext m_PreviousContext;

  /// @brief Field m_NewContext, offset: 0x138, size: 0x98, def value: None
  ::UnityEngine::UIElements::DataSourceContext m_NewContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataSourceContextChanged, m_TargetElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataSourceContextChanged, m_BindingId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataSourceContextChanged, m_PreviousContext) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataSourceContextChanged, m_NewContext) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DataSourceContextChanged, 0x1d0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DataSourceContextChanged, "UnityEngine.UIElements", "DataSourceContextChanged");
