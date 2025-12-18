#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceLensFlareResolution.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceLensFlareResolution)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceLensFlareResolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceLensFlareResolution
struct CORDL_TYPE ScreenSpaceLensFlareResolution {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceLensFlareResolution_Unwrapped
  enum struct __ScreenSpaceLensFlareResolution_Unwrapped : int32_t {
    __E_Half = static_cast<int32_t>(0x2),
    __E_Quarter = static_cast<int32_t>(0x4),
    __E_Eighth = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceLensFlareResolution_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceLensFlareResolution_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceLensFlareResolution();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceLensFlareResolution(int32_t value__) noexcept;

  /// @brief Field Eighth value: I32(8)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution const Eighth;

  /// @brief Field Half value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution const Half;

  /// @brief Field Quarter value: I32(4)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution const Quarter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution, "UnityEngine.Rendering.Universal", "ScreenSpaceLensFlareResolution");
