#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/Lerp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Lerp)
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class Lerp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::Lerp);
// Dependencies System.Object
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.Lerp
class CORDL_TYPE Lerp : public ::System::Object {
public:
  // Declarations
  /// @brief Method Interpolate, addr 0x49e2168, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color Interpolate(::UnityEngine::Color start, ::UnityEngine::Color end, float_t ratio);

  /// @brief Method Interpolate, addr 0x49e21a0, size 0x3bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::StyleValues Interpolate(::UnityEngine::UIElements::Experimental::StyleValues start, ::UnityEngine::UIElements::Experimental::StyleValues end,
                                                                                 float_t ratio);

  /// @brief Method Interpolate, addr 0x49e2158, size 0x10, virtual false, abstract: false, final false
  static inline float_t Interpolate(float_t start, float_t end, float_t ratio);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lerp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lerp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lerp(Lerp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lerp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lerp(Lerp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::Lerp, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::Lerp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::Lerp*, "UnityEngine.UIElements.Experimental", "Lerp");
