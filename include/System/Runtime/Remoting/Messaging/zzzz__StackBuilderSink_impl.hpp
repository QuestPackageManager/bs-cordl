#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/StackBuilderSink.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__StackBuilderSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::MarshalByRefObject*, bool)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3cf2b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::StackBuilderSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3cf2c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3cf30c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "AsyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.ExecuteAsyncMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::ExecuteAsyncMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x3cf31dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "ExecuteAsyncMessage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.CheckParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(
    ::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::StackBuilderSink::CheckParameters)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x3cf2cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "CheckParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink._AsyncProcessMessage_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::_AsyncProcessMessage_b__4_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3cf33bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "<AsyncProcessMessage>b__4_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::MarshalByRefObject*& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr ::System::MarshalByRefObject* const& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr void System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_set__target(::System::MarshalByRefObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Proxies::RealProxy*& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__rp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rp;
}
constexpr ::System::Runtime::Remoting::Proxies::RealProxy* const& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__rp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rp;
}
constexpr void System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_set__rp(::System::Runtime::Remoting::Proxies::RealProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::_ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, forceInternalExecute);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::StackBuilderSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Messaging::StackBuilderSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "AsyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::ExecuteAsyncMessage(::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "ExecuteAsyncMessage",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ob);
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "CheckParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::_AsyncProcessMessage_b__4_0(::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::StackBuilderSink*>::get(), "<AsyncProcessMessage>b__4_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::System::Runtime::Remoting::Messaging::StackBuilderSink* System::Runtime::Remoting::Messaging::StackBuilderSink::New_ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(obj, forceInternalExecute));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::StackBuilderSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::StackBuilderSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::StackBuilderSink::StackBuilderSink() {}
