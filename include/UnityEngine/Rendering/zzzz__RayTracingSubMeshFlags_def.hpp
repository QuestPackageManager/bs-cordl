#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingSubMeshFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingSubMeshFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RayTracingSubMeshFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RayTracingSubMeshFlags);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingSubMeshFlags, "UnityEngine.Rendering", "RayTracingSubMeshFlags");
// [UsedByNativeCode]
// [MovedFrom("UnityEngine.Experimental.Rendering")]
// [Flags]
// [NativeHeader("Runtime/Export/Graphics/RayTracingAccelerationStructure.bindings.h")]
// [NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingSubMeshFlags
struct CORDL_TYPE RayTracingSubMeshFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayTracingSubMeshFlags_Unwrapped
  enum struct __RayTracingSubMeshFlags_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Enabled = static_cast<int32_t>(0x1),
    __E_ClosestHitOnly = static_cast<int32_t>(0x2),
    __E_UniqueAnyHitCalls = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayTracingSubMeshFlags_Unwrapped() const noexcept {
    return static_cast<__RayTracingSubMeshFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingSubMeshFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingSubMeshFlags(int32_t value__) noexcept;

  /// @brief Field ClosestHitOnly value: I32(2)
  static ::UnityEngine::Rendering::RayTracingSubMeshFlags const ClosestHitOnly;

  /// @brief Field Disabled value: I32(0)
  static ::UnityEngine::Rendering::RayTracingSubMeshFlags const Disabled;

  /// @brief Field Enabled value: I32(1)
  static ::UnityEngine::Rendering::RayTracingSubMeshFlags const Enabled;

  /// @brief Field UniqueAnyHitCalls value: I32(4)
  static ::UnityEngine::Rendering::RayTracingSubMeshFlags const UniqueAnyHitCalls;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingSubMeshFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingSubMeshFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
