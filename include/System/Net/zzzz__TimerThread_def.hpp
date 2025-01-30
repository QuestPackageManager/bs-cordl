#pragma once
// IWYU pragma private; include "System/Net/TimerThread.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimerThread)
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
struct TimerNode_TimerThread_TimerState;
}
namespace System::Net {
class TimerThread_Callback;
}
namespace System::Net {
class TimerThread_InfiniteTimerQueue;
}
namespace System::Net {
class TimerThread_InfiniteTimer;
}
namespace System::Net {
class TimerThread_Queue;
}
namespace System::Net {
class TimerThread_TimerNode;
}
namespace System::Net {
class TimerThread_TimerQueue;
}
namespace System::Net {
class TimerThread_Timer;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class EventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Net {
struct TimerNode_TimerThread_TimerState;
}
namespace System::Net {
class TimerThread;
}
namespace System::Net {
class TimerThread_Callback;
}
namespace System::Net {
class TimerThread_InfiniteTimer;
}
namespace System::Net {
class TimerThread_InfiniteTimerQueue;
}
namespace System::Net {
class TimerThread_Queue;
}
namespace System::Net {
class TimerThread_Timer;
}
namespace System::Net {
class TimerThread_TimerNode;
}
namespace System::Net {
class TimerThread_TimerQueue;
}
// Write type traits
MARK_VAL_T(::System::Net::TimerNode_TimerThread_TimerState);
MARK_REF_PTR_T(::System::Net::TimerThread);
MARK_REF_PTR_T(::System::Net::TimerThread_Callback);
MARK_REF_PTR_T(::System::Net::TimerThread_InfiniteTimer);
MARK_REF_PTR_T(::System::Net::TimerThread_InfiniteTimerQueue);
MARK_REF_PTR_T(::System::Net::TimerThread_Queue);
MARK_REF_PTR_T(::System::Net::TimerThread_Timer);
MARK_REF_PTR_T(::System::Net::TimerThread_TimerNode);
MARK_REF_PTR_T(::System::Net::TimerThread_TimerQueue);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/Queue
class CORDL_TYPE TimerThread_Queue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Duration)) int32_t Duration;

  /// @brief Field m_DurationMilliseconds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DurationMilliseconds, put = __cordl_internal_set_m_DurationMilliseconds)) int32_t m_DurationMilliseconds;

  /// @brief Method CreateTimer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::TimerThread_Timer* CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context);

  static inline ::System::Net::TimerThread_Queue* New_ctor(int32_t durationMilliseconds);

  constexpr int32_t const& __cordl_internal_get_m_DurationMilliseconds() const;

  constexpr int32_t& __cordl_internal_get_m_DurationMilliseconds();

  constexpr void __cordl_internal_set_m_DurationMilliseconds(int32_t value);

  /// @brief Method .ctor, addr 0x44adc34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t durationMilliseconds);

  /// @brief Method get_Duration, addr 0x44adc5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Duration();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_Queue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_Queue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_Queue(TimerThread_Queue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_Queue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_Queue(TimerThread_Queue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9629 };

  /// @brief Field m_DurationMilliseconds, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_DurationMilliseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TimerThread_Queue, ___m_DurationMilliseconds) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_Queue, 0x18>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.IDisposable, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/Timer
class CORDL_TYPE TimerThread_Timer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Expiration)) int32_t Expiration;

  __declspec(property(get = get_HasExpired)) bool HasExpired;

  __declspec(property(get = get_StartTime)) int32_t StartTime;

  /// @brief Field m_DurationMilliseconds, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DurationMilliseconds, put = __cordl_internal_set_m_DurationMilliseconds)) int32_t m_DurationMilliseconds;

  /// @brief Field m_StartTimeMilliseconds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartTimeMilliseconds, put = __cordl_internal_set_m_StartTimeMilliseconds)) int32_t m_StartTimeMilliseconds;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Cancel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Cancel();

  /// @brief Method Dispose, addr 0x44adcac, size 0xc, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::System::Net::TimerThread_Timer* New_ctor(int32_t durationMilliseconds);

  constexpr int32_t const& __cordl_internal_get_m_DurationMilliseconds() const;

  constexpr int32_t& __cordl_internal_get_m_DurationMilliseconds();

  constexpr int32_t const& __cordl_internal_get_m_StartTimeMilliseconds() const;

  constexpr int32_t& __cordl_internal_get_m_StartTimeMilliseconds();

  constexpr void __cordl_internal_set_m_DurationMilliseconds(int32_t value);

  constexpr void __cordl_internal_set_m_StartTimeMilliseconds(int32_t value);

  /// @brief Method .ctor, addr 0x44adc64, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t durationMilliseconds);

  /// @brief Method get_Expiration, addr 0x44adca0, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Expiration();

  /// @brief Method get_HasExpired, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_HasExpired();

  /// @brief Method get_StartTime, addr 0x44adc98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StartTime();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_Timer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_Timer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_Timer(TimerThread_Timer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_Timer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_Timer(TimerThread_Timer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9630 };

  /// @brief Field m_StartTimeMilliseconds, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_StartTimeMilliseconds;

  /// @brief Field m_DurationMilliseconds, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_DurationMilliseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TimerThread_Timer, ___m_StartTimeMilliseconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_Timer, ___m_DurationMilliseconds) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_Timer, 0x18>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/Callback
class CORDL_TYPE TimerThread_Callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x44adcb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::TimerThread_Timer* timer, int32_t timeNoticed, ::System::Object* context);

  static inline ::System::Net::TimerThread_Callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x44995e4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_Callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_Callback(TimerThread_Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_Callback(TimerThread_Callback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_Callback, 0x80>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.IntPtr, System.Net.TimerThread::Queue
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/TimerQueue
class CORDL_TYPE TimerThread_TimerQueue : public ::System::Net::TimerThread_Queue {
public:
  // Declarations
  /// @brief Field m_ThisHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThisHandle, put = __cordl_internal_set_m_ThisHandle)) ::System::IntPtr m_ThisHandle;

  /// @brief Field m_Timers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Timers, put = __cordl_internal_set_m_Timers)) ::System::Net::TimerThread_TimerNode* m_Timers;

  /// @brief Method CreateTimer, addr 0x44adcfc, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::Net::TimerThread_Timer* CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context);

  /// @brief Method Fire, addr 0x44ad940, size 0x190, virtual false, abstract: false, final false
  inline bool Fire(::ByRef<int32_t> nextExpiration);

  static inline ::System::Net::TimerThread_TimerQueue* New_ctor(int32_t durationMilliseconds);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_ThisHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_ThisHandle();

  constexpr ::System::Net::TimerThread_TimerNode* const& __cordl_internal_get_m_Timers() const;

  constexpr ::System::Net::TimerThread_TimerNode*& __cordl_internal_get_m_Timers();

  constexpr void __cordl_internal_set_m_ThisHandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Timers(::System::Net::TimerThread_TimerNode* value);

  /// @brief Method .ctor, addr 0x44acfd4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t durationMilliseconds);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_TimerQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_TimerQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_TimerQueue(TimerThread_TimerQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_TimerQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_TimerQueue(TimerThread_TimerQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9632 };

  /// @brief Field m_ThisHandle, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_ThisHandle;

  /// @brief Field m_Timers, offset: 0x20, size: 0x8, def value: None
  ::System::Net::TimerThread_TimerNode* ___m_Timers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TimerThread_TimerQueue, ___m_ThisHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_TimerQueue, ___m_Timers) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_TimerQueue, 0x28>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.TimerThread::Queue
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/InfiniteTimerQueue
class CORDL_TYPE TimerThread_InfiniteTimerQueue : public ::System::Net::TimerThread_Queue {
public:
  // Declarations
  /// @brief Method CreateTimer, addr 0x44ae1ac, size 0x68, virtual true, abstract: false, final false
  inline ::System::Net::TimerThread_Timer* CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context);

  static inline ::System::Net::TimerThread_InfiniteTimerQueue* New_ctor();

  /// @brief Method .ctor, addr 0x44acfb4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_InfiniteTimerQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_InfiniteTimerQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_InfiniteTimerQueue(TimerThread_InfiniteTimerQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_InfiniteTimerQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_InfiniteTimerQueue(TimerThread_InfiniteTimerQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_InfiniteTimerQueue, 0x18>, "Size mismatch!");

} // namespace System::Net
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.TimerThread/TimerNode/TimerState
struct CORDL_TYPE TimerNode_TimerThread_TimerState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimerNode_TimerThread_TimerState_Unwrapped
  enum struct __TimerNode_TimerThread_TimerState_Unwrapped : int32_t {
    __E_Ready = static_cast<int32_t>(0x0),
    __E_Fired = static_cast<int32_t>(0x1),
    __E_Cancelled = static_cast<int32_t>(0x2),
    __E_Sentinel = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimerNode_TimerThread_TimerState_Unwrapped() const noexcept {
    return static_cast<__TimerNode_TimerThread_TimerState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerNode_TimerThread_TimerState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimerNode_TimerThread_TimerState(int32_t value__) noexcept;

  /// @brief Field Cancelled value: I32(2)
  static ::System::Net::TimerNode_TimerThread_TimerState const Cancelled;

  /// @brief Field Fired value: I32(1)
  static ::System::Net::TimerNode_TimerThread_TimerState const Fired;

  /// @brief Field Ready value: I32(0)
  static ::System::Net::TimerNode_TimerThread_TimerState const Ready;

  /// @brief Field Sentinel value: I32(3)
  static ::System::Net::TimerNode_TimerThread_TimerState const Sentinel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9634 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TimerNode_TimerThread_TimerState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::TimerNode_TimerThread_TimerState, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.TimerThread::Timer, System.Net.TimerThread::TimerNode::TimerState
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/TimerNode
class CORDL_TYPE TimerThread_TimerNode : public ::System::Net::TimerThread_Timer {
public:
  // Declarations
  using TimerState = ::System::Net::TimerNode_TimerThread_TimerState;

  __declspec(property(get = get_HasExpired)) bool HasExpired;

  __declspec(property(get = get_Next, put = set_Next)) ::System::Net::TimerThread_TimerNode* Next;

  __declspec(property(get = get_Prev, put = set_Prev)) ::System::Net::TimerThread_TimerNode* Prev;

  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback)) ::System::Net::TimerThread_Callback* m_Callback;

  /// @brief Field m_Context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context)) ::System::Object* m_Context;

  /// @brief Field m_QueueLock, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_QueueLock, put = __cordl_internal_set_m_QueueLock)) ::System::Object* m_QueueLock;

  /// @brief Field m_TimerState, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimerState, put = __cordl_internal_set_m_TimerState)) ::System::Net::TimerNode_TimerThread_TimerState m_TimerState;

  /// @brief Field next, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Net::TimerThread_TimerNode* next;

  /// @brief Field prev, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev)) ::System::Net::TimerThread_TimerNode* prev;

  /// @brief Method Cancel, addr 0x44ae270, size 0x120, virtual true, abstract: false, final false
  inline bool Cancel();

  /// @brief Method Fire, addr 0x44adf34, size 0x278, virtual false, abstract: false, final false
  inline bool Fire();

  static inline ::System::Net::TimerThread_TimerNode* New_ctor();

  static inline ::System::Net::TimerThread_TimerNode* New_ctor(::System::Net::TimerThread_Callback* callback, ::System::Object* context, int32_t durationMilliseconds, ::System::Object* queueLock);

  constexpr ::System::Net::TimerThread_Callback* const& __cordl_internal_get_m_Callback() const;

  constexpr ::System::Net::TimerThread_Callback*& __cordl_internal_get_m_Callback();

  constexpr ::System::Object* const& __cordl_internal_get_m_Context() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Context();

  constexpr ::System::Object* const& __cordl_internal_get_m_QueueLock() const;

  constexpr ::System::Object*& __cordl_internal_get_m_QueueLock();

  constexpr ::System::Net::TimerNode_TimerThread_TimerState const& __cordl_internal_get_m_TimerState() const;

  constexpr ::System::Net::TimerNode_TimerThread_TimerState& __cordl_internal_get_m_TimerState();

  constexpr ::System::Net::TimerThread_TimerNode* const& __cordl_internal_get_next() const;

  constexpr ::System::Net::TimerThread_TimerNode*& __cordl_internal_get_next();

  constexpr ::System::Net::TimerThread_TimerNode* const& __cordl_internal_get_prev() const;

  constexpr ::System::Net::TimerThread_TimerNode*& __cordl_internal_get_prev();

  constexpr void __cordl_internal_set_m_Callback(::System::Net::TimerThread_Callback* value);

  constexpr void __cordl_internal_set_m_Context(::System::Object* value);

  constexpr void __cordl_internal_set_m_QueueLock(::System::Object* value);

  constexpr void __cordl_internal_set_m_TimerState(::System::Net::TimerNode_TimerThread_TimerState value);

  constexpr void __cordl_internal_set_next(::System::Net::TimerThread_TimerNode* value);

  constexpr void __cordl_internal_set_prev(::System::Net::TimerThread_TimerNode* value);

  /// @brief Method .ctor, addr 0x44adccc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44adedc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::TimerThread_Callback* callback, ::System::Object* context, int32_t durationMilliseconds, ::System::Object* queueLock);

  /// @brief Method get_HasExpired, addr 0x44ae240, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasExpired();

  /// @brief Method get_Next, addr 0x44ae250, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::TimerThread_TimerNode* get_Next();

  /// @brief Method get_Prev, addr 0x44ae260, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::TimerThread_TimerNode* get_Prev();

  /// @brief Method set_Next, addr 0x44ae258, size 0x8, virtual false, abstract: false, final false
  inline void set_Next(::System::Net::TimerThread_TimerNode* value);

  /// @brief Method set_Prev, addr 0x44ae268, size 0x8, virtual false, abstract: false, final false
  inline void set_Prev(::System::Net::TimerThread_TimerNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_TimerNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_TimerNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_TimerNode(TimerThread_TimerNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_TimerNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_TimerNode(TimerThread_TimerNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9635 };

  /// @brief Field m_TimerState, offset: 0x18, size: 0x4, def value: None
  ::System::Net::TimerNode_TimerThread_TimerState ___m_TimerState;

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Net::TimerThread_Callback* ___m_Callback;

  /// @brief Field m_Context, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_Context;

  /// @brief Field m_QueueLock, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___m_QueueLock;

  /// @brief Field next, offset: 0x38, size: 0x8, def value: None
  ::System::Net::TimerThread_TimerNode* ___next;

  /// @brief Field prev, offset: 0x40, size: 0x8, def value: None
  ::System::Net::TimerThread_TimerNode* ___prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TimerThread_TimerNode, ___m_TimerState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_TimerNode, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_TimerNode, ___m_Context) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_TimerNode, ___m_QueueLock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_TimerNode, ___next) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::TimerThread_TimerNode, ___prev) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_TimerNode, 0x48>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.TimerThread::Timer
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread/InfiniteTimer
class CORDL_TYPE TimerThread_InfiniteTimer : public ::System::Net::TimerThread_Timer {
public:
  // Declarations
  __declspec(property(get = get_HasExpired)) bool HasExpired;

  /// @brief Field cancelled, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cancelled, put = __cordl_internal_set_cancelled)) int32_t cancelled;

  /// @brief Method Cancel, addr 0x44ae398, size 0x24, virtual true, abstract: false, final false
  inline bool Cancel();

  static inline ::System::Net::TimerThread_InfiniteTimer* New_ctor();

  constexpr int32_t const& __cordl_internal_get_cancelled() const;

  constexpr int32_t& __cordl_internal_get_cancelled();

  constexpr void __cordl_internal_set_cancelled(int32_t value);

  /// @brief Method .ctor, addr 0x44ae214, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasExpired, addr 0x44ae390, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasExpired();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread_InfiniteTimer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_InfiniteTimer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread_InfiniteTimer(TimerThread_InfiniteTimer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread_InfiniteTimer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread_InfiniteTimer(TimerThread_InfiniteTimer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9636 };

  /// @brief Field cancelled, offset: 0x18, size: 0x4, def value: None
  int32_t ___cancelled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TimerThread_InfiniteTimer, ___cancelled) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread_InfiniteTimer, 0x20>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TimerThread
class CORDL_TYPE TimerThread : public ::System::Object {
public:
  // Declarations
  using Callback = ::System::Net::TimerThread_Callback;

  using InfiniteTimer = ::System::Net::TimerThread_InfiniteTimer;

  using InfiniteTimerQueue = ::System::Net::TimerThread_InfiniteTimerQueue;

  using Queue = ::System::Net::TimerThread_Queue;

  using Timer = ::System::Net::TimerThread_Timer;

  using TimerNode = ::System::Net::TimerThread_TimerNode;

  using TimerQueue = ::System::Net::TimerThread_TimerQueue;

  /// @brief Field s_CacheScanIteration, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CacheScanIteration, put = setStaticF_s_CacheScanIteration)) int32_t s_CacheScanIteration;

  /// @brief Field s_NewQueues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NewQueues, put = setStaticF_s_NewQueues)) ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* s_NewQueues;

  /// @brief Field s_Queues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Queues, put = setStaticF_s_Queues)) ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* s_Queues;

  /// @brief Field s_QueuesCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_QueuesCache, put = setStaticF_s_QueuesCache)) ::System::Collections::Hashtable* s_QueuesCache;

  /// @brief Field s_ThreadEvents, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThreadEvents, put = setStaticF_s_ThreadEvents)) ::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> s_ThreadEvents;

  /// @brief Field s_ThreadReadyEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThreadReadyEvent, put = setStaticF_s_ThreadReadyEvent)) ::System::Threading::AutoResetEvent* s_ThreadReadyEvent;

  /// @brief Field s_ThreadShutdownEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ThreadShutdownEvent, put = setStaticF_s_ThreadShutdownEvent)) ::System::Threading::ManualResetEvent* s_ThreadShutdownEvent;

  /// @brief Field s_ThreadState, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ThreadState, put = setStaticF_s_ThreadState)) int32_t s_ThreadState;

  /// @brief Method CreateQueue, addr 0x44a8944, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Net::TimerThread_Queue* CreateQueue(int32_t durationMilliseconds);

  /// @brief Method GetOrCreateQueue, addr 0x449d274, size 0x958, virtual false, abstract: false, final false
  static inline ::System::Net::TimerThread_Queue* GetOrCreateQueue(int32_t durationMilliseconds);

  /// @brief Method IsTickBetween, addr 0x44adad0, size 0x24, virtual false, abstract: false, final false
  static inline bool IsTickBetween(int32_t start, int32_t end, int32_t comparand);

  /// @brief Method OnDomainUnload, addr 0x44adb70, size 0xc4, virtual false, abstract: false, final false
  static inline void OnDomainUnload(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method Prod, addr 0x44ad064, size 0x110, virtual false, abstract: false, final false
  static inline void Prod();

  /// @brief Method StopTimerThread, addr 0x44adaf4, size 0x7c, virtual false, abstract: false, final false
  static inline void StopTimerThread();

  /// @brief Method ThreadProc, addr 0x44ad174, size 0x7cc, virtual false, abstract: false, final false
  static inline void ThreadProc();

  static inline int32_t getStaticF_s_CacheScanIteration();

  static inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* getStaticF_s_NewQueues();

  static inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* getStaticF_s_Queues();

  static inline ::System::Collections::Hashtable* getStaticF_s_QueuesCache();

  static inline ::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> getStaticF_s_ThreadEvents();

  static inline ::System::Threading::AutoResetEvent* getStaticF_s_ThreadReadyEvent();

  static inline ::System::Threading::ManualResetEvent* getStaticF_s_ThreadShutdownEvent();

  static inline int32_t getStaticF_s_ThreadState();

  static inline void setStaticF_s_CacheScanIteration(int32_t value);

  static inline void setStaticF_s_NewQueues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* value);

  static inline void setStaticF_s_Queues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* value);

  static inline void setStaticF_s_QueuesCache(::System::Collections::Hashtable* value);

  static inline void setStaticF_s_ThreadEvents(::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> value);

  static inline void setStaticF_s_ThreadReadyEvent(::System::Threading::AutoResetEvent* value);

  static inline void setStaticF_s_ThreadShutdownEvent(::System::Threading::ManualResetEvent* value);

  static inline void setStaticF_s_ThreadState(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerThread", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread(TimerThread&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread(TimerThread const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread, 0x10>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerNode_TimerThread_TimerState, "System.Net", "TimerThread/TimerNode/TimerState");
NEED_NO_BOX(::System::Net::TimerThread);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread*, "System.Net", "TimerThread");
NEED_NO_BOX(::System::Net::TimerThread_Callback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_Callback*, "System.Net", "TimerThread/Callback");
NEED_NO_BOX(::System::Net::TimerThread_InfiniteTimer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_InfiniteTimer*, "System.Net", "TimerThread/InfiniteTimer");
NEED_NO_BOX(::System::Net::TimerThread_InfiniteTimerQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_InfiniteTimerQueue*, "System.Net", "TimerThread/InfiniteTimerQueue");
NEED_NO_BOX(::System::Net::TimerThread_Queue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_Queue*, "System.Net", "TimerThread/Queue");
NEED_NO_BOX(::System::Net::TimerThread_Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_Timer*, "System.Net", "TimerThread/Timer");
NEED_NO_BOX(::System::Net::TimerThread_TimerNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_TimerNode*, "System.Net", "TimerThread/TimerNode");
NEED_NO_BOX(::System::Net::TimerThread_TimerQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread_TimerQueue*, "System.Net", "TimerThread/TimerQueue");
