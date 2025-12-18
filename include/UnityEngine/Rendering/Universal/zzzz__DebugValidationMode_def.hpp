#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugValidationMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugValidationMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugValidationMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugValidationMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugValidationMode
struct CORDL_TYPE DebugValidationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugValidationMode_Unwrapped
  enum struct __DebugValidationMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_HighlightNanInfNegative = static_cast<int32_t>(0x1),
    __E_HighlightOutsideOfRange = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugValidationMode_Unwrapped() const noexcept {
    return static_cast<__DebugValidationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugValidationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugValidationMode(int32_t value__) noexcept;

  /// @brief Field HighlightNanInfNegative value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugValidationMode const HighlightNanInfNegative;

  /// @brief Field HighlightOutsideOfRange value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugValidationMode const HighlightOutsideOfRange;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugValidationMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23125 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugValidationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugValidationMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugValidationMode, "UnityEngine.Rendering.Universal", "DebugValidationMode");
