#pragma once
// IWYU pragma private; include "UnityEngine\Networking\PlayerConnection\PlayerConnection.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__PlayerConnection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__PlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__PlayerEditorConnectionEvents_def.hpp"
#include "UnityEngine/zzzz__IPlayerEditorConnectionNative_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b02154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0._Register_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::*)(
    ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::_Register_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b03408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0*>(),
                                                { "<Register>b__0", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::__cordl_internal_get_messageId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageId;
}
constexpr ::System::Guid const& UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::__cordl_internal_get_messageId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageId;
}
constexpr void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::__cordl_internal_set_messageId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageId = value;
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool
UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::_Register_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0*>(),
                                              { "<Register>b__0", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0* UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass12_0::PlayerConnection___c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b024d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0._Unregister_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::*)(
    ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::_Unregister_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b0349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0*>(),
                                                { "<Unregister>b__0", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::__cordl_internal_get_messageId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageId;
}
constexpr ::System::Guid const& UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::__cordl_internal_get_messageId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageId;
}
constexpr void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::__cordl_internal_set_messageId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageId = value;
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::_Unregister_b__0(
    ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0*>(),
                                              { "<Unregister>b__0", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0* UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass13_0::PlayerConnection___c__DisplayClass13_0() {}
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b02dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0._BlockUntilRecvMsg_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::*)(
    ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::_BlockUntilRecvMsg_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b03504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0*>(),
                                                             { "<BlockUntilRecvMsg>b__0", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::__cordl_internal_get_msgReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msgReceived;
}
constexpr bool const& UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::__cordl_internal_get_msgReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msgReceived;
}
constexpr void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::__cordl_internal_set_msgReceived(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msgReceived = value;
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::_BlockUntilRecvMsg_b__0(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0*>(),
                                                           { "<BlockUntilRecvMsg>b__0", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0* UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::PlayerConnection___c__DisplayClass20_0::PlayerConnection___c__DisplayClass20_0() {}
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> (*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::get_instance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b01be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::get_isConnected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b01d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "get_isConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> (*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::CreateInstance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b01c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "CreateInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b01e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.GetConnectionNativeApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IPlayerEditorConnectionNative* (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::GetConnectionNativeApi)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b01dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "GetConnectionNativeApi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(
    ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*)>(&::UnityEngine::Networking::PlayerConnection::PlayerConnection::Register)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6b01ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
            { "Register", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(
    ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::Unregister)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6b02324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
            { "Unregister", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.RegisterConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::RegisterConnection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b02620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "RegisterConnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.RegisterDisconnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::RegisterDisconnection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b0276c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "RegisterDisconnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.UnregisterConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::UnregisterConnection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b027d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "UnregisterConnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.UnregisterDisconnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::UnregisterDisconnection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b02844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "UnregisterDisconnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::System::Guid, ::ArrayW<uint8_t>)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::Send)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b028b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "Send", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.TrySend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::System::Guid, ::ArrayW<uint8_t>)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::TrySend)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b02a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "TrySend", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.BlockUntilRecvMsg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)(::System::Guid, int32_t)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::BlockUntilRecvMsg)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6b02b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                           { "BlockUntilRecvMsg", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.DisconnectAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::DisconnectAll)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b02ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "DisconnectAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.MessageCallbackInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint64_t, uint64_t, ::StringW)>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::MessageCallbackInternal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b02e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                            { "MessageCallbackInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.ConnectedCallbackInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Networking::PlayerConnection::PlayerConnection::ConnectedCallbackInternal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b03130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "ConnectedCallbackInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection.DisconnectedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Networking::PlayerConnection::PlayerConnection::DisconnectedCallback)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b03210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "DisconnectedCallback", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::PlayerConnection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::PlayerConnection::*)()>(
    &::UnityEngine::Networking::PlayerConnection::PlayerConnection::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b032ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*&
UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_get_m_PlayerEditorConnectionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerEditorConnectionEvents;
}
constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* const&
UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_get_m_PlayerEditorConnectionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerEditorConnectionEvents;
}
constexpr void
UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_set_m_PlayerEditorConnectionEvents(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerEditorConnectionEvents = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_get_m_connectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_connectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_get_m_connectedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_connectedPlayers;
}
constexpr void UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_set_m_connectedPlayers(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_connectedPlayers = value;
}
constexpr bool& UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_get_m_IsInitilized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInitilized;
}
constexpr bool const& UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_get_m_IsInitilized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInitilized;
}
constexpr void UnityEngine::Networking::PlayerConnection::PlayerConnection::__cordl_internal_set_m_IsInitilized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsInitilized = value;
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::setStaticF_connectionNative(::UnityEngine::IPlayerEditorConnectionNative* value) {
  ::cordl_internals::setStaticField<::UnityEngine::IPlayerEditorConnectionNative*, "connectionNative", ::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(
      std::forward<::UnityEngine::IPlayerEditorConnectionNative*>(value));
}
inline ::UnityEngine::IPlayerEditorConnectionNative* UnityEngine::Networking::PlayerConnection::PlayerConnection::getStaticF_connectionNative() {
  return ::cordl_internals::getStaticField<::UnityEngine::IPlayerEditorConnectionNative*, "connectionNative", ::UnityEngine::Networking::PlayerConnection::PlayerConnection*>();
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::setStaticF_s_Instance(::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection>, "s_Instance", ::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(
      std::forward<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection>>(value));
}
inline ::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> UnityEngine::Networking::PlayerConnection::PlayerConnection::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection>, "s_Instance", ::UnityEngine::Networking::PlayerConnection::PlayerConnection*>();
}
inline ::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> UnityEngine::Networking::PlayerConnection::PlayerConnection::get_instance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection>>(nullptr, ___internal_method);
}
inline bool UnityEngine::Networking::PlayerConnection::PlayerConnection::get_isConnected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection> UnityEngine::Networking::PlayerConnection::PlayerConnection::CreateInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "CreateInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Networking::PlayerConnection::PlayerConnection>>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::IPlayerEditorConnectionNative* UnityEngine::Networking::PlayerConnection::PlayerConnection::GetConnectionNativeApi() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "GetConnectionNativeApi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IPlayerEditorConnectionNative*>(this, ___internal_method);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::Register(::System::Guid messageId,
                                                                                  ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
          { "Register", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId, callback);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::Unregister(::System::Guid messageId,
                                                                                    ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
          { "Unregister", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId, callback);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "RegisterConnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "RegisterDisconnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::UnregisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "UnregisterConnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::UnregisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "UnregisterDisconnection", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::Send(::System::Guid messageId, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "Send", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId, data);
}
inline bool UnityEngine::Networking::PlayerConnection::PlayerConnection::TrySend(::System::Guid messageId, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "TrySend", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, messageId, data);
}
inline bool UnityEngine::Networking::PlayerConnection::PlayerConnection::BlockUntilRecvMsg(::System::Guid messageId, int32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                                                                                         { "BlockUntilRecvMsg", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, messageId, timeout);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::DisconnectAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "DisconnectAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::MessageCallbackInternal(::System::IntPtr data, uint64_t size, uint64_t guid, ::StringW messageId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(),
                          { "MessageCallbackInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, size, guid, messageId);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::ConnectedCallbackInternal(int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "ConnectedCallbackInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::DisconnectedCallback(int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { "DisconnectedCallback", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId);
}
inline void UnityEngine::Networking::PlayerConnection::PlayerConnection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection* UnityEngine::Networking::PlayerConnection::PlayerConnection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::PlayerConnection::PlayerConnection*>());
}
/// @brief Convert operator to "::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection"
constexpr UnityEngine::Networking::PlayerConnection::PlayerConnection::operator ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*() noexcept {
  return static_cast<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection"
constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*
UnityEngine::Networking::PlayerConnection::PlayerConnection::i___UnityEngine__Networking__PlayerConnection__IEditorPlayerConnection() noexcept {
  return static_cast<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::PlayerConnection::PlayerConnection() {}
