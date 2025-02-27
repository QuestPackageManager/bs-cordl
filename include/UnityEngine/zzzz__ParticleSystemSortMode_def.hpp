#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemSortMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemSortMode)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemSortMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemSortMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemSortMode
struct CORDL_TYPE ParticleSystemSortMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemSortMode_Unwrapped
  enum struct __ParticleSystemSortMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Distance = static_cast<int32_t>(0x1),
    __E_OldestInFront = static_cast<int32_t>(0x2),
    __E_YoungestInFront = static_cast<int32_t>(0x3),
    __E_Depth = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemSortMode_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemSortMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemSortMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemSortMode(int32_t value__) noexcept;

  /// @brief Field Depth value: I32(4)
  static ::UnityEngine::ParticleSystemSortMode const Depth;

  /// @brief Field Distance value: I32(1)
  static ::UnityEngine::ParticleSystemSortMode const Distance;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ParticleSystemSortMode const None;

  /// @brief Field OldestInFront value: I32(2)
  static ::UnityEngine::ParticleSystemSortMode const OldestInFront;

  /// @brief Field YoungestInFront value: I32(3)
  static ::UnityEngine::ParticleSystemSortMode const YoungestInFront;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemSortMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemSortMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemSortMode, "UnityEngine", "ParticleSystemSortMode");
