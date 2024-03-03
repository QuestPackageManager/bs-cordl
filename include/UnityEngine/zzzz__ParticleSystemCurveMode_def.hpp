#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemCurveMode)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemCurveMode);
// Type: UnityEngine::ParticleSystemCurveMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ParticleSystemCurveMode
struct CORDL_TYPE ParticleSystemCurveMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemCurveMode_Unwrapped
  enum struct __ParticleSystemCurveMode_Unwrapped : int32_t {
    __E_Constant = static_cast<int32_t>(0x0),
    __E_Curve = static_cast<int32_t>(0x1),
    __E_TwoCurves = static_cast<int32_t>(0x2),
    __E_TwoConstants = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemCurveMode_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemCurveMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemCurveMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemCurveMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Constant value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ParticleSystemCurveMode const Constant;

  /// @brief Field Curve value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ParticleSystemCurveMode const Curve;

  /// @brief Field TwoConstants value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ParticleSystemCurveMode const TwoConstants;

  /// @brief Field TwoCurves value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ParticleSystemCurveMode const TwoCurves;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemCurveMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemCurveMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemCurveMode, "UnityEngine", "ParticleSystemCurveMode");
