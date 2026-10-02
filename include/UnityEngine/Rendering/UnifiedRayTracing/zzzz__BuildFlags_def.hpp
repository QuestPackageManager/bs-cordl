#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BuildFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuildFlags)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BuildFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags, "UnityEngine.Rendering.UnifiedRayTracing", "BuildFlags");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.BuildFlags
struct CORDL_TYPE BuildFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BuildFlags_Unwrapped
  enum struct __BuildFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PreferFastTrace = static_cast<int32_t>(0x1),
    __E_PreferFastBuild = static_cast<int32_t>(0x2),
    __E_MinimizeMemory = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BuildFlags_Unwrapped() const noexcept {
    return static_cast<__BuildFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr BuildFlags(int32_t value__) noexcept;

  /// @brief Field MinimizeMemory value: I32(4)
  static ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const MinimizeMemory;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const None;

  /// @brief Field PreferFastBuild value: I32(2)
  static ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const PreferFastBuild;

  /// @brief Field PreferFastTrace value: I32(1)
  static ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const PreferFastTrace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20498 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
