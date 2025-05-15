#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tile)
namespace UnityEngine::Tilemaps {
class ITilemap;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
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
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct Tile_ColliderType;
}
namespace UnityEngine::Tilemaps {
class Tile;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::Tile_ColliderType);
MARK_REF_PTR_T(::UnityEngine::Tilemaps::Tile);
// Dependencies
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.Tile/ColliderType
struct CORDL_TYPE Tile_ColliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Tile_ColliderType_Unwrapped
  enum struct __Tile_ColliderType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Sprite = static_cast<int32_t>(0x1),
    __E_Grid = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Tile_ColliderType_Unwrapped() const noexcept {
    return static_cast<__Tile_ColliderType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tile_ColliderType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Tile_ColliderType(int32_t value__) noexcept;

  /// @brief Field Grid value: I32(2)
  static ::UnityEngine::Tilemaps::Tile_ColliderType const Grid;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Tilemaps::Tile_ColliderType const None;

  /// @brief Field Sprite value: I32(1)
  static ::UnityEngine::Tilemaps::Tile_ColliderType const Sprite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::Tile_ColliderType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tile_ColliderType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.Tilemaps.Tile::ColliderType, UnityEngine.Tilemaps.TileBase, UnityEngine.Tilemaps.TileFlags
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.Tile
class CORDL_TYPE Tile : public ::UnityEngine::Tilemaps::TileBase {
public:
  // Declarations
  using ColliderType = ::UnityEngine::Tilemaps::Tile_ColliderType;

  __declspec(property(get = get_colliderType, put = set_colliderType)) ::UnityEngine::Tilemaps::Tile_ColliderType colliderType;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::Tilemaps::TileFlags flags;

  __declspec(property(get = get_gameObject, put = set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field m_ColliderType, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColliderType, put = __cordl_internal_set_m_ColliderType)) ::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType;

  /// @brief Field m_Color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Color, put = __cordl_internal_set_m_Color)) ::UnityEngine::Color m_Color;

  /// @brief Field m_Flags, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::Tilemaps::TileFlags m_Flags;

  /// @brief Field m_InstancedGameObject, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstancedGameObject, put = __cordl_internal_set_m_InstancedGameObject)) ::UnityW<::UnityEngine::GameObject> m_InstancedGameObject;

  /// @brief Field m_Sprite, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sprite, put = __cordl_internal_set_m_Sprite)) ::UnityW<::UnityEngine::Sprite> m_Sprite;

  /// @brief Field m_Transform, offset 0x30, size 0x40
  __declspec(property(get = __cordl_internal_get_m_Transform, put = __cordl_internal_set_m_Transform)) ::UnityEngine::Matrix4x4 m_Transform;

  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(get = get_transform, put = set_transform)) ::UnityEngine::Matrix4x4 transform;

  /// @brief Method GetTileData, addr 0x4956294, size 0xa0, virtual true, abstract: false, final false
  inline void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::ByRef<::UnityEngine::Tilemaps::TileData> tileData);

  static inline ::UnityEngine::Tilemaps::Tile* New_ctor();

  constexpr ::UnityEngine::Tilemaps::Tile_ColliderType const& __cordl_internal_get_m_ColliderType() const;

  constexpr ::UnityEngine::Tilemaps::Tile_ColliderType& __cordl_internal_get_m_ColliderType();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_Color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_Color();

  constexpr ::UnityEngine::Tilemaps::TileFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::Tilemaps::TileFlags& __cordl_internal_get_m_Flags();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_InstancedGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_InstancedGameObject();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Sprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Sprite();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_Transform() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_Transform();

  constexpr void __cordl_internal_set_m_ColliderType(::UnityEngine::Tilemaps::Tile_ColliderType value);

  constexpr void __cordl_internal_set_m_Color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::Tilemaps::TileFlags value);

  constexpr void __cordl_internal_set_m_InstancedGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_Transform(::UnityEngine::Matrix4x4 value);

  /// @brief Method .ctor, addr 0x495648c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colliderType, addr 0x4956284, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Tilemaps::Tile_ColliderType get_colliderType();

  /// @brief Method get_color, addr 0x4956224, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_flags, addr 0x4956274, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Tilemaps::TileFlags get_flags();

  /// @brief Method get_gameObject, addr 0x4956264, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_sprite, addr 0x4956214, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_transform, addr 0x495623c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_transform();

  /// @brief Method set_colliderType, addr 0x495628c, size 0x8, virtual false, abstract: false, final false
  inline void set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType value);

  /// @brief Method set_color, addr 0x4956230, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_flags, addr 0x495627c, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::Tilemaps::TileFlags value);

  /// @brief Method set_gameObject, addr 0x495626c, size 0x8, virtual false, abstract: false, final false
  inline void set_gameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sprite, addr 0x495621c, size 0x8, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_transform, addr 0x4956250, size 0x14, virtual false, abstract: false, final false
  inline void set_transform(::UnityEngine::Matrix4x4 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tile(Tile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tile(Tile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18571 };

  /// @brief Field m_Sprite, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_Sprite;

  /// @brief Field m_Color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  /// @brief Field m_Transform, offset: 0x30, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_Transform;

  /// @brief Field m_InstancedGameObject, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_InstancedGameObject;

  /// @brief Field m_Flags, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::TileFlags ___m_Flags;

  /// @brief Field m_ColliderType, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::Tile_ColliderType ___m_ColliderType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::Tile, ___m_Sprite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tile, ___m_Color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tile, ___m_Transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tile, ___m_InstancedGameObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tile, ___m_Flags) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tile, ___m_ColliderType) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tile, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tile_ColliderType, "UnityEngine.Tilemaps", "Tile/ColliderType");
NEED_NO_BOX(::UnityEngine::Tilemaps::Tile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tile*, "UnityEngine.Tilemaps", "Tile");
