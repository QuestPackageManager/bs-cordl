#pragma once
// IWYU pragma private; include "System/Threading/ThreadPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPool)
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class RegisteredWaitHandle;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
template <typename TState> class ThreadPool___c__DisplayClass17_0_1;
}
namespace System::Threading {
template <typename TState> class ThreadPool___c__DisplayClass18_0_1;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class WaitOrTimerCallback;
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
class ThreadPool;
}
namespace System::Threading {
template <typename TState> class ThreadPool___c__DisplayClass17_0_1;
}
namespace System::Threading {
template <typename TState> class ThreadPool___c__DisplayClass18_0_1;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadPool);
MARK_GEN_REF_PTR_T(::System::Threading::ThreadPool___c__DisplayClass17_0_1);
MARK_GEN_REF_PTR_T(::System::Threading::ThreadPool___c__DisplayClass18_0_1);
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename TState>
// Is value type: false
// CS Name: System.Threading.ThreadPool/<>c__DisplayClass17_0`1<TState>
class CORDL_TYPE ThreadPool___c__DisplayClass17_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callBack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callBack, put = __cordl_internal_set_callBack)) ::System::Action_1<TState>* callBack;

  static inline ::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>* New_ctor();

  /// @brief Method <QueueUserWorkItem>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _QueueUserWorkItem_b__0(::System::Object* x);

  constexpr ::System::Action_1<TState>* const& __cordl_internal_get_callBack() const;

  constexpr ::System::Action_1<TState>*& __cordl_internal_get_callBack();

  constexpr void __cordl_internal_set_callBack(::System::Action_1<TState>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPool___c__DisplayClass17_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPool___c__DisplayClass17_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPool___c__DisplayClass17_0_1(ThreadPool___c__DisplayClass17_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPool___c__DisplayClass17_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPool___c__DisplayClass17_0_1(ThreadPool___c__DisplayClass17_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2751 };

  /// @brief Field callBack, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TState>* ___callBack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename TState>
// Is value type: false
// CS Name: System.Threading.ThreadPool/<>c__DisplayClass18_0`1<TState>
class CORDL_TYPE ThreadPool___c__DisplayClass18_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callBack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callBack, put = __cordl_internal_set_callBack)) ::System::Action_1<TState>* callBack;

  static inline ::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>* New_ctor();

  /// @brief Method <UnsafeQueueUserWorkItem>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _UnsafeQueueUserWorkItem_b__0(::System::Object* x);

  constexpr ::System::Action_1<TState>* const& __cordl_internal_get_callBack() const;

  constexpr ::System::Action_1<TState>*& __cordl_internal_get_callBack();

  constexpr void __cordl_internal_set_callBack(::System::Action_1<TState>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPool___c__DisplayClass18_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPool___c__DisplayClass18_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPool___c__DisplayClass18_0_1(ThreadPool___c__DisplayClass18_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPool___c__DisplayClass18_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPool___c__DisplayClass18_0_1(ThreadPool___c__DisplayClass18_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2752 };

  /// @brief Field callBack, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TState>* ___callBack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadPool
class CORDL_TYPE ThreadPool : public ::System::Object {
public:
  // Declarations
  template <typename TState> using __c__DisplayClass17_0_1 = ::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>;

  template <typename TState> using __c__DisplayClass18_0_1 = ::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>;

  /// @brief Method EnsureVMInitialized, addr 0x5aa00b4, size 0x98, virtual false, abstract: false, final false
  static inline void EnsureVMInitialized();

  /// @brief Method InitializeVMTp, addr 0x5aa026c, size 0xc, virtual false, abstract: false, final false
  static inline void InitializeVMTp(::ByRef<bool> enableWorkerTracking);

  /// @brief Method NotifyWorkItemComplete, addr 0x5a9f25c, size 0x4, virtual false, abstract: false, final false
  static inline bool NotifyWorkItemComplete();

  /// @brief Method NotifyWorkItemProgress, addr 0x5aa0278, size 0x10, virtual false, abstract: false, final false
  static inline void NotifyWorkItemProgress();

  /// @brief Method NotifyWorkItemProgressNative, addr 0x5aa0288, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyWorkItemProgressNative();

  /// @brief Method NotifyWorkItemQueued, addr 0x5a9e54c, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyWorkItemQueued();

  /// @brief Method QueueUserWorkItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> static inline bool QueueUserWorkItem(::System::Action_1<TState>* callBack, TState state, bool preferLocal);

  /// @brief Method QueueUserWorkItem, addr 0x5aa0088, size 0x2c, virtual false, abstract: false, final false
  static inline bool QueueUserWorkItem(::System::Threading::WaitCallback* callBack);

  /// @brief Method QueueUserWorkItem, addr 0x5a9fd54, size 0x28, virtual false, abstract: false, final false
  static inline bool QueueUserWorkItem(::System::Threading::WaitCallback* callBack, ::System::Object* state);

  /// @brief Method QueueUserWorkItemHelper, addr 0x5a9ff68, size 0x120, virtual false, abstract: false, final false
  static inline bool QueueUserWorkItemHelper(::System::Threading::WaitCallback* callBack, ::System::Object* state, ::ByRef<::System::Threading::StackCrawlMark> stackMark, bool compressStack,
                                             bool forceGlobal);

  /// @brief Method RegisterWaitForSingleObject, addr 0x5a9fda4, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callBack,
                                                                                       ::System::Object* state, int32_t millisecondsTimeOutInterval, bool executeOnlyOnce);

  /// @brief Method RegisterWaitForSingleObject, addr 0x5a9fae0, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callBack,
                                                                                       ::System::Object* state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce,
                                                                                       ::ByRef<::System::Threading::StackCrawlMark> stackMark, bool compressStack);

  /// @brief Method RegisterWaitForSingleObject, addr 0x5a9fe1c, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callBack,
                                                                                       ::System::Object* state, ::System::TimeSpan timeout, bool executeOnlyOnce);

  /// @brief Method ReportThreadStatus, addr 0x5aa0278, size 0x10, virtual false, abstract: false, final false
  static inline void ReportThreadStatus(bool isWorking);

  /// @brief Method RequestWorkerThread, addr 0x5a9de48, size 0x4, virtual false, abstract: false, final false
  static inline bool RequestWorkerThread();

  /// @brief Method TryPopCustomWorkItem, addr 0x5aa01cc, size 0xa0, virtual false, abstract: false, final false
  static inline bool TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem* workItem);

  /// @brief Method UnsafeQueueCustomWorkItem, addr 0x5aa014c, size 0x80, virtual false, abstract: false, final false
  static inline void UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem* workItem, bool forceGlobal);

  /// @brief Method UnsafeQueueUserWorkItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> static inline bool UnsafeQueueUserWorkItem(::System::Action_1<TState>* callBack, TState state, bool preferLocal);

  /// @brief Method UnsafeQueueUserWorkItem, addr 0x5a9fd7c, size 0x28, virtual false, abstract: false, final false
  static inline bool UnsafeQueueUserWorkItem(::System::Threading::WaitCallback* callBack, ::System::Object* state);

  /// @brief Method get_IsThreadPoolThread, addr 0x5aa028c, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_IsThreadPoolThread();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPool(ThreadPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPool(ThreadPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPool, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadPool);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPool*, "System.Threading", "ThreadPool");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadPool___c__DisplayClass17_0_1, "System.Threading", "ThreadPool/<>c__DisplayClass17_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadPool___c__DisplayClass18_0_1, "System.Threading", "ThreadPool/<>c__DisplayClass18_0`1");
