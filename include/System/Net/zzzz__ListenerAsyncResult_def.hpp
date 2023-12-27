#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListenerAsyncResult)
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ListenerAsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ListenerAsyncResult);
// Type: System.Net::ListenerAsyncResult
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 82, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9189))
// CS Name: ::System.Net::ListenerAsyncResult*
class CORDL_TYPE ListenerAsyncResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __get_handle, put = __set_handle))::System::Threading::ManualResetEvent* handle;

  /// @brief Field synch, offset 0x18, size 0x1
  __declspec(property(get = __get_synch, put = __set_synch)) bool synch;

  /// @brief Field completed, offset 0x19, size 0x1
  __declspec(property(get = __get_completed, put = __set_completed)) bool completed;

  /// @brief Field cb, offset 0x20, size 0x8
  __declspec(property(get = __get_cb, put = __set_cb))::System::AsyncCallback* cb;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::System::Object* state;

  /// @brief Field exception, offset 0x30, size 0x8
  __declspec(property(get = __get_exception, put = __set_exception))::System::Exception* exception;

  /// @brief Field context, offset 0x38, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::System::Net::HttpListenerContext* context;

  /// @brief Field locker, offset 0x40, size 0x8
  __declspec(property(get = __get_locker, put = __set_locker))::System::Object* locker;

  /// @brief Field forward, offset 0x48, size 0x8
  __declspec(property(get = __get_forward, put = __set_forward))::System::Net::ListenerAsyncResult* forward;

  /// @brief Field EndCalled, offset 0x50, size 0x1
  __declspec(property(get = __get_EndCalled, put = __set_EndCalled)) bool EndCalled;

  /// @brief Field InGet, offset 0x51, size 0x1
  __declspec(property(get = __get_InGet, put = __set_InGet)) bool InGet;

  /// @brief Field InvokeCB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvokeCB, put = setStaticF_InvokeCB))::System::Threading::WaitCallback* InvokeCB;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  constexpr ::System::Threading::ManualResetEvent*& __get_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_handle() const;

  constexpr void __set_handle(::System::Threading::ManualResetEvent* value);

  constexpr bool& __get_synch();

  constexpr bool const& __get_synch() const;

  constexpr void __set_synch(bool value);

  constexpr bool& __get_completed();

  constexpr bool const& __get_completed() const;

  constexpr void __set_completed(bool value);

  constexpr ::System::AsyncCallback*& __get_cb();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_cb() const;

  constexpr void __set_cb(::System::AsyncCallback* value);

  constexpr ::System::Object*& __get_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_state() const;

  constexpr void __set_state(::System::Object* value);

  constexpr ::System::Exception*& __get_exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_exception() const;

  constexpr void __set_exception(::System::Exception* value);

  constexpr ::System::Net::HttpListenerContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> const& __get_context() const;

  constexpr void __set_context(::System::Net::HttpListenerContext* value);

  constexpr ::System::Object*& __get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_locker() const;

  constexpr void __set_locker(::System::Object* value);

  constexpr ::System::Net::ListenerAsyncResult*& __get_forward();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ListenerAsyncResult*> const& __get_forward() const;

  constexpr void __set_forward(::System::Net::ListenerAsyncResult* value);

  constexpr bool& __get_EndCalled();

  constexpr bool const& __get_EndCalled() const;

  constexpr void __set_EndCalled(bool value);

  constexpr bool& __get_InGet();

  constexpr bool const& __get_InGet() const;

  constexpr void __set_InGet(bool value);

  static inline void setStaticF_InvokeCB(::System::Threading::WaitCallback* value);

  static inline ::System::Threading::WaitCallback* getStaticF_InvokeCB();

  static inline ::System::Net::ListenerAsyncResult* New_ctor(::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method .ctor addr 0x29d26bc size 0x80 virtual false final false
  inline void _ctor(::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method Complete addr 0x29d273c size 0x1f4 virtual false final false
  inline void Complete(::System::Exception* exc);

  /// @brief Method InvokeCallback addr 0x29d2930 size 0x13c virtual false final false
  static inline void InvokeCallback(::System::Object* o);

  /// @brief Method Complete addr 0x29d2a6c size 0x8 virtual false final false
  inline void Complete(::System::Net::HttpListenerContext* context);

  /// @brief Method Complete addr 0x29d2a74 size 0x530 virtual false final false
  inline void Complete(::System::Net::HttpListenerContext* context, bool synch);

  /// @brief Method GetContext addr 0x29d2fa4 size 0x3c virtual false final false
  inline ::System::Net::HttpListenerContext* GetContext();

  /// @brief Method get_AsyncState addr 0x29d2fe0 size 0x14 virtual true final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle addr 0x29d2ff4 size 0x138 virtual true final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously addr 0x29d312c size 0x14 virtual true final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted addr 0x29d3140 size 0xe0 virtual true final true
  inline bool get_IsCompleted();

  // Ctor Parameters [CppParam { name: "", ty: "ListenerAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListenerAsyncResult(ListenerAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListenerAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListenerAsyncResult(ListenerAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListenerAsyncResult();

public:
  /// @brief Field handle, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___handle;

  /// @brief Field synch, offset: 0x18, size: 0x1, def value: None
  bool ___synch;

  /// @brief Field completed, offset: 0x19, size: 0x1, def value: None
  bool ___completed;

  /// @brief Field cb, offset: 0x20, size: 0x8, def value: None
  ::System::AsyncCallback* ___cb;

  /// @brief Field state, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___state;

  /// @brief Field exception, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* ___exception;

  /// @brief Field context, offset: 0x38, size: 0x8, def value: None
  ::System::Net::HttpListenerContext* ___context;

  /// @brief Field locker, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___locker;

  /// @brief Field forward, offset: 0x48, size: 0x8, def value: None
  ::System::Net::ListenerAsyncResult* ___forward;

  /// @brief Field EndCalled, offset: 0x50, size: 0x1, def value: None
  bool ___EndCalled;

  /// @brief Field InGet, offset: 0x51, size: 0x1, def value: None
  bool ___InGet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ListenerAsyncResult, 0x58>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ListenerAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ListenerAsyncResult*, "System.Net", "ListenerAsyncResult");
