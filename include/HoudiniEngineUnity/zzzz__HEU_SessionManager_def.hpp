#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionManager)
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace HoudiniEngineUnity {
struct HAPI_License;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
class HEU_SessionManager_CreateSessionFromTypeDelegate;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionManager;
}
namespace HoudiniEngineUnity {
class HEU_SessionManager_CreateSessionFromTypeDelegate;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionManager);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate);
// Dependencies System.MulticastDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionManager/CreateSessionFromTypeDelegate
class CORDL_TYPE HEU_SessionManager_CreateSessionFromTypeDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a60fa4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Type* type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a60fc4, size 0xc, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a60f90, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* Invoke(::System::Type* type);

  static inline ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a60e90, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionManager_CreateSessionFromTypeDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager_CreateSessionFromTypeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionManager_CreateSessionFromTypeDelegate(HEU_SessionManager_CreateSessionFromTypeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager_CreateSessionFromTypeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionManager_CreateSessionFromTypeDelegate(HEU_SessionManager_CreateSessionFromTypeDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11772 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionManager
class CORDL_TYPE HEU_SessionManager : public ::System::Object {
public:
  // Declarations
  using CreateSessionFromTypeDelegate = ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate;

  /// @brief Field _createSessionFromTypeDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__createSessionFromTypeDelegate,
                      put = setStaticF__createSessionFromTypeDelegate)) ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* _createSessionFromTypeDelegate;

  /// @brief Field _defaultSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaultSession, put = setStaticF__defaultSession)) ::HoudiniEngineUnity::HEU_SessionBase* _defaultSession;

  /// @brief Field _sessionMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__sessionMap, put = setStaticF__sessionMap)) ::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* _sessionMap;

  /// @brief Method CheckAndCloseExistingSession, addr 0x3a5f268, size 0xb0, virtual false, abstract: false, final false
  static inline void CheckAndCloseExistingSession();

  /// @brief Method CheckVersionMatch, addr 0x3a5feb4, size 0x70, virtual false, abstract: false, final false
  static inline bool CheckVersionMatch();

  /// @brief Method ClearConnectionError, addr 0x3a5ff24, size 0x8, virtual false, abstract: false, final false
  static inline bool ClearConnectionError();

  /// @brief Method CloseAllSessions, addr 0x3a5f944, size 0x2e0, virtual false, abstract: false, final false
  static inline void CloseAllSessions();

  /// @brief Method CloseDefaultSession, addr 0x3a5f888, size 0xbc, virtual false, abstract: false, final false
  static inline bool CloseDefaultSession();

  /// @brief Method ConnectSessionSyncUsingThriftPipe, addr 0x3a5f714, size 0xd4, virtual false, abstract: false, final false
  static inline bool ConnectSessionSyncUsingThriftPipe(::StringW pipeName, bool autoClose, float_t timeout, bool logError);

  /// @brief Method ConnectSessionSyncUsingThriftSocket, addr 0x3a5f630, size 0xe4, virtual false, abstract: false, final false
  static inline bool ConnectSessionSyncUsingThriftSocket(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError);

  /// @brief Method ConnectThriftPipeSession, addr 0x3a5f51c, size 0xb4, virtual false, abstract: false, final false
  static inline bool ConnectThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout);

  /// @brief Method ConnectThriftSocketSession, addr 0x3a5f460, size 0xbc, virtual false, abstract: false, final false
  static inline bool ConnectThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout);

  /// @brief Method CreateCustomSession, addr 0x3a5f3dc, size 0x84, virtual false, abstract: false, final false
  static inline bool CreateCustomSession();

  /// @brief Method CreateInProcessSession, addr 0x3a5f1e4, size 0x84, virtual false, abstract: false, final false
  static inline bool CreateInProcessSession();

  /// @brief Method CreateSessionFromType, addr 0x3a5e780, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionFromType(::System::Type* type);

  /// @brief Method CreateSessionObject, addr 0x3a5e724, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionObject();

  /// @brief Method CreateThriftPipeSession, addr 0x3a5f0bc, size 0xb4, virtual false, abstract: false, final false
  static inline bool CreateThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout, bool logError);

  /// @brief Method CreateThriftSocketSession, addr 0x3a5f318, size 0xc4, virtual false, abstract: false, final false
  static inline bool CreateThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError);

  /// @brief Method GetComposedChildNodeList, addr 0x3a56304, size 0xf8, virtual false, abstract: false, final false
  static inline bool GetComposedChildNodeList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive,
                                              ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> childNodeIDs);

  /// @brief Method GetComposedObjectListMemorySafe, addr 0x3a60c8c, size 0xb4, virtual false, abstract: false, final false
  static inline bool GetComposedObjectListMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                     ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo, ::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>> objectInfos, int32_t start,
                                                     int32_t length);

  /// @brief Method GetComposedObjectTransformsMemorySafe, addr 0x3a60d40, size 0xc4, virtual false, abstract: false, final false
  static inline bool GetComposedObjectTransformsMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder,
                                                           ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> transforms, int32_t start,
                                                           int32_t length);

  /// @brief Method GetConnectionError, addr 0x3a5da3c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetConnectionError(bool clear);

  /// @brief Method GetCurrentLicense, addr 0x3a6055c, size 0x9c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_License GetCurrentLicense(bool bLogError);

  /// @brief Method GetDefaultSession, addr 0x3a59134, size 0x88, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetDefaultSession();

  /// @brief Method GetGroupMembership, addr 0x3a60984, size 0x13c, virtual false, abstract: false, final false
  static inline bool GetGroupMembership(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName,
                                        ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> membership, bool isInstanced);

  /// @brief Method GetGroupNames, addr 0x3a6076c, size 0x218, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetGroupNames(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType,
                                                                       bool isInstanced);

  /// @brief Method GetHoudiniPathOnMacOS, addr 0x3a60180, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniPathOnMacOS(::StringW houdiniPath);

  /// @brief Method GetLastSessionError, addr 0x3a5f170, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetLastSessionError();

  /// @brief Method GetNodeInputName, addr 0x3a60ba8, size 0xe4, virtual false, abstract: false, final false
  static inline bool GetNodeInputName(int32_t nodeID, int32_t inputIndex, ::ByRef<::StringW> inputName);

  /// @brief Method GetNodeName, addr 0x3a60ac0, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetNodeName(int32_t nodeID, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetOrCreateDefaultSession, addr 0x3a58e9c, size 0x298, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetOrCreateDefaultSession(bool bNotifyUserError);

  /// @brief Method GetSessionData, addr 0x3a5fc24, size 0x58, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionData* GetSessionData();

  /// @brief Method GetSessionInfo, addr 0x3a5fc7c, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW GetSessionInfo();

  /// @brief Method GetSessionWithID, addr 0x3a5ea64, size 0x98, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetSessionWithID(int64_t sessionID);

  /// @brief Method GetString, addr 0x3a5621c, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetString(int32_t stringHandle, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetStringValuesFromStringIndices, addr 0x3a605f8, size 0x174, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringValuesFromStringIndices(::ArrayW<int32_t, ::Array<int32_t>*> strIndices);

  /// @brief Method GetUniqueMaterialShopName, addr 0x3a5d204, size 0x208, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueMaterialShopName(int32_t assetID, int32_t materialID);

  /// @brief Method InitializeDefaultSession, addr 0x3a5f7e8, size 0xa0, virtual false, abstract: false, final false
  static inline bool InitializeDefaultSession();

  /// @brief Method InternalValidateSceneAssets, addr 0x3a5ef68, size 0x154, virtual false, abstract: false, final false
  static inline void InternalValidateSceneAssets();

  /// @brief Method IsHARSProcessRunning, addr 0x3a5ff2c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsHARSProcessRunning(int32_t processID);

  /// @brief Method LoadAllSessionData, addr 0x3a5eafc, size 0x46c, virtual false, abstract: false, final false
  static inline void LoadAllSessionData();

  /// @brief Method LoadSessionFromHIP, addr 0x3a5ffc0, size 0xe0, virtual false, abstract: false, final false
  static inline bool LoadSessionFromHIP(bool bCookNodes, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method LoadStoredDefaultSession, addr 0x3a5e7dc, size 0xa4, virtual false, abstract: false, final false
  static inline bool LoadStoredDefaultSession();

  /// @brief Method OpenHoudini, addr 0x3a60184, size 0x9c, virtual false, abstract: false, final false
  static inline bool OpenHoudini(::StringW args);

  /// @brief Method OpenSessionInHoudini, addr 0x3a60220, size 0x33c, virtual false, abstract: false, final false
  static inline bool OpenSessionInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method RecreateDefaultSessionData, addr 0x3a5f5d0, size 0x60, virtual false, abstract: false, final false
  static inline void RecreateDefaultSessionData();

  /// @brief Method RegisterSession, addr 0x3a5e880, size 0x94, virtual false, abstract: false, final false
  static inline void RegisterSession(int64_t sessionID, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method RestartSession, addr 0x3a5fd00, size 0x134, virtual false, abstract: false, final false
  static inline bool RestartSession();

  /// @brief Method SaveAllSessionData, addr 0x3a5e914, size 0xcc, virtual false, abstract: false, final false
  static inline void SaveAllSessionData();

  /// @brief Method SaveSessionToHIP, addr 0x3a600a0, size 0xe0, virtual false, abstract: false, final false
  static inline bool SaveSessionToHIP(bool bLockNodes, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UnregisterSession, addr 0x3a5e9e0, size 0x84, virtual false, abstract: false, final false
  static inline void UnregisterSession(int64_t sessionID);

  /// @brief Method ValidatePluginSession, addr 0x3a5fe34, size 0x80, virtual false, abstract: false, final false
  static inline bool ValidatePluginSession(::HoudiniEngineUnity::HEU_SessionBase* session);

  static inline ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* getStaticF__createSessionFromTypeDelegate();

  static inline ::HoudiniEngineUnity::HEU_SessionBase* getStaticF__defaultSession();

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* getStaticF__sessionMap();

  static inline void setStaticF__createSessionFromTypeDelegate(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* value);

  static inline void setStaticF__defaultSession(::HoudiniEngineUnity::HEU_SessionBase* value);

  static inline void setStaticF__sessionMap(::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionManager(HEU_SessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionManager(HEU_SessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionManager, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionManager*, "HoudiniEngineUnity", "HEU_SessionManager");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate*, "HoudiniEngineUnity", "HEU_SessionManager/CreateSessionFromTypeDelegate");
