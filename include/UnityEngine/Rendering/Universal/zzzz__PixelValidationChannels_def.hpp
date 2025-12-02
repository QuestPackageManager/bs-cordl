#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PixelValidationChannels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelValidationChannels)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PixelValidationChannels;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PixelValidationChannels);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PixelValidationChannels
struct CORDL_TYPE PixelValidationChannels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PixelValidationChannels_Unwrapped
  enum struct __PixelValidationChannels_Unwrapped : int32_t {
    __E_RGB = static_cast<int32_t>(0x0),
    __E_R = static_cast<int32_t>(0x1),
    __E_G = static_cast<int32_t>(0x2),
    __E_B = static_cast<int32_t>(0x3),
    __E_A = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PixelValidationChannels_Unwrapped() const noexcept {
    return static_cast<__PixelValidationChannels_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PixelValidationChannels();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PixelValidationChannels(int32_t value__) noexcept;

  /// @brief Field A value: I32(4)
  static ::UnityEngine::Rendering::Universal::PixelValidationChannels const A;

  /// @brief Field B value: I32(3)
  static ::UnityEngine::Rendering::Universal::PixelValidationChannels const B;

  /// @brief Field G value: I32(2)
  static ::UnityEngine::Rendering::Universal::PixelValidationChannels const G;

  /// @brief Field R value: I32(1)
  static ::UnityEngine::Rendering::Universal::PixelValidationChannels const R;

  /// @brief Field RGB value: I32(0)
  static ::UnityEngine::Rendering::Universal::PixelValidationChannels const RGB;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23092 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelValidationChannels, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PixelValidationChannels, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PixelValidationChannels, "UnityEngine.Rendering.Universal", "PixelValidationChannels");
