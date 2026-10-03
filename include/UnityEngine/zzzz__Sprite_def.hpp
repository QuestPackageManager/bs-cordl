#pragma once
// IWYU pragma private; include "UnityEngine/Sprite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sprite)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct SecondarySpriteTexture;
}
namespace UnityEngine {
struct SpriteMeshType;
}
namespace UnityEngine {
struct SpritePackingMode;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Sprite;
}
// Write type traits
MARK_REF_T(::UnityEngine::Sprite*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Sprite*, "UnityEngine", "Sprite");
// [NativeHeader("Runtime/2D/Common/ScriptBindings/SpritesMarshalling.h")]
// [NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
// [NativeHeader("Runtime/Graphics/SpriteUtility.h")]
// [NativeType("Runtime/Graphics/SpriteFrame.h")]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Sprite
class CORDL_TYPE Sprite : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_associatedAlphaSplitTexture)) ::UnityW<::UnityEngine::Texture2D> associatedAlphaSplitTexture;

  __declspec(property(get = get_border)) ::UnityEngine::Vector4 border;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_extrude)) uint32_t extrude;

  __declspec(property(get = get_packed)) bool packed;

  __declspec(property(get = get_packingMode)) ::UnityEngine::SpritePackingMode packingMode;

  __declspec(property(get = get_packingRotation)) ::UnityEngine::SpritePackingRotation packingRotation;

  __declspec(property(get = get_pivot)) ::UnityEngine::Vector2 pivot;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_rect)) ::UnityEngine::Rect rect;

  __declspec(property(get = get_spriteAtlasTextureScale)) float_t spriteAtlasTextureScale;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  __declspec(property(get = get_textureRect)) ::UnityEngine::Rect textureRect;

  __declspec(property(get = get_textureRectOffset)) ::UnityEngine::Vector2 textureRectOffset;

  __declspec(property(get = get_triangles)) ::ArrayW<uint16_t> triangles;

  __declspec(property(get = get_uv)) ::ArrayW<::UnityEngine::Vector2> uv;

  __declspec(property(get = get_vertices)) ::ArrayW<::UnityEngine::Vector2> vertices;

  /// @brief Method AddScriptableObject, addr 0x6eb630c, size 0xe4, virtual false, abstract: false, final false
  inline bool AddScriptableObject(/* [NotNull] */ ::UnityEngine::ScriptableObject* obj);

  /// @brief Method AddScriptableObject_Injected, addr 0x6eb63f0, size 0x44, virtual false, abstract: false, final false
  static inline bool AddScriptableObject_Injected(::System::IntPtr _unity_self, ::System::IntPtr obj);

  /// @brief Method Create, addr 0x6eb7568, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits);

  /// [VisibleToOtherModules]
  /// @brief Method Create, addr 0x6eb7564, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits, ::UnityEngine::Texture2D* texture);

  /// @brief Method Create, addr 0x6eb7b24, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot);

  /// @brief Method Create, addr 0x6eb7b18, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit);

  /// @brief Method Create, addr 0x6eb7b10, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude);

  /// @brief Method Create, addr 0x6eb7a24, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                       ::UnityEngine::SpriteMeshType meshType);

  /// @brief Method Create, addr 0x6eb7a10, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                       ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border);

  /// @brief Method Create, addr 0x6eb7570, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                       ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);

  /// @brief Method Create, addr 0x6eb7580, size 0x490, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                       ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape,
                                                       ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTextures);

  /// [FreeFunction("SpritesBindings::CreateSprite", ThrowsException = true)]
  /// @brief Method CreateSprite, addr 0x6eb4fb8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> CreateSprite(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                             ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape,
                                                             /* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] */ ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture);

  /// [FreeFunction("SpritesBindings::CreateSpriteWithoutTextureScripting")]
  /// @brief Method CreateSpriteWithoutTextureScripting, addr 0x6eb4dd8, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> CreateSpriteWithoutTextureScripting(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits, ::UnityEngine::Texture2D* texture);

  /// @brief Method CreateSpriteWithoutTextureScripting_Injected, addr 0x6eb4f54, size 0x64, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateSpriteWithoutTextureScripting_Injected(::by_ref<::UnityEngine::Rect> rect, ::by_ref<::UnityEngine::Vector2> pivot, float_t pixelsToUnits,
                                                                              ::System::IntPtr texture);

  /// @brief Method CreateSprite_Injected, addr 0x6eb5168, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateSprite_Injected(::System::IntPtr texture, ::by_ref<::UnityEngine::Rect> rect, ::by_ref<::UnityEngine::Vector2> pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                       ::UnityEngine::SpriteMeshType meshType, ::by_ref<::UnityEngine::Vector4> border, bool generateFallbackPhysicsShape,
                                                       ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture);

  /// @brief Method GetInnerUVs, addr 0x6eb4b38, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetInnerUVs();

  /// @brief Method GetInnerUVs_Injected, addr 0x6eb4bd4, size 0x44, virtual false, abstract: false, final false
  static inline void GetInnerUVs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetOuterUVs, addr 0x6eb4c18, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetOuterUVs();

  /// @brief Method GetOuterUVs_Injected, addr 0x6eb4cb4, size 0x44, virtual false, abstract: false, final false
  static inline void GetOuterUVs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPacked, addr 0x6eb48c0, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPacked();

  /// @brief Method GetPacked_Injected, addr 0x6eb4940, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPacked_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPackingMode, addr 0x6eb4748, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPackingMode();

  /// @brief Method GetPackingMode_Injected, addr 0x6eb47c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPackingMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPackingRotation, addr 0x6eb4804, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPackingRotation();

  /// @brief Method GetPackingRotation_Injected, addr 0x6eb4884, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPackingRotation_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPadding, addr 0x6eb4cf8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPadding();

  /// @brief Method GetPadding_Injected, addr 0x6eb4d94, size 0x44, virtual false, abstract: false, final false
  static inline void GetPadding_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method GetPhysicsShape, addr 0x6eb6b00, size 0xcc, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Vector2> GetPhysicsShape(int32_t shapeIdx);

  /// @brief Method GetPhysicsShape, addr 0x6eb67e8, size 0x118, virtual false, abstract: false, final false
  inline int32_t GetPhysicsShape(int32_t shapeIdx, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape);

  /// @brief Method GetPhysicsShapeCount, addr 0x6eb6094, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetPhysicsShapeCount();

  /// @brief Method GetPhysicsShapeCount_Injected, addr 0x6eb6114, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPhysicsShapeCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("SpritesBindings::GetPhysicsShape", ThrowsException = true)]
  /// @brief Method GetPhysicsShapeImpl, addr 0x6eb6900, size 0x200, virtual false, abstract: false, final false
  static inline void GetPhysicsShapeImpl(::UnityEngine::Sprite* sprite, int32_t shapeIdx, /* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape);

  /// @brief Method GetPhysicsShapeImpl_Injected, addr 0x6eb6cb0, size 0x54, virtual false, abstract: false, final false
  static inline void GetPhysicsShapeImpl_Injected(::System::IntPtr sprite, int32_t shapeIdx, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> physicsShape);

  /// @brief Method GetPhysicsShapePointCount, addr 0x6eb6648, size 0xcc, virtual false, abstract: false, final false
  inline int32_t GetPhysicsShapePointCount(int32_t shapeIdx);

  /// [FreeFunction("SpritesBindings::GetPhysicsShape", ThrowsException = true)]
  /// @brief Method GetPhysicsShapeSpanImpl, addr 0x6eb6bcc, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<::UnityEngine::Vector2> GetPhysicsShapeSpanImpl(::UnityEngine::Sprite* sprite, int32_t shapeIdx);

  /// @brief Method GetPhysicsShapeSpanImpl_Injected, addr 0x6eb6d04, size 0x54, virtual false, abstract: false, final false
  static inline void GetPhysicsShapeSpanImpl_Injected(::System::IntPtr sprite, int32_t shapeIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("SpritesBindings::GetScriptableObjects", ThrowsException = true, HasExplicitThis = true)]
  /// @brief Method GetScriptableObjects, addr 0x6eb620c, size 0xbc, virtual false, abstract: false, final false
  inline uint32_t GetScriptableObjects(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] [NotNull] */ ::ArrayW<::UnityEngine::ScriptableObject*> scriptableObjects);

  /// @brief Method GetScriptableObjectsCount, addr 0x6eb6150, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetScriptableObjectsCount();

  /// @brief Method GetScriptableObjectsCount_Injected, addr 0x6eb61d0, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetScriptableObjectsCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetScriptableObjects_Injected, addr 0x6eb62c8, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetScriptableObjects_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::ScriptableObject*> scriptableObjects);

  /// @brief Method GetSecondaryTexture, addr 0x6eb5700, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetSecondaryTexture(int32_t index);

  /// @brief Method GetSecondaryTextureCount, addr 0x6eb589c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetSecondaryTextureCount();

  /// @brief Method GetSecondaryTextureCount_Injected, addr 0x6eb591c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetSecondaryTextureCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSecondaryTexture_Injected, addr 0x6eb5858, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSecondaryTexture_Injected(::System::IntPtr _unity_self, int32_t index);

  /// [FreeFunction("SpritesBindings::GetSecondaryTextures", ThrowsException = true, HasExplicitThis = true)]
  /// @brief Method GetSecondaryTextures, addr 0x6eb5958, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetSecondaryTextures(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] [NotNull] */ ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture);

  /// @brief Method GetSecondaryTextures_Injected, addr 0x6eb5a14, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetSecondaryTextures_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture);

  /// @brief Method GetTextureRect, addr 0x6eb497c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetTextureRect();

  /// @brief Method GetTextureRectOffset, addr 0x6eb4a5c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureRectOffset();

  /// @brief Method GetTextureRectOffset_Injected, addr 0x6eb4af4, size 0x44, virtual false, abstract: false, final false
  static inline void GetTextureRectOffset_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method GetTextureRect_Injected, addr 0x6eb4a18, size 0x44, virtual false, abstract: false, final false
  static inline void GetTextureRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// [NativeMethod("GetPhysicsShapePointCount")]
  /// @brief Method Internal_GetPhysicsShapePointCount, addr 0x6eb6714, size 0x90, virtual false, abstract: false, final false
  inline int32_t Internal_GetPhysicsShapePointCount(int32_t shapeIdx);

  /// @brief Method Internal_GetPhysicsShapePointCount_Injected, addr 0x6eb67a4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t Internal_GetPhysicsShapePointCount_Injected(::System::IntPtr _unity_self, int32_t shapeIdx);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::Sprite* New_ctor();

  /// [FreeFunction("SpritesBindings::OverrideGeometry", HasExplicitThis = true)]
  /// @brief Method OverrideGeometry, addr 0x6eb736c, size 0x1a4, virtual false, abstract: false, final false
  inline void OverrideGeometry(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector2> vertices, /* [NotNull] */ ::ArrayW<uint16_t> triangles);

  /// @brief Method OverrideGeometry_Injected, addr 0x6eb7510, size 0x54, virtual false, abstract: false, final false
  static inline void OverrideGeometry_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vertices,
                                               ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> triangles);

  /// @brief Method OverridePhysicsShape, addr 0x6eb6d58, size 0x3c4, virtual false, abstract: false, final false
  inline void OverridePhysicsShape(::System::Collections::Generic::IList_1<::ArrayW<::UnityEngine::Vector2>>* physicsShapes);

  /// [FreeFunction("SpritesBindings::OverridePhysicsShape", ThrowsException = true)]
  /// @brief Method OverridePhysicsShape, addr 0x6eb71ac, size 0x128, virtual false, abstract: false, final false
  static inline void OverridePhysicsShape(::UnityEngine::Sprite* sprite, /* [NotNull] */ ::ArrayW<::UnityEngine::Vector2> physicsShape, int32_t idx);

  /// [FreeFunction("SpritesBindings::OverridePhysicsShapeCount")]
  /// @brief Method OverridePhysicsShapeCount, addr 0x6eb711c, size 0x90, virtual false, abstract: false, final false
  static inline void OverridePhysicsShapeCount(::UnityEngine::Sprite* sprite, int32_t physicsShapeCount);

  /// @brief Method OverridePhysicsShapeCount_Injected, addr 0x6eb72d4, size 0x44, virtual false, abstract: false, final false
  static inline void OverridePhysicsShapeCount_Injected(::System::IntPtr sprite, int32_t physicsShapeCount);

  /// @brief Method OverridePhysicsShape_Injected, addr 0x6eb7318, size 0x54, virtual false, abstract: false, final false
  static inline void OverridePhysicsShape_Injected(::System::IntPtr sprite, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> physicsShape, int32_t idx);

  /// @brief Method RemoveScriptableObjectAt, addr 0x6eb6434, size 0x90, virtual false, abstract: false, final false
  inline bool RemoveScriptableObjectAt(uint32_t i);

  /// @brief Method RemoveScriptableObjectAt_Injected, addr 0x6eb64c4, size 0x44, virtual false, abstract: false, final false
  static inline bool RemoveScriptableObjectAt_Injected(::System::IntPtr _unity_self, uint32_t i);

  /// @brief Method SetScriptableObjectAt, addr 0x6eb6508, size 0xec, virtual false, abstract: false, final false
  inline bool SetScriptableObjectAt(/* [NotNull] */ ::UnityEngine::ScriptableObject* obj, uint32_t i);

  /// @brief Method SetScriptableObjectAt_Injected, addr 0x6eb65f4, size 0x54, virtual false, abstract: false, final false
  static inline bool SetScriptableObjectAt_Injected(::System::IntPtr _unity_self, ::System::IntPtr obj, uint32_t i);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6eb46f0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// [NativeMethod("GetAlphaTexture")]
  /// @brief Method get_associatedAlphaSplitTexture, addr 0x6eb5bd0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_associatedAlphaSplitTexture();

  /// @brief Method get_associatedAlphaSplitTexture_Injected, addr 0x6eb5d20, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_associatedAlphaSplitTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_border, addr 0x6eb53d8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_border();

  /// @brief Method get_border_Injected, addr 0x6eb5474, size 0x44, virtual false, abstract: false, final false
  static inline void get_border_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method get_bounds, addr 0x6eb5204, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6eb52b4, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_extrude, addr 0x6eb5644, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_extrude();

  /// @brief Method get_extrude_Injected, addr 0x6eb56c4, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_extrude_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_packed, addr 0x6eb5e38, size 0x18, virtual false, abstract: false, final false
  inline bool get_packed();

  /// @brief Method get_packingMode, addr 0x6eb5e50, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::SpritePackingMode get_packingMode();

  /// @brief Method get_packingRotation, addr 0x6eb5e54, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::SpritePackingRotation get_packingRotation();

  /// [NativeMethod("GetPivotInPixels")]
  /// @brief Method get_pivot, addr 0x6eb5d5c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x6eb5df4, size 0x44, virtual false, abstract: false, final false
  static inline void get_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [NativeMethod("GetPixelsToUnits")]
  /// @brief Method get_pixelsPerUnit, addr 0x6eb5a58, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_pixelsPerUnit_Injected, addr 0x6eb5ad8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pixelsPerUnit_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rect, addr 0x6eb52f8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x6eb5394, size 0x44, virtual false, abstract: false, final false
  static inline void get_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// [NativeMethod("GetSpriteAtlasTextureScale")]
  /// @brief Method get_spriteAtlasTextureScale, addr 0x6eb5b14, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spriteAtlasTextureScale();

  /// @brief Method get_spriteAtlasTextureScale_Injected, addr 0x6eb5b94, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spriteAtlasTextureScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_texture, addr 0x6eb54b8, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

  /// @brief Method get_textureRect, addr 0x6eb5e58, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_textureRect();

  /// @brief Method get_textureRectOffset, addr 0x6eb5e5c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_textureRectOffset();

  /// @brief Method get_texture_Injected, addr 0x6eb5608, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_texture_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("SpriteAccessLegacy::GetSpriteIndices", HasExplicitThis = true)]
  /// @brief Method get_triangles, addr 0x6eb5f1c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<uint16_t> get_triangles();

  /// @brief Method get_triangles_Injected, addr 0x6eb5f9c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint16_t> get_triangles_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("SpriteAccessLegacy::GetSpriteUVs", HasExplicitThis = true)]
  /// @brief Method get_uv, addr 0x6eb5fd8, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv();

  /// @brief Method get_uv_Injected, addr 0x6eb6058, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2> get_uv_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("SpriteAccessLegacy::GetSpriteVertices", HasExplicitThis = true)]
  /// @brief Method get_vertices, addr 0x6eb5e60, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_vertices();

  /// @brief Method get_vertices_Injected, addr 0x6eb5ee0, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2> get_vertices_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sprite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sprite(Sprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sprite(Sprite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Sprite) == 0x18, "Size mismatch!");

} // namespace UnityEngine
