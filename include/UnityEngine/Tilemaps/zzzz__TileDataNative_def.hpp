#pragma once
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
namespace UnityEngine::Tilemaps {
struct __Tile__ColliderType;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileDataNative;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileDataNative);
// Type: UnityEngine.Tilemaps::TileDataNative
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(15945)), TypeDefinitionIndex(TypeDefinitionIndex(10245)),
// TypeDefinitionIndex(TypeDefinitionIndex(15938))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15942)) CS Name: ::UnityEngine.Tilemaps::TileDataNative
struct CORDL_TYPE TileDataNative {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: None }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::__Tile__ColliderType", modifiers: "",
  // def_value: None }]
  constexpr TileDataNative(int32_t m_Sprite, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject, ::UnityEngine::Tilemaps::TileFlags m_Flags,
                           ::UnityEngine::Tilemaps::__Tile__ColliderType m_ColliderType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileDataNative();

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
  ::UnityEngine::Tilemaps::__Tile__ColliderType m_ColliderType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileDataNative, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Sprite) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Color) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Transform) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_GameObject) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_Flags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileDataNative, m_ColliderType) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileDataNative, "UnityEngine.Tilemaps", "TileDataNative");
