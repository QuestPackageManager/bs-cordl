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
CORDL_MODULE_EXPORT(TileData)
namespace UnityEngine::Tilemaps {
struct __Tile__ColliderType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Tilemaps {
struct TileFlags;
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
// Type: UnityEngine.Tilemaps::TileData
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15945)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(15938)),
// TypeDefinitionIndex(TypeDefinitionIndex(10245))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15941)) CS Name: ::UnityEngine.Tilemaps::TileData
struct CORDL_TYPE TileData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x60
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::UnityEngine::Tilemaps::TileData Default;

  __declspec(property(put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(put = set_color))::UnityEngine::Color color;

  __declspec(property(put = set_transform))::UnityEngine::Matrix4x4 transform;

  __declspec(property(put = set_gameObject))::UnityEngine::GameObject* gameObject;

  __declspec(property(put = set_flags))::UnityEngine::Tilemaps::TileFlags flags;

  __declspec(property(put = set_colliderType))::UnityEngine::Tilemaps::__Tile__ColliderType colliderType;

  static inline void setStaticF_Default(::UnityEngine::Tilemaps::TileData value);

  static inline ::UnityEngine::Tilemaps::TileData getStaticF_Default();

  /// @brief Method set_sprite addr 0x2d5027c size 0x90 virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_color addr 0x2d5030c size 0xc virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_transform addr 0x2d50318 size 0x1c virtual false final false
  inline void set_transform(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_gameObject addr 0x2d50334 size 0x90 virtual false final false
  inline void set_gameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_flags addr 0x2d503c4 size 0x8 virtual false final false
  inline void set_flags(::UnityEngine::Tilemaps::TileFlags value);

  /// @brief Method set_colliderType addr 0x2d503cc size 0x8 virtual false final false
  inline void set_colliderType(::UnityEngine::Tilemaps::__Tile__ColliderType value);

  /// @brief Method CreateDefault addr 0x2d503d4 size 0x74 virtual false final false
  static inline ::UnityEngine::Tilemaps::TileData CreateDefault();

  // Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: None }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::__Tile__ColliderType", modifiers: "",
  // def_value: None }]
  constexpr TileData(int32_t m_Sprite, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject, ::UnityEngine::Tilemaps::TileFlags m_Flags,
                     ::UnityEngine::Tilemaps::__Tile__ColliderType m_ColliderType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileData();

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileData, "UnityEngine.Tilemaps", "TileData");
