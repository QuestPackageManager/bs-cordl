#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/ITransitionAnimations.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITransitionAnimations)
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::Experimental {
template <typename T> class ValueAnimation_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class ITransitionAnimations;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::ITransitionAnimations);
// Type: UnityEngine.UIElements.Experimental::ITransitionAnimations
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Experimental::ITransitionAnimations*
class CORDL_TYPE ITransitionAnimations {
public:
  // Declarations
  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* Start(::UnityEngine::UIElements::Experimental::StyleValues to,
                                                                                                                                int32_t durationMs);

  // Ctor Parameters [CppParam { name: "", ty: "ITransitionAnimations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITransitionAnimations(ITransitionAnimations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITransitionAnimations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITransitionAnimations(ITransitionAnimations const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::ITransitionAnimations);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::ITransitionAnimations*, "UnityEngine.UIElements.Experimental", "ITransitionAnimations");
