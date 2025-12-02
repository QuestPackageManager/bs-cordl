#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieFormat)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightCookieFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightCookieFormat);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieFormat
struct CORDL_TYPE LightCookieFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightCookieFormat_Unwrapped
  enum struct __LightCookieFormat_Unwrapped : int32_t {
    __E_GrayscaleLow = static_cast<int32_t>(0x0),
    __E_GrayscaleHigh = static_cast<int32_t>(0x1),
    __E_ColorLow = static_cast<int32_t>(0x2),
    __E_ColorHigh = static_cast<int32_t>(0x3),
    __E_ColorHDR = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightCookieFormat_Unwrapped() const noexcept {
    return static_cast<__LightCookieFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightCookieFormat(int32_t value__) noexcept;

  /// @brief Field ColorHDR value: I32(4)
  static ::UnityEngine::Rendering::Universal::LightCookieFormat const ColorHDR;

  /// @brief Field ColorHigh value: I32(3)
  static ::UnityEngine::Rendering::Universal::LightCookieFormat const ColorHigh;

  /// @brief Field ColorLow value: I32(2)
  static ::UnityEngine::Rendering::Universal::LightCookieFormat const ColorLow;

  /// @brief Field GrayscaleHigh value: I32(1)
  static ::UnityEngine::Rendering::Universal::LightCookieFormat const GrayscaleHigh;

  /// @brief Field GrayscaleLow value: I32(0)
  static ::UnityEngine::Rendering::Universal::LightCookieFormat const GrayscaleLow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12552 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieFormat, "UnityEngine.Rendering.Universal", "LightCookieFormat");
