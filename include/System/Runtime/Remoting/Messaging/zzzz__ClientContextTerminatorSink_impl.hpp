#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ClientContextTerminatorSink.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ClientContextTerminatorSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(
    ::System::Runtime::Remoting::Contexts::Context*)>(&::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ce0908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
        &::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3cec2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>::get(), "SyncProcessMessage",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3cec480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>::get(), "AsyncProcessMessage",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Contexts::Context*& System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Runtime::Remoting::Contexts::Context* const& System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::__cordl_internal_set__context(::System::Runtime::Remoting::Contexts::Context* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::_ctor(::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>::get(),
                                               "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                       ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>::get(), "AsyncProcessMessage",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*
System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::New_ctor(::System::Runtime::Remoting::Contexts::Context* ctx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*>(ctx));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::ClientContextTerminatorSink() {}
