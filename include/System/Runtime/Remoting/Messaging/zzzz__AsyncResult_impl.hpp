#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/AsyncResult.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__AsyncResult_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3da90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3da94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b3da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_EndInvokeCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "get_EndInvokeCalled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_EndInvokeCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "set_EndInvokeCalled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_NextSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "get_NextSink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b3dbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.GetReplyMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SetMessageCtrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessageCtrl*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SetCompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "SetCompletedSynchronously", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b30184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "EndInvoke", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b3dc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_CallMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::MonoMethodMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "get_CallMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_CallMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3dde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                             { "set_CallMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3ddec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3ddf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                             { "System.Threading.IThreadPoolWorkItem.MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::Invoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3ddf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "Invoke", {}, {} })));
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
  this->___async_state = value;
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
  this->___handle = value;
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
  this->___async_delegate = value;
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
  this->___object_data = value;
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
  this->___async_callback = value;
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
  this->___current = value;
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
  this->___original = value;
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
  this->___call_message = value;
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
  this->___message_ctrl = value;
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
  this->___reply_message = value;
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
  this->___orig_cb = value;
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "get_EndInvokeCalled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "set_EndInvokeCalled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "get_NextSink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                                                                    ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* mc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mc);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously(bool completed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "SetCompletedSynchronously", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completed);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "EndInvoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "get_CallMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                                                         { "set_CallMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(),
                                                           { "System.Threading.IThreadPoolWorkItem.MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tae);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::Invoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::AsyncResult*>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::AsyncResult*>());
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
