#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemRenderSpace)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemRenderSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemRenderSpace);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemRenderSpace
struct CORDL_TYPE ParticleSystemRenderSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemRenderSpace_Unwrapped
  enum struct __ParticleSystemRenderSpace_Unwrapped : int32_t {
    __E_View = static_cast<int32_t>(0x0),
    __E_World = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
    __E_Facing = static_cast<int32_t>(0x3),
    __E_Velocity = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemRenderSpace_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemRenderSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemRenderSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemRenderSpace(int32_t value__) noexcept;

  /// @brief Field Facing value: I32(3)
  static ::UnityEngine::ParticleSystemRenderSpace const Facing;

  /// @brief Field Local value: I32(2)
  static ::UnityEngine::ParticleSystemRenderSpace const Local;

  /// @brief Field Velocity value: I32(4)
  static ::UnityEngine::ParticleSystemRenderSpace const Velocity;

  /// @brief Field View value: I32(0)
  static ::UnityEngine::ParticleSystemRenderSpace const View;

  /// @brief Field World value: I32(1)
  static ::UnityEngine::ParticleSystemRenderSpace const World;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17293 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemRenderSpace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemRenderSpace, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderSpace, "UnityEngine", "ParticleSystemRenderSpace");
