#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReflectionProbeMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReflectionProbeMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReflectionProbeMode
struct CORDL_TYPE ReflectionProbeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionProbeMode_Unwrapped
  enum struct __ReflectionProbeMode_Unwrapped : int32_t {
    __E_Baked = static_cast<int32_t>(0x0),
    __E_Realtime = static_cast<int32_t>(0x1),
    __E_Custom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionProbeMode_Unwrapped() const noexcept {
    return static_cast<__ReflectionProbeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionProbeMode(int32_t value__) noexcept;

  /// @brief Field Baked value: I32(0)
  static ::UnityEngine::Rendering::ReflectionProbeMode const Baked;

  /// @brief Field Custom value: I32(2)
  static ::UnityEngine::Rendering::ReflectionProbeMode const Custom;

  /// @brief Field Realtime value: I32(1)
  static ::UnityEngine::Rendering::ReflectionProbeMode const Realtime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReflectionProbeMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReflectionProbeMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeMode, "UnityEngine.Rendering", "ReflectionProbeMode");
