#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sprite)
namespace UnityEngine {
struct SpritePackingMode;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct SpriteMeshType;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
class Sprite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Sprite);
// Type: UnityEngine::Sprite
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10213))
// CS Name: ::UnityEngine::Sprite*
class CORDL_TYPE Sprite : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(get = get_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_border))::UnityEngine::Vector4 border;

  __declspec(property(get = get_texture))::UnityEngine::Texture2D* texture;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_associatedAlphaSplitTexture))::UnityEngine::Texture2D* associatedAlphaSplitTexture;

  __declspec(property(get = get_pivot))::UnityEngine::Vector2 pivot;

  __declspec(property(get = get_packed)) bool packed;

  __declspec(property(get = get_packingMode))::UnityEngine::SpritePackingMode packingMode;

  __declspec(property(get = get_packingRotation))::UnityEngine::SpritePackingRotation packingRotation;

  __declspec(property(get = get_textureRect))::UnityEngine::Rect textureRect;

  __declspec(property(get = get_vertices))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> vertices;

  __declspec(property(get = get_triangles))::ArrayW<uint16_t, ::Array<uint16_t>*> triangles;

  __declspec(property(get = get_uv))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv;

  static inline ::UnityEngine::Sprite* New_ctor();

  /// @brief Method .ctor addr 0x2b7e25c size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method GetPackingMode addr 0x2b7e2b4 size 0x3c virtual false final false
  inline int32_t GetPackingMode();

  /// @brief Method GetPackingRotation addr 0x2b7e2f0 size 0x3c virtual false final false
  inline int32_t GetPackingRotation();

  /// @brief Method GetPacked addr 0x2b7e32c size 0x3c virtual false final false
  inline int32_t GetPacked();

  /// @brief Method GetTextureRect addr 0x2b7e368 size 0x58 virtual false final false
  inline ::UnityEngine::Rect GetTextureRect();

  /// @brief Method GetInnerUVs addr 0x2b7e404 size 0x58 virtual false final false
  inline ::UnityEngine::Vector4 GetInnerUVs();

  /// @brief Method GetOuterUVs addr 0x2b7e4a0 size 0x58 virtual false final false
  inline ::UnityEngine::Vector4 GetOuterUVs();

  /// @brief Method GetPadding addr 0x2b7e53c size 0x58 virtual false final false
  inline ::UnityEngine::Vector4 GetPadding();

  /// @brief Method CreateSprite addr 0x2b7e5d8 size 0x98 virtual false final false
  static inline ::UnityEngine::Sprite* CreateSprite(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                    ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);

  /// @brief Method get_bounds addr 0x2b7e704 size 0x68 virtual false final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_rect addr 0x2b7e7b0 size 0x58 virtual false final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_border addr 0x2b7e84c size 0x58 virtual false final false
  inline ::UnityEngine::Vector4 get_border();

  /// @brief Method get_texture addr 0x2b7e8e8 size 0x3c virtual false final false
  inline ::UnityEngine::Texture2D* get_texture();

  /// @brief Method get_pixelsPerUnit addr 0x2b7e924 size 0x3c virtual false final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_associatedAlphaSplitTexture addr 0x2b7e960 size 0x3c virtual false final false
  inline ::UnityEngine::Texture2D* get_associatedAlphaSplitTexture();

  /// @brief Method get_pivot addr 0x2b7e99c size 0x4c virtual false final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method get_packed addr 0x2b7ea2c size 0x48 virtual false final false
  inline bool get_packed();

  /// @brief Method get_packingMode addr 0x2b7ea74 size 0x3c virtual false final false
  inline ::UnityEngine::SpritePackingMode get_packingMode();

  /// @brief Method get_packingRotation addr 0x2b7eab0 size 0x3c virtual false final false
  inline ::UnityEngine::SpritePackingRotation get_packingRotation();

  /// @brief Method get_textureRect addr 0x2b7eaec size 0x8c virtual false final false
  inline ::UnityEngine::Rect get_textureRect();

  /// @brief Method get_vertices addr 0x2b7eb78 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_vertices();

  /// @brief Method get_triangles addr 0x2b7ebb4 size 0x3c virtual false final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> get_triangles();

  /// @brief Method get_uv addr 0x2b7ebf0 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv();

  /// @brief Method Create addr 0x2b7ec2c size 0x3ec virtual false final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                              ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);

  /// @brief Method GetTextureRect_Injected addr 0x2b7e3c0 size 0x44 virtual false final false
  inline void GetTextureRect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method GetInnerUVs_Injected addr 0x2b7e45c size 0x44 virtual false final false
  inline void GetInnerUVs_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetOuterUVs_Injected addr 0x2b7e4f8 size 0x44 virtual false final false
  inline void GetOuterUVs_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetPadding_Injected addr 0x2b7e594 size 0x44 virtual false final false
  inline void GetPadding_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method CreateSprite_Injected addr 0x2b7e670 size 0x94 virtual false final false
  static inline ::UnityEngine::Sprite* CreateSprite_Injected(::UnityEngine::Texture2D* texture, ByRef<::UnityEngine::Rect> rect, ByRef<::UnityEngine::Vector2> pivot, float_t pixelsPerUnit,
                                                             uint32_t extrude, ::UnityEngine::SpriteMeshType meshType, ByRef<::UnityEngine::Vector4> border, bool generateFallbackPhysicsShape);

  /// @brief Method get_bounds_Injected addr 0x2b7e76c size 0x44 virtual false final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_rect_Injected addr 0x2b7e808 size 0x44 virtual false final false
  inline void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_border_Injected addr 0x2b7e8a4 size 0x44 virtual false final false
  inline void get_border_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_pivot_Injected addr 0x2b7e9e8 size 0x44 virtual false final false
  inline void get_pivot_Injected(ByRef<::UnityEngine::Vector2> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sprite(Sprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sprite(Sprite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sprite();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Sprite, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Sprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Sprite*, "UnityEngine", "Sprite");
