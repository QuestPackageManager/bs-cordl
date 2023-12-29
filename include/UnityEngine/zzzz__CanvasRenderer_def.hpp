#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRenderer)
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
class Object;
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
// Type: UnityEngine::CanvasRenderer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15764))
// CS Name: ::UnityEngine::CanvasRenderer*
class CORDL_TYPE CanvasRenderer : public ::UnityEngine::Component {
public:
  // Declarations
  /// @brief Field <isMask>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__isMask_k__BackingField, put = __set__isMask_k__BackingField)) bool _isMask_k__BackingField;

  __declspec(property(put = set_hasPopInstruction)) bool hasPopInstruction;

  __declspec(property(get = get_materialCount, put = set_materialCount)) int32_t materialCount;

  __declspec(property(put = set_popMaterialCount)) int32_t popMaterialCount;

  __declspec(property(get = get_absoluteDepth)) int32_t absoluteDepth;

  __declspec(property(get = get_hasMoved)) bool hasMoved;

  __declspec(property(get = get_cullTransparentMesh, put = set_cullTransparentMesh)) bool cullTransparentMesh;

  __declspec(property(get = get_cull, put = set_cull)) bool cull;

  __declspec(property(put = set_clippingSoftness))::UnityEngine::Vector2 clippingSoftness;

  constexpr bool& __get__isMask_k__BackingField();

  constexpr bool const& __get__isMask_k__BackingField() const;

  constexpr void __set__isMask_k__BackingField(bool value);

  /// @brief Method set_hasPopInstruction addr 0x2d404c8 size 0x44 virtual false final false
  inline void set_hasPopInstruction(bool value);

  /// @brief Method get_materialCount addr 0x2d4050c size 0x3c virtual false final false
  inline int32_t get_materialCount();

  /// @brief Method set_materialCount addr 0x2d40548 size 0x44 virtual false final false
  inline void set_materialCount(int32_t value);

  /// @brief Method set_popMaterialCount addr 0x2d4058c size 0x44 virtual false final false
  inline void set_popMaterialCount(int32_t value);

  /// @brief Method get_absoluteDepth addr 0x2d405d0 size 0x3c virtual false final false
  inline int32_t get_absoluteDepth();

  /// @brief Method get_hasMoved addr 0x2d4060c size 0x3c virtual false final false
  inline bool get_hasMoved();

  /// @brief Method get_cullTransparentMesh addr 0x2d40648 size 0x3c virtual false final false
  inline bool get_cullTransparentMesh();

  /// @brief Method set_cullTransparentMesh addr 0x2d40684 size 0x44 virtual false final false
  inline void set_cullTransparentMesh(bool value);

  /// @brief Method get_cull addr 0x2d406c8 size 0x3c virtual false final false
  inline bool get_cull();

  /// @brief Method set_cull addr 0x2d40704 size 0x44 virtual false final false
  inline void set_cull(bool value);

  /// @brief Method SetColor addr 0x2d40748 size 0x54 virtual false final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method GetColor addr 0x2d407e0 size 0x58 virtual false final false
  inline ::UnityEngine::Color GetColor();

  /// @brief Method EnableRectClipping addr 0x2d4087c size 0x54 virtual false final false
  inline void EnableRectClipping(::UnityEngine::Rect rect);

  /// @brief Method set_clippingSoftness addr 0x2d40914 size 0x48 virtual false final false
  inline void set_clippingSoftness(::UnityEngine::Vector2 value);

  /// @brief Method DisableRectClipping addr 0x2d409a0 size 0x3c virtual false final false
  inline void DisableRectClipping();

  /// @brief Method SetMaterial addr 0x2d409dc size 0x54 virtual false final false
  inline void SetMaterial(::UnityEngine::Material* material, int32_t index);

  /// @brief Method GetMaterial addr 0x2d40a30 size 0x44 virtual false final false
  inline ::UnityEngine::Material* GetMaterial(int32_t index);

  /// @brief Method SetPopMaterial addr 0x2d40a74 size 0x54 virtual false final false
  inline void SetPopMaterial(::UnityEngine::Material* material, int32_t index);

  /// @brief Method SetTexture addr 0x2d40ac8 size 0x44 virtual false final false
  inline void SetTexture(::UnityEngine::Texture* texture);

  /// @brief Method SetAlphaTexture addr 0x2d40b0c size 0x44 virtual false final false
  inline void SetAlphaTexture(::UnityEngine::Texture* texture);

  /// @brief Method SetMesh addr 0x2d40b50 size 0x44 virtual false final false
  inline void SetMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method Clear addr 0x2d40b94 size 0x3c virtual false final false
  inline void Clear();

  /// @brief Method SetMaterial addr 0x2d40bd0 size 0x128 virtual false final false
  inline void SetMaterial(::UnityEngine::Material* material, ::UnityEngine::Texture* texture);

  /// @brief Method GetMaterial addr 0x2d40cf8 size 0x40 virtual false final false
  inline ::UnityEngine::Material* GetMaterial();

  /// @brief Method SplitUIVertexStreams addr 0x2d40d38 size 0xd0 virtual false final false
  static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method CreateUIVertexStream addr 0x2d40ee8 size 0x9c virtual false final false
  static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                          ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method AddUIVertexStream addr 0x2d41020 size 0x9c virtual false final false
  static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv0S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv2S,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method SplitIndicesStreamsInternal addr 0x2d40ea4 size 0x44 virtual false final false
  static inline void SplitIndicesStreamsInternal(::System::Object* verts, ::System::Object* indices);

  /// @brief Method SplitUIVertexStreamsInternal addr 0x2d40e08 size 0x9c virtual false final false
  static inline void SplitUIVertexStreamsInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S,
                                                  ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents);

  /// @brief Method CreateUIVertexStreamInternal addr 0x2d40f84 size 0x9c virtual false final false
  static inline void CreateUIVertexStreamInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S,
                                                  ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents, ::System::Object* indices);

  /// @brief Method SetColor_Injected addr 0x2d4079c size 0x44 virtual false final false
  inline void SetColor_Injected(ByRef<::UnityEngine::Color> color);

  /// @brief Method GetColor_Injected addr 0x2d40838 size 0x44 virtual false final false
  inline void GetColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method EnableRectClipping_Injected addr 0x2d408d0 size 0x44 virtual false final false
  inline void EnableRectClipping_Injected(ByRef<::UnityEngine::Rect> rect);

  /// @brief Method set_clippingSoftness_Injected addr 0x2d4095c size 0x44 virtual false final false
  inline void set_clippingSoftness_Injected(ByRef<::UnityEngine::Vector2> value);

  // Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasRenderer(CanvasRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasRenderer(CanvasRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasRenderer();

public:
  /// @brief Field <isMask>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isMask_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CanvasRenderer, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CanvasRenderer, ____isMask_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CanvasRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
