#pragma once
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
// Type: UnityEngine.Tilemaps::TileFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: ::UnityEngine.Tilemaps::TileFlags
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
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TileFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InstantiateGameObjectRuntimeOnly value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Tilemaps::TileFlags const InstantiateGameObjectRuntimeOnly;

  /// @brief Field KeepGameObjectRuntimeOnly value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Tilemaps::TileFlags const KeepGameObjectRuntimeOnly;

  /// @brief Field LockAll value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Tilemaps::TileFlags const LockAll;

  /// @brief Field LockColor value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Tilemaps::TileFlags const LockColor;

  /// @brief Field LockTransform value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Tilemaps::TileFlags const LockTransform;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Tilemaps::TileFlags const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileFlags, "UnityEngine.Tilemaps", "TileFlags");
