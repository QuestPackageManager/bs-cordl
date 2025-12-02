#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructureBuildFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingAccelerationStructureBuildFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructureBuildFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags
struct CORDL_TYPE RayTracingAccelerationStructureBuildFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayTracingAccelerationStructureBuildFlags_Unwrapped
  enum struct __RayTracingAccelerationStructureBuildFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PreferFastTrace = static_cast<int32_t>(0x1),
    __E_PreferFastBuild = static_cast<int32_t>(0x2),
    __E_MinimizeMemory = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayTracingAccelerationStructureBuildFlags_Unwrapped() const noexcept {
    return static_cast<__RayTracingAccelerationStructureBuildFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructureBuildFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RayTracingAccelerationStructureBuildFlags(int32_t value__) noexcept;

  /// @brief Field MinimizeMemory value: I32(4)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags const MinimizeMemory;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags const None;

  /// @brief Field PreferFastBuild value: I32(2)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags const PreferFastBuild;

  /// @brief Field PreferFastTrace value: I32(1)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags const PreferFastTrace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags, "UnityEngine.Rendering", "RayTracingAccelerationStructureBuildFlags");
