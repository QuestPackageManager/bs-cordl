#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tile)
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
namespace UnityEngine::Tilemaps {
class ITilemap;
}
namespace UnityEngine::Tilemaps {
struct __Tile__ColliderType;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct __Tile__ColliderType;
}
namespace UnityEngine::Tilemaps {
class Tile;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::__Tile__ColliderType);
MARK_REF_PTR_T(::UnityEngine::Tilemaps::Tile);
// Type: ::ColliderType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15945))
// CS Name: ::Tile::ColliderType
struct CORDL_TYPE __Tile__ColliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Tile__ColliderType_Unwrapped
  enum struct ____Tile__ColliderType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Sprite = static_cast<int32_t>(0x1),
    __E_Grid = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Tile__ColliderType_Unwrapped() const noexcept {
    return static_cast<____Tile__ColliderType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Tile__ColliderType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tile__ColliderType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Tilemaps::__Tile__ColliderType const None;

  /// @brief Field Sprite value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Tilemaps::__Tile__ColliderType const Sprite;

  /// @brief Field Grid value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Tilemaps::__Tile__ColliderType const Grid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::__Tile__ColliderType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
// Type: UnityEngine.Tilemaps::Tile
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15938)), TypeDefinitionIndex(TypeDefinitionIndex(15945)), TypeDefinitionIndex(TypeDefinitionIndex(10245)),
// TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(15947))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15946)) CS Name: ::UnityEngine.Tilemaps::Tile*
class CORDL_TYPE Tile : public ::UnityEngine::Tilemaps::TileBase {
public:
  // Declarations
  using ColliderType = ::UnityEngine::Tilemaps::__Tile__ColliderType;

  /// @brief Field m_Sprite, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Sprite, put = __set_m_Sprite))::UnityEngine::Sprite* m_Sprite;

  /// @brief Field m_Color, offset 0x20, size 0x10
  __declspec(property(get = __get_m_Color, put = __set_m_Color))::UnityEngine::Color m_Color;

  /// @brief Field m_Transform, offset 0x30, size 0x40
  __declspec(property(get = __get_m_Transform, put = __set_m_Transform))::UnityEngine::Matrix4x4 m_Transform;

  /// @brief Field m_InstancedGameObject, offset 0x70, size 0x8
  __declspec(property(get = __get_m_InstancedGameObject, put = __set_m_InstancedGameObject))::UnityEngine::GameObject* m_InstancedGameObject;

  /// @brief Field m_Flags, offset 0x78, size 0x4
  __declspec(property(get = __get_m_Flags, put = __set_m_Flags))::UnityEngine::Tilemaps::TileFlags m_Flags;

  /// @brief Field m_ColliderType, offset 0x7c, size 0x4
  __declspec(property(get = __get_m_ColliderType, put = __set_m_ColliderType))::UnityEngine::Tilemaps::__Tile__ColliderType m_ColliderType;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_transform, put = set_transform))::UnityEngine::Matrix4x4 transform;

  __declspec(property(get = get_gameObject, put = set_gameObject))::UnityEngine::GameObject* gameObject;

  __declspec(property(get = get_flags, put = set_flags))::UnityEngine::Tilemaps::TileFlags flags;

  __declspec(property(get = get_colliderType, put = set_colliderType))::UnityEngine::Tilemaps::__Tile__ColliderType colliderType;

  constexpr ::UnityEngine::Sprite*& __get_m_Sprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_m_Sprite() const;

  constexpr void __set_m_Sprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Color& __get_m_Color();

  constexpr ::UnityEngine::Color const& __get_m_Color() const;

  constexpr void __set_m_Color(::UnityEngine::Color value);

  constexpr ::UnityEngine::Matrix4x4& __get_m_Transform();

  constexpr ::UnityEngine::Matrix4x4 const& __get_m_Transform() const;

  constexpr void __set_m_Transform(::UnityEngine::Matrix4x4 value);

  constexpr ::UnityEngine::GameObject*& __get_m_InstancedGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_InstancedGameObject() const;

  constexpr void __set_m_InstancedGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Tilemaps::TileFlags& __get_m_Flags();

  constexpr ::UnityEngine::Tilemaps::TileFlags const& __get_m_Flags() const;

  constexpr void __set_m_Flags(::UnityEngine::Tilemaps::TileFlags value);

  constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType& __get_m_ColliderType();

  constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType const& __get_m_ColliderType() const;

  constexpr void __set_m_ColliderType(::UnityEngine::Tilemaps::__Tile__ColliderType value);

  /// @brief Method get_sprite addr 0x2d50500 size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_sprite();

  /// @brief Method set_sprite addr 0x2d50508 size 0x8 virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method get_color addr 0x2d50510 size 0xc virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2d5051c size 0xc virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_transform addr 0x2d50528 size 0x14 virtual false final false
  inline ::UnityEngine::Matrix4x4 get_transform();

  /// @brief Method set_transform addr 0x2d5053c size 0x14 virtual false final false
  inline void set_transform(::UnityEngine::Matrix4x4 value);

  /// @brief Method get_gameObject addr 0x2d50550 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_gameObject();

  /// @brief Method set_gameObject addr 0x2d50558 size 0x8 virtual false final false
  inline void set_gameObject(::UnityEngine::GameObject* value);

  /// @brief Method get_flags addr 0x2d50560 size 0x8 virtual false final false
  inline ::UnityEngine::Tilemaps::TileFlags get_flags();

  /// @brief Method set_flags addr 0x2d50568 size 0x8 virtual false final false
  inline void set_flags(::UnityEngine::Tilemaps::TileFlags value);

  /// @brief Method get_colliderType addr 0x2d50570 size 0x8 virtual false final false
  inline ::UnityEngine::Tilemaps::__Tile__ColliderType get_colliderType();

  /// @brief Method set_colliderType addr 0x2d50578 size 0x8 virtual false final false
  inline void set_colliderType(::UnityEngine::Tilemaps::__Tile__ColliderType value);

  /// @brief Method GetTileData addr 0x2d50580 size 0x5c virtual true final false
  inline void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileData> tileData);

  static inline ::UnityEngine::Tilemaps::Tile* New_ctor();

  /// @brief Method .ctor addr 0x2d505dc size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Tile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tile(Tile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tile(Tile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tile();

public:
  /// @brief Field m_Sprite, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___m_Sprite;

  /// @brief Field m_Color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  /// @brief Field m_Transform, offset: 0x30, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_Transform;

  /// @brief Field m_InstancedGameObject, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_InstancedGameObject;

  /// @brief Field m_Flags, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::TileFlags ___m_Flags;

  /// @brief Field m_ColliderType, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::__Tile__ColliderType ___m_ColliderType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tile, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::__Tile__ColliderType, "UnityEngine.Tilemaps", "Tile/ColliderType");
NEED_NO_BOX(::UnityEngine::Tilemaps::Tile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tile*, "UnityEngine.Tilemaps", "Tile");
