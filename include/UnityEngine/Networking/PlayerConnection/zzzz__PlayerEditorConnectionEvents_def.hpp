#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEditorConnectionEvents)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass7_0;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass8_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass7_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0);
// Type: ::MessageEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10312)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 5226 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10465))} Self: TypeDefinitionIndex(TypeDefinitionIndex(10301)) CS Name: ::PlayerEditorConnectionEvents::MessageEvent*
class CORDL_TYPE __PlayerEditorConnectionEvents__MessageEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*> {
public:
  // Declarations
  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* New_ctor();

  /// @brief Method .ctor addr 0x2ce7840 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents__MessageEvent(__PlayerEditorConnectionEvents__MessageEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents__MessageEvent(__PlayerEditorConnectionEvents__MessageEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents__MessageEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::ConnectionChangeEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 98 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10302))
// CS Name: ::PlayerEditorConnectionEvents::ConnectionChangeEvent*
class CORDL_TYPE __PlayerEditorConnectionEvents__ConnectionChangeEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* New_ctor();

  /// @brief Method .ctor addr 0x2ce7abc size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__ConnectionChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents__ConnectionChangeEvent(__PlayerEditorConnectionEvents__ConnectionChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__ConnectionChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents__ConnectionChangeEvent(__PlayerEditorConnectionEvents__ConnectionChangeEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents__ConnectionChangeEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::MessageTypeSubscribers
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10303))
// CS Name: ::PlayerEditorConnectionEvents::MessageTypeSubscribers*
class CORDL_TYPE __PlayerEditorConnectionEvents__MessageTypeSubscribers : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_messageTypeId, offset 0x10, size 0x8
  __declspec(property(get = __get_m_messageTypeId, put = __set_m_messageTypeId))::StringW m_messageTypeId;

  /// @brief Field subscriberCount, offset 0x18, size 0x4
  __declspec(property(get = __get_subscriberCount, put = __set_subscriberCount)) int32_t subscriberCount;

  /// @brief Field messageCallback, offset 0x20, size 0x8
  __declspec(property(get = __get_messageCallback, put = __set_messageCallback))::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* messageCallback;

  __declspec(property(get = get_MessageTypeId, put = set_MessageTypeId))::System::Guid MessageTypeId;

  constexpr ::StringW& __get_m_messageTypeId();

  constexpr ::StringW const& __get_m_messageTypeId() const;

  constexpr void __set_m_messageTypeId(::StringW value);

  constexpr int32_t& __get_subscriberCount();

  constexpr int32_t const& __get_subscriberCount() const;

  constexpr void __set_subscriberCount(int32_t value);

  constexpr ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent*& __get_messageCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent*> const& __get_messageCallback() const;

  constexpr void __set_messageCallback(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* value);

  /// @brief Method get_MessageTypeId addr 0x2ce7b04 size 0x2c virtual false final false
  inline ::System::Guid get_MessageTypeId();

  /// @brief Method set_MessageTypeId addr 0x2ce7814 size 0x2c virtual false final false
  inline void set_MessageTypeId(::System::Guid value);

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* New_ctor();

  /// @brief Method .ctor addr 0x2ce77ac size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageTypeSubscribers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents__MessageTypeSubscribers(__PlayerEditorConnectionEvents__MessageTypeSubscribers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageTypeSubscribers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents__MessageTypeSubscribers(__PlayerEditorConnectionEvents__MessageTypeSubscribers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents__MessageTypeSubscribers();

public:
  /// @brief Field m_messageTypeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_messageTypeId;

  /// @brief Field subscriberCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___subscriberCount;

  /// @brief Field messageCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* ___messageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10304))
// CS Name: ::PlayerEditorConnectionEvents::<>c__DisplayClass6_0*
class CORDL_TYPE __PlayerEditorConnectionEvents____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __get_messageId, put = __set_messageId))::System::Guid messageId;

  constexpr ::System::Guid& __get_messageId();

  constexpr ::System::Guid const& __get_messageId() const;

  constexpr void __set_messageId(::System::Guid value);

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x2ce75b4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InvokeMessageIdSubscribers>b__0 addr 0x2ce7b30 size 0x48 virtual false final false
  inline bool _InvokeMessageIdSubscribers_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents____c__DisplayClass6_0(__PlayerEditorConnectionEvents____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents____c__DisplayClass6_0(__PlayerEditorConnectionEvents____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents____c__DisplayClass6_0();

public:
  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10305))
// CS Name: ::PlayerEditorConnectionEvents::<>c__DisplayClass7_0*
class CORDL_TYPE __PlayerEditorConnectionEvents____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __get_messageId, put = __set_messageId))::System::Guid messageId;

  constexpr ::System::Guid& __get_messageId();

  constexpr ::System::Guid const& __get_messageId() const;

  constexpr void __set_messageId(::System::Guid value);

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x2ce77a4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AddAndCreate>b__0 addr 0x2ce7b78 size 0x48 virtual false final false
  inline bool _AddAndCreate_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents____c__DisplayClass7_0(__PlayerEditorConnectionEvents____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents____c__DisplayClass7_0(__PlayerEditorConnectionEvents____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents____c__DisplayClass7_0();

public:
  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10306))
// CS Name: ::PlayerEditorConnectionEvents::<>c__DisplayClass8_0*
class CORDL_TYPE __PlayerEditorConnectionEvents____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __get_messageId, put = __set_messageId))::System::Guid messageId;

  constexpr ::System::Guid& __get_messageId();

  constexpr ::System::Guid const& __get_messageId() const;

  constexpr void __set_messageId(::System::Guid value);

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x2ce79f4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <UnregisterManagedCallback>b__0 addr 0x2ce7bc0 size 0x48 virtual false final false
  inline bool _UnregisterManagedCallback_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents____c__DisplayClass8_0(__PlayerEditorConnectionEvents____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents____c__DisplayClass8_0(__PlayerEditorConnectionEvents____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents____c__DisplayClass8_0();

public:
  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: UnityEngine.Networking.PlayerConnection::PlayerEditorConnectionEvents
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10307))
// CS Name: ::UnityEngine.Networking.PlayerConnection::PlayerEditorConnectionEvents*
class CORDL_TYPE PlayerEditorConnectionEvents : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0;

  using __c__DisplayClass7_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0;

  using __c__DisplayClass6_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0;

  using MessageTypeSubscribers = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers;

  using ConnectionChangeEvent = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent;

  using MessageEvent = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent;

  /// @brief Field messageTypeSubscribers, offset 0x10, size 0x8
  __declspec(property(get = __get_messageTypeSubscribers, put = __set_messageTypeSubscribers))::System::Collections::Generic::List_1<
      ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>* messageTypeSubscribers;

  /// @brief Field connectionEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_connectionEvent, put = __set_connectionEvent))::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* connectionEvent;

  /// @brief Field disconnectionEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_disconnectionEvent,
                      put = __set_disconnectionEvent))::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* disconnectionEvent;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>*& __get_messageTypeSubscribers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>*> const&
  __get_messageTypeSubscribers() const;

  constexpr void __set_messageTypeSubscribers(::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>* value);

  constexpr ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*& __get_connectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*> const& __get_connectionEvent() const;

  constexpr void __set_connectionEvent(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* value);

  constexpr ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*& __get_disconnectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*> const& __get_disconnectionEvent() const;

  constexpr void __set_disconnectionEvent(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* value);

  /// @brief Method InvokeMessageIdSubscribers addr 0x2ce7110 size 0x4a4 virtual false final false
  inline void InvokeMessageIdSubscribers(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method AddAndCreate addr 0x2ce75c4 size 0x1e0 virtual false final false
  inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(::System::Guid messageId);

  /// @brief Method UnregisterManagedCallback addr 0x2ce7888 size 0x16c virtual false final false
  inline void UnregisterManagedCallback(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* New_ctor();

  /// @brief Method .ctor addr 0x2ce79fc size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents(PlayerEditorConnectionEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents(PlayerEditorConnectionEvents const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents();

public:
  /// @brief Field messageTypeSubscribers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>* ___messageTypeSubscribers;

  /// @brief Field connectionEvent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* ___connectionEvent;

  /// @brief Field disconnectionEvent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* ___disconnectionEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/ConnectionChangeEvent");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/MessageEvent");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/MessageTypeSubscribers");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass6_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass8_0");
