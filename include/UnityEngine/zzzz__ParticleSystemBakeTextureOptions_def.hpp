#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemBakeTextureOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemBakeTextureOptions)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemBakeTextureOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemBakeTextureOptions);
// Type: UnityEngine::ParticleSystemBakeTextureOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ParticleSystemBakeTextureOptions
struct CORDL_TYPE ParticleSystemBakeTextureOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemBakeTextureOptions_Unwrapped
  enum struct __ParticleSystemBakeTextureOptions_Unwrapped : int32_t {
    __E_BakeRotationAndScale = static_cast<int32_t>(0x1),
    __E_BakePosition = static_cast<int32_t>(0x2),
    __E_PerVertex = static_cast<int32_t>(0x4),
    __E_PerParticle = static_cast<int32_t>(0x8),
    __E_IncludeParticleIndices = static_cast<int32_t>(0x10),
    __E_Default = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemBakeTextureOptions_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemBakeTextureOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemBakeTextureOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemBakeTextureOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BakePosition value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ParticleSystemBakeTextureOptions const BakePosition;

  /// @brief Field BakeRotationAndScale value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ParticleSystemBakeTextureOptions const BakeRotationAndScale;

  /// @brief Field Default value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ParticleSystemBakeTextureOptions const Default;

  /// @brief Field IncludeParticleIndices value: static_cast<int32_t>(0x10)
  static ::UnityEngine::ParticleSystemBakeTextureOptions const IncludeParticleIndices;

  /// @brief Field PerParticle value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ParticleSystemBakeTextureOptions const PerParticle;

  /// @brief Field PerVertex value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ParticleSystemBakeTextureOptions const PerVertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17157 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemBakeTextureOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemBakeTextureOptions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemBakeTextureOptions, "UnityEngine", "ParticleSystemBakeTextureOptions");
