#pragma once
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
// Type: UnityEngine.UIElements::IExperimentalFeatures
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6858))
// CS Name: ::UnityEngine.UIElements::IExperimentalFeatures*
class CORDL_TYPE IExperimentalFeatures {
public:
  // Declarations
  __declspec(property(get = get_animation))::UnityEngine::UIElements::Experimental::ITransitionAnimations* animation;

  /// @brief Method get_animation addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* get_animation();

  // Ctor Parameters [CppParam { name: "", ty: "IExperimentalFeatures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExperimentalFeatures(IExperimentalFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExperimentalFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExperimentalFeatures(IExperimentalFeatures const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IExperimentalFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IExperimentalFeatures*, "UnityEngine.UIElements", "IExperimentalFeatures");
