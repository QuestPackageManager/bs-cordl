#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionManager)
namespace HoudiniEngineUnity {
class __HEU_SessionManager__CreateSessionFromTypeDelegate;
}
namespace HoudiniEngineUnity {
struct HAPI_License;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace System {
class Type;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionManager;
}
namespace HoudiniEngineUnity {
class __HEU_SessionManager__CreateSessionFromTypeDelegate;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionManager);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate);
// Type: ::CreateSessionFromTypeDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9786))
// CS Name: ::HEU_SessionManager::CreateSessionFromTypeDelegate*
class CORDL_TYPE __HEU_SessionManager__CreateSessionFromTypeDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x21a5264, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x21a5390, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* Invoke(::System::Type* type);

  /// @brief Method BeginInvoke, addr 0x21a53a4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Type* type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x21a53c4, size 0xc, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_SessionManager__CreateSessionFromTypeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_SessionManager__CreateSessionFromTypeDelegate(__HEU_SessionManager__CreateSessionFromTypeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_SessionManager__CreateSessionFromTypeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_SessionManager__CreateSessionFromTypeDelegate(__HEU_SessionManager__CreateSessionFromTypeDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_SessionManager__CreateSessionFromTypeDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_SessionManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9787))
// CS Name: ::HoudiniEngineUnity::HEU_SessionManager*
class CORDL_TYPE HEU_SessionManager : public ::System::Object {
public:
  // Declarations
  using CreateSessionFromTypeDelegate = ::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate;

  /// @brief Field _defaultSession, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultSession, put = setStaticF__defaultSession))::HoudiniEngineUnity::HEU_SessionBase* _defaultSession;

  /// @brief Field _sessionMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__sessionMap, put = setStaticF__sessionMap))::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* _sessionMap;

  /// @brief Field _createSessionFromTypeDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__createSessionFromTypeDelegate,
                             put = setStaticF__createSessionFromTypeDelegate))::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate* _createSessionFromTypeDelegate;

  static inline void setStaticF__defaultSession(::HoudiniEngineUnity::HEU_SessionBase* value);

  static inline ::HoudiniEngineUnity::HEU_SessionBase* getStaticF__defaultSession();

  static inline void setStaticF__sessionMap(::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* getStaticF__sessionMap();

  static inline void setStaticF__createSessionFromTypeDelegate(::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate* value);

  static inline ::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate* getStaticF__createSessionFromTypeDelegate();

  /// @brief Method CreateSessionObject, addr 0x21a2a94, size 0x64, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionObject();

  /// @brief Method CreateSessionFromType, addr 0x21a2af8, size 0x64, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionFromType(::System::Type* type);

  /// @brief Method GetDefaultSession, addr 0x219d4b4, size 0x88, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetDefaultSession();

  /// @brief Method RegisterSession, addr 0x21a2c00, size 0x94, virtual false, abstract: false, final false
  static inline void RegisterSession(int64_t sessionID, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UnregisterSession, addr 0x21a2d64, size 0x84, virtual false, abstract: false, final false
  static inline void UnregisterSession(int64_t sessionID);

  /// @brief Method GetSessionWithID, addr 0x21a2de8, size 0x98, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetSessionWithID(int64_t sessionID);

  /// @brief Method SaveAllSessionData, addr 0x21a2c94, size 0xd0, virtual false, abstract: false, final false
  static inline void SaveAllSessionData();

  /// @brief Method LoadAllSessionData, addr 0x21a2e80, size 0x470, virtual false, abstract: false, final false
  static inline void LoadAllSessionData();

  /// @brief Method InternalValidateSceneAssets, addr 0x21a32f0, size 0x154, virtual false, abstract: false, final false
  static inline void InternalValidateSceneAssets();

  /// @brief Method GetOrCreateDefaultSession, addr 0x219d22c, size 0x288, virtual false, abstract: false, final false
  /// @param bNotifyUserError: bool (default: true)
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetOrCreateDefaultSession(bool bNotifyUserError = true);

  /// @brief Method CreateInProcessSession, addr 0x21a356c, size 0x84, virtual false, abstract: false, final false
  static inline bool CreateInProcessSession();

  /// @brief Method CreateThriftSocketSession, addr 0x21a36a0, size 0xc4, virtual false, abstract: false, final false
  static inline bool CreateThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError);

  /// @brief Method CreateThriftPipeSession, addr 0x21a3444, size 0xb4, virtual false, abstract: false, final false
  static inline bool CreateThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout, bool logError);

  /// @brief Method CreateCustomSession, addr 0x21a3764, size 0x84, virtual false, abstract: false, final false
  static inline bool CreateCustomSession();

  /// @brief Method ConnectThriftSocketSession, addr 0x21a37e8, size 0xbc, virtual false, abstract: false, final false
  static inline bool ConnectThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout);

  /// @brief Method ConnectThriftPipeSession, addr 0x21a38a4, size 0xb4, virtual false, abstract: false, final false
  static inline bool ConnectThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout);

  /// @brief Method RecreateDefaultSessionData, addr 0x21a3958, size 0x60, virtual false, abstract: false, final false
  static inline void RecreateDefaultSessionData();

  /// @brief Method ConnectSessionSyncUsingThriftSocket, addr 0x21a39b8, size 0xe4, virtual false, abstract: false, final false
  static inline bool ConnectSessionSyncUsingThriftSocket(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError);

  /// @brief Method ConnectSessionSyncUsingThriftPipe, addr 0x21a3a9c, size 0xd4, virtual false, abstract: false, final false
  static inline bool ConnectSessionSyncUsingThriftPipe(::StringW pipeName, bool autoClose, float_t timeout, bool logError);

  /// @brief Method InitializeDefaultSession, addr 0x21a3b70, size 0xa0, virtual false, abstract: false, final false
  static inline bool InitializeDefaultSession();

  /// @brief Method CloseDefaultSession, addr 0x21a3c10, size 0xbc, virtual false, abstract: false, final false
  static inline bool CloseDefaultSession();

  /// @brief Method CloseAllSessions, addr 0x21a3ccc, size 0x2dc, virtual false, abstract: false, final false
  static inline void CloseAllSessions();

  /// @brief Method CheckAndCloseExistingSession, addr 0x21a35f0, size 0xb0, virtual false, abstract: false, final false
  static inline void CheckAndCloseExistingSession();

  /// @brief Method GetSessionData, addr 0x21a3fa8, size 0x58, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionData* GetSessionData();

  /// @brief Method GetSessionInfo, addr 0x21a4000, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW GetSessionInfo();

  /// @brief Method LoadStoredDefaultSession, addr 0x21a2b5c, size 0xa4, virtual false, abstract: false, final false
  static inline bool LoadStoredDefaultSession();

  /// @brief Method RestartSession, addr 0x21a4084, size 0x134, virtual false, abstract: false, final false
  static inline bool RestartSession();

  /// @brief Method ValidatePluginSession, addr 0x21a41b8, size 0x80, virtual false, abstract: false, final false
  /// @param session: ::HoudiniEngineUnity::HEU_SessionBase* (default: nullptr)
  static inline bool ValidatePluginSession(::HoudiniEngineUnity::HEU_SessionBase* session = nullptr);

  /// @brief Method GetLastSessionError, addr 0x21a34f8, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetLastSessionError();

  /// @brief Method CheckVersionMatch, addr 0x21a4238, size 0x70, virtual false, abstract: false, final false
  static inline bool CheckVersionMatch();

  /// @brief Method ClearConnectionError, addr 0x21a42a8, size 0x8, virtual false, abstract: false, final false
  static inline bool ClearConnectionError();

  /// @brief Method GetConnectionError, addr 0x21a1da4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetConnectionError(bool clear);

  /// @brief Method IsHARSProcessRunning, addr 0x21a42b0, size 0x94, virtual false, abstract: false, final false
  static inline bool IsHARSProcessRunning(int32_t processID);

  /// @brief Method LoadSessionFromHIP, addr 0x21a4344, size 0xe0, virtual false, abstract: false, final false
  /// @param session: ::HoudiniEngineUnity::HEU_SessionBase* (default: nullptr)
  static inline bool LoadSessionFromHIP(bool bCookNodes, ::HoudiniEngineUnity::HEU_SessionBase* session = nullptr);

  /// @brief Method SaveSessionToHIP, addr 0x21a4424, size 0xe0, virtual false, abstract: false, final false
  /// @param session: ::HoudiniEngineUnity::HEU_SessionBase* (default: nullptr)
  static inline bool SaveSessionToHIP(bool bLockNodes, ::HoudiniEngineUnity::HEU_SessionBase* session = nullptr);

  /// @brief Method GetHoudiniPathOnMacOS, addr 0x21a4504, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniPathOnMacOS(::StringW houdiniPath);

  /// @brief Method OpenHoudini, addr 0x21a4508, size 0x9c, virtual false, abstract: false, final false
  static inline bool OpenHoudini(::StringW args);

  /// @brief Method OpenSessionInHoudini, addr 0x21a45a4, size 0x314, virtual false, abstract: false, final false
  /// @param session: ::HoudiniEngineUnity::HEU_SessionBase* (default: nullptr)
  static inline bool OpenSessionInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session = nullptr);

  /// @brief Method GetCurrentLicense, addr 0x21a48b8, size 0x9c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_License GetCurrentLicense(bool bLogError);

  /// @brief Method GetString, addr 0x219a4f8, size 0xec, virtual false, abstract: false, final false
  /// @param session: ::HoudiniEngineUnity::HEU_SessionBase* (default: nullptr)
  static inline ::StringW GetString(int32_t stringHandle, ::HoudiniEngineUnity::HEU_SessionBase* session = nullptr);

  /// @brief Method GetStringValuesFromStringIndices, addr 0x21a4954, size 0x1ac, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringValuesFromStringIndices(::ArrayW<int32_t, ::Array<int32_t>*> strIndices);

  /// @brief Method GetGroupNames, addr 0x21a4b00, size 0x248, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetGroupNames(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType,
                                                                       bool isInstanced);

  /// @brief Method GetGroupMembership, addr 0x21a4d48, size 0x13c, virtual false, abstract: false, final false
  static inline bool GetGroupMembership(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName,
                                        ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> membership, bool isInstanced);

  /// @brief Method GetNodeName, addr 0x21a4e84, size 0xf0, virtual false, abstract: false, final false
  /// @param session: ::HoudiniEngineUnity::HEU_SessionBase* (default: nullptr)
  static inline ::StringW GetNodeName(int32_t nodeID, ::HoudiniEngineUnity::HEU_SessionBase* session = nullptr);

  /// @brief Method GetNodeInputName, addr 0x21a4f74, size 0xe4, virtual false, abstract: false, final false
  static inline bool GetNodeInputName(int32_t nodeID, int32_t inputIndex, ByRef<::StringW> inputName);

  /// @brief Method GetComposedChildNodeList, addr 0x219a5e4, size 0xf8, virtual false, abstract: false, final false
  static inline bool GetComposedChildNodeList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive,
                                              ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> childNodeIDs);

  /// @brief Method GetComposedObjectListMemorySafe, addr 0x21a5058, size 0xb8, virtual false, abstract: false, final false
  static inline bool GetComposedObjectListMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                     ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo, ::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>> objectInfos, int32_t start,
                                                     int32_t length);

  /// @brief Method GetComposedObjectTransformsMemorySafe, addr 0x21a5110, size 0xc8, virtual false, abstract: false, final false
  static inline bool GetComposedObjectTransformsMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder,
                                                           ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> transforms, int32_t start,
                                                           int32_t length);

  /// @brief Method GetUniqueMaterialShopName, addr 0x21a1574, size 0x218, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueMaterialShopName(int32_t assetID, int32_t materialID);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionManager(HEU_SessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionManager(HEU_SessionManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionManager, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionManager*, "HoudiniEngineUnity", "HEU_SessionManager");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_SessionManager__CreateSessionFromTypeDelegate*, "HoudiniEngineUnity", "HEU_SessionManager/CreateSessionFromTypeDelegate");
