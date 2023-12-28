#pragma once
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(
    ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*)>(
    &::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.RegisterConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(
    ::UnityEngine::Events::UnityAction_1<int32_t>*)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.RegisterDisconnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(
    ::UnityEngine::Events::UnityAction_1<int32_t>*)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(
    ::System::Guid, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 3));
    return ___internal_method;
  }
};
inline void
UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register(::System::Guid messageId,
                                                                             ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageId, callback);
}
inline void UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageId, data);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
