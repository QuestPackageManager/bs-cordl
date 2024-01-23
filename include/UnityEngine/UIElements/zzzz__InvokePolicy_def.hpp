#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InvokePolicy)
// Forward declare root types
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::InvokePolicy);
// Type: UnityEngine.UIElements::InvokePolicy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7164))
// CS Name: ::UnityEngine.UIElements::InvokePolicy
struct CORDL_TYPE InvokePolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InvokePolicy_Unwrapped
  enum struct __InvokePolicy_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_IncludeDisabled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InvokePolicy_Unwrapped() const noexcept {
    return static_cast<__InvokePolicy_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InvokePolicy(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokePolicy();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::InvokePolicy const Default;

  /// @brief Field IncludeDisabled value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::InvokePolicy const IncludeDisabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InvokePolicy, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InvokePolicy, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InvokePolicy, "UnityEngine.UIElements", "InvokePolicy");
