#pragma once
// IWYU pragma private; include "System/IOAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IOAsyncResult)
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class IOAsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::IOAsyncResult);
// Dependencies System.IAsyncResult, System.Object
namespace System {
// Is value type: false
// CS Name: System.IOAsyncResult
class CORDL_TYPE IOAsyncResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AsyncCallback)) ::System::AsyncCallback* AsyncCallback;

  __declspec(property(get = get_AsyncState)) ::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle)) ::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously, put = set_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted, put = set_IsCompleted)) bool IsCompleted;

  /// @brief Field async_callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_async_callback, put = __cordl_internal_set_async_callback)) ::System::AsyncCallback* async_callback;

  /// @brief Field async_state, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_async_state, put = __cordl_internal_set_async_state)) ::System::Object* async_state;

  /// @brief Field completed, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_completed, put = __cordl_internal_set_completed)) bool completed;

  /// @brief Field completed_synchronously, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_completed_synchronously, put = __cordl_internal_set_completed_synchronously)) bool completed_synchronously;

  /// @brief Field wait_handle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_wait_handle, put = __cordl_internal_set_wait_handle)) ::System::Threading::ManualResetEvent* wait_handle;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Method CompleteDisposed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CompleteDisposed();

  /// @brief Method Init, addr 0x4414240, size 0x20, virtual false, abstract: false, final false
  inline void Init(::System::AsyncCallback* async_callback, ::System::Object* async_state);

  static inline ::System::IOAsyncResult* New_ctor();

  static inline ::System::IOAsyncResult* New_ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state);

  constexpr ::System::AsyncCallback* const& __cordl_internal_get_async_callback() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get_async_callback();

  constexpr ::System::Object* const& __cordl_internal_get_async_state() const;

  constexpr ::System::Object*& __cordl_internal_get_async_state();

  constexpr bool const& __cordl_internal_get_completed() const;

  constexpr bool& __cordl_internal_get_completed();

  constexpr bool const& __cordl_internal_get_completed_synchronously() const;

  constexpr bool& __cordl_internal_get_completed_synchronously();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_wait_handle() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_wait_handle();

  constexpr void __cordl_internal_set_async_callback(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set_async_state(::System::Object* value);

  constexpr void __cordl_internal_set_completed(bool value);

  constexpr void __cordl_internal_set_completed_synchronously(bool value);

  constexpr void __cordl_internal_set_wait_handle(::System::Threading::ManualResetEvent* value);

  /// @brief Method .ctor, addr 0x4414238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4414260, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state);

  /// @brief Method get_AsyncCallback, addr 0x441428c, size 0x8, virtual false, abstract: false, final false
  inline ::System::AsyncCallback* get_AsyncCallback();

  /// @brief Method get_AsyncState, addr 0x4414294, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x441429c, size 0x118, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0x44143b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0x44143c8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  /// @brief Method set_CompletedSynchronously, addr 0x44143bc, size 0xc, virtual false, abstract: false, final false
  inline void set_CompletedSynchronously(bool value);

  /// @brief Method set_IsCompleted, addr 0x44143d0, size 0xd8, virtual false, abstract: false, final false
  inline void set_IsCompleted(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOAsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOAsyncResult(IOAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOAsyncResult(IOAsyncResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9214 };

  /// @brief Field async_callback, offset: 0x10, size: 0x8, def value: None
  ::System::AsyncCallback* ___async_callback;

  /// @brief Field async_state, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___async_state;

  /// @brief Field wait_handle, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___wait_handle;

  /// @brief Field completed_synchronously, offset: 0x28, size: 0x1, def value: None
  bool ___completed_synchronously;

  /// @brief Field completed, offset: 0x29, size: 0x1, def value: None
  bool ___completed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IOAsyncResult, ___async_callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___async_state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___wait_handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___completed_synchronously) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___completed) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IOAsyncResult, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IOAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IOAsyncResult*, "System", "IOAsyncResult");
