#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraOverrideOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraOverrideOption)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct CameraOverrideOption;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::CameraOverrideOption);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.CameraOverrideOption
struct CORDL_TYPE CameraOverrideOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CameraOverrideOption_Unwrapped
  enum struct __CameraOverrideOption_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_On = static_cast<int32_t>(0x1),
    __E_UsePipelineSettings = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CameraOverrideOption_Unwrapped() const noexcept {
    return static_cast<__CameraOverrideOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraOverrideOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CameraOverrideOption(int32_t value__) noexcept;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Rendering::Universal::CameraOverrideOption const Off;

  /// @brief Field On value: I32(1)
  static ::UnityEngine::Rendering::Universal::CameraOverrideOption const On;

  /// @brief Field UsePipelineSettings value: I32(2)
  static ::UnityEngine::Rendering::Universal::CameraOverrideOption const UsePipelineSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraOverrideOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CameraOverrideOption, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraOverrideOption, "UnityEngine.Rendering.Universal", "CameraOverrideOption");
