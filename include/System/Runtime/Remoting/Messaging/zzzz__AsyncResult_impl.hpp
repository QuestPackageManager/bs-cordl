#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__AsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7850;

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
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24a7858;

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
  constexpr static std::size_t addrs = 0x24a797c;

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
  constexpr static std::size_t addrs = 0x24a7984;

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
  constexpr static std::size_t addrs = 0x24a798c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "get_EndInvokeCalled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_EndInvokeCalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a7994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_EndInvokeCalled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a79a0;

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
  constexpr static std::size_t addrs = 0x24a79a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "get_NextSink", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24a79b0;

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
  constexpr static std::size_t addrs = 0x24a79f0;

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
  constexpr static std::size_t addrs = 0x24a79f8;

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
  constexpr static std::size_t addrs = 0x24a7a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "SetCompletedSynchronously",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2497a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x24a7a0c;

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
  constexpr static std::size_t addrs = 0x24a7b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "get_CallMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_CallMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_CallMessage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a7bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                 "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a7bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::Invoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a7bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                               "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__get_async_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_state;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_async_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_state;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_async_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::WaitHandle*& System::Runtime::Remoting::Messaging::AsyncResult::__get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_handle(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__get_async_delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_delegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_async_delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_delegate;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_async_delegate(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr void*& System::Runtime::Remoting::Messaging::AsyncResult::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void* const& System::Runtime::Remoting::Messaging::AsyncResult::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_data(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__get_object_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_object_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_data;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_object_data(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___object_data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__get_sync_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sync_completed;
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__get_sync_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sync_completed;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_sync_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sync_completed = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__get_endinvoke_called() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endinvoke_called;
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__get_endinvoke_called() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endinvoke_called;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_endinvoke_called(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endinvoke_called = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::AsyncResult::__get_async_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_async_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_callback;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_async_callback(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Runtime::Remoting::Messaging::AsyncResult::__get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_current(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Runtime::Remoting::Messaging::AsyncResult::__get_original() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_original() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_original(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___original)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Remoting::Messaging::AsyncResult::__get_add_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___add_time;
}
constexpr int64_t const& System::Runtime::Remoting::Messaging::AsyncResult::__get_add_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___add_time;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_add_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___add_time = value;
}
constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage*& System::Runtime::Remoting::Messaging::AsyncResult::__get_call_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_message;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MonoMethodMessage*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_call_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_message;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_call_message(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___call_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageCtrl*& System::Runtime::Remoting::Messaging::AsyncResult::__get_message_ctrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message_ctrl;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageCtrl*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_message_ctrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message_ctrl;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_message_ctrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message_ctrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage*& System::Runtime::Remoting::Messaging::AsyncResult::__get_reply_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reply_message;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_reply_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reply_message;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_reply_message(::System::Runtime::Remoting::Messaging::IMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reply_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::WaitCallback*& System::Runtime::Remoting::Messaging::AsyncResult::__get_orig_cb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orig_cb;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitCallback*> const& System::Runtime::Remoting::Messaging::AsyncResult::__get_orig_cb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orig_cb;
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_orig_cb(::System::Threading::WaitCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___orig_cb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::AsyncResult*>());
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                             "get_EndInvokeCalled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_EndInvokeCalled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "get_NextSink", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completed);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "get_CallMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::MonoMethodMessage*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "set_CallMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tae);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                                                             "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::AsyncResult::AsyncResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
