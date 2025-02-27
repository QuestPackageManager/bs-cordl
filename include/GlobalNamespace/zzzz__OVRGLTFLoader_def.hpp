#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFLoader)
namespace GlobalNamespace {
struct OVRChunkType;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace GlobalNamespace {
class OVRGLTFLoader___c__DisplayClass30_0;
}
namespace GlobalNamespace {
struct OVRGLTFScene;
}
namespace GlobalNamespace {
struct OVRMaterialData;
}
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
namespace GlobalNamespace {
struct OVRMeshData;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class Stream;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFLoader;
}
namespace GlobalNamespace {
class OVRGLTFLoader___c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0);
// Dependencies OVRMaterialData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader/<>c__DisplayClass30_0
class CORDL_TYPE OVRGLTFLoader___c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field matData, offset 0x18, size 0x40
  __declspec(property(get = __cordl_internal_get_matData, put = __cordl_internal_set_matData)) ::GlobalNamespace::OVRMaterialData matData;

  static inline ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0* New_ctor();

  /// @brief Method <ProcessMesh>b__0, addr 0x3fc0b24, size 0x1c, virtual false, abstract: false, final false
  inline void _ProcessMesh_b__0();

  constexpr ::GlobalNamespace::OVRGLTFLoader* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::OVRMaterialData const& __cordl_internal_get_matData() const;

  constexpr ::GlobalNamespace::OVRMaterialData& __cordl_internal_get_matData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set_matData(::GlobalNamespace::OVRMaterialData value);

  /// @brief Method .ctor, addr 0x3fbef58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFLoader___c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader___c__DisplayClass30_0(OVRGLTFLoader___c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader___c__DisplayClass30_0(OVRGLTFLoader___c__DisplayClass30_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7886 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field matData, offset: 0x18, size: 0x40, def value: None
  ::GlobalNamespace::OVRMaterialData ___matData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0, ___matData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRBinaryChunk, OVRTextureQualityFiltering, System.Object, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader
class CORDL_TYPE OVRGLTFLoader : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass30_0 = ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0;

  /// @brief Field GLTFToUnitySpace, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_GLTFToUnitySpace, put = setStaticF_GLTFToUnitySpace)) ::UnityEngine::Vector3 GLTFToUnitySpace;

  /// @brief Field GLTFToUnitySpace_Rotation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_GLTFToUnitySpace_Rotation, put = setStaticF_GLTFToUnitySpace_Rotation)) ::UnityEngine::Vector4 GLTFToUnitySpace_Rotation;

  /// @brief Field GLTFToUnityTangent, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_GLTFToUnityTangent, put = setStaticF_GLTFToUnityTangent)) ::UnityEngine::Vector3 GLTFToUnityTangent;

  /// @brief Field InputNodeNameMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InputNodeNameMap,
                      put = setStaticF_InputNodeNameMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* InputNodeNameMap;

  /// @brief Field m_AlphaBlendShader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaBlendShader, put = __cordl_internal_set_m_AlphaBlendShader)) ::UnityW<::UnityEngine::Shader> m_AlphaBlendShader;

  /// @brief Field m_AnimationLookup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationLookup, put = __cordl_internal_set_m_AnimationLookup)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* m_AnimationLookup;

  /// @brief Field m_InputAnimationNodes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputAnimationNodes,
                      put = __cordl_internal_set_m_InputAnimationNodes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*
      m_InputAnimationNodes;

  /// @brief Field m_Nodes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_Nodes;

  /// @brief Field m_Shader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Field m_TextureMipmapBias, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureMipmapBias, put = __cordl_internal_set_m_TextureMipmapBias)) float_t m_TextureMipmapBias;

  /// @brief Field m_TextureQuality, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureQuality, put = __cordl_internal_set_m_TextureQuality)) ::GlobalNamespace::OVRTextureQualityFiltering m_TextureQuality;

  /// @brief Field m_binaryChunk, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_binaryChunk, put = __cordl_internal_set_m_binaryChunk)) ::GlobalNamespace::OVRBinaryChunk m_binaryChunk;

  /// @brief Field m_glbStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_glbStream, put = __cordl_internal_set_m_glbStream)) ::System::IO::Stream* m_glbStream;

  /// @brief Field m_jsonData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jsonData, put = __cordl_internal_set_m_jsonData)) ::OVRSimpleJSON::JSONNode* m_jsonData;

  /// @brief Field m_morphTargetHandlers, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_morphTargetHandlers,
      put = __cordl_internal_set_m_morphTargetHandlers)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* m_morphTargetHandlers;

  /// @brief Field textureUriHandler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_textureUriHandler,
                      put = __cordl_internal_set_textureUriHandler)) ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* textureUriHandler;

  /// @brief Method ApplyTextureQuality, addr 0x3fbd250, size 0x174, virtual false, abstract: false, final false
  static inline void ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ::ByRef<::UnityEngine::Texture2D*> destTexture);

  /// @brief Method CreateUnityMaterial, addr 0x3fc0424, size 0x274, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips);

  /// @brief Method DetectTextureQuality, addr 0x3fbd190, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(::ByRef<::UnityEngine::Texture2D*> srcTexture);

  /// @brief Method FlipTraingleIndices, addr 0x3fbf7e8, size 0x6c, virtual false, abstract: false, final false
  static inline void FlipTraingleIndices(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method GetInputNodeType, addr 0x3fc074c, size 0x19c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW name);

  /// @brief Method LoadGLB, addr 0x3fbc390, size 0x63c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFScene LoadGLB(bool supportAnimation, bool loadMips);

  /// @brief Method LoadGLTF, addr 0x3fbcd68, size 0x3f4, virtual false, abstract: false, final false
  inline int32_t LoadGLTF(bool supportAnimation, bool loadMips);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::StringW fileName);

  /// @brief Method ProcessAnimations, addr 0x3fbdd08, size 0x518, virtual false, abstract: false, final false
  inline void ProcessAnimations();

  /// @brief Method ProcessMaterial, addr 0x3fbef60, size 0x388, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t matId);

  /// @brief Method ProcessMesh, addr 0x3fbe220, size 0x91c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshData ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips);

  /// @brief Method ProcessNode, addr 0x3fbd3c4, size 0x944, virtual false, abstract: false, final false
  inline void ProcessNode(::OVRSimpleJSON::JSONNode* node, int32_t nodeId, bool loadMips);

  /// @brief Method ProcessSkin, addr 0x3fbeb3c, size 0x41c, virtual false, abstract: false, final false
  inline void ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer);

  /// @brief Method ProcessTexture, addr 0x3fbf2e8, size 0x500, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTextureData ProcessTexture(int32_t textureId);

  /// @brief Method ReadChunk, addr 0x3fbcb98, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type);

  /// @brief Method ReadMeshAttributes, addr 0x3fbf854, size 0xbd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshAttributes ReadMeshAttributes(::OVRSimpleJSON::JSONNode* jsonAttributes, int32_t totalVertexCount, int32_t vertexOffset);

  /// @brief Method SetMipMapBias, addr 0x3fbd174, size 0x1c, virtual false, abstract: false, final false
  inline void SetMipMapBias(float_t loadedTexturesMipmapBiasing);

  /// @brief Method SetModelAlphaBlendShader, addr 0x3fbd164, size 0x8, virtual false, abstract: false, final false
  inline void SetModelAlphaBlendShader(::UnityEngine::Shader* shader);

  /// @brief Method SetModelShader, addr 0x3fbd15c, size 0x8, virtual false, abstract: false, final false
  inline void SetModelShader(::UnityEngine::Shader* shader);

  /// @brief Method SetTextureQualityFiltering, addr 0x3fbd16c, size 0x8, virtual false, abstract: false, final false
  inline void SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality);

  /// @brief Method TranscodeTexture, addr 0x3fc0698, size 0xb4, virtual false, abstract: false, final false
  inline void TranscodeTexture(::ByRef<::GlobalNamespace::OVRTextureData> textureData);

  /// @brief Method ValidateChunk, addr 0x3fbcc44, size 0x124, virtual false, abstract: false, final false
  inline bool ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ::ByRef<uint32_t> chunkLength);

  /// @brief Method ValidateGLB, addr 0x3fbc9cc, size 0x1cc, virtual false, abstract: false, final false
  inline bool ValidateGLB(::System::IO::Stream* glbStream);

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_AlphaBlendShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_AlphaBlendShader();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* const&
  __cordl_internal_get_m_AnimationLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*&
  __cordl_internal_get_m_AnimationLookup();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* const& __cordl_internal_get_m_InputAnimationNodes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& __cordl_internal_get_m_InputAnimationNodes();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_Nodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_Nodes();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr float_t const& __cordl_internal_get_m_TextureMipmapBias() const;

  constexpr float_t& __cordl_internal_get_m_TextureMipmapBias();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __cordl_internal_get_m_TextureQuality() const;

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __cordl_internal_get_m_TextureQuality();

  constexpr ::GlobalNamespace::OVRBinaryChunk const& __cordl_internal_get_m_binaryChunk() const;

  constexpr ::GlobalNamespace::OVRBinaryChunk& __cordl_internal_get_m_binaryChunk();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_m_glbStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_glbStream();

  constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get_m_jsonData() const;

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_jsonData();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* const& __cordl_internal_get_m_morphTargetHandlers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*& __cordl_internal_get_m_morphTargetHandlers();

  constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_textureUriHandler() const;

  constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_textureUriHandler();

  constexpr void __cordl_internal_set_m_AlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_AnimationLookup(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* value);

  constexpr void __cordl_internal_set_m_InputAnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value);

  constexpr void __cordl_internal_set_m_Nodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TextureMipmapBias(float_t value);

  constexpr void __cordl_internal_set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value);

  constexpr void __cordl_internal_set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value);

  constexpr void __cordl_internal_set_m_glbStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value);

  constexpr void __cordl_internal_set_m_morphTargetHandlers(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* value);

  constexpr void __cordl_internal_set_textureUriHandler(::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* value);

  /// @brief Method .ctor, addr 0x3fbc30c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x3fbc2d4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnitySpace();

  static inline ::UnityEngine::Vector4 getStaticF_GLTFToUnitySpace_Rotation();

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnityTangent();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* getStaticF_InputNodeNameMap();

  static inline void setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3 value);

  static inline void setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value);

  static inline void setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3 value);

  static inline void setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader(OVRGLTFLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader(OVRGLTFLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7887 };

  /// @brief Field m_jsonData, offset: 0x10, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ___m_jsonData;

  /// @brief Field m_glbStream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___m_glbStream;

  /// @brief Field m_binaryChunk, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::OVRBinaryChunk ___m_binaryChunk;

  /// @brief Field m_Nodes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___m_Nodes;

  /// @brief Field m_InputAnimationNodes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* ___m_InputAnimationNodes;

  /// @brief Field m_AnimationLookup, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* ___m_AnimationLookup;

  /// @brief Field m_morphTargetHandlers, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* ___m_morphTargetHandlers;

  /// @brief Field m_Shader, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_AlphaBlendShader, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_AlphaBlendShader;

  /// @brief Field m_TextureQuality, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::OVRTextureQualityFiltering ___m_TextureQuality;

  /// @brief Field m_TextureMipmapBias, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_TextureMipmapBias;

  /// @brief Field textureUriHandler, offset: 0x70, size: 0x8, def value: None
  ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* ___textureUriHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_jsonData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_glbStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_binaryChunk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_Nodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_InputAnimationNodes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_AnimationLookup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_morphTargetHandlers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_Shader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_AlphaBlendShader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_TextureQuality) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_TextureMipmapBias) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___textureUriHandler) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader*, "", "OVRGLTFLoader");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass30_0*, "", "OVRGLTFLoader/<>c__DisplayClass30_0");
