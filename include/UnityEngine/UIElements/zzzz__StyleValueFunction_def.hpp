#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueFunction)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueFunction);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleValueFunction
struct CORDL_TYPE StyleValueFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleValueFunction_Unwrapped
  enum struct __StyleValueFunction_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Var = static_cast<int32_t>(0x1),
    __E_Env = static_cast<int32_t>(0x2),
    __E_LinearGradient = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleValueFunction_Unwrapped() const noexcept {
    return static_cast<__StyleValueFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleValueFunction(int32_t value__) noexcept;

  /// @brief Field Env value: I32(2)
  static ::UnityEngine::UIElements::StyleValueFunction const Env;

  /// @brief Field LinearGradient value: I32(3)
  static ::UnityEngine::UIElements::StyleValueFunction const LinearGradient;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::UIElements::StyleValueFunction const Unknown;

  /// @brief Field Var value: I32(1)
  static ::UnityEngine::UIElements::StyleValueFunction const Var;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6180 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleValueFunction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueFunction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueFunction, "UnityEngine.UIElements", "StyleValueFunction");
