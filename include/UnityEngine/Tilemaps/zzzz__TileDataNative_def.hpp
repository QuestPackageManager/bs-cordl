#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileDataNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileDataNative)
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileDataNative;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileDataNative);
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.Tilemaps.Tile::ColliderType, UnityEngine.Tilemaps.TileFlags
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.TileDataNative
struct CORDL_TYPE TileDataNative {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileDataNative();

  // Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: None }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::Tile_ColliderType", modifiers: "",
  // def_value: None }]
  constexpr TileDataNative(int32_t m_Sprite, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject, ::UnityEngine::Tilemaps::TileFlags m_Flags,
                           ::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field m_Sprite, offset: 0x0, size: 0x4, def value: None
  int32_t m_Sprite;

  /// @brief Field m_Color, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color m_Color;

  /// @brief Field m_Transform, offset: 0x14, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_Transform;

  /// @brief Field m_GameObject, offset: 0x54, size: 0x4, def value: None
  int32_t m_GameObject;

  /// @brief Field m_Flags, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::TileFlags m_Flags;

  /// @brief Field m_ColliderType, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Sprite) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Color) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Transform) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_GameObject) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Flags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_ColliderType) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileDataNative, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileDataNative, "UnityEngine.Tilemaps", "TileDataNative");
