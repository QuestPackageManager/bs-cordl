#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace GlobalNamespace {
class __OVRGLTFLoader____c__DisplayClass30_0;
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
class __OVRGLTFLoader____c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader);
MARK_REF_PTR_T(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0);
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRGLTFLoader::<>c__DisplayClass30_0*
class CORDL_TYPE __OVRGLTFLoader____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field matData, offset 0x18, size 0x40
  __declspec(property(get = __cordl_internal_get_matData, put = __cordl_internal_set_matData))::GlobalNamespace::OVRMaterialData matData;

  static inline ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0* New_ctor();

  /// @brief Method <ProcessMesh>b__0, addr 0x287baa4, size 0x1c, virtual false, abstract: false, final false
  inline void _ProcessMesh_b__0();

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFLoader*> const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRMaterialData const& __cordl_internal_get_matData() const;

  constexpr ::GlobalNamespace::OVRMaterialData& __cordl_internal_get_matData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set_matData(::GlobalNamespace::OVRMaterialData value);

  /// @brief Method .ctor, addr 0x2879f1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRGLTFLoader____c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRGLTFLoader____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRGLTFLoader____c__DisplayClass30_0(__OVRGLTFLoader____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRGLTFLoader____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRGLTFLoader____c__DisplayClass30_0(__OVRGLTFLoader____c__DisplayClass30_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field matData, offset: 0x18, size: 0x40, def value: None
  ::GlobalNamespace::OVRMaterialData ___matData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0, ___matData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRGLTFLoader
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRGLTFLoader*
class CORDL_TYPE OVRGLTFLoader : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass30_0 = ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0;

  /// @brief Field GLTFToUnitySpace, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_GLTFToUnitySpace, put = setStaticF_GLTFToUnitySpace))::UnityEngine::Vector3 GLTFToUnitySpace;

  /// @brief Field GLTFToUnitySpace_Rotation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_GLTFToUnitySpace_Rotation, put = setStaticF_GLTFToUnitySpace_Rotation))::UnityEngine::Vector4 GLTFToUnitySpace_Rotation;

  /// @brief Field GLTFToUnityTangent, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_GLTFToUnityTangent, put = setStaticF_GLTFToUnityTangent))::UnityEngine::Vector3 GLTFToUnityTangent;

  /// @brief Field InputNodeNameMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputNodeNameMap,
                             put = setStaticF_InputNodeNameMap))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* InputNodeNameMap;

  /// @brief Field m_AlphaBlendShader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaBlendShader, put = __cordl_internal_set_m_AlphaBlendShader))::UnityW<::UnityEngine::Shader> m_AlphaBlendShader;

  /// @brief Field m_AnimationLookup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationLookup, put = __cordl_internal_set_m_AnimationLookup))::System::Collections::Generic::Dictionary_2<
      int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* m_AnimationLookup;

  /// @brief Field m_InputAnimationNodes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputAnimationNodes,
                      put = __cordl_internal_set_m_InputAnimationNodes))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,
                                                                                                                     ::GlobalNamespace::OVRGLTFAnimatinonNode*>* m_InputAnimationNodes;

  /// @brief Field m_Nodes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_Nodes;

  /// @brief Field m_Shader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader))::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Field m_TextureMipmapBias, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureMipmapBias, put = __cordl_internal_set_m_TextureMipmapBias)) float_t m_TextureMipmapBias;

  /// @brief Field m_TextureQuality, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureQuality, put = __cordl_internal_set_m_TextureQuality))::GlobalNamespace::OVRTextureQualityFiltering m_TextureQuality;

  /// @brief Field m_binaryChunk, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_binaryChunk, put = __cordl_internal_set_m_binaryChunk))::GlobalNamespace::OVRBinaryChunk m_binaryChunk;

  /// @brief Field m_glbStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_glbStream, put = __cordl_internal_set_m_glbStream))::System::IO::Stream* m_glbStream;

  /// @brief Field m_jsonData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jsonData, put = __cordl_internal_set_m_jsonData))::OVRSimpleJSON::JSONNode* m_jsonData;

  /// @brief Field m_morphTargetHandlers, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_morphTargetHandlers,
      put = __cordl_internal_set_m_morphTargetHandlers))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* m_morphTargetHandlers;

  /// @brief Field textureUriHandler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_textureUriHandler,
                      put = __cordl_internal_set_textureUriHandler))::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* textureUriHandler;

  /// @brief Method ApplyTextureQuality, addr 0x287822c, size 0x174, virtual false, abstract: false, final false
  static inline void ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ByRef<::UnityEngine::Texture2D*> destTexture);

  /// @brief Method CreateUnityMaterial, addr 0x287b37c, size 0x274, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips);

  /// @brief Method DetectTextureQuality, addr 0x287816c, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(ByRef<::UnityEngine::Texture2D*> srcTexture);

  /// @brief Method FlipTraingleIndices, addr 0x287a784, size 0x6c, virtual false, abstract: false, final false
  static inline void FlipTraingleIndices(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method GetInputNodeType, addr 0x287b6a4, size 0x1c4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW name);

  /// @brief Method LoadGLB, addr 0x2877314, size 0x638, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFScene LoadGLB(bool supportAnimation, bool loadMips);

  /// @brief Method LoadGLTF, addr 0x2877d48, size 0x3f0, virtual false, abstract: false, final false
  inline int32_t LoadGLTF(bool supportAnimation, bool loadMips);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::StringW fileName);

  /// @brief Method ProcessAnimations, addr 0x2878cb8, size 0x518, virtual false, abstract: false, final false
  inline void ProcessAnimations();

  /// @brief Method ProcessMaterial, addr 0x2879f24, size 0x388, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t matId);

  /// @brief Method ProcessMesh, addr 0x28791d0, size 0x938, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshData ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips);

  /// @brief Method ProcessNode, addr 0x28783a0, size 0x918, virtual false, abstract: false, final false
  inline void ProcessNode(::OVRSimpleJSON::JSONNode* node, int32_t nodeId, bool loadMips);

  /// @brief Method ProcessSkin, addr 0x2879b08, size 0x414, virtual false, abstract: false, final false
  inline void ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer);

  /// @brief Method ProcessTexture, addr 0x287a2ac, size 0x4d8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTextureData ProcessTexture(int32_t textureId);

  /// @brief Method ReadChunk, addr 0x2877b54, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type);

  /// @brief Method ReadMeshAttributes, addr 0x287a7f0, size 0xb8c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshAttributes ReadMeshAttributes(::OVRSimpleJSON::JSONNode* jsonAttributes, int32_t totalVertexCount, int32_t vertexOffset);

  /// @brief Method SetMipMapBias, addr 0x2878150, size 0x1c, virtual false, abstract: false, final false
  inline void SetMipMapBias(float_t loadedTexturesMipmapBiasing);

  /// @brief Method SetModelAlphaBlendShader, addr 0x2878140, size 0x8, virtual false, abstract: false, final false
  inline void SetModelAlphaBlendShader(::UnityEngine::Shader* shader);

  /// @brief Method SetModelShader, addr 0x2878138, size 0x8, virtual false, abstract: false, final false
  inline void SetModelShader(::UnityEngine::Shader* shader);

  /// @brief Method SetTextureQualityFiltering, addr 0x2878148, size 0x8, virtual false, abstract: false, final false
  inline void SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality);

  /// @brief Method TranscodeTexture, addr 0x287b5f0, size 0xb4, virtual false, abstract: false, final false
  inline void TranscodeTexture(ByRef<::GlobalNamespace::OVRTextureData> textureData);

  /// @brief Method ValidateChunk, addr 0x2877c00, size 0x148, virtual false, abstract: false, final false
  inline bool ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ByRef<uint32_t> chunkLength);

  /// @brief Method ValidateGLB, addr 0x287794c, size 0x208, virtual false, abstract: false, final false
  inline bool ValidateGLB(::System::IO::Stream* glbStream);

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_AlphaBlendShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_AlphaBlendShader();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*&
  __cordl_internal_get_m_AnimationLookup();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*> const&
  __cordl_internal_get_m_AnimationLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& __cordl_internal_get_m_InputAnimationNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*> const&
  __cordl_internal_get_m_InputAnimationNodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_Nodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_m_Nodes() const;

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr float_t const& __cordl_internal_get_m_TextureMipmapBias() const;

  constexpr float_t& __cordl_internal_get_m_TextureMipmapBias();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __cordl_internal_get_m_TextureQuality() const;

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __cordl_internal_get_m_TextureQuality();

  constexpr ::GlobalNamespace::OVRBinaryChunk const& __cordl_internal_get_m_binaryChunk() const;

  constexpr ::GlobalNamespace::OVRBinaryChunk& __cordl_internal_get_m_binaryChunk();

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_glbStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_m_glbStream() const;

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_jsonData();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __cordl_internal_get_m_jsonData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*& __cordl_internal_get_m_morphTargetHandlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*> const&
  __cordl_internal_get_m_morphTargetHandlers() const;

  constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_textureUriHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>*> const&
  __cordl_internal_get_textureUriHandler() const;

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

  /// @brief Method .ctor, addr 0x287728c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x2877254, size 0x38, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader, 0x78>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader*, "", "OVRGLTFLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0*, "", "OVRGLTFLoader/<>c__DisplayClass30_0");
