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
struct OVRGLTFInputNode;
}
namespace GlobalNamespace {
struct OVRGLTFScene;
}
namespace GlobalNamespace {
struct OVRMaterialData;
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
class __OVRGLTFLoader____c__DisplayClass27_0;
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
class __OVRGLTFLoader____c__DisplayClass27_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader);
MARK_REF_PTR_T(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0);
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7643))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7646))
// CS Name: ::OVRGLTFLoader::<>c__DisplayClass27_0*
class CORDL_TYPE __OVRGLTFLoader____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field matData, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get_matData, put = __cordl_internal_set_matData))::GlobalNamespace::OVRMaterialData matData;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFLoader*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr ::GlobalNamespace::OVRMaterialData& __cordl_internal_get_matData();

  constexpr ::GlobalNamespace::OVRMaterialData const& __cordl_internal_get_matData() const;

  constexpr void __cordl_internal_set_matData(::GlobalNamespace::OVRMaterialData value);

  static inline ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0* New_ctor();

  /// @brief Method .ctor, addr 0x2753b4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ProcessMesh>b__0, addr 0x2753b54, size 0x24, virtual false, abstract: false, final false
  inline void _ProcessMesh_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRGLTFLoader____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRGLTFLoader____c__DisplayClass27_0(__OVRGLTFLoader____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRGLTFLoader____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRGLTFLoader____c__DisplayClass27_0(__OVRGLTFLoader____c__DisplayClass27_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRGLTFLoader____c__DisplayClass27_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field matData, offset: 0x18, size: 0x28, def value: None
  ::GlobalNamespace::OVRMaterialData ___matData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0, ___matData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRGLTFLoader
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7640)), TypeDefinitionIndex(TypeDefinitionIndex(7641)),
// TypeDefinitionIndex(TypeDefinitionIndex(8990)), TypeDefinitionIndex(TypeDefinitionIndex(8993))] Self: TypeDefinitionIndex(TypeDefinitionIndex(7647)) CS Name: ::OVRGLTFLoader*
class CORDL_TYPE OVRGLTFLoader : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass27_0 = ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0;

  /// @brief Field m_jsonData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jsonData, put = __cordl_internal_set_m_jsonData))::OVRSimpleJSON::JSONNode* m_jsonData;

  /// @brief Field m_glbStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_glbStream, put = __cordl_internal_set_m_glbStream))::System::IO::Stream* m_glbStream;

  /// @brief Field m_binaryChunk, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_binaryChunk, put = __cordl_internal_set_m_binaryChunk))::GlobalNamespace::OVRBinaryChunk m_binaryChunk;

  /// @brief Field m_Nodes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_Nodes;

  /// @brief Field m_AnimationNodes, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AnimationNodes,
      put = __cordl_internal_set_m_AnimationNodes))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* m_AnimationNodes;

  /// @brief Field m_Shader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader))::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Field m_AlphaBlendShader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaBlendShader, put = __cordl_internal_set_m_AlphaBlendShader))::UnityW<::UnityEngine::Shader> m_AlphaBlendShader;

  /// @brief Field m_TextureQuality, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureQuality, put = __cordl_internal_set_m_TextureQuality))::GlobalNamespace::OVRTextureQualityFiltering m_TextureQuality;

  /// @brief Field m_TextureMipmapBias, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureMipmapBias, put = __cordl_internal_set_m_TextureMipmapBias)) float_t m_TextureMipmapBias;

  /// @brief Field GLTFToUnitySpace, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_GLTFToUnitySpace, put = setStaticF_GLTFToUnitySpace))::UnityEngine::Vector3 GLTFToUnitySpace;

  /// @brief Field GLTFToUnityTangent, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_GLTFToUnityTangent, put = setStaticF_GLTFToUnityTangent))::UnityEngine::Vector3 GLTFToUnityTangent;

  /// @brief Field GLTFToUnitySpace_Rotation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_GLTFToUnitySpace_Rotation, put = setStaticF_GLTFToUnitySpace_Rotation))::UnityEngine::Vector4 GLTFToUnitySpace_Rotation;

  /// @brief Field InputNodeNameMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputNodeNameMap,
                             put = setStaticF_InputNodeNameMap))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* InputNodeNameMap;

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_jsonData();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __cordl_internal_get_m_jsonData() const;

  constexpr void __cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value);

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_glbStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_m_glbStream() const;

  constexpr void __cordl_internal_set_m_glbStream(::System::IO::Stream* value);

  constexpr ::GlobalNamespace::OVRBinaryChunk& __cordl_internal_get_m_binaryChunk();

  constexpr ::GlobalNamespace::OVRBinaryChunk const& __cordl_internal_get_m_binaryChunk() const;

  constexpr void __cordl_internal_set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_Nodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_m_Nodes() const;

  constexpr void __cordl_internal_set_m_Nodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& __cordl_internal_get_m_AnimationNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*> const&
  __cordl_internal_get_m_AnimationNodes() const;

  constexpr void __cordl_internal_set_m_AnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_AlphaBlendShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_AlphaBlendShader() const;

  constexpr void __cordl_internal_set_m_AlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __cordl_internal_get_m_TextureQuality();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __cordl_internal_get_m_TextureQuality() const;

  constexpr void __cordl_internal_set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value);

  constexpr float_t& __cordl_internal_get_m_TextureMipmapBias();

  constexpr float_t const& __cordl_internal_get_m_TextureMipmapBias() const;

  constexpr void __cordl_internal_set_m_TextureMipmapBias(float_t value);

  static inline void setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnitySpace();

  static inline void setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnityTangent();

  static inline void setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_GLTFToUnitySpace_Rotation();

  static inline void setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* getStaticF_InputNodeNameMap();

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::StringW fileName);

  /// @brief Method .ctor, addr 0x274e888, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x274e8c0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method LoadGLB, addr 0x274e948, size 0x558, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFScene LoadGLB(bool supportAnimation, bool loadMips);

  /// @brief Method SetModelShader, addr 0x274f68c, size 0x8, virtual false, abstract: false, final false
  inline void SetModelShader(::UnityEngine::Shader* shader);

  /// @brief Method SetModelAlphaBlendShader, addr 0x274f694, size 0x8, virtual false, abstract: false, final false
  inline void SetModelAlphaBlendShader(::UnityEngine::Shader* shader);

  /// @brief Method SetTextureQualityFiltering, addr 0x274f69c, size 0x8, virtual false, abstract: false, final false
  inline void SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality);

  /// @brief Method SetMipMapBias, addr 0x274f6a4, size 0x1c, virtual false, abstract: false, final false
  inline void SetMipMapBias(float_t loadedTexturesMipmapBiasing);

  /// @brief Method DetectTextureQuality, addr 0x274f6c0, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(ByRef<::UnityEngine::Texture2D*> srcTexture);

  /// @brief Method ApplyTextureQuality, addr 0x274f780, size 0x174, virtual false, abstract: false, final false
  static inline void ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ByRef<::UnityEngine::Texture2D*> destTexture);

  /// @brief Method ValidateGLB, addr 0x274eea0, size 0x208, virtual false, abstract: false, final false
  inline bool ValidateGLB(::System::IO::Stream* glbStream);

  /// @brief Method ReadChunk, addr 0x274f0a8, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type);

  /// @brief Method ValidateChunk, addr 0x274f154, size 0x148, virtual false, abstract: false, final false
  inline bool ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ByRef<uint32_t> chunkLength);

  /// @brief Method LoadGLTF, addr 0x274f29c, size 0x3f0, virtual false, abstract: false, final false
  inline int32_t LoadGLTF(bool supportAnimation, bool loadMips);

  /// @brief Method ProcessNode, addr 0x274f8f4, size 0x8ac, virtual false, abstract: false, final false
  inline void ProcessNode(::OVRSimpleJSON::JSONNode* node, int32_t nodeId, bool loadMips);

  /// @brief Method ProcessMesh, addr 0x2750640, size 0x143c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshData ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips);

  /// @brief Method FlipTraingleIndices, addr 0x27524c0, size 0x6c, virtual false, abstract: false, final false
  static inline void FlipTraingleIndices(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method ProcessSkin, addr 0x2751a7c, size 0x410, virtual false, abstract: false, final false
  inline void ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer);

  /// @brief Method ProcessMaterial, addr 0x2751e8c, size 0x264, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t matId);

  /// @brief Method ProcessTexture, addr 0x27520f0, size 0x3d0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTextureData ProcessTexture(int32_t textureId);

  /// @brief Method TranscodeTexture, addr 0x27526bc, size 0x90, virtual false, abstract: false, final false
  inline void TranscodeTexture(ByRef<::GlobalNamespace::OVRTextureData> textureData);

  /// @brief Method CreateUnityMaterial, addr 0x275252c, size 0x190, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips);

  /// @brief Method GetInputNodeType, addr 0x275274c, size 0x1c4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW name);

  /// @brief Method ProcessAnimations, addr 0x27501a0, size 0x4a0, virtual false, abstract: false, final false
  inline void ProcessAnimations();

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader(OVRGLTFLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader(OVRGLTFLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFLoader();

public:
  /// @brief Field m_jsonData, offset: 0x10, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ___m_jsonData;

  /// @brief Field m_glbStream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___m_glbStream;

  /// @brief Field m_binaryChunk, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::OVRBinaryChunk ___m_binaryChunk;

  /// @brief Field m_Nodes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___m_Nodes;

  /// @brief Field m_AnimationNodes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* ___m_AnimationNodes;

  /// @brief Field m_Shader, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_AlphaBlendShader, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_AlphaBlendShader;

  /// @brief Field m_TextureQuality, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::OVRTextureQualityFiltering ___m_TextureQuality;

  /// @brief Field m_TextureMipmapBias, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_TextureMipmapBias;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_jsonData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_glbStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_binaryChunk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_Nodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_AnimationNodes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_Shader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_AlphaBlendShader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_TextureQuality) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_TextureMipmapBias) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader*, "", "OVRGLTFLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0*, "", "OVRGLTFLoader/<>c__DisplayClass27_0");
