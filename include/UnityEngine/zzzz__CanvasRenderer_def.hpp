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
template <typename T> class List_1;
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

  /// @brief Method AddUIVertexStream, addr 0x4aaa574, size 0x104, virtual false, abstract: false, final false
  static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method AddUIVertexStream, addr 0x4aaa678, size 0x9c, virtual false, abstract: false, final false
  static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method Clear, addr 0x4aa9e80, size 0x3c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateUIVertexStream, addr 0x4aaa334, size 0x108, virtual false, abstract: false, final false
  static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method CreateUIVertexStream, addr 0x4aaa43c, size 0x9c, virtual false, abstract: false, final false
  static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method CreateUIVertexStreamInternal, addr 0x4aaa4d8, size 0x9c, virtual false, abstract: false, final false
  static inline void CreateUIVertexStreamInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S,
                                                  ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents, ::System::Object* indices);

  /// @brief Method DisableRectClipping, addr 0x4aa9c0c, size 0x3c, virtual false, abstract: false, final false
  inline void DisableRectClipping();

  /// @brief Method EnableRectClipping, addr 0x4aa9a58, size 0x54, virtual false, abstract: false, final false
  inline void EnableRectClipping(::UnityEngine::Rect rect);

  /// @brief Method EnableRectClipping_Injected, addr 0x4aa9aac, size 0x44, virtual false, abstract: false, final false
  inline void EnableRectClipping_Injected(::ByRef<::UnityEngine::Rect> rect);

  /// @brief Method GetAlpha, addr 0x4aa9ebc, size 0x14, virtual false, abstract: false, final false
  inline float_t GetAlpha();

  /// @brief Method GetColor, addr 0x4aa99bc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor();

  /// @brief Method GetColor_Injected, addr 0x4aa9a14, size 0x44, virtual false, abstract: false, final false
  inline void GetColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetInheritedAlpha, addr 0x4aa9ef8, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetInheritedAlpha();

  /// @brief Method GetMaterial, addr 0x4aaa05c, size 0x40, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial();

  /// @brief Method GetMaterial, addr 0x4aa9c9c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(int32_t index);

  /// @brief Method GetMesh, addr 0x4aa9e44, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetMesh();

  /// @brief Method GetPopMaterial, addr 0x4aa9d34, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetPopMaterial(int32_t index);

  static inline ::UnityEngine::CanvasRenderer* New_ctor();

  /// @brief Method SetAlpha, addr 0x4aa9ed0, size 0x28, virtual false, abstract: false, final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method SetAlphaTexture, addr 0x4aa9dbc, size 0x44, virtual false, abstract: false, final false
  inline void SetAlphaTexture(::UnityEngine::Texture* texture);

  /// @brief Method SetColor, addr 0x4aa9924, size 0x54, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetColor_Injected, addr 0x4aa9978, size 0x44, virtual false, abstract: false, final false
  inline void SetColor_Injected(::ByRef<::UnityEngine::Color> color);

  /// @brief Method SetMaterial, addr 0x4aa9c48, size 0x54, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* material, int32_t index);

  /// @brief Method SetMaterial, addr 0x4aa9f34, size 0x128, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* material, ::UnityEngine::Texture* texture);

  /// @brief Method SetMesh, addr 0x4aa9e00, size 0x44, virtual false, abstract: false, final false
  inline void SetMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method SetPopMaterial, addr 0x4aa9ce0, size 0x54, virtual false, abstract: false, final false
  inline void SetPopMaterial(::UnityEngine::Material* material, int32_t index);

  /// @brief Method SetTexture, addr 0x4aa9d78, size 0x44, virtual false, abstract: false, final false
  inline void SetTexture(::UnityEngine::Texture* texture);

  /// @brief Method SetVertices, addr 0x4aaa784, size 0x994, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> vertices, int32_t size);

  /// @brief Method SetVertices, addr 0x4aaa714, size 0x70, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices);

  /// @brief Method SplitIndicesStreamsInternal, addr 0x4aaa2f0, size 0x44, virtual false, abstract: false, final false
  static inline void SplitIndicesStreamsInternal(::System::Object* verts, ::System::Object* indices);

  /// @brief Method SplitUIVertexStreams, addr 0x4aaa09c, size 0xe8, virtual false, abstract: false, final false
  static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method SplitUIVertexStreams, addr 0x4aaa184, size 0xd0, virtual false, abstract: false, final false
  static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method SplitUIVertexStreamsInternal, addr 0x4aaa254, size 0x9c, virtual false, abstract: false, final false
  static inline void SplitUIVertexStreamsInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S,
                                                  ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents);

  constexpr bool const& __cordl_internal_get__isMask_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMask_k__BackingField();

  constexpr void __cordl_internal_set__isMask_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4aab118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_absoluteDepth, addr 0x4aa9720, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_absoluteDepth();

  /// @brief Method get_clippingSoftness, addr 0x4aa9af0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_clippingSoftness();

  /// @brief Method get_clippingSoftness_Injected, addr 0x4aa9b3c, size 0x44, virtual false, abstract: false, final false
  inline void get_clippingSoftness_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_cull, addr 0x4aa9890, size 0x3c, virtual false, abstract: false, final false
  inline bool get_cull();

  /// @brief Method get_cullTransparentMesh, addr 0x4aa9798, size 0x3c, virtual false, abstract: false, final false
  inline bool get_cullTransparentMesh();

  /// @brief Method get_hasMoved, addr 0x4aa975c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasMoved();

  /// @brief Method get_hasPopInstruction, addr 0x4aa95a0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasPopInstruction();

  /// @brief Method get_hasRectClipping, addr 0x4aa9818, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRectClipping();

  /// @brief Method get_isMask, addr 0x4aa9910, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMask();

  /// @brief Method get_materialCount, addr 0x4aa9620, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_materialCount();

  /// @brief Method get_popMaterialCount, addr 0x4aa96a0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_popMaterialCount();

  /// @brief Method get_relativeDepth, addr 0x4aa9854, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_relativeDepth();

  /// @brief Method set_clippingSoftness, addr 0x4aa9b80, size 0x48, virtual false, abstract: false, final false
  inline void set_clippingSoftness(::UnityEngine::Vector2 value);

  /// @brief Method set_clippingSoftness_Injected, addr 0x4aa9bc8, size 0x44, virtual false, abstract: false, final false
  inline void set_clippingSoftness_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_cull, addr 0x4aa98cc, size 0x44, virtual false, abstract: false, final false
  inline void set_cull(bool value);

  /// @brief Method set_cullTransparentMesh, addr 0x4aa97d4, size 0x44, virtual false, abstract: false, final false
  inline void set_cullTransparentMesh(bool value);

  /// @brief Method set_hasPopInstruction, addr 0x4aa95dc, size 0x44, virtual false, abstract: false, final false
  inline void set_hasPopInstruction(bool value);

  /// @brief Method set_isMask, addr 0x4aa9918, size 0xc, virtual false, abstract: false, final false
  inline void set_isMask(bool value);

  /// @brief Method set_materialCount, addr 0x4aa965c, size 0x44, virtual false, abstract: false, final false
  inline void set_materialCount(int32_t value);

  /// @brief Method set_popMaterialCount, addr 0x4aa96dc, size 0x44, virtual false, abstract: false, final false
  inline void set_popMaterialCount(int32_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18337 };

  /// @brief Field <isMask>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isMask_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CanvasRenderer, ____isMask_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CanvasRenderer, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CanvasRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
