#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/EnvoyTerminatorSink.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__EnvoyTerminatorSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
        &::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3cee974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get(), "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3ceea28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get(), "AsyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::*)()>(
    &::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ceeae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::setStaticF_Instance(::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get>(
      std::forward<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>(value));
}
inline ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get>();
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get(), "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get(), "AsyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
inline void System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>());
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::EnvoyTerminatorSink() {}
