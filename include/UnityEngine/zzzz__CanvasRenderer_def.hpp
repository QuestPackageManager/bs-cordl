#pragma once
// IWYU pragma private; include "UnityEngine/CanvasRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRenderer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class CanvasRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CanvasRenderer);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CanvasRenderer
class CORDL_TYPE CanvasRenderer : public ::UnityEngine::Component {
public:
// Declarations
/// @brief Field <isMask>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMask_k__BackingField, put=__cordl_internal_set__isMask_k__BackingField)) bool  _isMask_k__BackingField;

 __declspec(property(get=get_absoluteDepth)) int32_t  absoluteDepth;

 __declspec(property(get=get_clippingSoftness, put=set_clippingSoftness)) ::UnityEngine::Vector2  clippingSoftness;

 __declspec(property(get=get_cull, put=set_cull)) bool  cull;

 __declspec(property(get=get_cullTransparentMesh, put=set_cullTransparentMesh)) bool  cullTransparentMesh;

 __declspec(property(get=get_hasMoved)) bool  hasMoved;

 __declspec(property(get=get_hasPopInstruction, put=set_hasPopInstruction)) bool  hasPopInstruction;

 __declspec(property(get=get_hasRectClipping)) bool  hasRectClipping;

 __declspec(property(get=get_isMask, put=set_isMask)) bool  isMask;

 __declspec(property(get=get_materialCount, put=set_materialCount)) int32_t  materialCount;

 __declspec(property(get=get_popMaterialCount, put=set_popMaterialCount)) int32_t  popMaterialCount;

 __declspec(property(get=get_relativeDepth)) int32_t  relativeDepth;

/// @brief Method AddUIVertexStream, addr 0x6c91510, size 0x10c, virtual false, abstract: false, final false
static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents) ;

/// @brief Method AddUIVertexStream, addr 0x6c9161c, size 0x9c, virtual false, abstract: false, final false
static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents) ;

/// @brief Method Clear, addr 0x6c90dd0, size 0x80, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear_Injected, addr 0x6c90e50, size 0x3c, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CreateUIVertexStream, addr 0x6c912c8, size 0x110, virtual false, abstract: false, final false
static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method CreateUIVertexStream, addr 0x6c913d8, size 0x9c, virtual false, abstract: false, final false
static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method CreateUIVertexStreamInternal, addr 0x6c91474, size 0x9c, virtual false, abstract: false, final false
static inline void CreateUIVertexStreamInternal(::System::Object*  verts, ::System::Object*  positions, ::System::Object*  colors, ::System::Object*  uv0S, ::System::Object*  uv1S, ::System::Object*  uv2S, ::System::Object*  uv3S, ::System::Object*  normals, ::System::Object*  tangents, ::System::Object*  indices) ;

/// @brief Method DisableRectClipping, addr 0x6c9030c, size 0x80, virtual false, abstract: false, final false
inline void DisableRectClipping() ;

/// @brief Method DisableRectClipping_Injected, addr 0x6c9038c, size 0x3c, virtual false, abstract: false, final false
static inline void DisableRectClipping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method EnableRectClipping, addr 0x6c9007c, size 0x98, virtual false, abstract: false, final false
inline void EnableRectClipping(::UnityEngine::Rect  rect) ;

/// @brief Method EnableRectClipping_Injected, addr 0x6c90114, size 0x44, virtual false, abstract: false, final false
static inline void EnableRectClipping_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rect>  rect) ;

/// @brief Method GetAlpha, addr 0x6c90e8c, size 0x14, virtual false, abstract: false, final false
inline float_t GetAlpha() ;

/// @brief Method GetColor, addr 0x6c8ff9c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

/// @brief Method GetColor_Injected, addr 0x6c90038, size 0x44, virtual false, abstract: false, final false
static inline void GetColor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetInheritedAlpha, addr 0x6c90ec8, size 0x80, virtual false, abstract: false, final false
inline float_t GetInheritedAlpha() ;

/// @brief Method GetInheritedAlpha_Injected, addr 0x6c90f48, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetInheritedAlpha_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetMaterial, addr 0x6c91020, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial() ;

/// @brief Method GetMaterial, addr 0x6c904e4, size 0x158, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial(int32_t  index) ;

/// @brief Method GetMaterial_Injected, addr 0x6c9063c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMaterial_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetMesh, addr 0x6c90c44, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GetMesh() ;

/// @brief Method GetMesh_Injected, addr 0x6c90d94, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMesh_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPopMaterial, addr 0x6c9079c, size 0x158, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetPopMaterial(int32_t  index) ;

/// @brief Method GetPopMaterial_Injected, addr 0x6c908f4, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPopMaterial_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

static inline ::UnityEngine::CanvasRenderer* New_ctor() ;

/// @brief Method SetAlpha, addr 0x6c90ea0, size 0x28, virtual false, abstract: false, final false
inline void SetAlpha(float_t  alpha) ;

/// @brief Method SetAlphaTexture, addr 0x6c90a3c, size 0xc0, virtual false, abstract: false, final false
inline void SetAlphaTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method SetAlphaTexture_Injected, addr 0x6c90afc, size 0x44, virtual false, abstract: false, final false
static inline void SetAlphaTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  texture) ;

/// @brief Method SetColor, addr 0x6c8fec0, size 0x98, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetColor_Injected, addr 0x6c8ff58, size 0x44, virtual false, abstract: false, final false
static inline void SetColor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Color>  color) ;

/// @brief Method SetMaterial, addr 0x6c903c8, size 0xc8, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  material, int32_t  index) ;

/// @brief Method SetMaterial, addr 0x6c90f84, size 0x9c, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  material, ::UnityEngine::Texture*  texture) ;

/// @brief Method SetMaterial_Injected, addr 0x6c90490, size 0x54, virtual false, abstract: false, final false
static inline void SetMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, int32_t  index) ;

/// @brief Method SetMesh, addr 0x6c90b40, size 0xc0, virtual false, abstract: false, final false
inline void SetMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method SetMesh_Injected, addr 0x6c90c00, size 0x44, virtual false, abstract: false, final false
static inline void SetMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh) ;

/// @brief Method SetPopMaterial, addr 0x6c90680, size 0xc8, virtual false, abstract: false, final false
inline void SetPopMaterial(::UnityEngine::Material*  material, int32_t  index) ;

/// @brief Method SetPopMaterial_Injected, addr 0x6c90748, size 0x54, virtual false, abstract: false, final false
static inline void SetPopMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, int32_t  index) ;

/// @brief Method SetTexture, addr 0x6c90938, size 0xc0, virtual false, abstract: false, final false
inline void SetTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method SetTexture_Injected, addr 0x6c909f8, size 0x44, virtual false, abstract: false, final false
static inline void SetTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  texture) ;

/// @brief Method SetVertices, addr 0x6c9173c, size 0x9cc, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>  vertices, int32_t  size) ;

/// @brief Method SetVertices, addr 0x6c916b8, size 0x84, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  vertices) ;

/// @brief Method SplitIndicesStreamsInternal, addr 0x6c91284, size 0x44, virtual false, abstract: false, final false
static inline void SplitIndicesStreamsInternal(::System::Object*  verts, ::System::Object*  indices) ;

/// @brief Method SplitUIVertexStreams, addr 0x6c91028, size 0xf0, virtual false, abstract: false, final false
static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method SplitUIVertexStreams, addr 0x6c91118, size 0xd0, virtual false, abstract: false, final false
static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method SplitUIVertexStreamsInternal, addr 0x6c911e8, size 0x9c, virtual false, abstract: false, final false
static inline void SplitUIVertexStreamsInternal(::System::Object*  verts, ::System::Object*  positions, ::System::Object*  colors, ::System::Object*  uv0S, ::System::Object*  uv1S, ::System::Object*  uv2S, ::System::Object*  uv3S, ::System::Object*  normals, ::System::Object*  tangents) ;

constexpr bool const& __cordl_internal_get__isMask_k__BackingField() const;

constexpr bool& __cordl_internal_get__isMask_k__BackingField() ;

constexpr void __cordl_internal_set__isMask_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x6c92108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_absoluteDepth, addr 0x6c8f8a0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_absoluteDepth() ;

/// @brief Method get_absoluteDepth_Injected, addr 0x6c8f920, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_absoluteDepth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clippingSoftness, addr 0x6c90158, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_clippingSoftness() ;

/// @brief Method get_clippingSoftness_Injected, addr 0x6c901f0, size 0x44, virtual false, abstract: false, final false
static inline void get_clippingSoftness_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_cull, addr 0x6c8fd20, size 0x80, virtual false, abstract: false, final false
inline bool get_cull() ;

/// @brief Method get_cullTransparentMesh, addr 0x6c8fa18, size 0x80, virtual false, abstract: false, final false
inline bool get_cullTransparentMesh() ;

/// @brief Method get_cullTransparentMesh_Injected, addr 0x6c8fa98, size 0x3c, virtual false, abstract: false, final false
static inline bool get_cullTransparentMesh_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cull_Injected, addr 0x6c8fda0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_cull_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasMoved, addr 0x6c8f95c, size 0x80, virtual false, abstract: false, final false
inline bool get_hasMoved() ;

/// @brief Method get_hasMoved_Injected, addr 0x6c8f9dc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasMoved_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasPopInstruction, addr 0x6c8f3f0, size 0x80, virtual false, abstract: false, final false
inline bool get_hasPopInstruction() ;

/// @brief Method get_hasPopInstruction_Injected, addr 0x6c8f470, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasPopInstruction_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasRectClipping, addr 0x6c8fba8, size 0x80, virtual false, abstract: false, final false
inline bool get_hasRectClipping() ;

/// @brief Method get_hasRectClipping_Injected, addr 0x6c8fc28, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasRectClipping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isMask, addr 0x6c8feb0, size 0x8, virtual false, abstract: false, final false
inline bool get_isMask() ;

/// @brief Method get_materialCount, addr 0x6c8f580, size 0x80, virtual false, abstract: false, final false
inline int32_t get_materialCount() ;

/// @brief Method get_materialCount_Injected, addr 0x6c8f600, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_materialCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_popMaterialCount, addr 0x6c8f710, size 0x80, virtual false, abstract: false, final false
inline int32_t get_popMaterialCount() ;

/// @brief Method get_popMaterialCount_Injected, addr 0x6c8f790, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_popMaterialCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_relativeDepth, addr 0x6c8fc64, size 0x80, virtual false, abstract: false, final false
inline int32_t get_relativeDepth() ;

/// @brief Method get_relativeDepth_Injected, addr 0x6c8fce4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_relativeDepth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_clippingSoftness, addr 0x6c90234, size 0x94, virtual false, abstract: false, final false
inline void set_clippingSoftness(::UnityEngine::Vector2  value) ;

/// @brief Method set_clippingSoftness_Injected, addr 0x6c902c8, size 0x44, virtual false, abstract: false, final false
static inline void set_clippingSoftness_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_cull, addr 0x6c8fddc, size 0x90, virtual false, abstract: false, final false
inline void set_cull(bool  value) ;

/// @brief Method set_cullTransparentMesh, addr 0x6c8fad4, size 0x90, virtual false, abstract: false, final false
inline void set_cullTransparentMesh(bool  value) ;

/// @brief Method set_cullTransparentMesh_Injected, addr 0x6c8fb64, size 0x44, virtual false, abstract: false, final false
static inline void set_cullTransparentMesh_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_cull_Injected, addr 0x6c8fe6c, size 0x44, virtual false, abstract: false, final false
static inline void set_cull_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_hasPopInstruction, addr 0x6c8f4ac, size 0x90, virtual false, abstract: false, final false
inline void set_hasPopInstruction(bool  value) ;

/// @brief Method set_hasPopInstruction_Injected, addr 0x6c8f53c, size 0x44, virtual false, abstract: false, final false
static inline void set_hasPopInstruction_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_isMask, addr 0x6c8feb8, size 0x8, virtual false, abstract: false, final false
inline void set_isMask(bool  value) ;

/// @brief Method set_materialCount, addr 0x6c8f63c, size 0x90, virtual false, abstract: false, final false
inline void set_materialCount(int32_t  value) ;

/// @brief Method set_materialCount_Injected, addr 0x6c8f6cc, size 0x44, virtual false, abstract: false, final false
static inline void set_materialCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_popMaterialCount, addr 0x6c8f7cc, size 0x90, virtual false, abstract: false, final false
inline void set_popMaterialCount(int32_t  value) ;

/// @brief Method set_popMaterialCount_Injected, addr 0x6c8f85c, size 0x44, virtual false, abstract: false, final false
static inline void set_popMaterialCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRenderer(CanvasRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRenderer(CanvasRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21909};

/// @brief Field <isMask>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____isMask_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CanvasRenderer, ____isMask_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CanvasRenderer, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::CanvasRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
