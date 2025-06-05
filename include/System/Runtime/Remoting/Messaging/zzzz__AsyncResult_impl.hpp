#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/AsyncResult.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_impl.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_impl.hpp"
#include "System/zzzz__IAsyncResult_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__AsyncResult_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce7664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce766c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3ce7674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce778c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce7794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_EndInvokeCalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce779c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "get_EndInvokeCalled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_EndInvokeCalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ce77a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_EndInvokeCalled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce77b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_NextSink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce77b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "get_NextSink", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ce77c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.GetReplyMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce77f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SetMessageCtrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessageCtrl*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce7800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SetCompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ce7808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "SetCompletedSynchronously",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3cd9160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "EndInvoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3ce7814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_CallMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::MonoMethodMessage* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce79a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "get_CallMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_CallMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce79ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_CallMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ce79b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                 "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ce79bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::Invoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ce79b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "Invoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_async_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_state;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_async_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_state;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_async_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::WaitHandle*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::System::Threading::WaitHandle* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_handle(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_async_delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_delegate;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_async_delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_delegate;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_async_delegate(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::IntPtr const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_data(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_object_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_data;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_object_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_data;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_object_data(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___object_data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_sync_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sync_completed;
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_sync_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sync_completed;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_sync_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sync_completed = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_endinvoke_called() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endinvoke_called;
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_endinvoke_called() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endinvoke_called;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_endinvoke_called(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endinvoke_called = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_async_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_callback;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_async_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_callback;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_async_callback(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr ::System::Threading::ExecutionContext* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_current(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_original() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original;
}
constexpr ::System::Threading::ExecutionContext* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_original() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_original(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___original)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_add_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___add_time;
}
constexpr int64_t const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_add_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___add_time;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_add_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___add_time = value;
}
constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_call_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_message;
}
constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_call_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_message;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_call_message(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___call_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageCtrl*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_message_ctrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message_ctrl;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageCtrl* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_message_ctrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message_ctrl;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_message_ctrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message_ctrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_reply_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reply_message;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_reply_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reply_message;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_reply_message(::System::Runtime::Remoting::Messaging::IMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reply_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::WaitCallback*& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_orig_cb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orig_cb;
}
constexpr ::System::Threading::WaitCallback* const& System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_get_orig_cb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orig_cb;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__cordl_internal_set_orig_cb(::System::Threading::WaitCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___orig_cb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "get_EndInvokeCalled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_EndInvokeCalled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "get_NextSink", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                                                                    ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* mc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mc);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously(bool completed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "SetCompletedSynchronously",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completed);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "EndInvoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "get_CallMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::MonoMethodMessage*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_CallMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                               "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tae);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "Invoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::AsyncResult*>());
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::AsyncResult::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::Runtime::Remoting::Messaging::AsyncResult::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::AsyncResult::AsyncResult() {}
