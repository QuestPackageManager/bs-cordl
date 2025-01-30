#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HAPIUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
struct HEU_HoudiniAsset_HEU_AssetType;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
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
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HAPIUtility
class CORDL_TYPE HEU_HAPIUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyLocalTransfromFromHoudiniToUnity, addr 0x3a4110c, size 0x114, virtual false, abstract: false, final false
  static inline void ApplyLocalTransfromFromHoudiniToUnity(::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform* unityTransform);

  /// @brief Method ApplyLocalTransfromFromHoudiniToUnityForInstance, addr 0x3a41220, size 0x1c8, virtual false, abstract: false, final false
  static inline void ApplyLocalTransfromFromHoudiniToUnityForInstance(::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform* unityTransform);

  /// @brief Method ApplyMatrixToLocalTransform, addr 0x3a413e8, size 0x60, virtual false, abstract: false, final false
  static inline void ApplyMatrixToLocalTransform(::ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Transform* transform);

  /// @brief Method ApplyWorldTransfromFromHoudiniToUnity, addr 0x3a40f24, size 0x1e8, virtual false, abstract: false, final false
  static inline void ApplyWorldTransfromFromHoudiniToUnity(::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform* unityTransform);

  /// @brief Method CookNodeInHoudini, addr 0x3a40060, size 0x58, virtual false, abstract: false, final false
  static inline bool CookNodeInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, bool bCookTemplatedGeos, ::StringW assetName);

  /// @brief Method CookNodeInHoudiniWithOptions, addr 0x3a403e0, size 0x7c, virtual false, abstract: false, final false
  static inline bool CookNodeInHoudiniWithOptions(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_CookOptions options, ::StringW assetName);

  /// @brief Method CreateAndCookAssetNode, addr 0x3a3fce0, size 0x1b8, virtual false, abstract: false, final false
  static inline bool CreateAndCookAssetNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName, bool bCookTemplatedGeos, ::ByRef<int32_t> newAssetID);

  /// @brief Method CreateAndCookCurveAsset, addr 0x3a400b8, size 0xec, virtual false, abstract: false, final false
  static inline bool CreateAndCookCurveAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName, bool bCookTemplatedGeos, ::ByRef<int32_t> newAssetID);

  /// @brief Method CreateAndCookInputAsset, addr 0x3a401a4, size 0x1e4, virtual false, abstract: false, final false
  static inline bool CreateAndCookInputAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName, bool bCookTemplatedGeos, ::ByRef<int32_t> newAssetID);

  /// @brief Method CreateNewAsset, addr 0x3a40500, size 0x3ac, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateNewAsset(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType assetType, ::StringW rootName, ::UnityEngine::Transform* parentTransform,
                                                                   ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync, ::UnityEngine::GameObject* rootGO);

  /// @brief Method CreateNewCurveAsset, addr 0x3a408ac, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateNewCurveAsset(::StringW name, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync,
                                                                        ::UnityEngine::GameObject* rootGO);

  /// @brief Method CreateNewInputAsset, addr 0x3a408d0, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> CreateNewInputAsset(::StringW name, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync,
                                                                        ::UnityEngine::GameObject* rootGO);

  /// @brief Method DestroyChildren, addr 0x3a408fc, size 0x480, virtual false, abstract: false, final false
  static inline void DestroyChildren(::UnityEngine::Transform* inTransform);

  /// @brief Method DestroyChildrenWithComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DestroyChildrenWithComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method DestroyGameObject, addr 0x3a40d7c, size 0x10, virtual false, abstract: false, final false
  static inline void DestroyGameObject(::UnityEngine::GameObject* gameObect, bool bRegisterUndo);

  /// @brief Method DoesGeoPartHaveAttribute, addr 0x3a4234c, size 0x40, virtual false, abstract: false, final false
  static inline bool DoesGeoPartHaveAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner owner,
                                              ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method DoesMappedPathExist, addr 0x3a3f094, size 0x9c, virtual false, abstract: false, final false
  static inline bool DoesMappedPathExist(::StringW inPath);

  /// @brief Method FindHoudiniAssetFileInPathWithExt, addr 0x3a3f538, size 0x1c4, virtual false, abstract: false, final false
  static inline ::StringW FindHoudiniAssetFileInPathWithExt(::StringW filePath);

  /// @brief Method GetAssetInScene, addr 0x3a40e20, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot> GetAssetInScene(int32_t assetID);

  /// @brief Method GetDefaultCookOptions, addr 0x3a4045c, size 0x44, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_CookOptions GetDefaultCookOptions(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetEnvironmentPath, addr 0x3a3ee98, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentPath();

  /// @brief Method GetHAPITransform, addr 0x3a41be4, size 0x124, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransform(::ByRef<::UnityEngine::Vector3> p, ::ByRef<::UnityEngine::Vector3> r, ::ByRef<::UnityEngine::Vector3> s);

  /// @brief Method GetHAPITransformFromMatrix, addr 0x3a419c8, size 0x178, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransformFromMatrix(::ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method GetHAPITransformQuatFromMatrix, addr 0x3a41d08, size 0x1b4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_Transform GetHAPITransformQuatFromMatrix(::ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method GetHoudiniEngineInstallationInfo, addr 0x3a3ee58, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniEngineInstallationInfo();

  /// @brief Method GetMatrix4x4, addr 0x3a41f68, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetMatrix4x4(::ByRef<::UnityEngine::Vector3> p, ::ByRef<::UnityEngine::Vector3> r, ::ByRef<::UnityEngine::Vector3> s);

  /// @brief Method GetMatrixFromHAPITransform, addr 0x3a41834, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetMatrixFromHAPITransform(::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, bool bConvertToUnity);

  /// @brief Method GetObjectInfos, addr 0x3a4240c, size 0x4b8, virtual false, abstract: false, final false
  static inline bool GetObjectInfos(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, ::ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo,
                                    ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo, ::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>> objectInfos,
                                    ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> objectTransforms);

  /// @brief Method GetParentNodeID, addr 0x3a423b0, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID);

  /// @brief Method GetPosition, addr 0x3a41448, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetPosition(::ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method GetQuaternion, addr 0x3a41454, size 0x37c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetQuaternion(::ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method GetRealPathFromHFSPath, addr 0x3a3eee0, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW GetRealPathFromHFSPath(::StringW inPath);

  /// @brief Method GetScale, addr 0x3a417d0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetScale(::ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method InstantiateHDA, addr 0x3a3f790, size 0x268, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> InstantiateHDA(::StringW filePath, ::UnityEngine::Vector3 initialPosition, ::HoudiniEngineUnity::HEU_SessionBase* session, bool bBuildAsync,
                                                                   bool bLoadFromMemory, bool bAlwaysOverwriteOnLoad, ::UnityEngine::GameObject* rootGO);

  /// @brief Method IsEqualTol, addr 0x3a42088, size 0x10, virtual false, abstract: false, final false
  static inline bool IsEqualTol(float_t a, float_t b, float_t t);

  /// @brief Method IsHoudiniAssetFile, addr 0x3a3f3f4, size 0x144, virtual false, abstract: false, final false
  static inline bool IsHoudiniAssetFile(::StringW filePath);

  /// @brief Method IsNodeValidInHoudini, addr 0x3a40d8c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsNodeValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID);

  /// @brief Method IsSameTransform, addr 0x3a4202c, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsSameTransform(::ByRef<::UnityEngine::Matrix4x4> transformMatrix, ::ByRef<::UnityEngine::Vector3> p, ::ByRef<::UnityEngine::Vector3> r, ::ByRef<::UnityEngine::Vector3> s);

  /// @brief Method IsSessionSyncEqual, addr 0x3a42320, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsSessionSyncEqual(::ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncA, ::ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncB);

  /// @brief Method IsSupportedPolygonType, addr 0x3a42390, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSupportedPolygonType(::HoudiniEngineUnity::HAPI_PartType partType);

  /// @brief Method IsTransformEqual, addr 0x3a42098, size 0x1a0, virtual false, abstract: false, final false
  static inline bool IsTransformEqual(::ByRef<::HoudiniEngineUnity::HAPI_Transform> transA, ::ByRef<::HoudiniEngineUnity::HAPI_Transform> transB);

  /// @brief Method IsViewportEqual, addr 0x3a42238, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsViewportEqual(::ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewA, ::ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewB);

  /// @brief Method LoadGeoWithNewGeoSync, addr 0x3a408f4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> LoadGeoWithNewGeoSync(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method LoadHDAFile, addr 0x3a3fae8, size 0x1f8, virtual false, abstract: false, final false
  static inline bool LoadHDAFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetPath, ::ByRef<int32_t> assetLibraryID, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> assetNames);

  /// @brief Method LocateValidFilePath, addr 0x3a3f788, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW LocateValidFilePath(::StringW assetName, ::StringW inFilePath);

  /// @brief Method LocateValidFilePath, addr 0x3a3f71c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW LocateValidFilePath(::UnityEngine::Object* inObject);

  /// @brief Method Log, addr 0x3a3f704, size 0x8, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x3a3f714, size 0x8, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogWarning, addr 0x3a3f70c, size 0x8, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

  /// @brief Method ProcessHoudiniCookStatus, addr 0x3a3fe98, size 0x1c8, virtual false, abstract: false, final false
  static inline bool ProcessHoudiniCookStatus(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetName);

  /// @brief Method SetAnimationCurveTangentModes, addr 0x3a4238c, size 0x4, virtual false, abstract: false, final false
  static inline void SetAnimationCurveTangentModes(::UnityEngine::AnimationCurve* animCurve, ::System::Collections::Generic::List_1<int32_t>* tangentValues);

  /// @brief Method SetMatrixPosition, addr 0x3a419b0, size 0x18, virtual false, abstract: false, final false
  static inline void SetMatrixPosition(::ByRef<::UnityEngine::Matrix4x4> m, ::ByRef<::UnityEngine::Vector3> position);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HAPIUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HAPIUtility(HEU_HAPIUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HAPIUtility(HEU_HAPIUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HAPIUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HAPIUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HAPIUtility*, "HoudiniEngineUnity", "HEU_HAPIUtility");
