#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/IValueAnimationUpdate.hpp"
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
// Dependencies
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.IValueAnimationUpdate
class CORDL_TYPE IValueAnimationUpdate {
public:
  // Declarations
  /// @brief Method Tick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Tick(int64_t currentTimeMs);

  // Ctor Parameters [CppParam { name: "", ty: "IValueAnimationUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueAnimationUpdate(IValueAnimationUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*, "UnityEngine.UIElements.Experimental", "IValueAnimationUpdate");
