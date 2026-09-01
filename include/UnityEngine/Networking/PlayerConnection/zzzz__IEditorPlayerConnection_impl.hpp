#pragma once
// IWYU pragma private; include "UnityEngine\Networking\PlayerConnection\IEditorPlayerConnection.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(
    ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*)>(
    &::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.RegisterConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(
    &::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.RegisterDisconnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(
    &::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::System::Guid, ::ArrayW<uint8_t>)>(
    &::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 3 }));
    return ___internal_method;
  }
};
inline void
UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register(::System::Guid messageId,
                                                                             ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId, callback);
}
inline void UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send(::System::Guid messageId, ::ArrayW<uint8_t> data) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId, data);
}
