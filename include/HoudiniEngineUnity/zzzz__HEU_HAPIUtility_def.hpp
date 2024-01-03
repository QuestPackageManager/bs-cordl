#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_HAPIUtility)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct __HEU_HoudiniAsset__HEU_AssetType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HAPIUtility);
// Type: HoudiniEngineUnity::HEU_HAPIUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9672))
// CS Name: ::HoudiniEngineUnity::HEU_HAPIUtility*
class CORDL_TYPE HEU_HAPIUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetHoudiniEngineInstallationInfo, addr 0x2185864, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniEngineInstallationInfo();

  /// @brief Method GetEnvironmentPath, addr 0x21858a4, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentPath();

  /// @brief Method GetRealPathFromHFSPath, addr 0x21858ec, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW GetRealPathFromHFSPath(::StringW inPath);

  /// @brief Method DoesMappedPathExist, addr 0x2185aa0, size 0x9c, virtual false, abstract: false, final false
  static inline bool DoesMappedPathExist(::StringW inPath);

  /// @brief Method IsHoudiniAssetFile, addr 0x2185df8, size 0x144, virtual false, abstract: false, final false
  static inline bool IsHoudiniAssetFile(::StringW filePath);

  /// @brief Method FindHoudiniAssetFileInPathWithExt, addr 0x2185f3c, size 0x284, virtual false, abstract: false, final false
  static inline ::StringW FindHoudiniAssetFileInPathWithExt(::StringW filePath);

  /// @brief Method Log, addr 0x21861c8, size 0x8, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogWarning, addr 0x21861d0, size 0x8, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

  /// @brief Method LogError, addr 0x21861d8, size 0x8, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LocateValidFilePath, addr 0x21861e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW LocateValidFilePath(::UnityEngine::Object* inObject);

  /// @brief Method LocateValidFilePath, addr 0x218624c, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW LocateValidFilePath(::StringW assetName, ::StringW inFilePath);

  /// @brief Method InstantiateHDA, addr 0x2186254, size 0x260, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* InstantiateHDA(::StringW filePath, ::UnityEngine::Vector3 initialPosition, ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync,
                                                          bool bLoadFromMemory, bool bAlwaysOverwriteOnLoad, ::UnityEngine::GameObject* rootGO);

  /// @brief Method LoadHDAFile, addr 0x21865a4, size 0x220, virtual false, abstract: false, final false
  static inline bool LoadHDAFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetPath, ByRef<int32_t> assetLibraryID, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> assetNames);

  /// @brief Method CreateAndCookAssetNode, addr 0x21867c4, size 0x1b8, virtual false, abstract: false, final false
  static inline bool CreateAndCookAssetNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID);

  /// @brief Method CreateAndCookCurveAsset, addr 0x2186ba8, size 0xec, virtual false, abstract: false, final false
  static inline bool CreateAndCookCurveAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID);

  /// @brief Method CreateAndCookInputAsset, addr 0x2186c94, size 0x1d4, virtual false, abstract: false, final false
  static inline bool CreateAndCookInputAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID);

  /// @brief Method CookNodeInHoudini, addr 0x2186b50, size 0x58, virtual false, abstract: false, final false
  static inline bool CookNodeInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, bool bCookTemplatedGeos, ::StringW assetName);

  /// @brief Method CookNodeInHoudiniWithOptions, addr 0x2186ec0, size 0x7c, virtual false, abstract: false, final false
  static inline bool CookNodeInHoudiniWithOptions(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_CookOptions options, ::StringW assetName);

  /// @brief Method GetDefaultCookOptions, addr 0x2186f3c, size 0x44, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_CookOptions GetDefaultCookOptions(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ProcessHoudiniCookStatus, addr 0x218697c, size 0x1d4, virtual false, abstract: false, final false
  static inline bool ProcessHoudiniCookStatus(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName);

  /// @brief Method CreateNewAsset, addr 0x2186fe0, size 0x3b0, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* CreateNewAsset(::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType assetType, ::StringW rootName, ::UnityEngine::Transform* parentTransform,
                                                          ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync, ::UnityEngine::GameObject* rootGO);

  /// @brief Method CreateNewCurveAsset, addr 0x2187390, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* CreateNewCurveAsset(::StringW name, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync,
                                                               ::UnityEngine::GameObject* rootGO);

  /// @brief Method CreateNewInputAsset, addr 0x21873b4, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* CreateNewInputAsset(::StringW name, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync,
                                                               ::UnityEngine::GameObject* rootGO);

  /// @brief Method LoadGeoWithNewGeoSync, addr 0x21873d8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* LoadGeoWithNewGeoSync(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DestroyChildren, addr 0x21873e0, size 0x47c, virtual false, abstract: false, final false
  static inline void DestroyChildren(::UnityEngine::Transform* inTransform);

  /// @brief Method DestroyGameObject, addr 0x218785c, size 0x10, virtual false, abstract: false, final false
  static inline void DestroyGameObject(::UnityEngine::GameObject* gameObect, bool bRegisterUndo);

  /// @brief Method DestroyChildrenWithComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DestroyChildrenWithComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method IsNodeValidInHoudini, addr 0x218786c, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsNodeValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID);

  /// @brief Method GetAssetInScene, addr 0x218790c, size 0x104, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* GetAssetInScene(int32_t assetID);

  /// @brief Method ApplyWorldTransfromFromHoudiniToUnity, addr 0x2187a10, size 0x1e8, virtual false, abstract: false, final false
  static inline void ApplyWorldTransfromFromHoudiniToUnity(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform* unityTransform);

  /// @brief Method ApplyLocalTransfromFromHoudiniToUnity, addr 0x2187bf8, size 0x114, virtual false, abstract: false, final false
  static inline void ApplyLocalTransfromFromHoudiniToUnity(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform* unityTransform);

  /// @brief Method ApplyLocalTransfromFromHoudiniToUnityForInstance, addr 0x2187d0c, size 0x1c8, virtual false, abstract: false, final false
  static inline void ApplyLocalTransfromFromHoudiniToUnityForInstance(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform* unityTransform);

  /// @brief Method ApplyMatrixToLocalTransform, addr 0x2187ed4, size 0x60, virtual false, abstract: false, final false
  static inline void ApplyMatrixToLocalTransform(ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Transform* transform);

  /// @brief Method GetMatrixFromHAPITransform, addr 0x2188304, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetMatrixFromHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, bool bConvertToUnity);

  /// @brief Method GetQuaternion, addr 0x2187f40, size 0x360, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetQuaternion(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method GetPosition, addr 0x2187f34, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetPosition(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method SetMatrixPosition, addr 0x2188480, size 0x18, virtual false, abstract: false, final false
  static inline void SetMatrixPosition(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Vector3> position);

  /// @brief Method GetScale, addr 0x21882a0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetScale(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method GetHAPITransformFromMatrix, addr 0x2188498, size 0x178, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransformFromMatrix(ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method GetHAPITransform, addr 0x21886b4, size 0x124, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransform(ByRef<::UnityEngine::Vector3> p, ByRef<::UnityEngine::Vector3> r, ByRef<::UnityEngine::Vector3> s);

  /// @brief Method GetHAPITransformQuatFromMatrix, addr 0x21887d8, size 0x1b4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_Transform GetHAPITransformQuatFromMatrix(ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method GetMatrix4x4, addr 0x2188a38, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetMatrix4x4(ByRef<::UnityEngine::Vector3> p, ByRef<::UnityEngine::Vector3> r, ByRef<::UnityEngine::Vector3> s);

  /// @brief Method IsSameTransform, addr 0x2188afc, size 0x64, virtual false, abstract: false, final false
  static inline bool IsSameTransform(ByRef<::UnityEngine::Matrix4x4> transformMatrix, ByRef<::UnityEngine::Vector3> p, ByRef<::UnityEngine::Vector3> r, ByRef<::UnityEngine::Vector3> s);

  /// @brief Method IsEqualTol, addr 0x2188b60, size 0x10, virtual false, abstract: false, final false
  static inline bool IsEqualTol(float_t a, float_t b, float_t t);

  /// @brief Method IsTransformEqual, addr 0x2188b70, size 0x1a0, virtual false, abstract: false, final false
  static inline bool IsTransformEqual(ByRef<::HoudiniEngineUnity::HAPI_Transform> transA, ByRef<::HoudiniEngineUnity::HAPI_Transform> transB);

  /// @brief Method IsViewportEqual, addr 0x2188d10, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsViewportEqual(ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewA, ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewB);

  /// @brief Method IsSessionSyncEqual, addr 0x2188df8, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsSessionSyncEqual(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncA, ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncB);

  /// @brief Method DoesGeoPartHaveAttribute, addr 0x2188e24, size 0x40, virtual false, abstract: false, final false
  static inline bool DoesGeoPartHaveAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner owner,
                                              ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method SetAnimationCurveTangentModes, addr 0x2188e64, size 0x4, virtual false, abstract: false, final false
  static inline void SetAnimationCurveTangentModes(::UnityEngine::AnimationCurve* animCurve, ::System::Collections::Generic::List_1<int32_t>* tangentValues);

  /// @brief Method IsSupportedPolygonType, addr 0x2188e68, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSupportedPolygonType(::HoudiniEngineUnity::HAPI_PartType partType);

  /// @brief Method GetParentNodeID, addr 0x2188e84, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID);

  /// @brief Method GetObjectInfos, addr 0x2188eec, size 0x4b8, virtual false, abstract: false, final false
  static inline bool GetObjectInfos(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo,
                                    ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo, ::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>> objectInfos,
                                    ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> objectTransforms);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HAPIUtility(HEU_HAPIUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HAPIUtility(HEU_HAPIUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HAPIUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HAPIUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HAPIUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HAPIUtility*, "HoudiniEngineUnity", "HEU_HAPIUtility");
