#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_Result_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionBase)
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_BoxInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_CacheProperty;
}
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
namespace HoudiniEngineUnity {
struct HAPI_CurveInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_EnvIntType;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleBindingInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_HeightFieldSampling;
}
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_Result;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionEnvIntType;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_SphereInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_State;
}
namespace HoudiniEngineUnity {
struct HAPI_StatusType;
}
namespace HoudiniEngineUnity {
struct HAPI_StatusVerbosity;
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
struct HAPI_VolumeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeTileInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
namespace HoudiniEngineUnity {
struct SessionMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionBase);
// Dependencies HoudiniEngineUnity.HAPI_Result, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionBase
class CORDL_TYPE HEU_SessionBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConnectionState, put = set_ConnectionState)) ::HoudiniEngineUnity::SessionConnectionState ConnectionState;

  __declspec(property(get = get_LastCallResultCode, put = set_LastCallResultCode)) ::HoudiniEngineUnity::HAPI_Result LastCallResultCode;

  __declspec(property(get = get_LogErrorOverride, put = set_LogErrorOverride)) bool LogErrorOverride;

  __declspec(property(get = get_ThisSessionMode, put = set_ThisSessionMode)) ::HoudiniEngineUnity::SessionMode ThisSessionMode;

  __declspec(property(get = get_ThrowErrorOverride, put = set_ThrowErrorOverride)) bool ThrowErrorOverride;

  __declspec(property(get = get_UserNotifiedSessionInvalid, put = set_UserNotifiedSessionInvalid)) bool UserNotifiedSessionInvalid;

  /// @brief Field <LastCallResultCode>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__LastCallResultCode_k__BackingField,
                      put = __cordl_internal_set__LastCallResultCode_k__BackingField)) ::HoudiniEngineUnity::HAPI_Result _LastCallResultCode_k__BackingField;

  /// @brief Field <LogErrorOverride>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__LogErrorOverride_k__BackingField, put = __cordl_internal_set__LogErrorOverride_k__BackingField)) bool _LogErrorOverride_k__BackingField;

  /// @brief Field <ThrowErrorOverride>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__ThrowErrorOverride_k__BackingField, put = __cordl_internal_set__ThrowErrorOverride_k__BackingField)) bool _ThrowErrorOverride_k__BackingField;

  /// @brief Field <UserNotifiedSessionInvalid>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__UserNotifiedSessionInvalid_k__BackingField,
                      put = __cordl_internal_set__UserNotifiedSessionInvalid_k__BackingField)) bool _UserNotifiedSessionInvalid_k__BackingField;

  /// @brief Field _sessionData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionData, put = __cordl_internal_set__sessionData)) ::HoudiniEngineUnity::HEU_SessionData* _sessionData;

  /// @brief Field _sessionErrorMsg, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionErrorMsg, put = __cordl_internal_set__sessionErrorMsg)) ::StringW _sessionErrorMsg;

  /// @brief Method AddAttribute, addr 0x3a5b70c, size 0x8, virtual true, abstract: false, final false
  inline bool AddAttribute(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo);

  /// @brief Method AddGroup, addr 0x3a5b714, size 0x8, virtual true, abstract: false, final false
  inline bool AddGroup(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName);

  /// @brief Method CheckAndCloseExistingSession, addr 0x3a5b310, size 0x8, virtual true, abstract: false, final false
  inline bool CheckAndCloseExistingSession();

  /// @brief Method CheckForSpecificErrors, addr 0x3a5b4a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t CheckForSpecificErrors(int32_t nodeID, int32_t errorsToCheck);

  /// @brief Method CheckVersionMatch, addr 0x3a5b3a8, size 0x8, virtual true, abstract: false, final false
  inline bool CheckVersionMatch();

  /// @brief Method ClearSessionInfo, addr 0x3a5b318, size 0x20, virtual true, abstract: false, final false
  inline void ClearSessionInfo();

  /// @brief Method CloseSession, addr 0x3a5b308, size 0x8, virtual true, abstract: false, final false
  inline bool CloseSession();

  /// @brief Method CommitGeo, addr 0x3a5b72c, size 0x8, virtual true, abstract: false, final false
  inline bool CommitGeo(int32_t nodeID);

  /// @brief Method ComposeChildNodeList, addr 0x3a5b570, size 0x8, virtual true, abstract: false, final false
  inline bool ComposeChildNodeList(int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive, ::ByRef<int32_t> count);

  /// @brief Method ComposeNodeCookResult, addr 0x3a5b440, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ComposeNodeCookResult(int32_t nodeId, ::HoudiniEngineUnity::HAPI_StatusVerbosity verbosity);

  /// @brief Method ComposeObjectList, addr 0x3a5b5a8, size 0xc, virtual true, abstract: false, final false
  inline bool ComposeObjectList(int32_t nodeID, ::ByRef<int32_t> objectCount);

  /// @brief Method ConnectNodeInput, addr 0x3a5b50c, size 0x8, virtual true, abstract: false, final false
  inline bool ConnectNodeInput(int32_t nodeID, int32_t inputIndex, int32_t nodeIDToConnect, int32_t outputIndex);

  /// @brief Method ConnectThriftPipeSession, addr 0x3a5b300, size 0x8, virtual true, abstract: false, final false
  inline bool ConnectThriftPipeSession(bool bIsDefaultSession, ::StringW pipeName, bool autoClose, float_t timeout, bool logError, bool autoInitialize);

  /// @brief Method ConnectThriftSocketSession, addr 0x3a5b2f8, size 0x8, virtual true, abstract: false, final false
  inline bool ConnectThriftSocketSession(bool bIsDefaultSession, ::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError, bool autoInitialize);

  /// @brief Method ConvertTransform, addr 0x3a5bae0, size 0x14, virtual true, abstract: false, final false
  inline bool ConvertTransform(::ByRef<::HoudiniEngineUnity::HAPI_TransformEuler> inTransform, ::HoudiniEngineUnity::HAPI_RSTOrder RSTOrder, ::HoudiniEngineUnity::HAPI_XYZOrder ROTOrder,
                               ::ByRef<::HoudiniEngineUnity::HAPI_TransformEuler> outTransform);

  /// @brief Method CookNode, addr 0x3a5b4f4, size 0x8, virtual true, abstract: false, final false
  inline bool CookNode(int32_t nodeID, bool bCookTemplatedGeos, bool bSplitGeosByGroup);

  /// @brief Method CookNodeWithOptions, addr 0x3a5b4fc, size 0x8, virtual true, abstract: false, final false
  inline bool CookNodeWithOptions(int32_t nodeID, ::HoudiniEngineUnity::HAPI_CookOptions cookOptions);

  /// @brief Method CreateCustomSession, addr 0x3a5b2f0, size 0x8, virtual true, abstract: false, final false
  inline bool CreateCustomSession(bool bIsDefaultSession);

  /// @brief Method CreateHeightFieldInput, addr 0x3a5b948, size 0x20, virtual true, abstract: false, final false
  inline bool CreateHeightFieldInput(int32_t parentNodeID, ::StringW name, int32_t xSize, int32_t ySize, float_t voxelSize, ::HoudiniEngineUnity::HAPI_HeightFieldSampling sampling,
                                     ::ByRef<int32_t> heightfieldNodeID, ::ByRef<int32_t> heightNodeID, ::ByRef<int32_t> maskNodeID, ::ByRef<int32_t> mergeNodeID);

  /// @brief Method CreateHeightfieldInputVolumeNode, addr 0x3a5b968, size 0x10, virtual true, abstract: false, final false
  inline bool CreateHeightfieldInputVolumeNode(int32_t parentNodeID, ::ByRef<int32_t> newNodeID, ::StringW name, int32_t xSize, int32_t ySize, float_t voxelSize);

  /// @brief Method CreateInProcessSession, addr 0x3a5b2d8, size 0x8, virtual true, abstract: false, final false
  inline bool CreateInProcessSession(bool bIsDefaultSession);

  /// @brief Method CreateInputNode, addr 0x3a5b938, size 0x10, virtual true, abstract: false, final false
  inline bool CreateInputNode(::ByRef<int32_t> nodeID, ::StringW name);

  /// @brief Method CreateNode, addr 0x3a5b4e0, size 0x10, virtual true, abstract: false, final false
  inline bool CreateNode(int32_t parentNodeID, ::StringW operatorName, ::StringW nodeLabel, bool bCookOnCreation, ::ByRef<int32_t> newNodeID);

  /// @brief Method CreateSessionData, addr 0x3a5b2d0, size 0x8, virtual true, abstract: false, final false
  inline bool CreateSessionData(bool bOverwriteExisting, bool bIsDefaultSession);

  /// @brief Method CreateThriftPipeSession, addr 0x3a5b2e8, size 0x8, virtual true, abstract: false, final false
  inline bool CreateThriftPipeSession(bool bIsDefaultSession, ::StringW pipeName, bool autoClose, float_t timeout, bool bLogError);

  /// @brief Method CreateThriftSocketSession, addr 0x3a5b2e0, size 0x8, virtual true, abstract: false, final false
  inline bool CreateThriftSocketSession(bool bIsDefaultSession, ::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool bLogError);

  /// @brief Method DeleteGroup, addr 0x3a5b71c, size 0x8, virtual true, abstract: false, final false
  inline bool DeleteGroup(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName);

  /// @brief Method DeleteNode, addr 0x3a5b4f0, size 0x4, virtual true, abstract: false, final false
  inline void DeleteNode(int32_t nodeID);

  /// @brief Method DisconnectNodeInput, addr 0x3a5b514, size 0x8, virtual true, abstract: false, final false
  inline bool DisconnectNodeInput(int32_t nodeID, int32_t inputIndex, bool bLogError);

  /// @brief Method ExtractImageToFile, addr 0x3a5b834, size 0xc, virtual true, abstract: false, final false
  inline bool ExtractImageToFile(int32_t nodeID, ::StringW fileFormat, ::StringW imagePlanes, ::StringW destinationFolderPath, ::ByRef<::StringW> destinationFilePath);

  /// @brief Method ExtractImageToMemory, addr 0x3a5b794, size 0x54, virtual true, abstract: false, final false
  inline bool ExtractImageToMemory(int32_t nodeID, ::StringW fileFormat, ::StringW imagePlanes, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer);

  /// @brief Method GetActiveCacheCount, addr 0x3a5ba74, size 0xc, virtual true, abstract: false, final false
  inline bool GetActiveCacheCount(::ByRef<int32_t> activeCacheCount);

  /// @brief Method GetActiveCacheNames, addr 0x3a5ba80, size 0x8, virtual true, abstract: false, final false
  inline bool GetActiveCacheNames(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> cacheNamesArray, int32_t activeCacheCount);

  /// @brief Method GetAssetInfo, addr 0x3a5b54c, size 0x8, virtual true, abstract: false, final false
  inline bool GetAssetInfo(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HAPI_AssetInfo> assetInfo);

  /// @brief Method GetAttributeFloat64Data, addr 0x3a5b5fc, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeFloat64Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo,
                                      ::ByRef<::ArrayW<double_t, ::Array<double_t>*>> data, int32_t start, int32_t length);

  /// @brief Method GetAttributeFloatData, addr 0x3a5b5f4, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeFloatData(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> data,
                                    int32_t start, int32_t length);

  /// @brief Method GetAttributeInfo, addr 0x3a5b5dc, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeInfo(int32_t nodeID, int32_t partID, ::StringW name, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method GetAttributeInt16Data, addr 0x3a5b61c, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeInt16Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ::ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> data,
                                    int32_t start, int32_t length);

  /// @brief Method GetAttributeInt64Data, addr 0x3a5b624, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeInt64Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data,
                                    int32_t start, int32_t length);

  /// @brief Method GetAttributeInt8Data, addr 0x3a5b614, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeInt8Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ::ByRef<::ArrayW<int8_t, ::Array<int8_t>*>> data,
                                   int32_t start, int32_t length);

  /// @brief Method GetAttributeIntData, addr 0x3a5b604, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeIntData(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> data,
                                  int32_t start, int32_t length);

  /// @brief Method GetAttributeNames, addr 0x3a5b5e4, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeNames(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> attributeNames, int32_t count);

  /// @brief Method GetAttributeStringData, addr 0x3a5b5ec, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeStringData(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo,
                                     ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> dataArray, int32_t start, int32_t length);

  /// @brief Method GetAttributeUInt8Data, addr 0x3a5b60c, size 0x8, virtual true, abstract: false, final false
  inline bool GetAttributeUInt8Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data,
                                    int32_t start, int32_t length);

  /// @brief Method GetAvailableAssetCount, addr 0x3a5b538, size 0xc, virtual true, abstract: false, final false
  inline bool GetAvailableAssetCount(int32_t libraryID, ::ByRef<int32_t> assetCount);

  /// @brief Method GetAvailableAssets, addr 0x3a5b544, size 0x8, virtual true, abstract: false, final false
  inline bool GetAvailableAssets(int32_t libraryID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> assetNames, int32_t assetCount);

  /// @brief Method GetBoxInfo, addr 0x3a5b694, size 0x8, virtual true, abstract: false, final false
  inline bool GetBoxInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_BoxInfo> boxInfo);

  /// @brief Method GetCacheProperty, addr 0x3a5ba88, size 0xc, virtual true, abstract: false, final false
  inline bool GetCacheProperty(::StringW cacheName, ::HoudiniEngineUnity::HAPI_CacheProperty cacheProperty, ::ByRef<int32_t> propertyValue);

  /// @brief Method GetCallResult, addr 0x3a5b3dc, size 0xc, virtual true, abstract: false, final false
  inline bool GetCallResult(::ByRef<::HoudiniEngineUnity::HAPI_Result> result);

  /// @brief Method GetComposedChildNodeList, addr 0x3a5b578, size 0x8, virtual true, abstract: false, final false
  inline bool GetComposedChildNodeList(int32_t parentNodeID, ::ArrayW<int32_t, ::Array<int32_t>*> childNodeIDs, int32_t count);

  /// @brief Method GetComposedObjectList, addr 0x3a5b5b4, size 0x8, virtual true, abstract: false, final false
  inline bool GetComposedObjectList(int32_t nodeID, ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo, ::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>> objectInfos, int32_t start,
                                    int32_t length);

  /// @brief Method GetComposedObjectTransforms, addr 0x3a5b5bc, size 0x8, virtual true, abstract: false, final false
  inline bool GetComposedObjectTransforms(int32_t nodeID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder,
                                          ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> transforms, int32_t start, int32_t length);

  /// @brief Method GetCookResult, addr 0x3a5b3e8, size 0xc, virtual true, abstract: false, final false
  inline bool GetCookResult(::ByRef<::HoudiniEngineUnity::HAPI_Result> result);

  /// @brief Method GetCookState, addr 0x3a5b3f4, size 0xc, virtual true, abstract: false, final false
  inline bool GetCookState(::ByRef<::HoudiniEngineUnity::HAPI_State> state);

  /// @brief Method GetCurveCounts, addr 0x3a5b6ac, size 0x8, virtual true, abstract: false, final false
  inline bool GetCurveCounts(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> counts, int32_t start, int32_t length);

  /// @brief Method GetCurveInfo, addr 0x3a5b6a4, size 0x8, virtual true, abstract: false, final false
  inline bool GetCurveInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_CurveInfo> curveInfo);

  /// @brief Method GetCurveKnots, addr 0x3a5b6bc, size 0x8, virtual true, abstract: false, final false
  inline bool GetCurveKnots(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> knots, int32_t start, int32_t length);

  /// @brief Method GetCurveOrders, addr 0x3a5b6b4, size 0x8, virtual true, abstract: false, final false
  inline bool GetCurveOrders(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> orders, int32_t start, int32_t length);

  /// @brief Method GetDisplayGeoInfo, addr 0x3a5b5c4, size 0x8, virtual true, abstract: false, final false
  inline bool GetDisplayGeoInfo(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HAPI_GeoInfo> geoInfo, bool bLogError);

  /// @brief Method GetEnvInt, addr 0x3a5b480, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetEnvInt(::HoudiniEngineUnity::HAPI_EnvIntType intType);

  /// @brief Method GetFaceCounts, addr 0x3a5b67c, size 0x8, virtual true, abstract: false, final false
  inline bool GetFaceCounts(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> faceCounts, int32_t start, int32_t length);

  /// @brief Method GetFaceCounts, addr 0x3a5b684, size 0x8, virtual true, abstract: false, final false
  inline bool GetFaceCounts(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> faceCounts, int32_t start, int32_t length, bool bLogError);

  /// @brief Method GetGeoInfo, addr 0x3a5b5cc, size 0x8, virtual true, abstract: false, final false
  inline bool GetGeoInfo(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HAPI_GeoInfo> geoInfo, bool bLogError);

  /// @brief Method GetGeoSize, addr 0x3a5bac4, size 0xc, virtual true, abstract: false, final false
  inline bool GetGeoSize(int32_t nodeID, ::StringW format, ::ByRef<int32_t> size);

  /// @brief Method GetGroupCountOnPackedInstancePart, addr 0x3a5b63c, size 0x10, virtual true, abstract: false, final false
  inline bool GetGroupCountOnPackedInstancePart(int32_t nodeID, int32_t partID, ::ByRef<int32_t> pointGroupCount, ::ByRef<int32_t> primitiveGroupCount);

  /// @brief Method GetGroupMembership, addr 0x3a5b634, size 0x8, virtual true, abstract: false, final false
  inline bool GetGroupMembership(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ::ByRef<bool> membershipArrayAllEqual,
                                 ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> membershipArray, int32_t start, int32_t length);

  /// @brief Method GetGroupMembershipOnPackedInstancePart, addr 0x3a5b654, size 0x8, virtual true, abstract: false, final false
  inline bool GetGroupMembershipOnPackedInstancePart(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ::ByRef<bool> membershipArrayAllEqual,
                                                     ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> membershipArray, int32_t start, int32_t length);

  /// @brief Method GetGroupNames, addr 0x3a5b62c, size 0x8, virtual true, abstract: false, final false
  inline bool GetGroupNames(int32_t nodeID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> names, int32_t count);

  /// @brief Method GetGroupNamesOnPackedInstancePart, addr 0x3a5b64c, size 0x8, virtual true, abstract: false, final false
  inline bool GetGroupNamesOnPackedInstancePart(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> groupNamesArray,
                                                int32_t groupCount);

  /// @brief Method GetHandleBindingInfo, addr 0x3a5bad8, size 0x8, virtual true, abstract: false, final false
  inline bool GetHandleBindingInfo(int32_t nodeID, int32_t handleIndex,
                                   ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleBindingInfo, ::Array<::HoudiniEngineUnity::HAPI_HandleBindingInfo>*>> handleBindingInfos, int32_t start,
                                   int32_t length);

  /// @brief Method GetHandleInfo, addr 0x3a5bad0, size 0x8, virtual true, abstract: false, final false
  inline bool GetHandleInfo(int32_t nodeID, ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo, ::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>> handleInfos, int32_t start, int32_t length);

  /// @brief Method GetHeightFieldData, addr 0x3a5b9dc, size 0x8, virtual true, abstract: false, final false
  inline bool GetHeightFieldData(int32_t nodeID, int32_t partID, ::ArrayW<float_t, ::Array<float_t>*> valuesArray, int32_t start, int32_t length);

  /// @brief Method GetImageInfo, addr 0x3a5b774, size 0x8, virtual true, abstract: false, final false
  inline bool GetImageInfo(int32_t materialNodeID, ::ByRef<::HoudiniEngineUnity::HAPI_ImageInfo> imageInfo);

  /// @brief Method GetImagePlanes, addr 0x3a5b7e8, size 0x4c, virtual true, abstract: false, final false
  inline bool GetImagePlanes(int32_t nodeID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> imagePlanes, int32_t numImagePlanes);

  /// @brief Method GetInstanceTransformsOnPart, addr 0x3a5b66c, size 0x8, virtual true, abstract: false, final false
  inline bool GetInstanceTransformsOnPart(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder,
                                          ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> transformsArray, int32_t start, int32_t length);

  /// @brief Method GetInstancedObjectIds, addr 0x3a5b674, size 0x8, virtual true, abstract: false, final false
  inline bool GetInstancedObjectIds(int32_t nodeID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> instanced_node_id_array, int32_t start, int32_t length);

  /// @brief Method GetInstancedPartIds, addr 0x3a5b65c, size 0x8, virtual true, abstract: false, final false
  inline bool GetInstancedPartIds(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> instancedPartsArray, int32_t start, int32_t length);

  /// @brief Method GetInstancerPartTransforms, addr 0x3a5b664, size 0x8, virtual true, abstract: false, final false
  inline bool GetInstancerPartTransforms(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder,
                                         ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> transformsArray, int32_t start, int32_t length);

  /// @brief Method GetLastSessionError, addr 0x3a5b3a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetLastSessionError();

  /// @brief Method GetMaterialInfo, addr 0x3a5b76c, size 0x8, virtual true, abstract: false, final false
  inline bool GetMaterialInfo(int32_t materialNodeID, ::ByRef<::HoudiniEngineUnity::HAPI_MaterialInfo> materialInfo, bool bLogError);

  /// @brief Method GetMaterialNodeIDsOnFaces, addr 0x3a5b764, size 0x8, virtual true, abstract: false, final false
  inline bool GetMaterialNodeIDsOnFaces(int32_t nodeID, int32_t partID, ::ByRef<bool> bSingleFaceMaterial, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> materialNodeIDs, int32_t faceCount);

  /// @brief Method GetMaterialOnPart, addr 0x3a5b75c, size 0x8, virtual true, abstract: false, final false
  inline bool GetMaterialOnPart(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_MaterialInfo> materialInfo);

  /// @brief Method GetNodeInfo, addr 0x3a5b554, size 0x8, virtual true, abstract: false, final false
  inline bool GetNodeInfo(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, bool bLogError);

  /// @brief Method GetNodeInputName, addr 0x3a5b52c, size 0xc, virtual true, abstract: false, final false
  inline bool GetNodeInputName(int32_t nodeID, int32_t inputIndex, ::ByRef<int32_t> nodeNameIndex);

  /// @brief Method GetNodePath, addr 0x3a5b55c, size 0xc, virtual true, abstract: false, final false
  inline bool GetNodePath(int32_t nodeID, int32_t relativeNodeID, ::ByRef<::StringW> path);

  /// @brief Method GetObjectInfo, addr 0x3a5b590, size 0x8, virtual true, abstract: false, final false
  inline bool GetObjectInfo(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo);

  /// @brief Method GetObjectTransform, addr 0x3a5b598, size 0x8, virtual true, abstract: false, final false
  inline bool GetObjectTransform(int32_t nodeID, int32_t relativeToNodeID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform);

  /// @brief Method GetParamChoiceValues, addr 0x3a5b8b4, size 0x8, virtual true, abstract: false, final false
  inline bool GetParamChoiceValues(int32_t nodeID, ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>> values, int32_t start,
                                   int32_t length);

  /// @brief Method GetParamFloatValue, addr 0x3a5b884, size 0xc, virtual true, abstract: false, final false
  inline bool GetParamFloatValue(int32_t nodeID, ::StringW parmName, int32_t index, ::ByRef<float_t> value);

  /// @brief Method GetParamFloatValues, addr 0x3a5b87c, size 0x8, virtual true, abstract: false, final false
  inline bool GetParamFloatValues(int32_t nodeID, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> values, int32_t start, int32_t length);

  /// @brief Method GetParamIntValue, addr 0x3a5b870, size 0xc, virtual true, abstract: false, final false
  inline bool GetParamIntValue(int32_t nodeID, ::StringW parmName, int32_t index, ::ByRef<int32_t> value);

  /// @brief Method GetParamIntValues, addr 0x3a5b868, size 0x8, virtual true, abstract: false, final false
  inline bool GetParamIntValues(int32_t nodeID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t start, int32_t length);

  /// @brief Method GetParamNodeValue, addr 0x3a5b8a4, size 0x10, virtual true, abstract: false, final false
  inline bool GetParamNodeValue(int32_t nodeID, ::StringW paramName, ::ByRef<int32_t> nodeValue);

  /// @brief Method GetParamStringValue, addr 0x3a5b898, size 0xc, virtual true, abstract: false, final false
  inline bool GetParamStringValue(int32_t nodeID, ::StringW parmName, int32_t index, ::ByRef<int32_t> value);

  /// @brief Method GetParamStringValues, addr 0x3a5b890, size 0x8, virtual true, abstract: false, final false
  inline bool GetParamStringValues(int32_t nodeID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t start, int32_t length);

  /// @brief Method GetParams, addr 0x3a5b840, size 0x8, virtual true, abstract: false, final false
  inline bool GetParams(int32_t nodeID, ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>> parmInfos, int32_t start, int32_t length);

  /// @brief Method GetParmIDFromName, addr 0x3a5b91c, size 0x10, virtual true, abstract: false, final false
  inline bool GetParmIDFromName(int32_t nodeID, ::StringW parmName, ::ByRef<int32_t> parmID);

  /// @brief Method GetParmStringValue, addr 0x3a5b92c, size 0xc, virtual true, abstract: false, final false
  inline bool GetParmStringValue(int32_t nodeID, ::StringW parmName, int32_t index, bool evaluate, ::ByRef<int32_t> value);

  /// @brief Method GetParmTagName, addr 0x3a5b848, size 0xc, virtual true, abstract: false, final false
  inline bool GetParmTagName(int32_t nodeID, int32_t parmID, int32_t tagIndex, ::ByRef<int32_t> tagName);

  /// @brief Method GetParmTagValue, addr 0x3a5b854, size 0xc, virtual true, abstract: false, final false
  inline bool GetParmTagValue(int32_t nodeID, int32_t parmID, ::StringW tagName, ::ByRef<int32_t> tagValue);

  /// @brief Method GetParmWithTag, addr 0x3a5b904, size 0x8, virtual true, abstract: false, final false
  inline bool GetParmWithTag(int32_t nodeID, ::StringW tagName, ::ByRef<int32_t> parmID);

  /// @brief Method GetPartInfo, addr 0x3a5b5d4, size 0x8, virtual true, abstract: false, final false
  inline bool GetPartInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method GetPreset, addr 0x3a5b978, size 0x54, virtual true, abstract: false, final false
  inline bool GetPreset(int32_t nodeID, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> presetData);

  /// @brief Method GetRegisteredAssetFromID, addr 0x3a5af18, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> GetRegisteredAssetFromID(int32_t id);

  /// @brief Method GetServerEnvString, addr 0x3a5b3c4, size 0xc, virtual true, abstract: false, final false
  inline bool GetServerEnvString(::StringW name, ::ByRef<::StringW> value);

  /// @brief Method GetServerEnvVarCount, addr 0x3a5b3d0, size 0xc, virtual true, abstract: false, final false
  inline bool GetServerEnvVarCount(::ByRef<int32_t> env_count);

  /// @brief Method GetSessionData, addr 0x3a5b348, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionData* GetSessionData();

  /// @brief Method GetSessionEnvInt, addr 0x3a5b488, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetSessionEnvInt(::HoudiniEngineUnity::HAPI_SessionEnvIntType intType, bool bLogError);

  /// @brief Method GetSessionErrorMsg, addr 0x3a5aea8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetSessionErrorMsg();

  /// @brief Method GetSessionInfo, addr 0x3a5b350, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetSessionInfo();

  /// @brief Method GetSessionSyncInfo, addr 0x3a5bb18, size 0x8, virtual true, abstract: false, final false
  inline bool GetSessionSyncInfo(::ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncInfo);

  /// @brief Method GetSphereInfo, addr 0x3a5b69c, size 0x8, virtual true, abstract: false, final false
  inline bool GetSphereInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_SphereInfo> sphereInfo);

  /// @brief Method GetStatusString, addr 0x3a5b400, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetStatusString(::HoudiniEngineUnity::HAPI_StatusType statusType, ::HoudiniEngineUnity::HAPI_StatusVerbosity verbosity);

  /// @brief Method GetString, addr 0x3a5b490, size 0x8, virtual true, abstract: false, final false
  inline bool GetString(int32_t stringHandle, ::ByRef<::StringW> resultString, int32_t bufferLength);

  /// @brief Method GetStringBufferLength, addr 0x3a5b498, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetStringBufferLength(int32_t stringHandle);

  /// @brief Method GetTime, addr 0x3a5b4a8, size 0x8, virtual true, abstract: false, final false
  inline float_t GetTime();

  /// @brief Method GetTotalCookCount, addr 0x3a5baf4, size 0xc, virtual true, abstract: false, final false
  inline bool GetTotalCookCount(int32_t nodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool includeChildren, ::ByRef<int32_t> count);

  /// @brief Method GetUseHoudiniTime, addr 0x3a5b4b8, size 0x8, virtual true, abstract: false, final false
  inline bool GetUseHoudiniTime();

  /// @brief Method GetVertexList, addr 0x3a5b68c, size 0x8, virtual true, abstract: false, final false
  inline bool GetVertexList(int32_t nodeID, int32_t partID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> vertexList, int32_t start, int32_t length);

  /// @brief Method GetViewport, addr 0x3a5bb08, size 0x8, virtual true, abstract: false, final false
  inline bool GetViewport(::ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewport);

  /// @brief Method GetVolumeBounds, addr 0x3a5ba38, size 0x34, virtual true, abstract: false, final false
  inline bool GetVolumeBounds(int32_t nodeID, int32_t partID, ::ByRef<float_t> x_min, ::ByRef<float_t> y_min, ::ByRef<float_t> z_min, ::ByRef<float_t> x_max, ::ByRef<float_t> y_max,
                              ::ByRef<float_t> z_max, ::ByRef<float_t> x_center, ::ByRef<float_t> y_center, ::ByRef<float_t> z_center);

  /// @brief Method GetVolumeInfo, addr 0x3a5b9d4, size 0x8, virtual true, abstract: false, final false
  inline bool GetVolumeInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo);

  /// @brief Method HandleStatusResult, addr 0x3a5b3b8, size 0x8, virtual true, abstract: false, final false
  inline bool HandleStatusResult(::HoudiniEngineUnity::HAPI_Result result, ::StringW prependMsg, bool bThrowError, bool bLogError);

  /// @brief Method InitializeSession, addr 0x3a5b3b0, size 0x8, virtual true, abstract: false, final false
  inline bool InitializeSession(::HoudiniEngineUnity::HEU_SessionData* sessionData);

  /// @brief Method InsertMultiparmInstance, addr 0x3a5b8f4, size 0x8, virtual true, abstract: false, final false
  inline bool InsertMultiparmInstance(int32_t nodeID, int32_t parmID, int32_t instancePosition);

  /// @brief Method IsAssetRegistered, addr 0x3a5af20, size 0x8, virtual true, abstract: false, final false
  inline bool IsAssetRegistered(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method IsNodeValid, addr 0x3a5b568, size 0x8, virtual true, abstract: false, final false
  inline bool IsNodeValid(int32_t nodeID, int32_t uniqueNodeID);

  /// @brief Method IsSessionSync, addr 0x3a5aed8, size 0x20, virtual false, abstract: false, final false
  inline bool IsSessionSync();

  /// @brief Method IsSessionValid, addr 0x3a5b390, size 0x8, virtual true, abstract: false, final false
  inline bool IsSessionValid();

  /// @brief Method LoadAssetLibraryFromFile, addr 0x3a5b4c8, size 0xc, virtual true, abstract: false, final false
  inline bool LoadAssetLibraryFromFile(::StringW assetPath, bool bAllowOverwrite, ::ByRef<int32_t> libraryID);

  /// @brief Method LoadAssetLibraryFromMemory, addr 0x3a5b4d4, size 0xc, virtual true, abstract: false, final false
  inline bool LoadAssetLibraryFromMemory(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool bAllowOverwrite, ::ByRef<int32_t> libraryID);

  /// @brief Method LoadGeoFromFile, addr 0x3a5baa4, size 0x8, virtual true, abstract: false, final false
  inline bool LoadGeoFromFile(int32_t nodeID, ::StringW file_name);

  /// @brief Method LoadHIPFile, addr 0x3a5b580, size 0x8, virtual true, abstract: false, final false
  inline bool LoadHIPFile(::StringW fileName, bool bCookOnLoad);

  /// @brief Method LoadNodeFromFile, addr 0x3a5bab4, size 0x10, virtual true, abstract: false, final false
  inline bool LoadNodeFromFile(::StringW file_name, int32_t parentNodeID, ::StringW nodeLabel, bool cook_on_load, ::ByRef<int32_t> newNodeID);

  static inline ::HoudiniEngineUnity::HEU_SessionBase* New_ctor();

  /// @brief Method ParmHasTag, addr 0x3a5b860, size 0x8, virtual true, abstract: false, final false
  inline bool ParmHasTag(int32_t nodeID, int32_t parmID, ::StringW tagName, ::ByRef<bool> hasTag);

  /// @brief Method QueryNodeInput, addr 0x3a5b51c, size 0x10, virtual true, abstract: false, final false
  inline bool QueryNodeInput(int32_t nodeID, int32_t inputIndex, ::ByRef<int32_t> connectedNodeID, bool bLogError);

  /// @brief Method RegisterAsset, addr 0x3a5af28, size 0x4, virtual true, abstract: false, final false
  inline void RegisterAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method RemoveMultiParmInstance, addr 0x3a5b8fc, size 0x8, virtual true, abstract: false, final false
  inline bool RemoveMultiParmInstance(int32_t nodeID, int32_t parmID, int32_t instancePosition);

  /// @brief Method RenameNode, addr 0x3a5b504, size 0x8, virtual true, abstract: false, final false
  inline bool RenameNode(int32_t nodeID, ::StringW newName);

  /// @brief Method RenderCOPToImage, addr 0x3a5b78c, size 0x8, virtual true, abstract: false, final false
  inline bool RenderCOPToImage(int32_t copNodeID);

  /// @brief Method RenderTextureToImage, addr 0x3a5b784, size 0x8, virtual true, abstract: false, final false
  inline bool RenderTextureToImage(int32_t materialNodeID, int32_t parmID, bool bLogError);

  /// @brief Method ReregisterOnAwake, addr 0x3a5af30, size 0x4, virtual true, abstract: false, final false
  inline void ReregisterOnAwake(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method RestartSession, addr 0x3a5b398, size 0x8, virtual true, abstract: false, final false
  inline bool RestartSession();

  /// @brief Method RevertGeo, addr 0x3a5b734, size 0x8, virtual true, abstract: false, final false
  inline bool RevertGeo(int32_t nodeID);

  /// @brief Method RevertParmToDefault, addr 0x3a5b90c, size 0x8, virtual true, abstract: false, final false
  inline bool RevertParmToDefault(int32_t nodeID, ::StringW parm_name, int32_t index);

  /// @brief Method RevertParmToDefaults, addr 0x3a5b914, size 0x8, virtual true, abstract: false, final false
  inline bool RevertParmToDefaults(int32_t nodeID, ::StringW parm_name);

  /// @brief Method SaveGeoToFile, addr 0x3a5ba9c, size 0x8, virtual true, abstract: false, final false
  inline bool SaveGeoToFile(int32_t nodeID, ::StringW fileName);

  /// @brief Method SaveHIPFile, addr 0x3a5b588, size 0x8, virtual true, abstract: false, final false
  inline bool SaveHIPFile(::StringW fileName, bool bLockNodes);

  /// @brief Method SaveNodeToFile, addr 0x3a5baac, size 0x8, virtual true, abstract: false, final false
  inline bool SaveNodeToFile(int32_t nodeID, ::StringW fileName);

  /// @brief Method SetAttributeFloatData, addr 0x3a5b6fc, size 0x8, virtual true, abstract: false, final false
  inline bool SetAttributeFloatData(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<float_t, ::Array<float_t>*> data,
                                    int32_t start, int32_t length);

  /// @brief Method SetAttributeInt16Data, addr 0x3a5b6ec, size 0x8, virtual true, abstract: false, final false
  inline bool SetAttributeInt16Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int16_t, ::Array<int16_t>*> data,
                                    int32_t start, int32_t length);

  /// @brief Method SetAttributeInt64Data, addr 0x3a5b6f4, size 0x8, virtual true, abstract: false, final false
  inline bool SetAttributeInt64Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int64_t, ::Array<int64_t>*> data,
                                    int32_t start, int32_t length);

  /// @brief Method SetAttributeInt8Data, addr 0x3a5b6e4, size 0x8, virtual true, abstract: false, final false
  inline bool SetAttributeInt8Data(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int8_t, ::Array<int8_t>*> data, int32_t start,
                                   int32_t length);

  /// @brief Method SetAttributeIntData, addr 0x3a5b6dc, size 0x8, virtual true, abstract: false, final false
  inline bool SetAttributeIntData(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t start,
                                  int32_t length);

  /// @brief Method SetAttributeStringData, addr 0x3a5b704, size 0x8, virtual true, abstract: false, final false
  inline bool SetAttributeStringData(int32_t nodeID, int32_t partID, ::StringW name, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<::StringW, ::Array<::StringW>*> data,
                                     int32_t start, int32_t length);

  /// @brief Method SetCacheProperty, addr 0x3a5ba94, size 0x8, virtual true, abstract: false, final false
  inline bool SetCacheProperty(::StringW cacheName, ::HoudiniEngineUnity::HAPI_CacheProperty cacheProperty, int32_t propertyValue);

  /// @brief Method SetCurveCounts, addr 0x3a5b744, size 0x8, virtual true, abstract: false, final false
  inline bool SetCurveCounts(int32_t nodeID, int32_t partID, ::ArrayW<int32_t, ::Array<int32_t>*> counts, int32_t start, int32_t length);

  /// @brief Method SetCurveInfo, addr 0x3a5b73c, size 0x8, virtual true, abstract: false, final false
  inline bool SetCurveInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_CurveInfo> curveInfo);

  /// @brief Method SetCurveKnots, addr 0x3a5b754, size 0x8, virtual true, abstract: false, final false
  inline bool SetCurveKnots(int32_t nodeID, int32_t partID, ::ArrayW<float_t, ::Array<float_t>*> knots, int32_t start, int32_t length);

  /// @brief Method SetCurveOrders, addr 0x3a5b74c, size 0x8, virtual true, abstract: false, final false
  inline bool SetCurveOrders(int32_t nodeID, int32_t partID, ::ArrayW<int32_t, ::Array<int32_t>*> orders, int32_t start, int32_t length);

  /// @brief Method SetFaceCount, addr 0x3a5b6cc, size 0x8, virtual true, abstract: false, final false
  inline bool SetFaceCount(int32_t nodeID, int32_t partID, ::ArrayW<int32_t, ::Array<int32_t>*> faceCounts, int32_t start, int32_t length);

  /// @brief Method SetGroupMembership, addr 0x3a5b724, size 0x8, virtual true, abstract: false, final false
  inline bool SetGroupMembership(int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> membershipArray,
                                 int32_t start, int32_t length);

  /// @brief Method SetHeightFieldData, addr 0x3a5ba6c, size 0x8, virtual true, abstract: false, final false
  inline bool SetHeightFieldData(int32_t nodeID, int32_t partID, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> valuesArray, int32_t start, int32_t length);

  /// @brief Method SetImageInfo, addr 0x3a5b77c, size 0x8, virtual true, abstract: false, final false
  inline bool SetImageInfo(int32_t materialNodeID, ::ByRef<::HoudiniEngineUnity::HAPI_ImageInfo> imageInfo);

  /// @brief Method SetLibraryErrorMsg, addr 0x3a5b218, size 0xb8, virtual true, abstract: false, final false
  inline void SetLibraryErrorMsg(bool bLogError);

  /// @brief Method SetNodeDisplay, addr 0x3a5bb28, size 0x8, virtual true, abstract: false, final false
  inline bool SetNodeDisplay(int32_t node_id, int32_t onOff);

  /// @brief Method SetObjectTransform, addr 0x3a5b5a0, size 0x8, virtual true, abstract: false, final false
  inline bool SetObjectTransform(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HAPI_TransformEuler> hapiTransform);

  /// @brief Method SetParamFloatValue, addr 0x3a5b8d4, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamFloatValue(int32_t nodeID, ::StringW paramName, int32_t index, float_t value);

  /// @brief Method SetParamFloatValues, addr 0x3a5b8cc, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamFloatValues(int32_t nodeID, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> values, int32_t start, int32_t length);

  /// @brief Method SetParamIntValue, addr 0x3a5b8c4, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamIntValue(int32_t nodeID, ::StringW paramName, int32_t index, int32_t value);

  /// @brief Method SetParamIntValues, addr 0x3a5b8bc, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamIntValues(int32_t nodeID, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t start, int32_t length);

  /// @brief Method SetParamNodeValue, addr 0x3a5b8ec, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamNodeValue(int32_t nodeID, ::StringW paramName, int32_t nodeValueID);

  /// @brief Method SetParamStringValue, addr 0x3a5b8e4, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamStringValue(int32_t nodeID, ::StringW parmName, ::StringW parmValue, int32_t index);

  /// @brief Method SetParamStringValue, addr 0x3a5b8dc, size 0x8, virtual true, abstract: false, final false
  inline bool SetParamStringValue(int32_t nodeID, ::StringW strValue, int32_t parmID, int32_t index);

  /// @brief Method SetPartInfo, addr 0x3a5b6c4, size 0x8, virtual true, abstract: false, final false
  inline bool SetPartInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetPreset, addr 0x3a5b9cc, size 0x8, virtual true, abstract: false, final false
  inline bool SetPreset(int32_t nodeID, ::ArrayW<uint8_t, ::Array<uint8_t>*> presetData);

  /// @brief Method SetServerEnvString, addr 0x3a5b3c0, size 0x4, virtual true, abstract: false, final false
  inline void SetServerEnvString(::StringW name, ::StringW value);

  /// @brief Method SetSessionConnectionErrorMsg, addr 0x3a5af74, size 0x264, virtual true, abstract: false, final false
  inline void SetSessionConnectionErrorMsg(::StringW introMsg, ::HoudiniEngineUnity::HAPI_Result result, bool bIsHARSRunning, bool bLogError);

  /// @brief Method SetSessionData, addr 0x3a5b340, size 0x8, virtual false, abstract: false, final false
  inline void SetSessionData(::HoudiniEngineUnity::HEU_SessionData* sessionData);

  /// @brief Method SetSessionErrorMsg, addr 0x3a5af54, size 0x20, virtual true, abstract: false, final false
  inline void SetSessionErrorMsg(::StringW msg, bool bLogError);

  /// @brief Method SetSessionSync, addr 0x3a5bb00, size 0x8, virtual true, abstract: false, final false
  inline bool SetSessionSync(bool enable);

  /// @brief Method SetSessionSyncInfo, addr 0x3a5bb20, size 0x8, virtual true, abstract: false, final false
  inline bool SetSessionSyncInfo(::ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncInfo);

  /// @brief Method SetTime, addr 0x3a5b4b0, size 0x8, virtual true, abstract: false, final false
  inline bool SetTime(float_t time);

  /// @brief Method SetUseHoudiniTime, addr 0x3a5b4c0, size 0x8, virtual true, abstract: false, final false
  inline bool SetUseHoudiniTime(bool enable);

  /// @brief Method SetVertexList, addr 0x3a5b6d4, size 0x8, virtual true, abstract: false, final false
  inline bool SetVertexList(int32_t nodeID, int32_t partID, ::ArrayW<int32_t, ::Array<int32_t>*> vertexList, int32_t start, int32_t length);

  /// @brief Method SetViewport, addr 0x3a5bb10, size 0x8, virtual true, abstract: false, final false
  inline bool SetViewport(::ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewport);

  /// @brief Method SetVolumeInfo, addr 0x3a5b9e4, size 0x8, virtual true, abstract: false, final false
  inline bool SetVolumeInfo(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo);

  /// @brief Method SetVolumeTileFloatData, addr 0x3a5b9ec, size 0x4c, virtual true, abstract: false, final false
  inline bool SetVolumeTileFloatData(int32_t nodeID, int32_t partID, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeTileInfo> tileInfo, ::ArrayW<float_t, ::Array<float_t>*> valuesArray, int32_t length);

  /// @brief Method UnregisterAsset, addr 0x3a5af2c, size 0x4, virtual true, abstract: false, final false
  inline void UnregisterAsset(int32_t id);

  constexpr ::HoudiniEngineUnity::HAPI_Result const& __cordl_internal_get__LastCallResultCode_k__BackingField() const;

  constexpr ::HoudiniEngineUnity::HAPI_Result& __cordl_internal_get__LastCallResultCode_k__BackingField();

  constexpr bool const& __cordl_internal_get__LogErrorOverride_k__BackingField() const;

  constexpr bool& __cordl_internal_get__LogErrorOverride_k__BackingField();

  constexpr bool const& __cordl_internal_get__ThrowErrorOverride_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ThrowErrorOverride_k__BackingField();

  constexpr bool const& __cordl_internal_get__UserNotifiedSessionInvalid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UserNotifiedSessionInvalid_k__BackingField();

  constexpr ::HoudiniEngineUnity::HEU_SessionData* const& __cordl_internal_get__sessionData() const;

  constexpr ::HoudiniEngineUnity::HEU_SessionData*& __cordl_internal_get__sessionData();

  constexpr ::StringW const& __cordl_internal_get__sessionErrorMsg() const;

  constexpr ::StringW& __cordl_internal_get__sessionErrorMsg();

  constexpr void __cordl_internal_set__LastCallResultCode_k__BackingField(::HoudiniEngineUnity::HAPI_Result value);

  constexpr void __cordl_internal_set__LogErrorOverride_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ThrowErrorOverride_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UserNotifiedSessionInvalid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__sessionData(::HoudiniEngineUnity::HEU_SessionData* value);

  constexpr void __cordl_internal_set__sessionErrorMsg(::StringW value);

  /// @brief Method .ctor, addr 0x3a5af34, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConnectionState, addr 0x3a5ae58, size 0x18, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::SessionConnectionState get_ConnectionState();

  /// @brief Method get_LastCallResultCode, addr 0x3a5af08, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_Result get_LastCallResultCode();

  /// @brief Method get_LogErrorOverride, addr 0x3a5aeb0, size 0x8, virtual false, abstract: false, final false
  inline bool get_LogErrorOverride();

  /// @brief Method get_ThisSessionMode, addr 0x3a5ae80, size 0x18, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::SessionMode get_ThisSessionMode();

  /// @brief Method get_ThrowErrorOverride, addr 0x3a5aec4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ThrowErrorOverride();

  /// @brief Method get_UserNotifiedSessionInvalid, addr 0x3a5ae44, size 0x8, virtual false, abstract: false, final false
  inline bool get_UserNotifiedSessionInvalid();

  /// @brief Method set_ConnectionState, addr 0x3a5ae70, size 0x10, virtual false, abstract: false, final false
  inline void set_ConnectionState(::HoudiniEngineUnity::SessionConnectionState value);

  /// @brief Method set_LastCallResultCode, addr 0x3a5af10, size 0x8, virtual false, abstract: false, final false
  inline void set_LastCallResultCode(::HoudiniEngineUnity::HAPI_Result value);

  /// @brief Method set_LogErrorOverride, addr 0x3a5aeb8, size 0xc, virtual false, abstract: false, final false
  inline void set_LogErrorOverride(bool value);

  /// @brief Method set_ThisSessionMode, addr 0x3a5ae98, size 0x10, virtual false, abstract: false, final false
  inline void set_ThisSessionMode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method set_ThrowErrorOverride, addr 0x3a5aecc, size 0xc, virtual false, abstract: false, final false
  inline void set_ThrowErrorOverride(bool value);

  /// @brief Method set_UserNotifiedSessionInvalid, addr 0x3a5ae4c, size 0xc, virtual false, abstract: false, final false
  inline void set_UserNotifiedSessionInvalid(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionBase(HEU_SessionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionBase(HEU_SessionBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11766 };

  /// @brief Field _sessionData, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_SessionData* ____sessionData;

  /// @brief Field <UserNotifiedSessionInvalid>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____UserNotifiedSessionInvalid_k__BackingField;

  /// @brief Field _sessionErrorMsg, offset: 0x20, size: 0x8, def value: None
  ::StringW ____sessionErrorMsg;

  /// @brief Field <LogErrorOverride>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____LogErrorOverride_k__BackingField;

  /// @brief Field <ThrowErrorOverride>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____ThrowErrorOverride_k__BackingField;

  /// @brief Field <LastCallResultCode>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_Result ____LastCallResultCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionBase, ____sessionData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionBase, ____UserNotifiedSessionInvalid_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionBase, ____sessionErrorMsg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionBase, ____LogErrorOverride_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionBase, ____ThrowErrorOverride_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionBase, ____LastCallResultCode_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionBase, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionBase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionBase*, "HoudiniEngineUnity", "HEU_SessionBase");
