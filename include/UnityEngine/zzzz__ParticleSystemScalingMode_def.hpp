#pragma once
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
// Type: UnityEngine::ParticleSystemScalingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15092))
// CS Name: ::UnityEngine::ParticleSystemScalingMode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemScalingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemScalingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Hierarchy value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ParticleSystemScalingMode const Hierarchy;

  /// @brief Field Local value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ParticleSystemScalingMode const Local;

  /// @brief Field Shape value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ParticleSystemScalingMode const Shape;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemScalingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemScalingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemScalingMode, "UnityEngine", "ParticleSystemScalingMode");
