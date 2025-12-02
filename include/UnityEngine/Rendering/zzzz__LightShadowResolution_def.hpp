#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightShadowResolution.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightShadowResolution)
// Forward declare root types
namespace UnityEngine::Rendering {
struct LightShadowResolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LightShadowResolution);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LightShadowResolution
struct CORDL_TYPE LightShadowResolution {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightShadowResolution_Unwrapped
  enum struct __LightShadowResolution_Unwrapped : int32_t {
    __E_FromQualitySettings = static_cast<int32_t>(0xffffffff),
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
    __E_VeryHigh = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightShadowResolution_Unwrapped() const noexcept {
    return static_cast<__LightShadowResolution_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightShadowResolution();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightShadowResolution(int32_t value__) noexcept;

  /// @brief Field FromQualitySettings value: I32(-1)
  static ::UnityEngine::Rendering::LightShadowResolution const FromQualitySettings;

  /// @brief Field High value: I32(2)
  static ::UnityEngine::Rendering::LightShadowResolution const High;

  /// @brief Field Low value: I32(0)
  static ::UnityEngine::Rendering::LightShadowResolution const Low;

  /// @brief Field Medium value: I32(1)
  static ::UnityEngine::Rendering::LightShadowResolution const Medium;

  /// @brief Field VeryHigh value: I32(3)
  static ::UnityEngine::Rendering::LightShadowResolution const VeryHigh;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10700 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LightShadowResolution, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LightShadowResolution, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LightShadowResolution, "UnityEngine.Rendering", "LightShadowResolution");
