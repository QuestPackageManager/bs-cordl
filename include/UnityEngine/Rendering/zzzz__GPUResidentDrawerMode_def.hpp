#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentDrawerMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUResidentDrawerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawerMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawerMode
struct CORDL_TYPE GPUResidentDrawerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __GPUResidentDrawerMode_Unwrapped
  enum struct __GPUResidentDrawerMode_Unwrapped : uint8_t {
    __E_Disabled = static_cast<uint8_t>(0x0u),
    __E_InstancedDrawing = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GPUResidentDrawerMode_Unwrapped() const noexcept {
    return static_cast<__GPUResidentDrawerMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr GPUResidentDrawerMode(uint8_t value__) noexcept;

  /// @brief Field Disabled value: U8(0)
  static ::UnityEngine::Rendering::GPUResidentDrawerMode const Disabled;

  /// @brief Field InstancedDrawing value: U8(1)
  static ::UnityEngine::Rendering::GPUResidentDrawerMode const InstancedDrawing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17591 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawerMode, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawerMode, "UnityEngine.Rendering", "GPUResidentDrawerMode");
