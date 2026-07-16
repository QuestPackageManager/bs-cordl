#pragma once
// IWYU pragma private; include "UnityEngine/CanvasRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
MARK_REF_T(::UnityEngine::CanvasRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CanvasRenderer
class CORDL_TYPE CanvasRenderer : public ::UnityEngine::Component {
public:
  // Declarations
  /// @brief Field <isMask>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isMask_k__BackingField, put = __cordl_internal_set__isMask_k__BackingField)) bool _isMask_k__BackingField;

  __declspec(property(get = get_absoluteDepth)) int32_t absoluteDepth;

  __declspec(property(get = get_clippingSoftness, put = set_clippingSoftness)) ::UnityEngine::Vector2 clippingSoftness;

  __declspec(property(get = get_cull, put = set_cull)) bool cull;

  __declspec(property(get = get_cullTransparentMesh, put = set_cullTransparentMesh)) bool cullTransparentMesh;

  __declspec(property(get = get_hasMoved)) bool hasMoved;

  __declspec(property(get = get_hasPopInstruction, put = set_hasPopInstruction)) bool hasPopInstruction;

  __declspec(property(get = get_hasRectClipping)) bool hasRectClipping;

  __declspec(property(get = get_isMask, put = set_isMask)) bool isMask;

  __declspec(property(get = get_materialCount, put = set_materialCount)) int32_t materialCount;

  __declspec(property(get = get_popMaterialCount, put = set_popMaterialCount)) int32_t popMaterialCount;

  __declspec(property(get = get_relativeDepth)) int32_t relativeDepth;

  /// @brief Method AddUIVertexStream, addr 0x6de53c8, size 0x10c, virtual false, abstract: false, final false
  static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method AddUIVertexStream, addr 0x6de54d4, size 0x9c, virtual false, abstract: false, final false
  static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method Clear, addr 0x6de4c88, size 0x80, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear_Injected, addr 0x6de4d08, size 0x3c, virtual false, abstract: false, final false
  static inline void Clear_Injected(::System::IntPtr _unity_self);

  /// @brief Method CreateUIVertexStream, addr 0x6de5180, size 0x110, virtual false, abstract: false, final false
  static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method CreateUIVertexStream, addr 0x6de5290, size 0x9c, virtual false, abstract: false, final false
  static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method CreateUIVertexStreamInternal, addr 0x6de532c, size 0x9c, virtual false, abstract: false, final false
  static inline void CreateUIVertexStreamInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S,
                                                  ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents, ::System::Object* indices);

  /// @brief Method DisableRectClipping, addr 0x6de41c4, size 0x80, virtual false, abstract: false, final false
  inline void DisableRectClipping();

  /// @brief Method DisableRectClipping_Injected, addr 0x6de4244, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableRectClipping_Injected(::System::IntPtr _unity_self);

  /// @brief Method EnableRectClipping, addr 0x6de3f34, size 0x98, virtual false, abstract: false, final false
  inline void EnableRectClipping(::UnityEngine::Rect rect);

  /// @brief Method EnableRectClipping_Injected, addr 0x6de3fcc, size 0x44, virtual false, abstract: false, final false
  static inline void EnableRectClipping_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> rect);

  /// @brief Method GetAlpha, addr 0x6de4d44, size 0x14, virtual false, abstract: false, final false
  inline float_t GetAlpha();

  /// @brief Method GetColor, addr 0x6de3e54, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor();

  /// @brief Method GetColor_Injected, addr 0x6de3ef0, size 0x44, virtual false, abstract: false, final false
  static inline void GetColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetInheritedAlpha, addr 0x6de4d80, size 0x80, virtual false, abstract: false, final false
  inline float_t GetInheritedAlpha();

  /// @brief Method GetInheritedAlpha_Injected, addr 0x6de4e00, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetInheritedAlpha_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetMaterial, addr 0x6de4ed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial();

  /// @brief Method GetMaterial, addr 0x6de439c, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(int32_t index);

  /// @brief Method GetMaterial_Injected, addr 0x6de44f4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMaterial_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetMesh, addr 0x6de4afc, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetMesh();

  /// @brief Method GetMesh_Injected, addr 0x6de4c4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPopMaterial, addr 0x6de4654, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetPopMaterial(int32_t index);

  /// @brief Method GetPopMaterial_Injected, addr 0x6de47ac, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetPopMaterial_Injected(::System::IntPtr _unity_self, int32_t index);

  static inline ::UnityEngine::CanvasRenderer* New_ctor();

  /// @brief Method SetAlpha, addr 0x6de4d58, size 0x28, virtual false, abstract: false, final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method SetAlphaTexture, addr 0x6de48f4, size 0xc0, virtual false, abstract: false, final false
  inline void SetAlphaTexture(::UnityEngine::Texture* texture);

  /// @brief Method SetAlphaTexture_Injected, addr 0x6de49b4, size 0x44, virtual false, abstract: false, final false
  static inline void SetAlphaTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr texture);

  /// @brief Method SetColor, addr 0x6de3d78, size 0x98, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetColor_Injected, addr 0x6de3e10, size 0x44, virtual false, abstract: false, final false
  static inline void SetColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> color);

  /// @brief Method SetMaterial, addr 0x6de4280, size 0xc8, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* material, int32_t index);

  /// @brief Method SetMaterial, addr 0x6de4e3c, size 0x9c, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* material, ::UnityEngine::Texture* texture);

  /// @brief Method SetMaterial_Injected, addr 0x6de4348, size 0x54, virtual false, abstract: false, final false
  static inline void SetMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, int32_t index);

  /// @brief Method SetMesh, addr 0x6de49f8, size 0xc0, virtual false, abstract: false, final false
  inline void SetMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method SetMesh_Injected, addr 0x6de4ab8, size 0x44, virtual false, abstract: false, final false
  static inline void SetMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh);

  /// @brief Method SetPopMaterial, addr 0x6de4538, size 0xc8, virtual false, abstract: false, final false
  inline void SetPopMaterial(::UnityEngine::Material* material, int32_t index);

  /// @brief Method SetPopMaterial_Injected, addr 0x6de4600, size 0x54, virtual false, abstract: false, final false
  static inline void SetPopMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, int32_t index);

  /// @brief Method SetTexture, addr 0x6de47f0, size 0xc0, virtual false, abstract: false, final false
  inline void SetTexture(::UnityEngine::Texture* texture);

  /// @brief Method SetTexture_Injected, addr 0x6de48b0, size 0x44, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr texture);

  /// @brief Method SetVertices, addr 0x6de55f4, size 0x9cc, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::UIVertex> vertices, int32_t size);

  /// @brief Method SetVertices, addr 0x6de5570, size 0x84, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices);

  /// @brief Method SplitIndicesStreamsInternal, addr 0x6de513c, size 0x44, virtual false, abstract: false, final false
  static inline void SplitIndicesStreamsInternal(::System::Object* verts, ::System::Object* indices);

  /// @brief Method SplitUIVertexStreams, addr 0x6de4ee0, size 0xf0, virtual false, abstract: false, final false
  static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method SplitUIVertexStreams, addr 0x6de4fd0, size 0xd0, virtual false, abstract: false, final false
  static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method SplitUIVertexStreamsInternal, addr 0x6de50a0, size 0x9c, virtual false, abstract: false, final false
  static inline void SplitUIVertexStreamsInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S,
                                                  ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents);

  constexpr bool const& __cordl_internal_get__isMask_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMask_k__BackingField();

  constexpr void __cordl_internal_set__isMask_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6de5fc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_absoluteDepth, addr 0x6de3758, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_absoluteDepth();

  /// @brief Method get_absoluteDepth_Injected, addr 0x6de37d8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_absoluteDepth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clippingSoftness, addr 0x6de4010, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_clippingSoftness();

  /// @brief Method get_clippingSoftness_Injected, addr 0x6de40a8, size 0x44, virtual false, abstract: false, final false
  static inline void get_clippingSoftness_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_cull, addr 0x6de3bd8, size 0x80, virtual false, abstract: false, final false
  inline bool get_cull();

  /// @brief Method get_cullTransparentMesh, addr 0x6de38d0, size 0x80, virtual false, abstract: false, final false
  inline bool get_cullTransparentMesh();

  /// @brief Method get_cullTransparentMesh_Injected, addr 0x6de3950, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_cullTransparentMesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cull_Injected, addr 0x6de3c58, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_cull_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasMoved, addr 0x6de3814, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasMoved();

  /// @brief Method get_hasMoved_Injected, addr 0x6de3894, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasMoved_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasPopInstruction, addr 0x6de32a8, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasPopInstruction();

  /// @brief Method get_hasPopInstruction_Injected, addr 0x6de3328, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasPopInstruction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRectClipping, addr 0x6de3a60, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRectClipping();

  /// @brief Method get_hasRectClipping_Injected, addr 0x6de3ae0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRectClipping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isMask, addr 0x6de3d68, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMask();

  /// @brief Method get_materialCount, addr 0x6de3438, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_materialCount();

  /// @brief Method get_materialCount_Injected, addr 0x6de34b8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_materialCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_popMaterialCount, addr 0x6de35c8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_popMaterialCount();

  /// @brief Method get_popMaterialCount_Injected, addr 0x6de3648, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_popMaterialCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_relativeDepth, addr 0x6de3b1c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_relativeDepth();

  /// @brief Method get_relativeDepth_Injected, addr 0x6de3b9c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_relativeDepth_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_clippingSoftness, addr 0x6de40ec, size 0x94, virtual false, abstract: false, final false
  inline void set_clippingSoftness(::UnityEngine::Vector2 value);

  /// @brief Method set_clippingSoftness_Injected, addr 0x6de4180, size 0x44, virtual false, abstract: false, final false
  static inline void set_clippingSoftness_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_cull, addr 0x6de3c94, size 0x90, virtual false, abstract: false, final false
  inline void set_cull(bool value);

  /// @brief Method set_cullTransparentMesh, addr 0x6de398c, size 0x90, virtual false, abstract: false, final false
  inline void set_cullTransparentMesh(bool value);

  /// @brief Method set_cullTransparentMesh_Injected, addr 0x6de3a1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullTransparentMesh_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cull_Injected, addr 0x6de3d24, size 0x44, virtual false, abstract: false, final false
  static inline void set_cull_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_hasPopInstruction, addr 0x6de3364, size 0x90, virtual false, abstract: false, final false
  inline void set_hasPopInstruction(bool value);

  /// @brief Method set_hasPopInstruction_Injected, addr 0x6de33f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasPopInstruction_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_isMask, addr 0x6de3d70, size 0x8, virtual false, abstract: false, final false
  inline void set_isMask(bool value);

  /// @brief Method set_materialCount, addr 0x6de34f4, size 0x90, virtual false, abstract: false, final false
  inline void set_materialCount(int32_t value);

  /// @brief Method set_materialCount_Injected, addr 0x6de3584, size 0x44, virtual false, abstract: false, final false
  static inline void set_materialCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_popMaterialCount, addr 0x6de3684, size 0x90, virtual false, abstract: false, final false
  inline void set_popMaterialCount(int32_t value);

  /// @brief Method set_popMaterialCount_Injected, addr 0x6de3714, size 0x44, virtual false, abstract: false, final false
  static inline void set_popMaterialCount_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasRenderer(CanvasRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasRenderer(CanvasRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22064 };

  /// @brief Field <isMask>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isMask_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CanvasRenderer, ____isMask_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::CanvasRenderer) == 0x20, "Size mismatch!");

} // namespace UnityEngine
