#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AntialiasingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntialiasingMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct AntialiasingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::AntialiasingMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AntialiasingMode
struct CORDL_TYPE AntialiasingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AntialiasingMode_Unwrapped
  enum struct __AntialiasingMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FastApproximateAntialiasing = static_cast<int32_t>(0x1),
    __E_SubpixelMorphologicalAntiAliasing = static_cast<int32_t>(0x2),
    __E_TemporalAntiAliasing = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AntialiasingMode_Unwrapped() const noexcept {
    return static_cast<__AntialiasingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AntialiasingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AntialiasingMode(int32_t value__) noexcept;

  /// @brief Field FastApproximateAntialiasing value: I32(1)
  static ::UnityEngine::Rendering::Universal::AntialiasingMode const FastApproximateAntialiasing;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::AntialiasingMode const None;

  /// @brief Field SubpixelMorphologicalAntiAliasing value: I32(2)
  static ::UnityEngine::Rendering::Universal::AntialiasingMode const SubpixelMorphologicalAntiAliasing;

  /// @brief Field TemporalAntiAliasing value: I32(3)
  static ::UnityEngine::Rendering::Universal::AntialiasingMode const TemporalAntiAliasing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12956 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::AntialiasingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::AntialiasingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::AntialiasingMode, "UnityEngine.Rendering.Universal", "AntialiasingMode");
