#pragma once
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
// Type: UnityEngine.UIElements.Experimental::Lerp
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6715))
// CS Name: ::UnityEngine.UIElements.Experimental::Lerp*
class CORDL_TYPE Lerp : public ::System::Object {
public:
  // Declarations
  /// @brief Method Interpolate, addr 0x2e01d18, size 0x10, virtual false, abstract: false, final false
  static inline float_t Interpolate(float_t start, float_t end, float_t ratio);

  /// @brief Method Interpolate, addr 0x2e01d28, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color Interpolate(::UnityEngine::Color start, ::UnityEngine::Color end, float_t ratio);

  /// @brief Method Interpolate, addr 0x2e01d60, size 0x3f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::StyleValues Interpolate(::UnityEngine::UIElements::Experimental::StyleValues start, ::UnityEngine::UIElements::Experimental::StyleValues end,
                                                                                 float_t ratio);

  // Ctor Parameters [CppParam { name: "", ty: "Lerp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lerp(Lerp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lerp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lerp(Lerp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lerp();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::Lerp, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::Lerp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::Lerp*, "UnityEngine.UIElements.Experimental", "Lerp");
