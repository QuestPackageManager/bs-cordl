#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemStopBehavior.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemStopBehavior)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemStopBehavior);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemStopBehavior
struct CORDL_TYPE ParticleSystemStopBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemStopBehavior_Unwrapped
  enum struct __ParticleSystemStopBehavior_Unwrapped : int32_t {
    __E_StopEmittingAndClear = static_cast<int32_t>(0x0),
    __E_StopEmitting = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemStopBehavior_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemStopBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemStopBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemStopBehavior(int32_t value__) noexcept;

  /// @brief Field StopEmitting value: I32(1)
  static ::UnityEngine::ParticleSystemStopBehavior const StopEmitting;

  /// @brief Field StopEmittingAndClear value: I32(0)
  static ::UnityEngine::ParticleSystemStopBehavior const StopEmittingAndClear;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemStopBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemStopBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemStopBehavior, "UnityEngine", "ParticleSystemStopBehavior");
