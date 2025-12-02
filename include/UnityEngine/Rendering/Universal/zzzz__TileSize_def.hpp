#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileSize)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct TileSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::TileSize);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TileSize
struct CORDL_TYPE TileSize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TileSize_Unwrapped
  enum struct __TileSize_Unwrapped : int32_t {
    __E__8 = static_cast<int32_t>(0x8),
    __E__16 = static_cast<int32_t>(0x10),
    __E__32 = static_cast<int32_t>(0x20),
    __E__64 = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TileSize_Unwrapped() const noexcept {
    return static_cast<__TileSize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileSize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TileSize(int32_t value__) noexcept;

  /// @brief Field _16 value: I32(16)
  static ::UnityEngine::Rendering::Universal::TileSize const _16;

  /// @brief Field _32 value: I32(32)
  static ::UnityEngine::Rendering::Universal::TileSize const _32;

  /// @brief Field _64 value: I32(64)
  static ::UnityEngine::Rendering::Universal::TileSize const _64;

  /// @brief Field _8 value: I32(8)
  static ::UnityEngine::Rendering::Universal::TileSize const _8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TileSize, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TileSize, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TileSize, "UnityEngine.Rendering.Universal", "TileSize");
