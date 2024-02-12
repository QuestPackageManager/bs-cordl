#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputedTransitionProperty)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ComputedTransitionProperty);
// Type: UnityEngine.UIElements::ComputedTransitionProperty
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6746))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6546))
// CS Name: ::UnityEngine.UIElements::ComputedTransitionProperty
struct CORDL_TYPE ComputedTransitionProperty {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "",
  // def_value: None }]
  constexpr ComputedTransitionProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputedTransitionProperty();

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId id;

  /// @brief Field durationMs, offset: 0x4, size: 0x4, def value: None
  int32_t durationMs;

  /// @brief Field delayMs, offset: 0x8, size: 0x4, def value: None
  int32_t delayMs;

  /// @brief Field easingCurve, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<float_t, float_t>* easingCurve;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ComputedTransitionProperty, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ComputedTransitionProperty, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ComputedTransitionProperty, durationMs) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ComputedTransitionProperty, delayMs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ComputedTransitionProperty, easingCurve) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedTransitionProperty, "UnityEngine.UIElements", "ComputedTransitionProperty");
