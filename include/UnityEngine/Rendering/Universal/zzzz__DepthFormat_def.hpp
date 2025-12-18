#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DepthFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthFormat)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DepthFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DepthFormat);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DepthFormat
struct CORDL_TYPE DepthFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DepthFormat_Unwrapped
  enum struct __DepthFormat_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Depth_16 = static_cast<int32_t>(0x5a),
    __E_Depth_24 = static_cast<int32_t>(0x5b),
    __E_Depth_32 = static_cast<int32_t>(0x5d),
    __E_Depth_16_Stencil_8 = static_cast<int32_t>(0x97),
    __E_Depth_24_Stencil_8 = static_cast<int32_t>(0x5c),
    __E_Depth_32_Stencil_8 = static_cast<int32_t>(0x5e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DepthFormat_Unwrapped() const noexcept {
    return static_cast<__DepthFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DepthFormat(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Default;

  /// @brief Field Depth_16 value: I32(90)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Depth_16;

  /// @brief Field Depth_16_Stencil_8 value: I32(151)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Depth_16_Stencil_8;

  /// @brief Field Depth_24 value: I32(91)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Depth_24;

  /// @brief Field Depth_24_Stencil_8 value: I32(92)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Depth_24_Stencil_8;

  /// @brief Field Depth_32 value: I32(93)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Depth_32;

  /// @brief Field Depth_32_Stencil_8 value: I32(94)
  static ::UnityEngine::Rendering::Universal::DepthFormat const Depth_32_Stencil_8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12986 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DepthFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DepthFormat, "UnityEngine.Rendering.Universal", "DepthFormat");
