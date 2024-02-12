#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MaterialFactory)
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct __HEU_MaterialData__Source;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MaterialFactory;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MaterialFactory);
// Type: HoudiniEngineUnity::HEU_MaterialFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9571))
// CS Name: ::HoudiniEngineUnity::HEU_MaterialFactory*
class CORDL_TYPE HEU_MaterialFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _defaultStandardMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultStandardMaterial, put = setStaticF__defaultStandardMaterial))::UnityW<::UnityEngine::Material> _defaultStandardMaterial;

  static inline void setStaticF__defaultStandardMaterial(::UnityW<::UnityEngine::Material> value);

  static inline ::UnityW<::UnityEngine::Material> getStaticF__defaultStandardMaterial();

  /// @brief Method FindShader, addr 0x2234fb8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindShader(::StringW shaderName);

  /// @brief Method FindPluginShader, addr 0x2233e04, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindPluginShader(::StringW shaderName);

  /// @brief Method GetNewMaterialWithShader, addr 0x2235004, size 0x228, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetNewMaterialWithShader(::StringW assetCacheFolderPath, ::StringW shaderName, ::StringW materialName, bool bWriteToFile);

  /// @brief Method CreateNewHoudiniStandardMaterial, addr 0x223522c, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateNewHoudiniStandardMaterial(::StringW assetCacheFolderPath, ::StringW materialName, bool bWriteToFile);

  /// @brief Method WriteMaterialToAssetCache, addr 0x2235264, size 0xf4, virtual false, abstract: false, final false
  static inline void WriteMaterialToAssetCache(::UnityEngine::Material* material, ::StringW assetCacheFolderPath, ::StringW materialName, bool bOverwriteExisting);

  /// @brief Method DoesMaterialExistInAssetCache, addr 0x2235358, size 0x24, virtual false, abstract: false, final false
  static inline bool DoesMaterialExistInAssetCache(::UnityEngine::Material* material);

  /// @brief Method DestroyNonAssetMaterial, addr 0x223537c, size 0xa0, virtual false, abstract: false, final false
  static inline void DestroyNonAssetMaterial(::UnityEngine::Material* material, bool bRegisterUndo);

  /// @brief Method DeleteAssetMaterial, addr 0x223541c, size 0x8, virtual false, abstract: false, final false
  static inline void DeleteAssetMaterial(::UnityEngine::Material* material);

  /// @brief Method RenderAndExtractImageToTexture, addr 0x2234674, size 0x470, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> RenderAndExtractImageToTexture(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                  int32_t textureParmID, ::StringW textureName, ::StringW assetCacheFolderPath, bool isNormalMap, bool invertTexture);

  /// @brief Method ExtractHoudiniImageToTexturePNGJPEG, addr 0x2235710, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ExtractHoudiniImageToTexturePNGJPEG(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                       ::StringW imagePlanes);

  /// @brief Method ExtractHoudiniImageToTextureRaw, addr 0x2235424, size 0x2ec, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ExtractHoudiniImageToTextureRaw(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                   ::StringW imagePlanes);

  /// @brief Method ExtractHoudiniImageToTextureFile, addr 0x2235844, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ExtractHoudiniImageToTextureFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                    ::StringW imagePlanes, ::StringW assetCacheFolderPath);

  /// @brief Method LoadUnityMaterial, addr 0x22359e4, size 0x298, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> LoadUnityMaterial(::StringW materialPath);

  /// @brief Method LoadSubstanceMaterialWithName, addr 0x2235c7c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> LoadSubstanceMaterialWithName(::StringW materialPath, ::StringW substanceName);

  /// @brief Method LoadSubstanceMaterialWithIndex, addr 0x2235e58, size 0x270, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> LoadSubstanceMaterialWithIndex(::StringW materialPath, int32_t substanceMaterialIndex);

  /// @brief Method GetUnitySubstanceMaterialKey, addr 0x22360c8, size 0x118, virtual false, abstract: false, final false
  static inline int32_t GetUnitySubstanceMaterialKey(::StringW unityMaterialPath, ::StringW substanceName, int32_t substanceIndex);

  /// @brief Method MaterialNameToKey, addr 0x22361e0, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t MaterialNameToKey(::StringW materialName);

  /// @brief Method EnableGPUInstancing, addr 0x22361fc, size 0x18, virtual false, abstract: false, final false
  static inline void EnableGPUInstancing(::UnityEngine::Material* material);

  /// @brief Method MaterialHasGPUInstancingEnabled, addr 0x2236214, size 0x14, virtual false, abstract: false, final false
  static inline bool MaterialHasGPUInstancingEnabled(::UnityEngine::Material* material);

  /// @brief Method CopyMaterial, addr 0x2236228, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CopyMaterial(::UnityEngine::Material* material);

  /// @brief Method GetDefaultStandardMaterial, addr 0x223628c, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultStandardMaterial();

  /// @brief Method LoadTexture, addr 0x2236358, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> LoadTexture(::StringW path);

  /// @brief Method WhiteTexture, addr 0x2236490, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> WhiteTexture();

  /// @brief Method CreateUnitySubstanceMaterialData, addr 0x2236498, size 0x368, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>
  CreateUnitySubstanceMaterialData(int32_t materialKey, ::StringW materialPath, ::StringW substanceName, int32_t substanceIndex,
                                   ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache, ::StringW assetCacheFolderPath);

  /// @brief Method CreateMaterialInCache, addr 0x2236800, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> CreateMaterialInCache(int32_t materialKey, ::StringW materialName, ::HoudiniEngineUnity::__HEU_MaterialData__Source sourceType,
                                                                                       bool bWriteToFile,
                                                                                       ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache,
                                                                                       ::StringW assetCacheFolderPath);

  /// @brief Method GetOrCreateDefaultMaterialInCache, addr 0x2236968, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>
  GetOrCreateDefaultMaterialInCache(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, bool bWriteToFile,
                                    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache, ::StringW assetCacheFolderPath);

  /// @brief Method GetMaterialDataFromCache, addr 0x2236b10, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> GetMaterialDataFromCache(int32_t materialKey,
                                                                                          ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache);

  /// @brief Method GenerateDefaultMaterialName, addr 0x2236a54, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GenerateDefaultMaterialName(int32_t geoID, int32_t partID);

  /// @brief Method CreateHoudiniMaterialData, addr 0x2236c74, size 0x1e4, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> CreateHoudiniMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t materialID, int32_t geoID,
                                                                                           int32_t partID,
                                                                                           ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache,
                                                                                           ::StringW assetCacheFolderPath);

  /// @brief Method GetMaterialDataMapFromCache, addr 0x2237070, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*
  GetMaterialDataMapFromCache(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_MaterialFactory(HEU_MaterialFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_MaterialFactory(HEU_MaterialFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_MaterialFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MaterialFactory, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MaterialFactory);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MaterialFactory*, "HoudiniEngineUnity", "HEU_MaterialFactory");
