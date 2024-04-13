#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncResult)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class MonoMethodMessage;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class AsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::AsyncResult);
// Type: System.Runtime.Remoting.Messaging::AsyncResult
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::AsyncResult*
class CORDL_TYPE AsyncResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AsyncDelegate))::System::Object* AsyncDelegate;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CallMessage, put = set_CallMessage))::System::Runtime::Remoting::Messaging::MonoMethodMessage* CallMessage;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_EndInvokeCalled, put = set_EndInvokeCalled)) bool EndInvokeCalled;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_NextSink))::System::Runtime::Remoting::Messaging::IMessageSink* NextSink;

  /// @brief Field add_time, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_add_time, put = __cordl_internal_set_add_time)) int64_t add_time;

  /// @brief Field async_callback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_async_callback, put = __cordl_internal_set_async_callback))::System::Object* async_callback;

  /// @brief Field async_delegate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_async_delegate, put = __cordl_internal_set_async_delegate))::System::Object* async_delegate;

  /// @brief Field async_state, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_async_state, put = __cordl_internal_set_async_state))::System::Object* async_state;

  /// @brief Field call_message, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_call_message, put = __cordl_internal_set_call_message))::System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message;

  /// @brief Field completed, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_completed, put = __cordl_internal_set_completed)) bool completed;

  /// @brief Field current, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::System::Threading::ExecutionContext* current;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) void* data;

  /// @brief Field endinvoke_called, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_endinvoke_called, put = __cordl_internal_set_endinvoke_called)) bool endinvoke_called;

  /// @brief Field handle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle))::System::Threading::WaitHandle* handle;

  /// @brief Field message_ctrl, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_message_ctrl, put = __cordl_internal_set_message_ctrl))::System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl;

  /// @brief Field object_data, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_object_data, put = __cordl_internal_set_object_data))::System::Object* object_data;

  /// @brief Field orig_cb, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_orig_cb, put = __cordl_internal_set_orig_cb))::System::Threading::WaitCallback* orig_cb;

  /// @brief Field original, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_original, put = __cordl_internal_set_original))::System::Threading::ExecutionContext* original;

  /// @brief Field reply_message, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_reply_message, put = __cordl_internal_set_reply_message))::System::Runtime::Remoting::Messaging::IMessage* reply_message;

  /// @brief Field sync_completed, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_sync_completed, put = __cordl_internal_set_sync_completed)) bool sync_completed;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x2729780, size 0x40, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method EndInvoke, addr 0x271aedc, size 0x110, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* EndInvoke();

  /// @brief Method GetReplyMessage, addr 0x27297c0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage();

  /// @brief Method Invoke, addr 0x2729980, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* Invoke();

  static inline ::System::Runtime::Remoting::Messaging::AsyncResult* New_ctor();

  /// @brief Method SetCompletedSynchronously, addr 0x27297d0, size 0xc, virtual false, abstract: false, final false
  inline void SetCompletedSynchronously(bool completed);

  /// @brief Method SetMessageCtrl, addr 0x27297c8, size 0x8, virtual true, abstract: false, final false
  inline void SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* mc);

  /// @brief Method SyncProcessMessage, addr 0x27297dc, size 0x190, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x272997c, size 0x4, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted, addr 0x2729984, size 0x4, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);

  constexpr int64_t const& __cordl_internal_get_add_time() const;

  constexpr int64_t& __cordl_internal_get_add_time();

  constexpr ::System::Object*& __cordl_internal_get_async_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_async_callback() const;

  constexpr ::System::Object*& __cordl_internal_get_async_delegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_async_delegate() const;

  constexpr ::System::Object*& __cordl_internal_get_async_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_async_state() const;

  constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage*& __cordl_internal_get_call_message();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MonoMethodMessage*> const& __cordl_internal_get_call_message() const;

  constexpr bool const& __cordl_internal_get_completed() const;

  constexpr bool& __cordl_internal_get_completed();

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get_current() const;

  constexpr void* const& __cordl_internal_get_data() const;

  constexpr void*& __cordl_internal_get_data();

  constexpr bool const& __cordl_internal_get_endinvoke_called() const;

  constexpr bool& __cordl_internal_get_endinvoke_called();

  constexpr ::System::Threading::WaitHandle*& __cordl_internal_get_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& __cordl_internal_get_handle() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageCtrl*& __cordl_internal_get_message_ctrl();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageCtrl*> const& __cordl_internal_get_message_ctrl() const;

  constexpr ::System::Object*& __cordl_internal_get_object_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_object_data() const;

  constexpr ::System::Threading::WaitCallback*& __cordl_internal_get_orig_cb();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitCallback*> const& __cordl_internal_get_orig_cb() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_original();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get_original() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessage*& __cordl_internal_get_reply_message();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> const& __cordl_internal_get_reply_message() const;

  constexpr bool const& __cordl_internal_get_sync_completed() const;

  constexpr bool& __cordl_internal_get_sync_completed();

  constexpr void __cordl_internal_set_add_time(int64_t value);

  constexpr void __cordl_internal_set_async_callback(::System::Object* value);

  constexpr void __cordl_internal_set_async_delegate(::System::Object* value);

  constexpr void __cordl_internal_set_async_state(::System::Object* value);

  constexpr void __cordl_internal_set_call_message(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value);

  constexpr void __cordl_internal_set_completed(bool value);

  constexpr void __cordl_internal_set_current(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_data(void* value);

  constexpr void __cordl_internal_set_endinvoke_called(bool value);

  constexpr void __cordl_internal_set_handle(::System::Threading::WaitHandle* value);

  constexpr void __cordl_internal_set_message_ctrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* value);

  constexpr void __cordl_internal_set_object_data(::System::Object* value);

  constexpr void __cordl_internal_set_orig_cb(::System::Threading::WaitCallback* value);

  constexpr void __cordl_internal_set_original(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_reply_message(::System::Runtime::Remoting::Messaging::IMessage* value);

  constexpr void __cordl_internal_set_sync_completed(bool value);

  /// @brief Method .ctor, addr 0x2729618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AsyncDelegate, addr 0x2729770, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_AsyncDelegate();

  /// @brief Method get_AsyncState, addr 0x2729620, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x2729628, size 0x124, virtual true, abstract: false, final false
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CallMessage, addr 0x272996c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage();

  /// @brief Method get_CompletedSynchronously, addr 0x272974c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CompletedSynchronously();

  /// @brief Method get_EndInvokeCalled, addr 0x272975c, size 0x8, virtual false, abstract: false, final false
  inline bool get_EndInvokeCalled();

  /// @brief Method get_IsCompleted, addr 0x2729754, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_NextSink, addr 0x2729778, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

  /// @brief Method set_CallMessage, addr 0x2729974, size 0x8, virtual false, abstract: false, final false
  inline void set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value);

  /// @brief Method set_EndInvokeCalled, addr 0x2729764, size 0xc, virtual false, abstract: false, final false
  inline void set_EndInvokeCalled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncResult(AsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncResult(AsyncResult const&) = delete;

  /// @brief Field async_state, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___async_state;

  /// @brief Field handle, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ___handle;

  /// @brief Field async_delegate, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___async_delegate;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  void* ___data;

  /// @brief Field object_data, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___object_data;

  /// @brief Field sync_completed, offset: 0x38, size: 0x1, def value: None
  bool ___sync_completed;

  /// @brief Field completed, offset: 0x39, size: 0x1, def value: None
  bool ___completed;

  /// @brief Field endinvoke_called, offset: 0x3a, size: 0x1, def value: None
  bool ___endinvoke_called;

  /// @brief Field async_callback, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___async_callback;

  /// @brief Field current, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___current;

  /// @brief Field original, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___original;

  /// @brief Field add_time, offset: 0x58, size: 0x8, def value: None
  int64_t ___add_time;

  /// @brief Field call_message, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::MonoMethodMessage* ___call_message;

  /// @brief Field message_ctrl, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageCtrl* ___message_ctrl;

  /// @brief Field reply_message, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessage* ___reply_message;

  /// @brief Field orig_cb, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::WaitCallback* ___orig_cb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::AsyncResult, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___async_state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___async_delegate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___object_data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___sync_completed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___completed) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___endinvoke_called) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___async_callback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___current) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___original) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___add_time) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___call_message) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___message_ctrl) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___reply_message) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::AsyncResult, ___orig_cb) == 0x78, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::AsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::AsyncResult*, "System.Runtime.Remoting.Messaging", "AsyncResult");
