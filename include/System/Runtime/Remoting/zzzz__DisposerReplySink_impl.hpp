#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/DisposerReplySink.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__DisposerReplySink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::DisposerReplySink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::DisposerReplySink::*)(
    ::System::Runtime::Remoting::Messaging::IMessageSink*, ::System::IDisposable*)>(&::System::Runtime::Remoting::DisposerReplySink::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3cd6200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::DisposerReplySink*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::DisposerReplySink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::DisposerReplySink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::DisposerReplySink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3cd622c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::DisposerReplySink*>::get(), "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::DisposerReplySink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::DisposerReplySink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::DisposerReplySink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3cd6348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::DisposerReplySink*>::get(), "AsyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::DisposerReplySink::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::DisposerReplySink::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void System::Runtime::Remoting::DisposerReplySink::__cordl_internal_set__next(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IDisposable*& System::Runtime::Remoting::DisposerReplySink::__cordl_internal_get__disposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposable;
}
constexpr ::System::IDisposable* const& System::Runtime::Remoting::DisposerReplySink::__cordl_internal_get__disposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposable;
}
constexpr void System::Runtime::Remoting::DisposerReplySink::__cordl_internal_set__disposable(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disposable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::DisposerReplySink::_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::IDisposable* disposable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::DisposerReplySink*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, next, disposable);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::DisposerReplySink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::DisposerReplySink*>::get(), "SyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::DisposerReplySink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                                                               ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::DisposerReplySink*>::get(), "AsyncProcessMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::DisposerReplySink* System::Runtime::Remoting::DisposerReplySink::New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next,
                                                                                                              ::System::IDisposable* disposable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::DisposerReplySink*>(next, disposable));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::DisposerReplySink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::DisposerReplySink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::DisposerReplySink::DisposerReplySink() {}
