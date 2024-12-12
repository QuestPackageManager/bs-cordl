#pragma once
// IWYU pragma private; include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEditorConnectionEvents)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents_ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents_MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents_MessageTypeSubscribers;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents___c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents___c__DisplayClass7_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents___c__DisplayClass8_0;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents_ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents_MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents_MessageTypeSubscribers;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents___c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents___c__DisplayClass7_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
class CORDL_TYPE PlayerEditorConnectionEvents_MessageEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*> {
public:
  // Declarations
  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* New_ctor();

  /// @brief Method .ctor, addr 0x48c12d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents_MessageEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents_MessageEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents_MessageEvent(PlayerEditorConnectionEvents_MessageEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents_MessageEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents_MessageEvent(PlayerEditorConnectionEvents_MessageEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
class CORDL_TYPE PlayerEditorConnectionEvents_ConnectionChangeEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x48c1324, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents_ConnectionChangeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents_ConnectionChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents_ConnectionChangeEvent(PlayerEditorConnectionEvents_ConnectionChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents_ConnectionChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents_ConnectionChangeEvent(PlayerEditorConnectionEvents_ConnectionChangeEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11164 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Dependencies System.Object
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
class CORDL_TYPE PlayerEditorConnectionEvents_MessageTypeSubscribers : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MessageTypeId, put = set_MessageTypeId)) ::System::Guid MessageTypeId;

  /// @brief Field m_messageTypeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_messageTypeId, put = __cordl_internal_set_m_messageTypeId)) ::StringW m_messageTypeId;

  /// @brief Field messageCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_messageCallback,
                      put = __cordl_internal_set_messageCallback)) ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* messageCallback;

  /// @brief Field subscriberCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_subscriberCount, put = __cordl_internal_set_subscriberCount)) int32_t subscriberCount;

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_messageTypeId() const;

  constexpr ::StringW& __cordl_internal_get_m_messageTypeId();

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* const& __cordl_internal_get_messageCallback() const;

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent*& __cordl_internal_get_messageCallback();

  constexpr int32_t const& __cordl_internal_get_subscriberCount() const;

  constexpr int32_t& __cordl_internal_get_subscriberCount();

  constexpr void __cordl_internal_set_m_messageTypeId(::StringW value);

  constexpr void __cordl_internal_set_messageCallback(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* value);

  constexpr void __cordl_internal_set_subscriberCount(int32_t value);

  /// @brief Method .ctor, addr 0x48c1248, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MessageTypeId, addr 0x48c11b8, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Guid get_MessageTypeId();

  /// @brief Method set_MessageTypeId, addr 0x48c12a8, size 0x2c, virtual false, abstract: false, final false
  inline void set_MessageTypeId(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents_MessageTypeSubscribers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents_MessageTypeSubscribers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents_MessageTypeSubscribers(PlayerEditorConnectionEvents_MessageTypeSubscribers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents_MessageTypeSubscribers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents_MessageTypeSubscribers(PlayerEditorConnectionEvents_MessageTypeSubscribers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11165 };

  /// @brief Field m_messageTypeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_messageTypeId;

  /// @brief Field subscriberCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___subscriberCount;

  /// @brief Field messageCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* ___messageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers, ___m_messageTypeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers, ___subscriberCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers, ___messageCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Dependencies System.Guid, System.Object
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0
class CORDL_TYPE PlayerEditorConnectionEvents___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId)) ::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0* New_ctor();

  /// @brief Method <InvokeMessageIdSubscribers>b__0, addr 0x48c136c, size 0x48, virtual false, abstract: false, final false
  inline bool _InvokeMessageIdSubscribers_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x48c1238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents___c__DisplayClass6_0(PlayerEditorConnectionEvents___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents___c__DisplayClass6_0(PlayerEditorConnectionEvents___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11166 };

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0, ___messageId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Dependencies System.Guid, System.Object
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0
class CORDL_TYPE PlayerEditorConnectionEvents___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId)) ::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0* New_ctor();

  /// @brief Method <AddAndCreate>b__0, addr 0x48c13b4, size 0x48, virtual false, abstract: false, final false
  inline bool _AddAndCreate_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x48c1240, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents___c__DisplayClass7_0(PlayerEditorConnectionEvents___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents___c__DisplayClass7_0(PlayerEditorConnectionEvents___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11167 };

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0, ___messageId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Dependencies System.Guid, System.Object
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
class CORDL_TYPE PlayerEditorConnectionEvents___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId)) ::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0* New_ctor();

  /// @brief Method <UnregisterManagedCallback>b__0, addr 0x48c13fc, size 0x48, virtual false, abstract: false, final false
  inline bool _UnregisterManagedCallback_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x48c131c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents___c__DisplayClass8_0(PlayerEditorConnectionEvents___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents___c__DisplayClass8_0(PlayerEditorConnectionEvents___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11168 };

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0, ___messageId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Dependencies System.Object
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
class CORDL_TYPE PlayerEditorConnectionEvents : public ::System::Object {
public:
  // Declarations
  using ConnectionChangeEvent = ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent;

  using MessageEvent = ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent;

  using MessageTypeSubscribers = ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers;

  using __c__DisplayClass6_0 = ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0;

  /// @brief Field connectionEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionEvent,
                      put = __cordl_internal_set_connectionEvent)) ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* connectionEvent;

  /// @brief Field disconnectionEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_disconnectionEvent,
                      put = __cordl_internal_set_disconnectionEvent)) ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* disconnectionEvent;

  /// @brief Field messageTypeSubscribers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_messageTypeSubscribers, put = __cordl_internal_set_messageTypeSubscribers)) ::System::Collections::Generic::List_1<
      ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>* messageTypeSubscribers;

  /// @brief Method AddAndCreate, addr 0x48bfbbc, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(::System::Guid messageId);

  /// @brief Method InvokeMessageIdSubscribers, addr 0x48c0a04, size 0x4a4, virtual false, abstract: false, final false
  inline void InvokeMessageIdSubscribers(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* New_ctor();

  /// @brief Method UnregisterManagedCallback, addr 0x48bff3c, size 0x168, virtual false, abstract: false, final false
  inline void UnregisterManagedCallback(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* const& __cordl_internal_get_connectionEvent() const;

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent*& __cordl_internal_get_connectionEvent();

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* const& __cordl_internal_get_disconnectionEvent() const;

  constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent*& __cordl_internal_get_disconnectionEvent();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>* const&
  __cordl_internal_get_messageTypeSubscribers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>*& __cordl_internal_get_messageTypeSubscribers();

  constexpr void __cordl_internal_set_connectionEvent(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* value);

  constexpr void __cordl_internal_set_disconnectionEvent(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* value);

  constexpr void
  __cordl_internal_set_messageTypeSubscribers(::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>* value);

  /// @brief Method .ctor, addr 0x48c10b8, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents(PlayerEditorConnectionEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents(PlayerEditorConnectionEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11169 };

  /// @brief Field messageTypeSubscribers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>* ___messageTypeSubscribers;

  /// @brief Field connectionEvent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* ___connectionEvent;

  /// @brief Field disconnectionEvent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* ___disconnectionEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, ___messageTypeSubscribers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, ___connectionEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, ___disconnectionEvent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/ConnectionChangeEvent");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageEvent");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/MessageTypeSubscribers");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass6_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass7_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass8_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass8_0");
