#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemScalingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemScalingMode)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemScalingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemScalingMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemScalingMode
struct CORDL_TYPE ParticleSystemScalingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemScalingMode_Unwrapped
  enum struct __ParticleSystemScalingMode_Unwrapped : int32_t {
    __E_Hierarchy = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
    __E_Shape = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemScalingMode_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemScalingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemScalingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemScalingMode(int32_t value__) noexcept;

  /// @brief Field Hierarchy value: I32(0)
  static ::UnityEngine::ParticleSystemScalingMode const Hierarchy;

  /// @brief Field Local value: I32(1)
  static ::UnityEngine::ParticleSystemScalingMode const Local;

  /// @brief Field Shape value: I32(2)
  static ::UnityEngine::ParticleSystemScalingMode const Shape;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17298 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemScalingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemScalingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemScalingMode, "UnityEngine", "ParticleSystemScalingMode");
