#pragma once
// IWYU pragma private; include "System/Net/ListenerAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListenerAsyncResult)
namespace System::Net {
class HttpListenerContext;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
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
// Dependencies System.IAsyncResult, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ListenerAsyncResult
class CORDL_TYPE ListenerAsyncResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AsyncState)) ::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle)) ::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  /// @brief Field EndCalled, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_EndCalled, put = __cordl_internal_set_EndCalled)) bool EndCalled;

  /// @brief Field InGet, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_InGet, put = __cordl_internal_set_InGet)) bool InGet;

  /// @brief Field InvokeCB, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvokeCB, put = setStaticF_InvokeCB)) ::System::Threading::WaitCallback* InvokeCB;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field cb, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cb, put = __cordl_internal_set_cb)) ::System::AsyncCallback* cb;

  /// @brief Field completed, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_completed, put = __cordl_internal_set_completed)) bool completed;

  /// @brief Field context, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Net::HttpListenerContext* context;

  /// @brief Field exception, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_exception, put = __cordl_internal_set_exception)) ::System::Exception* exception;

  /// @brief Field forward, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_forward, put = __cordl_internal_set_forward)) ::System::Net::ListenerAsyncResult* forward;

  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::Threading::ManualResetEvent* handle;

  /// @brief Field locker, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_locker, put = __cordl_internal_set_locker)) ::System::Object* locker;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Object* state;

  /// @brief Field synch, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_synch, put = __cordl_internal_set_synch)) bool synch;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Method Complete, addr 0x43d0d38, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Net::HttpListenerContext* context);

  /// @brief Method Complete, addr 0x43d0d40, size 0x51c, virtual false, abstract: false, final false
  inline void Complete(::System::Net::HttpListenerContext* context, bool synch);

  /// @brief Method Complete, addr 0x43d0a14, size 0x1e8, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* exc);

  /// @brief Method GetContext, addr 0x43d125c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerContext* GetContext();

  /// @brief Method InvokeCallback, addr 0x43d0bfc, size 0x13c, virtual false, abstract: false, final false
  static inline void InvokeCallback(::System::Object* o);

  static inline ::System::Net::ListenerAsyncResult* New_ctor(::System::AsyncCallback* cb, ::System::Object* state);

  constexpr bool const& __cordl_internal_get_EndCalled() const;

  constexpr bool& __cordl_internal_get_EndCalled();

  constexpr bool const& __cordl_internal_get_InGet() const;

  constexpr bool& __cordl_internal_get_InGet();

  constexpr ::System::AsyncCallback* const& __cordl_internal_get_cb() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get_cb();

  constexpr bool const& __cordl_internal_get_completed() const;

  constexpr bool& __cordl_internal_get_completed();

  constexpr ::System::Net::HttpListenerContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context();

  constexpr ::System::Exception* const& __cordl_internal_get_exception() const;

  constexpr ::System::Exception*& __cordl_internal_get_exception();

  constexpr ::System::Net::ListenerAsyncResult* const& __cordl_internal_get_forward() const;

  constexpr ::System::Net::ListenerAsyncResult*& __cordl_internal_get_forward();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_handle() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_handle();

  constexpr ::System::Object* const& __cordl_internal_get_locker() const;

  constexpr ::System::Object*& __cordl_internal_get_locker();

  constexpr ::System::Object* const& __cordl_internal_get_state() const;

  constexpr ::System::Object*& __cordl_internal_get_state();

  constexpr bool const& __cordl_internal_get_synch() const;

  constexpr bool& __cordl_internal_get_synch();

  constexpr void __cordl_internal_set_EndCalled(bool value);

  constexpr void __cordl_internal_set_InGet(bool value);

  constexpr void __cordl_internal_set_cb(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set_completed(bool value);

  constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext* value);

  constexpr void __cordl_internal_set_exception(::System::Exception* value);

  constexpr void __cordl_internal_set_forward(::System::Net::ListenerAsyncResult* value);

  constexpr void __cordl_internal_set_handle(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set_locker(::System::Object* value);

  constexpr void __cordl_internal_set_state(::System::Object* value);

  constexpr void __cordl_internal_set_synch(bool value);

  /// @brief Method .ctor, addr 0x43d099c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::AsyncCallback* cb, ::System::Object* state);

  static inline ::System::Threading::WaitCallback* getStaticF_InvokeCB();

  /// @brief Method get_AsyncState, addr 0x43d1298, size 0x14, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x43d12ac, size 0x128, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0x43d13d4, size 0x14, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0x43d13e8, size 0xdc, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  static inline void setStaticF_InvokeCB(::System::Threading::WaitCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListenerAsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListenerAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListenerAsyncResult(ListenerAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListenerAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListenerAsyncResult(ListenerAsyncResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9710 };

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
static_assert(offsetof(::System::Net::ListenerAsyncResult, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___synch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___completed) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___cb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___exception) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___context) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___locker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___forward) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___EndCalled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerAsyncResult, ___InGet) == 0x51, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ListenerAsyncResult, 0x58>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ListenerAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ListenerAsyncResult*, "System.Net", "ListenerAsyncResult");
