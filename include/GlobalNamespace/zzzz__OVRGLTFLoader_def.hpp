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
namespace OVRSimpleJSON {
class JSONNode;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace GlobalNamespace {
class __OVRGLTFLoader____c__DisplayClass27_0;
}
namespace GlobalNamespace {
struct OVRGLTFScene;
}
namespace System::IO {
class Stream;
}
namespace GlobalNamespace {
struct OVRMaterialData;
}
namespace GlobalNamespace {
struct OVRChunkType;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
struct OVRMeshData;
}
namespace UnityEngine {
class GameObject;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(8468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8471))
// CS Name: ::OVRGLTFLoader::<>c__DisplayClass27_0*
class CORDL_TYPE __OVRGLTFLoader____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field matData, offset 0x18, size 0x28
  __declspec(property(get = __get_matData, put = __set_matData))::GlobalNamespace::OVRMaterialData matData;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFLoader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr ::GlobalNamespace::OVRMaterialData& __get_matData();

  constexpr ::GlobalNamespace::OVRMaterialData const& __get_matData() const;

  constexpr void __set_matData(::GlobalNamespace::OVRMaterialData value);

  static inline ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0* New_ctor();

  /// @brief Method .ctor addr 0x25ce2c0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ProcessMesh>b__0 addr 0x25ce2c8 size 0x24 virtual false final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8465)), TypeDefinitionIndex(TypeDefinitionIndex(10173)), TypeDefinitionIndex(TypeDefinitionIndex(10176)),
// TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(8466))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8472)) CS Name: ::OVRGLTFLoader*
class CORDL_TYPE OVRGLTFLoader : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass27_0 = ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass27_0;

  /// @brief Field m_jsonData, offset 0x10, size 0x8
  __declspec(property(get = __get_m_jsonData, put = __set_m_jsonData))::OVRSimpleJSON::JSONNode* m_jsonData;

  /// @brief Field m_glbStream, offset 0x18, size 0x8
  __declspec(property(get = __get_m_glbStream, put = __set_m_glbStream))::System::IO::Stream* m_glbStream;

  /// @brief Field m_binaryChunk, offset 0x20, size 0x18
  __declspec(property(get = __get_m_binaryChunk, put = __set_m_binaryChunk))::GlobalNamespace::OVRBinaryChunk m_binaryChunk;

  /// @brief Field m_Nodes, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Nodes, put = __set_m_Nodes))::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_Nodes;

  /// @brief Field m_AnimationNodes, offset 0x40, size 0x8
  __declspec(property(get = __get_m_AnimationNodes,
                      put = __set_m_AnimationNodes))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* m_AnimationNodes;

  /// @brief Field m_Shader, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Shader, put = __set_m_Shader))::UnityEngine::Shader* m_Shader;

  /// @brief Field m_AlphaBlendShader, offset 0x50, size 0x8
  __declspec(property(get = __get_m_AlphaBlendShader, put = __set_m_AlphaBlendShader))::UnityEngine::Shader* m_AlphaBlendShader;

  /// @brief Field m_TextureQuality, offset 0x58, size 0x4
  __declspec(property(get = __get_m_TextureQuality, put = __set_m_TextureQuality))::GlobalNamespace::OVRTextureQualityFiltering m_TextureQuality;

  /// @brief Field m_TextureMipmapBias, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_TextureMipmapBias, put = __set_m_TextureMipmapBias)) float_t m_TextureMipmapBias;

  /// @brief Field GLTFToUnitySpace, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_GLTFToUnitySpace, put = setStaticF_GLTFToUnitySpace))::UnityEngine::Vector3 GLTFToUnitySpace;

  /// @brief Field GLTFToUnityTangent, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_GLTFToUnityTangent, put = setStaticF_GLTFToUnityTangent))::UnityEngine::Vector3 GLTFToUnityTangent;

  /// @brief Field GLTFToUnitySpace_Rotation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_GLTFToUnitySpace_Rotation, put = setStaticF_GLTFToUnitySpace_Rotation))::UnityEngine::Vector4 GLTFToUnitySpace_Rotation;

  /// @brief Field InputNodeNameMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputNodeNameMap,
                             put = setStaticF_InputNodeNameMap))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* InputNodeNameMap;

  constexpr ::OVRSimpleJSON::JSONNode*& __get_m_jsonData();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __get_m_jsonData() const;

  constexpr void __set_m_jsonData(::OVRSimpleJSON::JSONNode* value);

  constexpr ::System::IO::Stream*& __get_m_glbStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_m_glbStream() const;

  constexpr void __set_m_glbStream(::System::IO::Stream* value);

  constexpr ::GlobalNamespace::OVRBinaryChunk& __get_m_binaryChunk();

  constexpr ::GlobalNamespace::OVRBinaryChunk const& __get_m_binaryChunk() const;

  constexpr void __set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& __get_m_Nodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& __get_m_Nodes() const;

  constexpr void __set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& __get_m_AnimationNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*> const&
  __get_m_AnimationNodes() const;

  constexpr void __set_m_AnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value);

  constexpr ::UnityEngine::Shader*& __get_m_Shader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_m_Shader() const;

  constexpr void __set_m_Shader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get_m_AlphaBlendShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_m_AlphaBlendShader() const;

  constexpr void __set_m_AlphaBlendShader(::UnityEngine::Shader* value);

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __get_m_TextureQuality();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __get_m_TextureQuality() const;

  constexpr void __set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value);

  constexpr float_t& __get_m_TextureMipmapBias();

  constexpr float_t const& __get_m_TextureMipmapBias() const;

  constexpr void __set_m_TextureMipmapBias(float_t value);

  static inline void setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnitySpace();

  static inline void setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnityTangent();

  static inline void setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_GLTFToUnitySpace_Rotation();

  static inline void setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* getStaticF_InputNodeNameMap();

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::StringW fileName);

  /// @brief Method .ctor addr 0x25c9000 size 0x38 virtual false final false
  inline void _ctor(::StringW fileName);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x25c9038 size 0x88 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method LoadGLB addr 0x25c90c0 size 0x554 virtual false final false
  inline ::GlobalNamespace::OVRGLTFScene LoadGLB(bool supportAnimation, bool loadMips);

  /// @brief Method SetModelShader addr 0x25c9e00 size 0x8 virtual false final false
  inline void SetModelShader(::UnityEngine::Shader* shader);

  /// @brief Method SetModelAlphaBlendShader addr 0x25c9e08 size 0x8 virtual false final false
  inline void SetModelAlphaBlendShader(::UnityEngine::Shader* shader);

  /// @brief Method SetTextureQualityFiltering addr 0x25c9e10 size 0x8 virtual false final false
  inline void SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality);

  /// @brief Method SetMipMapBias addr 0x25c9e18 size 0x1c virtual false final false
  inline void SetMipMapBias(float_t loadedTexturesMipmapBiasing);

  /// @brief Method DetectTextureQuality addr 0x25c9e34 size 0xc0 virtual false final false
  static inline ::GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(ByRef<::UnityEngine::Texture2D*> srcTexture);

  /// @brief Method ApplyTextureQuality addr 0x25c9ef4 size 0x174 virtual false final false
  static inline void ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ByRef<::UnityEngine::Texture2D*> destTexture);

  /// @brief Method ValidateGLB addr 0x25c9614 size 0x208 virtual false final false
  inline bool ValidateGLB(::System::IO::Stream* glbStream);

  /// @brief Method ReadChunk addr 0x25c981c size 0xac virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type);

  /// @brief Method ValidateChunk addr 0x25c98c8 size 0x148 virtual false final false
  inline bool ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ByRef<uint32_t> chunkLength);

  /// @brief Method LoadGLTF addr 0x25c9a10 size 0x3f0 virtual false final false
  inline int32_t LoadGLTF(bool supportAnimation, bool loadMips);

  /// @brief Method ProcessNode addr 0x25ca068 size 0x8ac virtual false final false
  inline void ProcessNode(::OVRSimpleJSON::JSONNode* node, int32_t nodeId, bool loadMips);

  /// @brief Method ProcessMesh addr 0x25cadb4 size 0x143c virtual false final false
  inline ::GlobalNamespace::OVRMeshData ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips);

  /// @brief Method FlipTraingleIndices addr 0x25ccc34 size 0x6c virtual false final false
  static inline void FlipTraingleIndices(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method ProcessSkin addr 0x25cc1f0 size 0x410 virtual false final false
  inline void ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer);

  /// @brief Method ProcessMaterial addr 0x25cc600 size 0x264 virtual false final false
  inline ::GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t matId);

  /// @brief Method ProcessTexture addr 0x25cc864 size 0x3d0 virtual false final false
  inline ::GlobalNamespace::OVRTextureData ProcessTexture(int32_t textureId);

  /// @brief Method TranscodeTexture addr 0x25cce30 size 0x90 virtual false final false
  inline void TranscodeTexture(ByRef<::GlobalNamespace::OVRTextureData> textureData);

  /// @brief Method CreateUnityMaterial addr 0x25ccca0 size 0x190 virtual false final false
  inline ::UnityEngine::Material* CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips);

  /// @brief Method GetInputNodeType addr 0x25ccec0 size 0x1c4 virtual false final false
  inline ::GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW name);

  /// @brief Method ProcessAnimations addr 0x25ca914 size 0x4a0 virtual false final false
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
  ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ___m_Nodes;

  /// @brief Field m_AnimationNodes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* ___m_AnimationNodes;

  /// @brief Field m_Shader, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Shader* ___m_Shader;

  /// @brief Field m_AlphaBlendShader, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Shader* ___m_AlphaBlendShader;

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
