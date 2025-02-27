#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileAnimationFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileAnimationFlags)
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileAnimationFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileAnimationFlags);
// Dependencies
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.TileAnimationFlags
struct CORDL_TYPE TileAnimationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TileAnimationFlags_Unwrapped
  enum struct __TileAnimationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LoopOnce = static_cast<int32_t>(0x1),
    __E_PauseAnimation = static_cast<int32_t>(0x2),
    __E_UpdatePhysics = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TileAnimationFlags_Unwrapped() const noexcept {
    return static_cast<__TileAnimationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileAnimationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TileAnimationFlags(int32_t value__) noexcept;

  /// @brief Field LoopOnce value: I32(1)
  static ::UnityEngine::Tilemaps::TileAnimationFlags const LoopOnce;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Tilemaps::TileAnimationFlags const None;

  /// @brief Field PauseAnimation value: I32(2)
  static ::UnityEngine::Tilemaps::TileAnimationFlags const PauseAnimation;

  /// @brief Field UpdatePhysics value: I32(4)
  static ::UnityEngine::Tilemaps::TileAnimationFlags const UpdatePhysics;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18574 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileAnimationFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileAnimationFlags, "UnityEngine.Tilemaps", "TileAnimationFlags");
