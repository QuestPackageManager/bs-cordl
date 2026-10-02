#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingBackend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingBackend)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct RayTracingBackend;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend, "UnityEngine.Rendering.UnifiedRayTracing", "RayTracingBackend");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.RayTracingBackend
struct CORDL_TYPE RayTracingBackend {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayTracingBackend_Unwrapped
  enum struct __RayTracingBackend_Unwrapped : int32_t {
    __E_Hardware = static_cast<int32_t>(0x0),
    __E_Compute = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayTracingBackend_Unwrapped() const noexcept {
    return static_cast<__RayTracingBackend_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingBackend();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingBackend(int32_t value__) noexcept;

  /// @brief Field Compute value: I32(1)
  static ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend const Compute;

  /// @brief Field Hardware value: I32(0)
  static ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend const Hardware;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20496 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
