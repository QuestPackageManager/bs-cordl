#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IExperimentalFeatures.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExperimentalFeatures)
namespace UnityEngine::UIElements::Experimental {
class ITransitionAnimations;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IExperimentalFeatures;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IExperimentalFeatures);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IExperimentalFeatures
class CORDL_TYPE IExperimentalFeatures {
public:
  // Declarations
  __declspec(property(get = get_animation)) ::UnityEngine::UIElements::Experimental::ITransitionAnimations* animation;

  /// @brief Method get_animation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* get_animation();

  // Ctor Parameters [CppParam { name: "", ty: "IExperimentalFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExperimentalFeatures(IExperimentalFeatures const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IExperimentalFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IExperimentalFeatures*, "UnityEngine.UIElements", "IExperimentalFeatures");
