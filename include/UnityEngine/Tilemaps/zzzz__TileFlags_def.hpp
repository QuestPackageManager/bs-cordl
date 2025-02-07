#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileFlags)
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileFlags);
// Dependencies
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.TileFlags
struct CORDL_TYPE TileFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TileFlags_Unwrapped
  enum struct __TileFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LockColor = static_cast<int32_t>(0x1),
    __E_LockTransform = static_cast<int32_t>(0x2),
    __E_InstantiateGameObjectRuntimeOnly = static_cast<int32_t>(0x4),
    __E_KeepGameObjectRuntimeOnly = static_cast<int32_t>(0x8),
    __E_LockAll = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TileFlags_Unwrapped() const noexcept {
    return static_cast<__TileFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TileFlags(int32_t value__) noexcept;

  /// @brief Field InstantiateGameObjectRuntimeOnly value: I32(4)
  static ::UnityEngine::Tilemaps::TileFlags const InstantiateGameObjectRuntimeOnly;

  /// @brief Field KeepGameObjectRuntimeOnly value: I32(8)
  static ::UnityEngine::Tilemaps::TileFlags const KeepGameObjectRuntimeOnly;

  /// @brief Field LockAll value: I32(3)
  static ::UnityEngine::Tilemaps::TileFlags const LockAll;

  /// @brief Field LockColor value: I32(1)
  static ::UnityEngine::Tilemaps::TileFlags const LockColor;

  /// @brief Field LockTransform value: I32(2)
  static ::UnityEngine::Tilemaps::TileFlags const LockTransform;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Tilemaps::TileFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::TileFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileFlags, "UnityEngine.Tilemaps", "TileFlags");
