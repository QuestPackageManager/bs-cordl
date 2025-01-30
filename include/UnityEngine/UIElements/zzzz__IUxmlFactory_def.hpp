#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IUxmlFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_def.hpp"
CORDL_MODULE_EXPORT(IUxmlFactory)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IUxmlFactory);
// Dependencies UnityEngine.UIElements.IBaseUxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IUxmlFactory
class CORDL_TYPE IUxmlFactory {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
  constexpr operator ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
  constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUxmlFactory(IUxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IUxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUxmlFactory*, "UnityEngine.UIElements", "IUxmlFactory");
