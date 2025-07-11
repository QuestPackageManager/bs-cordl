#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileData)
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
namespace UnityEngine::Tilemaps {
struct Tile_ColliderType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileData);
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.Tilemaps.Tile::ColliderType, UnityEngine.Tilemaps.TileFlags
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.TileData
struct CORDL_TYPE TileData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x60
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::Tilemaps::TileData Default;

  __declspec(property(put = set_colliderType)) ::UnityEngine::Tilemaps::Tile_ColliderType colliderType;

  __declspec(property(put = set_color)) ::UnityEngine::Color color;

  __declspec(property(put = set_flags)) ::UnityEngine::Tilemaps::TileFlags flags;

  __declspec(property(put = set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  __declspec(property(put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(put = set_transform)) ::UnityEngine::Matrix4x4 transform;

  /// @brief Method CreateDefault, addr 0x4956f94, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Tilemaps::TileData CreateDefault();

  static inline ::UnityEngine::Tilemaps::TileData getStaticF_Default();

  static inline void setStaticF_Default(::UnityEngine::Tilemaps::TileData value);

  /// @brief Method set_colliderType, addr 0x49560a4, size 0x8, virtual false, abstract: false, final false
  inline void set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType value);

  /// @brief Method set_color, addr 0x4955fe4, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_flags, addr 0x495609c, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::Tilemaps::TileFlags value);

  /// @brief Method set_gameObject, addr 0x495600c, size 0x90, virtual false, abstract: false, final false
  inline void set_gameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sprite, addr 0x4955f54, size 0x90, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_transform, addr 0x4955ff0, size 0x1c, virtual false, abstract: false, final false
  inline void set_transform(::UnityEngine::Matrix4x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileData();

  // Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: None }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::Tile_ColliderType", modifiers: "",
  // def_value: None }]
  constexpr TileData(int32_t m_Sprite, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject, ::UnityEngine::Tilemaps::TileFlags m_Flags,
                     ::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18579 };

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
static_assert(offsetof(::UnityEngine::Tilemaps::TileData, m_Sprite) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileData, m_Color) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileData, m_Transform) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileData, m_GameObject) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileData, m_Flags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileData, m_ColliderType) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileData, "UnityEngine.Tilemaps", "TileData");
