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
class Texture2D;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Rect;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct SpritePackingMode;
}
namespace UnityEngine {
struct SpriteMeshType;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
struct Vector4;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10291))
// CS Name: ::UnityEngine::Sprite*
class CORDL_TYPE Sprite : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(get = get_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_border))::UnityEngine::Vector4 border;

  __declspec(property(get = get_texture))::UnityEngine::Texture2D* texture;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_spriteAtlasTextureScale)) float_t spriteAtlasTextureScale;

  __declspec(property(get = get_associatedAlphaSplitTexture))::UnityEngine::Texture2D* associatedAlphaSplitTexture;

  __declspec(property(get = get_pivot))::UnityEngine::Vector2 pivot;

  __declspec(property(get = get_packed)) bool packed;

  __declspec(property(get = get_packingMode))::UnityEngine::SpritePackingMode packingMode;

  __declspec(property(get = get_packingRotation))::UnityEngine::SpritePackingRotation packingRotation;

  __declspec(property(get = get_textureRect))::UnityEngine::Rect textureRect;

  __declspec(property(get = get_textureRectOffset))::UnityEngine::Vector2 textureRectOffset;

  __declspec(property(get = get_vertices))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> vertices;

  __declspec(property(get = get_triangles))::ArrayW<uint16_t, ::Array<uint16_t>*> triangles;

  __declspec(property(get = get_uv))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv;

  static inline ::UnityEngine::Sprite* New_ctor();

  /// @brief Method .ctor, addr 0x2ce4700, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetPackingMode, addr 0x2ce4758, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPackingMode();

  /// @brief Method GetPackingRotation, addr 0x2ce4794, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPackingRotation();

  /// @brief Method GetPacked, addr 0x2ce47d0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPacked();

  /// @brief Method GetTextureRect, addr 0x2ce480c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetTextureRect();

  /// @brief Method GetTextureRectOffset, addr 0x2ce48a8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureRectOffset();

  /// @brief Method GetInnerUVs, addr 0x2ce4938, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetInnerUVs();

  /// @brief Method GetOuterUVs, addr 0x2ce49d4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetOuterUVs();

  /// @brief Method GetPadding, addr 0x2ce4a70, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPadding();

  /// @brief Method CreateSpriteWithoutTextureScripting, addr 0x2ce4b0c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits, ::UnityEngine::Texture2D* texture);

  /// @brief Method CreateSprite, addr 0x2ce4bdc, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* CreateSprite(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                    ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);

  /// @brief Method get_bounds, addr 0x2ce4d08, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_rect, addr 0x2ce4db4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_border, addr 0x2ce4e50, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_border();

  /// @brief Method get_texture, addr 0x2ce4eec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_texture();

  /// @brief Method GetSecondaryTexture, addr 0x2ce4f28, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* GetSecondaryTexture(int32_t index);

  /// @brief Method get_pixelsPerUnit, addr 0x2ce4f6c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_spriteAtlasTextureScale, addr 0x2ce4fa8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_spriteAtlasTextureScale();

  /// @brief Method get_associatedAlphaSplitTexture, addr 0x2ce4fe4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_associatedAlphaSplitTexture();

  /// @brief Method get_pivot, addr 0x2ce5020, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method get_packed, addr 0x2ce50b0, size 0x48, virtual false, abstract: false, final false
  inline bool get_packed();

  /// @brief Method get_packingMode, addr 0x2ce50f8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SpritePackingMode get_packingMode();

  /// @brief Method get_packingRotation, addr 0x2ce5134, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SpritePackingRotation get_packingRotation();

  /// @brief Method get_textureRect, addr 0x2ce5170, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_textureRect();

  /// @brief Method get_textureRectOffset, addr 0x2ce51fc, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_textureRectOffset();

  /// @brief Method get_vertices, addr 0x2ce52b4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_vertices();

  /// @brief Method get_triangles, addr 0x2ce52f0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> get_triangles();

  /// @brief Method get_uv, addr 0x2ce532c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv();

  /// @brief Method GetPhysicsShapeCount, addr 0x2ce5368, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPhysicsShapeCount();

  /// @brief Method GetPhysicsShapePointCount, addr 0x2ce53a4, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetPhysicsShapePointCount(int32_t shapeIdx);

  /// @brief Method Internal_GetPhysicsShapePointCount, addr 0x2ce54c4, size 0x44, virtual false, abstract: false, final false
  inline int32_t Internal_GetPhysicsShapePointCount(int32_t shapeIdx);

  /// @brief Method GetPhysicsShape, addr 0x2ce5508, size 0x158, virtual false, abstract: false, final false
  inline int32_t GetPhysicsShape(int32_t shapeIdx, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape);

  /// @brief Method GetPhysicsShapeImpl, addr 0x2ce5660, size 0x54, virtual false, abstract: false, final false
  static inline void GetPhysicsShapeImpl(::UnityEngine::Sprite* sprite, int32_t shapeIdx, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape);

  /// @brief Method OverridePhysicsShape, addr 0x2ce56b4, size 0x444, virtual false, abstract: false, final false
  inline void OverridePhysicsShape(::System::Collections::Generic::IList_1<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* physicsShapes);

  /// @brief Method OverridePhysicsShapeCount, addr 0x2ce5af8, size 0x44, virtual false, abstract: false, final false
  static inline void OverridePhysicsShapeCount(::UnityEngine::Sprite* sprite, int32_t physicsShapeCount);

  /// @brief Method OverridePhysicsShape, addr 0x2ce5b3c, size 0x54, virtual false, abstract: false, final false
  static inline void OverridePhysicsShape(::UnityEngine::Sprite* sprite, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> physicsShape, int32_t idx);

  /// @brief Method OverrideGeometry, addr 0x2ce5b90, size 0x54, virtual false, abstract: false, final false
  inline void OverrideGeometry(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> triangles);

  /// @brief Method Create, addr 0x2ce5be4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits, ::UnityEngine::Texture2D* texture);

  /// @brief Method Create, addr 0x2ce5be8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits);

  /// @brief Method Create, addr 0x2ce5bf0, size 0x3ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                              ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);

  /// @brief Method Create, addr 0x2ce5fdc, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                              ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border);

  /// @brief Method Create, addr 0x2ce5fec, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                              ::UnityEngine::SpriteMeshType meshType);

  /// @brief Method Create, addr 0x2ce60d0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude);

  /// @brief Method Create, addr 0x2ce60d8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit);

  /// @brief Method Create, addr 0x2ce60e4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot);

  /// @brief Method GetTextureRect_Injected, addr 0x2ce4864, size 0x44, virtual false, abstract: false, final false
  inline void GetTextureRect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method GetTextureRectOffset_Injected, addr 0x2ce48f4, size 0x44, virtual false, abstract: false, final false
  inline void GetTextureRectOffset_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetInnerUVs_Injected, addr 0x2ce4990, size 0x44, virtual false, abstract: false, final false
  inline void GetInnerUVs_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetOuterUVs_Injected, addr 0x2ce4a2c, size 0x44, virtual false, abstract: false, final false
  inline void GetOuterUVs_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetPadding_Injected, addr 0x2ce4ac8, size 0x44, virtual false, abstract: false, final false
  inline void GetPadding_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method CreateSpriteWithoutTextureScripting_Injected, addr 0x2ce4b78, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting_Injected(ByRef<::UnityEngine::Rect> rect, ByRef<::UnityEngine::Vector2> pivot, float_t pixelsToUnits,
                                                                                    ::UnityEngine::Texture2D* texture);

  /// @brief Method CreateSprite_Injected, addr 0x2ce4c74, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Sprite* CreateSprite_Injected(::UnityEngine::Texture2D* texture, ByRef<::UnityEngine::Rect> rect, ByRef<::UnityEngine::Vector2> pivot, float_t pixelsPerUnit,
                                                             uint32_t extrude, ::UnityEngine::SpriteMeshType meshType, ByRef<::UnityEngine::Vector4> border, bool generateFallbackPhysicsShape);

  /// @brief Method get_bounds_Injected, addr 0x2ce4d70, size 0x44, virtual false, abstract: false, final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_rect_Injected, addr 0x2ce4e0c, size 0x44, virtual false, abstract: false, final false
  inline void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_border_Injected, addr 0x2ce4ea8, size 0x44, virtual false, abstract: false, final false
  inline void get_border_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_pivot_Injected, addr 0x2ce506c, size 0x44, virtual false, abstract: false, final false
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
