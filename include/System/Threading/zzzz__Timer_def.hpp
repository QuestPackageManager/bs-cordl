#pragma once
// IWYU pragma private; include "System/Threading/Timer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Timer)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IComparer;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class Timer_Scheduler;
}
namespace System::Threading {
struct Timer_TimerComparer;
}
namespace System {
class IAsyncDisposable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading {
class Timer;
}
namespace System::Threading {
class Timer_Scheduler;
}
namespace System::Threading {
struct Timer_TimerComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Timer);
MARK_REF_PTR_T(::System::Threading::Timer_Scheduler);
MARK_VAL_T(::System::Threading::Timer_TimerComparer);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.Timer/TimerComparer
#pragma pack(push, 0)
struct CORDL_TYPE Timer_TimerComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*();

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*();

  /// @brief Method Compare, addr 0x5aa3894, size 0x88, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Threading::Timer* tx, ::System::Threading::Timer* ty);

  /// @brief Method System.Collections.IComparer.Compare, addr 0x5aa37ec, size 0xa8, virtual true, abstract: false, final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>* i___System__Collections__Generic__IComparer_1___System__Threading__Timer__();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Timer_TimerComparer();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Timer_TimerComparer, 0x1>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Timer/Scheduler
class CORDL_TYPE Timer_Scheduler : public ::System::Object {
public:
  // Declarations
  /// @brief Field changed, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::Threading::ManualResetEvent* changed;

  /// @brief Field current_next_run, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_current_next_run, put = __cordl_internal_set_current_next_run)) int64_t current_next_run;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::System::Threading::Timer_Scheduler* instance;

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::Generic::List_1<::System::Threading::Timer*>* list;

  /// @brief Field needReSort, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_needReSort, put = __cordl_internal_set_needReSort)) bool needReSort;

  /// @brief Method Add, addr 0x5aa3ff4, size 0x104, virtual false, abstract: false, final false
  inline void Add(::System::Threading::Timer* timer);

  /// @brief Method Change, addr 0x5aa35cc, size 0x188, virtual false, abstract: false, final false
  inline void Change(::System::Threading::Timer* timer, int64_t new_next_run);

  /// @brief Method FireTimer, addr 0x5aa4174, size 0xc8, virtual false, abstract: false, final false
  inline void FireTimer(::System::Threading::Timer* timer);

  /// @brief Method InitScheduler, addr 0x5aa391c, size 0x100, virtual false, abstract: false, final false
  inline void InitScheduler();

  /// @brief Method InternalRemove, addr 0x5aa3fd4, size 0x20, virtual false, abstract: false, final false
  inline void InternalRemove(::System::Threading::Timer* timer);

  static inline ::System::Threading::Timer_Scheduler* New_ctor();

  /// @brief Method Remove, addr 0x5aa34fc, size 0xcc, virtual false, abstract: false, final false
  inline void Remove(::System::Threading::Timer* timer);

  /// @brief Method RunSchedulerLoop, addr 0x5aa3b60, size 0x388, virtual false, abstract: false, final false
  inline int32_t RunSchedulerLoop();

  /// @brief Method SchedulerThread, addr 0x5aa3a34, size 0x12c, virtual false, abstract: false, final false
  inline void SchedulerThread();

  /// @brief Method TimerCB, addr 0x5aa40f8, size 0x7c, virtual false, abstract: false, final false
  static inline void TimerCB(::System::Object* o);

  /// @brief Method WakeupScheduler, addr 0x5aa3a1c, size 0x18, virtual false, abstract: false, final false
  inline void WakeupScheduler();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_changed() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_changed();

  constexpr int64_t const& __cordl_internal_get_current_next_run() const;

  constexpr int64_t& __cordl_internal_get_current_next_run();

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>*& __cordl_internal_get_list();

  constexpr bool const& __cordl_internal_get_needReSort() const;

  constexpr bool& __cordl_internal_get_needReSort();

  constexpr void __cordl_internal_set_changed(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set_current_next_run(int64_t value);

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Threading::Timer*>* value);

  constexpr void __cordl_internal_set_needReSort(bool value);

  /// @brief Method .ctor, addr 0x5aa3f44, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Timer_Scheduler* getStaticF_instance();

  /// @brief Method get_Instance, addr 0x5aa3ee8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Threading::Timer_Scheduler* get_Instance();

  static inline void setStaticF_instance(::System::Threading::Timer_Scheduler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timer_Scheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Timer_Scheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timer_Scheduler(Timer_Scheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timer_Scheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timer_Scheduler(Timer_Scheduler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2763 };

  /// @brief Field needReSort, offset: 0x10, size: 0x1, def value: None
  bool ___needReSort;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Timer*>* ___list;

  /// @brief Field current_next_run, offset: 0x20, size: 0x8, def value: None
  int64_t ___current_next_run;

  /// @brief Field changed, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Timer_Scheduler, ___needReSort) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer_Scheduler, ___list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer_Scheduler, ___current_next_run) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer_Scheduler, ___changed) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Timer_Scheduler, 0x30>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.MarshalByRefObject
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Timer
class CORDL_TYPE Timer : public ::System::MarshalByRefObject {
public:
  // Declarations
  using Scheduler = ::System::Threading::Timer_Scheduler;

  using TimerComparer = ::System::Threading::Timer_TimerComparer;

  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Threading::TimerCallback* callback;

  /// @brief Field disposed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field due_time_ms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_due_time_ms, put = __cordl_internal_set_due_time_ms)) int64_t due_time_ms;

  /// @brief Field is_added, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_is_added, put = __cordl_internal_set_is_added)) bool is_added;

  /// @brief Field is_dead, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_is_dead, put = __cordl_internal_set_is_dead)) bool is_dead;

  /// @brief Field next_run, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_next_run, put = __cordl_internal_set_next_run)) int64_t next_run;

  /// @brief Field period_ms, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_period_ms, put = __cordl_internal_set_period_ms)) int64_t period_ms;

  /// @brief Field state, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Object* state;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Change, addr 0x5aa33e4, size 0xe0, virtual false, abstract: false, final false
  inline bool Change(::System::TimeSpan dueTime, ::System::TimeSpan period);

  /// @brief Method Change, addr 0x5aa33c4, size 0x20, virtual false, abstract: false, final false
  inline bool Change(int32_t dueTime, int32_t period);

  /// @brief Method Change, addr 0x5aa3204, size 0x1c0, virtual false, abstract: false, final false
  inline bool Change(int64_t dueTime, int64_t period, bool first);

  /// @brief Method Dispose, addr 0x5aa34c4, size 0x38, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0x5aa3754, size 0x94, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method GetTimeMonotonic, addr 0x5aa35c8, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetTimeMonotonic();

  /// @brief Method Init, addr 0x5aa30b0, size 0x68, virtual false, abstract: false, final false
  inline void Init(::System::Threading::TimerCallback* callback, ::System::Object* state, int64_t dueTime, int64_t period);

  /// @brief Method KeepRootedWhileScheduled, addr 0x5aa37e8, size 0x4, virtual false, abstract: false, final false
  inline void KeepRootedWhileScheduled();

  static inline ::System::Threading::Timer* New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period);

  static inline ::System::Threading::Timer* New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period);

  constexpr ::System::Threading::TimerCallback* const& __cordl_internal_get_callback() const;

  constexpr ::System::Threading::TimerCallback*& __cordl_internal_get_callback();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr int64_t const& __cordl_internal_get_due_time_ms() const;

  constexpr int64_t& __cordl_internal_get_due_time_ms();

  constexpr bool const& __cordl_internal_get_is_added() const;

  constexpr bool& __cordl_internal_get_is_added();

  constexpr bool const& __cordl_internal_get_is_dead() const;

  constexpr bool& __cordl_internal_get_is_dead();

  constexpr int64_t const& __cordl_internal_get_next_run() const;

  constexpr int64_t& __cordl_internal_get_next_run();

  constexpr int64_t const& __cordl_internal_get_period_ms() const;

  constexpr int64_t& __cordl_internal_get_period_ms();

  constexpr ::System::Object* const& __cordl_internal_get_state() const;

  constexpr ::System::Object*& __cordl_internal_get_state();

  constexpr void __cordl_internal_set_callback(::System::Threading::TimerCallback* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_due_time_ms(int64_t value);

  constexpr void __cordl_internal_set_is_added(bool value);

  constexpr void __cordl_internal_set_is_dead(bool value);

  constexpr void __cordl_internal_set_next_run(int64_t value);

  constexpr void __cordl_internal_set_period_ms(int64_t value);

  constexpr void __cordl_internal_set_state(::System::Object* value);

  /// @brief Method .ctor, addr 0x5aa3118, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period);

  /// @brief Method .ctor, addr 0x5aa30a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period);

  /// @brief Method get_scheduler, addr 0x5aa3010, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Threading::Timer_Scheduler* get_scheduler();

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timer(Timer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timer(Timer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2764 };

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::TimerCallback* ___callback;

  /// @brief Field state, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___state;

  /// @brief Field due_time_ms, offset: 0x28, size: 0x8, def value: None
  int64_t ___due_time_ms;

  /// @brief Field period_ms, offset: 0x30, size: 0x8, def value: None
  int64_t ___period_ms;

  /// @brief Field next_run, offset: 0x38, size: 0x8, def value: None
  int64_t ___next_run;

  /// @brief Field disposed, offset: 0x40, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field is_dead, offset: 0x41, size: 0x1, def value: None
  bool ___is_dead;

  /// @brief Field is_added, offset: 0x42, size: 0x1, def value: None
  bool ___is_added;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Timer, ___callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___state) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___due_time_ms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___period_ms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___next_run) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___disposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___is_dead) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Timer, ___is_added) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Timer, 0x48>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timer*, "System.Threading", "Timer");
NEED_NO_BOX(::System::Threading::Timer_Scheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timer_Scheduler*, "System.Threading", "Timer/Scheduler");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timer_TimerComparer, "System.Threading", "Timer/TimerComparer");
