#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class IAsyncResult;
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
// Type: System::IOAsyncResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8895))
// CS Name: ::System::IOAsyncResult*
class CORDL_TYPE IOAsyncResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field async_callback, offset 0x10, size 0x8
  __declspec(property(get = __get_async_callback, put = __set_async_callback))::System::AsyncCallback* async_callback;

  /// @brief Field async_state, offset 0x18, size 0x8
  __declspec(property(get = __get_async_state, put = __set_async_state))::System::Object* async_state;

  /// @brief Field wait_handle, offset 0x20, size 0x8
  __declspec(property(get = __get_wait_handle, put = __set_wait_handle))::System::Threading::ManualResetEvent* wait_handle;

  /// @brief Field completed_synchronously, offset 0x28, size 0x1
  __declspec(property(get = __get_completed_synchronously, put = __set_completed_synchronously)) bool completed_synchronously;

  /// @brief Field completed, offset 0x29, size 0x1
  __declspec(property(get = __get_completed, put = __set_completed)) bool completed;

  __declspec(property(get = get_AsyncCallback))::System::AsyncCallback* AsyncCallback;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously, put = set_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted, put = set_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  constexpr ::System::AsyncCallback*& __get_async_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_async_callback() const;

  constexpr void __set_async_callback(::System::AsyncCallback* value);

  constexpr ::System::Object*& __get_async_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_async_state() const;

  constexpr void __set_async_state(::System::Object* value);

  constexpr ::System::Threading::ManualResetEvent*& __get_wait_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_wait_handle() const;

  constexpr void __set_wait_handle(::System::Threading::ManualResetEvent* value);

  constexpr bool& __get_completed_synchronously();

  constexpr bool const& __get_completed_synchronously() const;

  constexpr void __set_completed_synchronously(bool value);

  constexpr bool& __get_completed();

  constexpr bool const& __get_completed() const;

  constexpr void __set_completed(bool value);

  static inline ::System::IOAsyncResult* New_ctor();

  /// @brief Method .ctor, addr 0x294d5f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x294d600, size 0x20, virtual false, abstract: false, final false
  inline void Init(::System::AsyncCallback* async_callback, ::System::Object* async_state);

  static inline ::System::IOAsyncResult* New_ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state);

  /// @brief Method .ctor, addr 0x294d620, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state);

  /// @brief Method get_AsyncCallback, addr 0x294d64c, size 0x8, virtual false, abstract: false, final false
  inline ::System::AsyncCallback* get_AsyncCallback();

  /// @brief Method get_AsyncState, addr 0x294d654, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x294d65c, size 0x124, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0x294d780, size 0x8, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method set_CompletedSynchronously, addr 0x294d788, size 0xc, virtual false, abstract: false, final false
  inline void set_CompletedSynchronously(bool value);

  /// @brief Method get_IsCompleted, addr 0x294d794, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Method set_IsCompleted, addr 0x294d79c, size 0xd8, virtual false, abstract: false, final false
  inline void set_IsCompleted(bool value);

  /// @brief Method CompleteDisposed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CompleteDisposed();

  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOAsyncResult(IOAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOAsyncResult(IOAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOAsyncResult();

public:
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
static_assert(::cordl_internals::size_check_v<::System::IOAsyncResult, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___async_callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___async_state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___wait_handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___completed_synchronously) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IOAsyncResult, ___completed) == 0x29, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::IOAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IOAsyncResult*, "System", "IOAsyncResult");
