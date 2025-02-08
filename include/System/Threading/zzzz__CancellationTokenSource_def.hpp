#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenSource)
namespace GlobalNamespace {
class CancellationTokenSource_Linked1CancellationTokenSource;
}
namespace GlobalNamespace {
class CancellationTokenSource_Linked2CancellationTokenSource;
}
namespace GlobalNamespace {
class CancellationTokenSource_LinkedNCancellationTokenSource;
}
namespace System::Threading {
struct CancellationCallbackCoreWorkArguments;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
template <typename T> class SparselyPopulatedArray_1;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class Timer;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class LinkedNCancellationTokenSource_CancellationTokenSource___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::CancellationTokenSource);
MARK_REF_PTR_T(::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.CancellationTokenSource/LinkedNCancellationTokenSource/<>c
class CORDL_TYPE LinkedNCancellationTokenSource_CancellationTokenSource___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* __9;

  static inline ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x3e55f48, size 0x84, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x3e55f40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedNCancellationTokenSource_CancellationTokenSource___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedNCancellationTokenSource_CancellationTokenSource___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedNCancellationTokenSource_CancellationTokenSource___c(LinkedNCancellationTokenSource_CancellationTokenSource___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedNCancellationTokenSource_CancellationTokenSource___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedNCancellationTokenSource_CancellationTokenSource___c(LinkedNCancellationTokenSource_CancellationTokenSource___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c, 0x10>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.IDisposable, System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.CancellationTokenSource
class CORDL_TYPE CancellationTokenSource : public ::System::Object {
public:
  // Declarations
  using Linked1CancellationTokenSource = ::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource;

  using Linked2CancellationTokenSource = ::GlobalNamespace::CancellationTokenSource_Linked2CancellationTokenSource;

  using LinkedNCancellationTokenSource = ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource;

  __declspec(property(get = get_ExecutingCallback)) ::System::Threading::CancellationCallbackInfo* ExecutingCallback;

  __declspec(property(get = get_IsCancellationCompleted)) bool IsCancellationCompleted;

  __declspec(property(get = get_IsCancellationRequested)) bool IsCancellationRequested;

  __declspec(property(get = get_IsDisposed)) bool IsDisposed;

  __declspec(property(get = get_ThreadIDExecutingCallbacks, put = set_ThreadIDExecutingCallbacks)) int32_t ThreadIDExecutingCallbacks;

  __declspec(property(get = get_Token)) ::System::Threading::CancellationToken Token;

  /// @brief Field _disposed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _executingCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__executingCallback, put = __cordl_internal_set__executingCallback)) ::System::Threading::CancellationCallbackInfo* _executingCallback;

  /// @brief Field _kernelEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__kernelEvent, put = __cordl_internal_set__kernelEvent)) ::System::Threading::ManualResetEvent* _kernelEvent;

  /// @brief Field _registeredCallbacksLists, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__registeredCallbacksLists,
                      put = __cordl_internal_set__registeredCallbacksLists)) ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                                                                                      ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>
      _registeredCallbacksLists;

  /// @brief Field _state, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) int32_t _state;

  /// @brief Field _threadIDExecutingCallbacks, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__threadIDExecutingCallbacks, put = __cordl_internal_set__threadIDExecutingCallbacks)) int32_t _threadIDExecutingCallbacks;

  /// @brief Field _timer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__timer, put = __cordl_internal_set__timer)) ::System::Threading::Timer* _timer;

  /// @brief Field s_canceledSource, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_canceledSource, put = setStaticF_s_canceledSource)) ::System::Threading::CancellationTokenSource* s_canceledSource;

  /// @brief Field s_nLists, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_nLists, put = setStaticF_s_nLists)) int32_t s_nLists;

  /// @brief Field s_neverCanceledSource, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_neverCanceledSource, put = setStaticF_s_neverCanceledSource)) ::System::Threading::CancellationTokenSource* s_neverCanceledSource;

  /// @brief Field s_timerCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_timerCallback, put = setStaticF_s_timerCallback)) ::System::Threading::TimerCallback* s_timerCallback;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Cancel, addr 0x3e54aa0, size 0x1c, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Cancel, addr 0x3e54abc, size 0x28, virtual false, abstract: false, final false
  inline void Cancel(bool throwOnFirstException);

  /// @brief Method CancelAfter, addr 0x3e54b94, size 0xe0, virtual false, abstract: false, final false
  inline void CancelAfter(::System::TimeSpan delay);

  /// @brief Method CancelAfter, addr 0x3e54c74, size 0x1e8, virtual false, abstract: false, final false
  inline void CancelAfter(int32_t millisecondsDelay);

  /// @brief Method CancellationCallbackCoreWork, addr 0x3e55618, size 0xbc, virtual false, abstract: false, final false
  inline void CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments args);

  /// @brief Method CancellationCallbackCoreWork_OnSyncContext, addr 0x3e556d4, size 0x78, virtual false, abstract: false, final false
  inline void CancellationCallbackCoreWork_OnSyncContext(::System::Object* obj);

  /// @brief Method CreateLinkedTokenSource, addr 0x3e55b74, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken token);

  /// @brief Method CreateLinkedTokenSource, addr 0x3e55840, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken token1, ::System::Threading::CancellationToken token2);

  /// @brief Method Dispose, addr 0x3e54f74, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3e54fe0, size 0x90, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExecuteCallbackHandlers, addr 0x3e55150, size 0x4bc, virtual false, abstract: false, final false
  inline void ExecuteCallbackHandlers(bool throwOnFirstException);

  /// @brief Method InitializeWithTimer, addr 0x3e549ec, size 0xb4, virtual false, abstract: false, final false
  inline void InitializeWithTimer(int32_t millisecondsDelay);

  /// @brief Method InternalRegister, addr 0x3e52518, size 0x2bc, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationTokenRegistration InternalRegister(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                             ::System::Threading::SynchronizationContext* targetSyncContext, ::System::Threading::ExecutionContext* executionContext);

  static inline ::System::Threading::CancellationTokenSource* New_ctor();

  static inline ::System::Threading::CancellationTokenSource* New_ctor(::System::TimeSpan delay);

  /// @brief Method NotifyCancellation, addr 0x3e54ae4, size 0xb0, virtual false, abstract: false, final false
  inline void NotifyCancellation(bool throwOnFirstException);

  /// @brief Method ThrowIfDisposed, addr 0x3e54854, size 0x54, virtual false, abstract: false, final false
  inline void ThrowIfDisposed();

  /// @brief Method ThrowObjectDisposedException, addr 0x3e55070, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowObjectDisposedException();

  /// @brief Method TimerCallbackLogic, addr 0x3e54e5c, size 0x118, virtual false, abstract: false, final false
  static inline void TimerCallbackLogic(::System::Object* obj);

  /// @brief Method WaitForCallbackToComplete, addr 0x3e54558, size 0x88, virtual false, abstract: false, final false
  inline void WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* callbackInfo);

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Threading::CancellationCallbackInfo* const& __cordl_internal_get__executingCallback() const;

  constexpr ::System::Threading::CancellationCallbackInfo*& __cordl_internal_get__executingCallback();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get__kernelEvent() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get__kernelEvent();

  constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                     ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*> const&
  __cordl_internal_get__registeredCallbacksLists() const;

  constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                     ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>&
  __cordl_internal_get__registeredCallbacksLists();

  constexpr int32_t const& __cordl_internal_get__state() const;

  constexpr int32_t& __cordl_internal_get__state();

  constexpr int32_t const& __cordl_internal_get__threadIDExecutingCallbacks() const;

  constexpr int32_t& __cordl_internal_get__threadIDExecutingCallbacks();

  constexpr ::System::Threading::Timer* const& __cordl_internal_get__timer() const;

  constexpr ::System::Threading::Timer*& __cordl_internal_get__timer();

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__executingCallback(::System::Threading::CancellationCallbackInfo* value);

  constexpr void __cordl_internal_set__kernelEvent(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set__registeredCallbacksLists(::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                                                                         ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>
                                                                    value);

  constexpr void __cordl_internal_set__state(int32_t value);

  constexpr void __cordl_internal_set__threadIDExecutingCallbacks(int32_t value);

  constexpr void __cordl_internal_set__timer(::System::Threading::Timer* value);

  /// @brief Method .ctor, addr 0x3e548c0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e548f4, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan delay);

  static inline ::System::Threading::CancellationTokenSource* getStaticF_s_canceledSource();

  static inline int32_t getStaticF_s_nLists();

  static inline ::System::Threading::CancellationTokenSource* getStaticF_s_neverCanceledSource();

  static inline ::System::Threading::TimerCallback* getStaticF_s_timerCallback();

  /// @brief Method get_ExecutingCallback, addr 0x3e548a8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationCallbackInfo* get_ExecutingCallback();

  /// @brief Method get_IsCancellationCompleted, addr 0x3e54524, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsCancellationCompleted();

  /// @brief Method get_IsCancellationRequested, addr 0x3e52074, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsCancellationRequested();

  /// @brief Method get_IsDisposed, addr 0x3e54810, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDisposed();

  /// @brief Method get_ThreadIDExecutingCallbacks, addr 0x3e54540, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ThreadIDExecutingCallbacks();

  /// @brief Method get_Token, addr 0x3e5483c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationToken get_Token();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_canceledSource(::System::Threading::CancellationTokenSource* value);

  static inline void setStaticF_s_nLists(int32_t value);

  static inline void setStaticF_s_neverCanceledSource(::System::Threading::CancellationTokenSource* value);

  static inline void setStaticF_s_timerCallback(::System::Threading::TimerCallback* value);

  /// @brief Method set_ThreadIDExecutingCallbacks, addr 0x3e54818, size 0x24, virtual false, abstract: false, final false
  inline void set_ThreadIDExecutingCallbacks(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationTokenSource(CancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationTokenSource(CancellationTokenSource const&) = delete;

  /// @brief Field CannotBeCanceled offset 0xffffffff size 0x4
  static constexpr int32_t CannotBeCanceled{ static_cast<int32_t>(0x0) };

  /// @brief Field NotCanceledState offset 0xffffffff size 0x4
  static constexpr int32_t NotCanceledState{ static_cast<int32_t>(0x1) };

  /// @brief Field NotifyingCompleteState offset 0xffffffff size 0x4
  static constexpr int32_t NotifyingCompleteState{ static_cast<int32_t>(0x3) };

  /// @brief Field NotifyingState offset 0xffffffff size 0x4
  static constexpr int32_t NotifyingState{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2691 };

  /// @brief Field _kernelEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ____kernelEvent;

  /// @brief Field _registeredCallbacksLists, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
           ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>
      ____registeredCallbacksLists;

  /// @brief Field _state, offset: 0x20, size: 0x4, def value: None
  int32_t ____state;

  /// @brief Field _threadIDExecutingCallbacks, offset: 0x24, size: 0x4, def value: None
  int32_t ____threadIDExecutingCallbacks;

  /// @brief Field _disposed, offset: 0x28, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _executingCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationCallbackInfo* ____executingCallback;

  /// @brief Field _timer, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Timer* ____timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::CancellationTokenSource, ____kernelEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenSource, ____registeredCallbacksLists) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenSource, ____state) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenSource, ____threadIDExecutingCallbacks) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenSource, ____disposed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenSource, ____executingCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenSource, ____timer) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationTokenSource, 0x40>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationTokenSource*, "System.Threading", "CancellationTokenSource");
NEED_NO_BOX(::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource/<>c");
