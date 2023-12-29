#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IValueAnimationUpdate)
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate);
// Type: UnityEngine.UIElements.Experimental::IValueAnimationUpdate
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7543))
// CS Name: ::UnityEngine.UIElements.Experimental::IValueAnimationUpdate*
class CORDL_TYPE IValueAnimationUpdate {
public:
  // Declarations
  /// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Tick(int64_t currentTimeMs);

  // Ctor Parameters [CppParam { name: "", ty: "IValueAnimationUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValueAnimationUpdate(IValueAnimationUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValueAnimationUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueAnimationUpdate(IValueAnimationUpdate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*, "UnityEngine.UIElements.Experimental", "IValueAnimationUpdate");
