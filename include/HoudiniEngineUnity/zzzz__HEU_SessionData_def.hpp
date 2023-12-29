#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_Session_def.hpp"
#include "HoudiniEngineUnity/zzzz__SessionConnectionState_def.hpp"
#include "HoudiniEngineUnity/zzzz__SessionMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionData)
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
namespace HoudiniEngineUnity {
struct SessionMode;
}
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionData);
// Type: HoudiniEngineUnity::HEU_SessionData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9655)), TypeDefinitionIndex(TypeDefinitionIndex(9709)),
// TypeDefinitionIndex(TypeDefinitionIndex(9710))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9711)) CS Name: ::HoudiniEngineUnity::HEU_SessionData*
class CORDL_TYPE HEU_SessionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _HAPISession, offset 0x10, size 0x10
  __declspec(property(get = __get__HAPISession, put = __set__HAPISession))::HoudiniEngineUnity::HAPI_Session _HAPISession;

  /// @brief Field _serverProcessID, offset 0x20, size 0x4
  __declspec(property(get = __get__serverProcessID, put = __set__serverProcessID)) int32_t _serverProcessID;

  /// @brief Field _initialized, offset 0x24, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _pipeName, offset 0x28, size 0x8
  __declspec(property(get = __get__pipeName, put = __set__pipeName))::StringW _pipeName;

  /// @brief Field _port, offset 0x30, size 0x4
  __declspec(property(get = __get__port, put = __set__port)) int32_t _port;

  /// @brief Field _sessionClassType, offset 0x38, size 0x8
  __declspec(property(get = __get__sessionClassType, put = __set__sessionClassType))::StringW _sessionClassType;

  /// @brief Field _isDefaultSession, offset 0x40, size 0x1
  __declspec(property(get = __get__isDefaultSession, put = __set__isDefaultSession)) bool _isDefaultSession;

  /// @brief Field _sessionSync, offset 0x48, size 0x8
  __declspec(property(get = __get__sessionSync, put = __set__sessionSync))::HoudiniEngineUnity::HEU_SessionSyncData* _sessionSync;

  /// @brief Field _connectionState, offset 0x50, size 0x4
  __declspec(property(get = __get__connectionState, put = __set__connectionState))::HoudiniEngineUnity::SessionConnectionState _connectionState;

  /// @brief Field _sessionMode, offset 0x54, size 0x4
  __declspec(property(get = __get__sessionMode, put = __set__sessionMode))::HoudiniEngineUnity::SessionMode _sessionMode;

  /// @brief Field INVALID_SESSION_ID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INVALID_SESSION_ID, put = setStaticF_INVALID_SESSION_ID)) int64_t INVALID_SESSION_ID;

  __declspec(property(get = get_SessionID, put = set_SessionID)) int64_t SessionID;

  __declspec(property(get = get_ProcessID, put = set_ProcessID)) int32_t ProcessID;

  __declspec(property(get = get_SessionType, put = set_SessionType))::HoudiniEngineUnity::HAPI_SessionType SessionType;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_IsValidSessionID)) bool IsValidSessionID;

  __declspec(property(get = get_PipeName, put = set_PipeName))::StringW PipeName;

  __declspec(property(get = get_Port, put = set_Port)) int32_t Port;

  __declspec(property(get = get_SessionClassType, put = set_SessionClassType))::System::Type* SessionClassType;

  __declspec(property(get = get_IsDefaultSession, put = set_IsDefaultSession)) bool IsDefaultSession;

  __declspec(property(get = get_IsSessionSync)) bool IsSessionSync;

  __declspec(property(get = get_ThisConnectionMode, put = set_ThisConnectionMode))::HoudiniEngineUnity::SessionConnectionState ThisConnectionMode;

  __declspec(property(get = get_ThisSessionMode, put = set_ThisSessionMode))::HoudiniEngineUnity::SessionMode ThisSessionMode;

  constexpr ::HoudiniEngineUnity::HAPI_Session& __get__HAPISession();

  constexpr ::HoudiniEngineUnity::HAPI_Session const& __get__HAPISession() const;

  constexpr void __set__HAPISession(::HoudiniEngineUnity::HAPI_Session value);

  constexpr int32_t& __get__serverProcessID();

  constexpr int32_t const& __get__serverProcessID() const;

  constexpr void __set__serverProcessID(int32_t value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::StringW& __get__pipeName();

  constexpr ::StringW const& __get__pipeName() const;

  constexpr void __set__pipeName(::StringW value);

  constexpr int32_t& __get__port();

  constexpr int32_t const& __get__port() const;

  constexpr void __set__port(int32_t value);

  constexpr ::StringW& __get__sessionClassType();

  constexpr ::StringW const& __get__sessionClassType() const;

  constexpr void __set__sessionClassType(::StringW value);

  constexpr bool& __get__isDefaultSession();

  constexpr bool const& __get__isDefaultSession() const;

  constexpr void __set__isDefaultSession(bool value);

  constexpr ::HoudiniEngineUnity::HEU_SessionSyncData*& __get__sessionSync();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionSyncData*> const& __get__sessionSync() const;

  constexpr void __set__sessionSync(::HoudiniEngineUnity::HEU_SessionSyncData* value);

  constexpr ::HoudiniEngineUnity::SessionConnectionState& __get__connectionState();

  constexpr ::HoudiniEngineUnity::SessionConnectionState const& __get__connectionState() const;

  constexpr void __set__connectionState(::HoudiniEngineUnity::SessionConnectionState value);

  constexpr ::HoudiniEngineUnity::SessionMode& __get__sessionMode();

  constexpr ::HoudiniEngineUnity::SessionMode const& __get__sessionMode() const;

  constexpr void __set__sessionMode(::HoudiniEngineUnity::SessionMode value);

  static inline void setStaticF_INVALID_SESSION_ID(int64_t value);

  static inline int64_t getStaticF_INVALID_SESSION_ID();

  /// @brief Method GetOrCreateSessionSync addr 0x204bd60 size 0x68 virtual false final false
  inline ::HoudiniEngineUnity::HEU_SessionSyncData* GetOrCreateSessionSync();

  /// @brief Method GetSessionSync addr 0x204be74 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_SessionSyncData* GetSessionSync();

  /// @brief Method SetSessionSync addr 0x204be7c size 0x8 virtual false final false
  inline void SetSessionSync(::HoudiniEngineUnity::HEU_SessionSyncData* syncData);

  /// @brief Method get_SessionID addr 0x204be84 size 0x58 virtual false final false
  inline int64_t get_SessionID();

  /// @brief Method set_SessionID addr 0x204b568 size 0x8 virtual false final false
  inline void set_SessionID(int64_t value);

  /// @brief Method get_ProcessID addr 0x204bedc size 0x8 virtual false final false
  inline int32_t get_ProcessID();

  /// @brief Method set_ProcessID addr 0x204bee4 size 0x8 virtual false final false
  inline void set_ProcessID(int32_t value);

  /// @brief Method get_SessionType addr 0x204beec size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HAPI_SessionType get_SessionType();

  /// @brief Method set_SessionType addr 0x204bef4 size 0x8 virtual false final false
  inline void set_SessionType(::HoudiniEngineUnity::HAPI_SessionType value);

  /// @brief Method get_IsInitialized addr 0x204befc size 0x8 virtual false final false
  inline bool get_IsInitialized();

  /// @brief Method set_IsInitialized addr 0x204bf04 size 0xc virtual false final false
  inline void set_IsInitialized(bool value);

  /// @brief Method get_IsValidSessionID addr 0x204bf10 size 0x8 virtual false final false
  inline bool get_IsValidSessionID();

  /// @brief Method get_PipeName addr 0x204bf18 size 0x40 virtual false final false
  inline ::StringW get_PipeName();

  /// @brief Method set_PipeName addr 0x204bf58 size 0x8 virtual false final false
  inline void set_PipeName(::StringW value);

  /// @brief Method get_Port addr 0x204bf60 size 0x8 virtual false final false
  inline int32_t get_Port();

  /// @brief Method set_Port addr 0x204bf68 size 0x8 virtual false final false
  inline void set_Port(int32_t value);

  /// @brief Method get_SessionClassType addr 0x204bf70 size 0xa8 virtual false final false
  inline ::System::Type* get_SessionClassType();

  /// @brief Method set_SessionClassType addr 0x204c018 size 0x30 virtual false final false
  inline void set_SessionClassType(::System::Type* value);

  /// @brief Method get_IsDefaultSession addr 0x204c048 size 0x8 virtual false final false
  inline bool get_IsDefaultSession();

  /// @brief Method set_IsDefaultSession addr 0x204c050 size 0xc virtual false final false
  inline void set_IsDefaultSession(bool value);

  /// @brief Method get_IsSessionSync addr 0x204b128 size 0x10 virtual false final false
  inline bool get_IsSessionSync();

  /// @brief Method get_ThisConnectionMode addr 0x204c05c size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::SessionConnectionState get_ThisConnectionMode();

  /// @brief Method set_ThisConnectionMode addr 0x204c064 size 0x8 virtual false final false
  inline void set_ThisConnectionMode(::HoudiniEngineUnity::SessionConnectionState value);

  /// @brief Method get_ThisSessionMode addr 0x204c06c size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::SessionMode get_ThisSessionMode();

  /// @brief Method set_ThisSessionMode addr 0x204c074 size 0x8 virtual false final false
  inline void set_ThisSessionMode(::HoudiniEngineUnity::SessionMode value);

  static inline ::HoudiniEngineUnity::HEU_SessionData* New_ctor();

  /// @brief Method .ctor addr 0x204c07c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionData(HEU_SessionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionData(HEU_SessionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionData();

public:
  /// @brief Field _HAPISession, offset: 0x10, size: 0x10, def value: None
  ::HoudiniEngineUnity::HAPI_Session ____HAPISession;

  /// @brief Field _serverProcessID, offset: 0x20, size: 0x4, def value: None
  int32_t ____serverProcessID;

  /// @brief Field _initialized, offset: 0x24, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _pipeName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____pipeName;

  /// @brief Field _port, offset: 0x30, size: 0x4, def value: None
  int32_t ____port;

  /// @brief Field _sessionClassType, offset: 0x38, size: 0x8, def value: None
  ::StringW ____sessionClassType;

  /// @brief Field _isDefaultSession, offset: 0x40, size: 0x1, def value: None
  bool ____isDefaultSession;

  /// @brief Field _sessionSync, offset: 0x48, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_SessionSyncData* ____sessionSync;

  /// @brief Field _connectionState, offset: 0x50, size: 0x4, def value: None
  ::HoudiniEngineUnity::SessionConnectionState ____connectionState;

  /// @brief Field _sessionMode, offset: 0x54, size: 0x4, def value: None
  ::HoudiniEngineUnity::SessionMode ____sessionMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionData, 0x58>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____HAPISession) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____serverProcessID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____initialized) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____pipeName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____port) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____sessionClassType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____isDefaultSession) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____sessionSync) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____connectionState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_SessionData, ____sessionMode) == 0x54, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionData*, "HoudiniEngineUnity", "HEU_SessionData");
