#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass12_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass13_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass20_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerConnection;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass12_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass13_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerConnection);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0);
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerConnection::<>c__DisplayClass12_0*
class CORDL_TYPE __PlayerConnection____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId))::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0* New_ctor();

  /// @brief Method <Register>b__0, addr 0x3426a5c, size 0x48, virtual false, abstract: false, final false
  inline bool _Register_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x3425d58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerConnection____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerConnection____c__DisplayClass12_0(__PlayerConnection____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerConnection____c__DisplayClass12_0(__PlayerConnection____c__DisplayClass12_0 const&) = delete;

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0, ___messageId) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerConnection::<>c__DisplayClass13_0*
class CORDL_TYPE __PlayerConnection____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId))::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0* New_ctor();

  /// @brief Method <Unregister>b__0, addr 0x3426aa4, size 0x48, virtual false, abstract: false, final false
  inline bool _Unregister_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x3425f08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerConnection____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerConnection____c__DisplayClass13_0(__PlayerConnection____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerConnection____c__DisplayClass13_0(__PlayerConnection____c__DisplayClass13_0 const&) = delete;

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0, ___messageId) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerConnection::<>c__DisplayClass20_0*
class CORDL_TYPE __PlayerConnection____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field msgReceived, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_msgReceived, put = __cordl_internal_set_msgReceived)) bool msgReceived;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0* New_ctor();

  /// @brief Method <BlockUntilRecvMsg>b__0, addr 0x3426aec, size 0xc, virtual false, abstract: false, final false
  inline void _BlockUntilRecvMsg_b__0(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  constexpr bool const& __cordl_internal_get_msgReceived() const;

  constexpr bool& __cordl_internal_get_msgReceived();

  constexpr void __cordl_internal_set_msgReceived(bool value);

  /// @brief Method .ctor, addr 0x3426688, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerConnection____c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerConnection____c__DisplayClass20_0(__PlayerConnection____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerConnection____c__DisplayClass20_0(__PlayerConnection____c__DisplayClass20_0 const&) = delete;

  /// @brief Field msgReceived, offset: 0x10, size: 0x1, def value: None
  bool ___msgReceived;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0, ___msgReceived) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: UnityEngine.Networking.PlayerConnection::PlayerConnection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::UnityEngine.Networking.PlayerConnection::PlayerConnection*
class CORDL_TYPE PlayerConnection : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0;

  using __c__DisplayClass13_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0;

  using __c__DisplayClass20_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0;

  /// @brief Field connectionNative, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_connectionNative, put = setStaticF_connectionNative))::UnityEngine::IPlayerEditorConnectionNative* connectionNative;

  __declspec(property(get = get_isConnected)) bool isConnected;

  /// @brief Field m_IsInitilized, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInitilized, put = __cordl_internal_set_m_IsInitilized)) bool m_IsInitilized;

  /// @brief Field m_PlayerEditorConnectionEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlayerEditorConnectionEvents,
                      put = __cordl_internal_set_m_PlayerEditorConnectionEvents))::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents;

  /// @brief Field m_connectedPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_connectedPlayers, put = __cordl_internal_set_m_connectedPlayers))::System::Collections::Generic::List_1<int32_t>* m_connectedPlayers;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> s_Instance;

  /// @brief Convert operator to "::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection"
  constexpr operator ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*() noexcept;

  /// @brief Method BlockUntilRecvMsg, addr 0x3426488, size 0x200, virtual false, abstract: false, final false
  inline bool BlockUntilRecvMsg(::System::Guid messageId, int32_t timeout);

  /// @brief Method ConnectedCallbackInternal, addr 0x3426844, size 0xdc, virtual false, abstract: false, final false
  static inline void ConnectedCallbackInternal(int32_t playerId);

  /// @brief Method CreateInstance, addr 0x34258b4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> CreateInstance();

  /// @brief Method DisconnectAll, addr 0x3426690, size 0x9c, virtual true, abstract: false, final true
  inline void DisconnectAll();

  /// @brief Method DisconnectedCallback, addr 0x3426920, size 0x94, virtual false, abstract: false, final false
  static inline void DisconnectedCallback(int32_t playerId);

  /// @brief Method GetConnectionNativeApi, addr 0x34259d4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::IPlayerEditorConnectionNative* GetConnectionNativeApi();

  /// @brief Method MessageCallbackInternal, addr 0x342672c, size 0x118, virtual false, abstract: false, final false
  static inline void MessageCallbackInternal(void* data, uint64_t size, uint64_t guid, ::StringW messageId);

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection* New_ctor();

  /// @brief Method OnEnable, addr 0x3425a54, size 0xc0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Register, addr 0x3425b14, size 0x244, virtual true, abstract: false, final true
  inline void Register(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);

  /// @brief Method RegisterConnection, addr 0x3425f10, size 0x1a0, virtual true, abstract: false, final true
  inline void RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback);

  /// @brief Method RegisterDisconnection, addr 0x34260b0, size 0x60, virtual true, abstract: false, final true
  inline void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback);

  /// @brief Method Send, addr 0x34261d0, size 0x15c, virtual true, abstract: false, final true
  inline void Send(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method TrySend, addr 0x342632c, size 0x15c, virtual true, abstract: false, final true
  inline bool TrySend(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Unregister, addr 0x3425d60, size 0x1a8, virtual true, abstract: false, final true
  inline void Unregister(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);

  /// @brief Method UnregisterConnection, addr 0x3426110, size 0x60, virtual true, abstract: false, final true
  inline void UnregisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback);

  /// @brief Method UnregisterDisconnection, addr 0x3426170, size 0x60, virtual true, abstract: false, final true
  inline void UnregisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback);

  constexpr bool const& __cordl_internal_get_m_IsInitilized() const;

  constexpr bool& __cordl_internal_get_m_IsInitilized();

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*& __cordl_internal_get_m_PlayerEditorConnectionEvents();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*> const& __cordl_internal_get_m_PlayerEditorConnectionEvents() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_connectedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_connectedPlayers() const;

  constexpr void __cordl_internal_set_m_IsInitilized(bool value);

  constexpr void __cordl_internal_set_m_PlayerEditorConnectionEvents(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* value);

  constexpr void __cordl_internal_set_m_connectedPlayers(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x34269b4, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::IPlayerEditorConnectionNative* getStaticF_connectionNative();

  static inline ::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x342581c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> get_instance();

  /// @brief Method get_isConnected, addr 0x3425938, size 0x9c, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Convert to "::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection"
  constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* i___UnityEngine__Networking__PlayerConnection__IEditorPlayerConnection() noexcept;

  static inline void setStaticF_connectionNative(::UnityEngine::IPlayerEditorConnectionNative* value);

  static inline void setStaticF_s_Instance(::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerConnection(PlayerConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerConnection(PlayerConnection const&) = delete;

  /// @brief Field m_PlayerEditorConnectionEvents, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* ___m_PlayerEditorConnectionEvents;

  /// @brief Field m_connectedPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_connectedPlayers;

  /// @brief Field m_IsInitilized, offset: 0x28, size: 0x1, def value: None
  bool ___m_IsInitilized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerConnection, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerConnection, ___m_PlayerEditorConnectionEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerConnection, ___m_connectedPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerConnection, ___m_IsInitilized) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerConnection*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass12_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass20_0");
