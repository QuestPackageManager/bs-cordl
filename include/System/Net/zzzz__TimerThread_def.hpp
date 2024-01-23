#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimerThread)
namespace GlobalNamespace {
struct __TimerThread__TimerNode__TimerState;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class __TimerThread__Callback;
}
namespace System::Net {
class __TimerThread__InfiniteTimerQueue;
}
namespace System::Net {
class __TimerThread__InfiniteTimer;
}
namespace System::Net {
class __TimerThread__Queue;
}
namespace System::Net {
class __TimerThread__TimerNode;
}
namespace System::Net {
class __TimerThread__TimerQueue;
}
namespace System::Net {
class __TimerThread__Timer;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TimerThread__TimerNode__TimerState;
}
namespace System::Net {
class TimerThread;
}
namespace System::Net {
class __TimerThread__Callback;
}
namespace System::Net {
class __TimerThread__InfiniteTimer;
}
namespace System::Net {
class __TimerThread__InfiniteTimerQueue;
}
namespace System::Net {
class __TimerThread__Queue;
}
namespace System::Net {
class __TimerThread__Timer;
}
namespace System::Net {
class __TimerThread__TimerNode;
}
namespace System::Net {
class __TimerThread__TimerQueue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TimerThread__TimerNode__TimerState);
MARK_REF_PTR_T(::System::Net::TimerThread);
MARK_REF_PTR_T(::System::Net::__TimerThread__Callback);
MARK_REF_PTR_T(::System::Net::__TimerThread__InfiniteTimer);
MARK_REF_PTR_T(::System::Net::__TimerThread__InfiniteTimerQueue);
MARK_REF_PTR_T(::System::Net::__TimerThread__Queue);
MARK_REF_PTR_T(::System::Net::__TimerThread__Timer);
MARK_REF_PTR_T(::System::Net::__TimerThread__TimerNode);
MARK_REF_PTR_T(::System::Net::__TimerThread__TimerQueue);
// Type: ::Queue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9110))
// CS Name: ::TimerThread::Queue*
class CORDL_TYPE __TimerThread__Queue : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DurationMilliseconds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DurationMilliseconds, put = __cordl_internal_set_m_DurationMilliseconds)) int32_t m_DurationMilliseconds;

  __declspec(property(get = get_Duration)) int32_t Duration;

  constexpr int32_t& __cordl_internal_get_m_DurationMilliseconds();

  constexpr int32_t const& __cordl_internal_get_m_DurationMilliseconds() const;

  constexpr void __cordl_internal_set_m_DurationMilliseconds(int32_t value);

  static inline ::System::Net::__TimerThread__Queue* New_ctor(int32_t durationMilliseconds);

  /// @brief Method .ctor, addr 0x29aa210, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t durationMilliseconds);

  /// @brief Method get_Duration, addr 0x29aa238, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Duration();

  /// @brief Method CreateTimer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::__TimerThread__Timer* CreateTimer(::System::Net::__TimerThread__Callback* callback, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__Queue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__Queue(__TimerThread__Queue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__Queue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__Queue(__TimerThread__Queue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__Queue();

public:
  /// @brief Field m_DurationMilliseconds, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_DurationMilliseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__Queue, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__Queue, ___m_DurationMilliseconds) == 0x10, "Offset mismatch!");

} // namespace System::Net
// Type: ::Timer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9111))
// CS Name: ::TimerThread::Timer*
class CORDL_TYPE __TimerThread__Timer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_StartTimeMilliseconds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartTimeMilliseconds, put = __cordl_internal_set_m_StartTimeMilliseconds)) int32_t m_StartTimeMilliseconds;

  /// @brief Field m_DurationMilliseconds, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DurationMilliseconds, put = __cordl_internal_set_m_DurationMilliseconds)) int32_t m_DurationMilliseconds;

  __declspec(property(get = get_StartTime)) int32_t StartTime;

  __declspec(property(get = get_Expiration)) int32_t Expiration;

  __declspec(property(get = get_HasExpired)) bool HasExpired;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get_m_StartTimeMilliseconds();

  constexpr int32_t const& __cordl_internal_get_m_StartTimeMilliseconds() const;

  constexpr void __cordl_internal_set_m_StartTimeMilliseconds(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_DurationMilliseconds();

  constexpr int32_t const& __cordl_internal_get_m_DurationMilliseconds() const;

  constexpr void __cordl_internal_set_m_DurationMilliseconds(int32_t value);

  static inline ::System::Net::__TimerThread__Timer* New_ctor(int32_t durationMilliseconds);

  /// @brief Method .ctor, addr 0x29aa240, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t durationMilliseconds);

  /// @brief Method get_StartTime, addr 0x29aa274, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StartTime();

  /// @brief Method get_Expiration, addr 0x29aa27c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Expiration();

  /// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Cancel();

  /// @brief Method get_HasExpired, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasExpired();

  /// @brief Method Dispose, addr 0x29aa288, size 0xc, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__Timer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__Timer(__TimerThread__Timer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__Timer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__Timer(__TimerThread__Timer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__Timer();

public:
  /// @brief Field m_StartTimeMilliseconds, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_StartTimeMilliseconds;

  /// @brief Field m_DurationMilliseconds, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_DurationMilliseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__Timer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__Timer, ___m_StartTimeMilliseconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__Timer, ___m_DurationMilliseconds) == 0x14, "Offset mismatch!");

} // namespace System::Net
// Type: ::Callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9112))
// CS Name: ::TimerThread::Callback*
class CORDL_TYPE __TimerThread__Callback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::__TimerThread__Callback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29aa294, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x29aa3c4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::__TimerThread__Timer* timer, int32_t timeNoticed, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__Callback(__TimerThread__Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__Callback(__TimerThread__Callback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__Callback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__Callback, 0x80>, "Size mismatch!");

} // namespace System::Net
// Type: ::TimerQueue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(9110))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9113))
// CS Name: ::TimerThread::TimerQueue*
class CORDL_TYPE __TimerThread__TimerQueue : public ::System::Net::__TimerThread__Queue {
public:
  // Declarations
  /// @brief Field m_ThisHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThisHandle, put = __cordl_internal_set_m_ThisHandle)) void* m_ThisHandle;

  /// @brief Field m_Timers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Timers, put = __cordl_internal_set_m_Timers))::System::Net::__TimerThread__TimerNode* m_Timers;

  constexpr void*& __cordl_internal_get_m_ThisHandle();

  constexpr void* const& __cordl_internal_get_m_ThisHandle() const;

  constexpr void __cordl_internal_set_m_ThisHandle(void* value);

  constexpr ::System::Net::__TimerThread__TimerNode*& __cordl_internal_get_m_Timers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> const& __cordl_internal_get_m_Timers() const;

  constexpr void __cordl_internal_set_m_Timers(::System::Net::__TimerThread__TimerNode* value);

  static inline ::System::Net::__TimerThread__TimerQueue* New_ctor(int32_t durationMilliseconds);

  /// @brief Method .ctor, addr 0x29a8bcc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t durationMilliseconds);

  /// @brief Method CreateTimer, addr 0x29aa408, size 0x20c, virtual true, abstract: false, final false
  inline ::System::Net::__TimerThread__Timer* CreateTimer(::System::Net::__TimerThread__Callback* callback, ::System::Object* context);

  /// @brief Method Fire, addr 0x29a9edc, size 0x1d0, virtual false, abstract: false, final false
  inline bool Fire(ByRef<int32_t> nextExpiration);

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__TimerQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__TimerQueue(__TimerThread__TimerQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__TimerQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__TimerQueue(__TimerThread__TimerQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__TimerQueue();

public:
  /// @brief Field m_ThisHandle, offset: 0x18, size: 0x8, def value: None
  void* ___m_ThisHandle;

  /// @brief Field m_Timers, offset: 0x20, size: 0x8, def value: None
  ::System::Net::__TimerThread__TimerNode* ___m_Timers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__TimerQueue, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerQueue, ___m_ThisHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerQueue, ___m_Timers) == 0x20, "Offset mismatch!");

} // namespace System::Net
// Type: ::InfiniteTimerQueue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9110))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9114))
// CS Name: ::TimerThread::InfiniteTimerQueue*
class CORDL_TYPE __TimerThread__InfiniteTimerQueue : public ::System::Net::__TimerThread__Queue {
public:
  // Declarations
  static inline ::System::Net::__TimerThread__InfiniteTimerQueue* New_ctor();

  /// @brief Method .ctor, addr 0x29a8bac, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CreateTimer, addr 0x29aa8e8, size 0x70, virtual true, abstract: false, final false
  inline ::System::Net::__TimerThread__Timer* CreateTimer(::System::Net::__TimerThread__Callback* callback, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__InfiniteTimerQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__InfiniteTimerQueue(__TimerThread__InfiniteTimerQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__InfiniteTimerQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__InfiniteTimerQueue(__TimerThread__InfiniteTimerQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__InfiniteTimerQueue();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__InfiniteTimerQueue, 0x18>, "Size mismatch!");

} // namespace System::Net
// Type: ::TimerState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9115))
// CS Name: ::TimerThread::TimerNode::TimerState
struct CORDL_TYPE __TimerThread__TimerNode__TimerState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimerThread__TimerNode__TimerState_Unwrapped
  enum struct ____TimerThread__TimerNode__TimerState_Unwrapped : int32_t {
    __E_Ready = static_cast<int32_t>(0x0),
    __E_Fired = static_cast<int32_t>(0x1),
    __E_Cancelled = static_cast<int32_t>(0x2),
    __E_Sentinel = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimerThread__TimerNode__TimerState_Unwrapped() const noexcept {
    return static_cast<____TimerThread__TimerNode__TimerState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimerThread__TimerNode__TimerState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__TimerNode__TimerState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ready value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__TimerThread__TimerNode__TimerState const Ready;

  /// @brief Field Fired value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__TimerThread__TimerNode__TimerState const Fired;

  /// @brief Field Cancelled value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__TimerThread__TimerNode__TimerState const Cancelled;

  /// @brief Field Sentinel value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__TimerThread__TimerNode__TimerState const Sentinel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TimerThread__TimerNode__TimerState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TimerThread__TimerNode__TimerState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TimerNode
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9111)), TypeDefinitionIndex(TypeDefinitionIndex(9115))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9116))
// CS Name: ::TimerThread::TimerNode*
class CORDL_TYPE __TimerThread__TimerNode : public ::System::Net::__TimerThread__Timer {
public:
  // Declarations
  using TimerState = ::GlobalNamespace::__TimerThread__TimerNode__TimerState;

  /// @brief Field m_TimerState, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimerState, put = __cordl_internal_set_m_TimerState))::GlobalNamespace::__TimerThread__TimerNode__TimerState m_TimerState;

  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback))::System::Net::__TimerThread__Callback* m_Callback;

  /// @brief Field m_Context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context))::System::Object* m_Context;

  /// @brief Field m_QueueLock, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_QueueLock, put = __cordl_internal_set_m_QueueLock))::System::Object* m_QueueLock;

  /// @brief Field next, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::System::Net::__TimerThread__TimerNode* next;

  /// @brief Field prev, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev))::System::Net::__TimerThread__TimerNode* prev;

  __declspec(property(get = get_HasExpired)) bool HasExpired;

  __declspec(property(get = get_Next, put = set_Next))::System::Net::__TimerThread__TimerNode* Next;

  __declspec(property(get = get_Prev, put = set_Prev))::System::Net::__TimerThread__TimerNode* Prev;

  constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState& __cordl_internal_get_m_TimerState();

  constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState const& __cordl_internal_get_m_TimerState() const;

  constexpr void __cordl_internal_set_m_TimerState(::GlobalNamespace::__TimerThread__TimerNode__TimerState value);

  constexpr ::System::Net::__TimerThread__Callback*& __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__Callback*> const& __cordl_internal_get_m_Callback() const;

  constexpr void __cordl_internal_set_m_Callback(::System::Net::__TimerThread__Callback* value);

  constexpr ::System::Object*& __cordl_internal_get_m_Context();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Context() const;

  constexpr void __cordl_internal_set_m_Context(::System::Object* value);

  constexpr ::System::Object*& __cordl_internal_get_m_QueueLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_QueueLock() const;

  constexpr void __cordl_internal_set_m_QueueLock(::System::Object* value);

  constexpr ::System::Net::__TimerThread__TimerNode*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_next(::System::Net::__TimerThread__TimerNode* value);

  constexpr ::System::Net::__TimerThread__TimerNode*& __cordl_internal_get_prev();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> const& __cordl_internal_get_prev() const;

  constexpr void __cordl_internal_set_prev(::System::Net::__TimerThread__TimerNode* value);

  static inline ::System::Net::__TimerThread__TimerNode* New_ctor(::System::Net::__TimerThread__Callback* callback, ::System::Object* context, int32_t durationMilliseconds,
                                                                  ::System::Object* queueLock);

  /// @brief Method .ctor, addr 0x29aa614, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::__TimerThread__Callback* callback, ::System::Object* context, int32_t durationMilliseconds, ::System::Object* queueLock);

  static inline ::System::Net::__TimerThread__TimerNode* New_ctor();

  /// @brief Method .ctor, addr 0x29aa3d8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasExpired, addr 0x29aa984, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasExpired();

  /// @brief Method get_Next, addr 0x29aa994, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::__TimerThread__TimerNode* get_Next();

  /// @brief Method set_Next, addr 0x29aa99c, size 0x8, virtual false, abstract: false, final false
  inline void set_Next(::System::Net::__TimerThread__TimerNode* value);

  /// @brief Method get_Prev, addr 0x29aa9a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::__TimerThread__TimerNode* get_Prev();

  /// @brief Method set_Prev, addr 0x29aa9ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Prev(::System::Net::__TimerThread__TimerNode* value);

  /// @brief Method Cancel, addr 0x29aa9b4, size 0x138, virtual true, abstract: false, final false
  inline bool Cancel();

  /// @brief Method Fire, addr 0x29aa66c, size 0x27c, virtual false, abstract: false, final false
  inline bool Fire();

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__TimerNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__TimerNode(__TimerThread__TimerNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__TimerNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__TimerNode(__TimerThread__TimerNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__TimerNode();

public:
  /// @brief Field m_TimerState, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__TimerThread__TimerNode__TimerState ___m_TimerState;

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Net::__TimerThread__Callback* ___m_Callback;

  /// @brief Field m_Context, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_Context;

  /// @brief Field m_QueueLock, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___m_QueueLock;

  /// @brief Field next, offset: 0x38, size: 0x8, def value: None
  ::System::Net::__TimerThread__TimerNode* ___next;

  /// @brief Field prev, offset: 0x40, size: 0x8, def value: None
  ::System::Net::__TimerThread__TimerNode* ___prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__TimerNode, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerNode, ___m_TimerState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerNode, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerNode, ___m_Context) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerNode, ___m_QueueLock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerNode, ___next) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__TimerNode, ___prev) == 0x40, "Offset mismatch!");

} // namespace System::Net
// Type: ::InfiniteTimer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9111))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9117))
// CS Name: ::TimerThread::InfiniteTimer*
class CORDL_TYPE __TimerThread__InfiniteTimer : public ::System::Net::__TimerThread__Timer {
public:
  // Declarations
  /// @brief Field cancelled, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cancelled, put = __cordl_internal_set_cancelled)) int32_t cancelled;

  __declspec(property(get = get_HasExpired)) bool HasExpired;

  constexpr int32_t& __cordl_internal_get_cancelled();

  constexpr int32_t const& __cordl_internal_get_cancelled() const;

  constexpr void __cordl_internal_set_cancelled(int32_t value);

  static inline ::System::Net::__TimerThread__InfiniteTimer* New_ctor();

  /// @brief Method .ctor, addr 0x29aa958, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasExpired, addr 0x29aaaec, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasExpired();

  /// @brief Method Cancel, addr 0x29aaaf4, size 0x24, virtual true, abstract: false, final false
  inline bool Cancel();

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__InfiniteTimer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimerThread__InfiniteTimer(__TimerThread__InfiniteTimer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimerThread__InfiniteTimer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimerThread__InfiniteTimer(__TimerThread__InfiniteTimer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimerThread__InfiniteTimer();

public:
  /// @brief Field cancelled, offset: 0x18, size: 0x4, def value: None
  int32_t ___cancelled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__TimerThread__InfiniteTimer, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::__TimerThread__InfiniteTimer, ___cancelled) == 0x18, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::TimerThread
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9118))
// CS Name: ::System.Net::TimerThread*
class CORDL_TYPE TimerThread : public ::System::Object {
public:
  // Declarations
  using InfiniteTimer = ::System::Net::__TimerThread__InfiniteTimer;

  using TimerNode = ::System::Net::__TimerThread__TimerNode;

  using InfiniteTimerQueue = ::System::Net::__TimerThread__InfiniteTimerQueue;

  using TimerQueue = ::System::Net::__TimerThread__TimerQueue;

  using Callback = ::System::Net::__TimerThread__Callback;

  using Timer = ::System::Net::__TimerThread__Timer;

  using Queue = ::System::Net::__TimerThread__Queue;

  /// @brief Field s_Queues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Queues, put = setStaticF_s_Queues))::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* s_Queues;

  /// @brief Field s_NewQueues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NewQueues, put = setStaticF_s_NewQueues))::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* s_NewQueues;

  /// @brief Field s_ThreadState, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ThreadState, put = setStaticF_s_ThreadState)) int32_t s_ThreadState;

  /// @brief Field s_ThreadReadyEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ThreadReadyEvent, put = setStaticF_s_ThreadReadyEvent))::System::Threading::AutoResetEvent* s_ThreadReadyEvent;

  /// @brief Field s_ThreadShutdownEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ThreadShutdownEvent, put = setStaticF_s_ThreadShutdownEvent))::System::Threading::ManualResetEvent* s_ThreadShutdownEvent;

  /// @brief Field s_ThreadEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ThreadEvents, put = setStaticF_s_ThreadEvents))::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> s_ThreadEvents;

  /// @brief Field s_CacheScanIteration, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CacheScanIteration, put = setStaticF_s_CacheScanIteration)) int32_t s_CacheScanIteration;

  /// @brief Field s_QueuesCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_QueuesCache, put = setStaticF_s_QueuesCache))::System::Collections::Hashtable* s_QueuesCache;

  static inline void setStaticF_s_Queues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* value);

  static inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* getStaticF_s_Queues();

  static inline void setStaticF_s_NewQueues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* value);

  static inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* getStaticF_s_NewQueues();

  static inline void setStaticF_s_ThreadState(int32_t value);

  static inline int32_t getStaticF_s_ThreadState();

  static inline void setStaticF_s_ThreadReadyEvent(::System::Threading::AutoResetEvent* value);

  static inline ::System::Threading::AutoResetEvent* getStaticF_s_ThreadReadyEvent();

  static inline void setStaticF_s_ThreadShutdownEvent(::System::Threading::ManualResetEvent* value);

  static inline ::System::Threading::ManualResetEvent* getStaticF_s_ThreadShutdownEvent();

  static inline void setStaticF_s_ThreadEvents(::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> value);

  static inline ::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> getStaticF_s_ThreadEvents();

  static inline void setStaticF_s_CacheScanIteration(int32_t value);

  static inline int32_t getStaticF_s_CacheScanIteration();

  static inline void setStaticF_s_QueuesCache(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_s_QueuesCache();

  /// @brief Method CreateQueue, addr 0x29a4204, size 0x264, virtual false, abstract: false, final false
  static inline ::System::Net::__TimerThread__Queue* CreateQueue(int32_t durationMilliseconds);

  /// @brief Method GetOrCreateQueue, addr 0x29a8c64, size 0x99c, virtual false, abstract: false, final false
  static inline ::System::Net::__TimerThread__Queue* GetOrCreateQueue(int32_t durationMilliseconds);

  /// @brief Method Prod, addr 0x29a9600, size 0x114, virtual false, abstract: false, final false
  static inline void Prod();

  /// @brief Method ThreadProc, addr 0x29a9714, size 0x7c8, virtual false, abstract: false, final false
  static inline void ThreadProc();

  /// @brief Method StopTimerThread, addr 0x29aa0d0, size 0x7c, virtual false, abstract: false, final false
  static inline void StopTimerThread();

  /// @brief Method IsTickBetween, addr 0x29aa0ac, size 0x24, virtual false, abstract: false, final false
  static inline bool IsTickBetween(int32_t start, int32_t end, int32_t comparand);

  /// @brief Method OnDomainUnload, addr 0x29aa14c, size 0xc4, virtual false, abstract: false, final false
  static inline void OnDomainUnload(::System::Object* sender, ::System::EventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerThread(TimerThread&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerThread", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerThread(TimerThread const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerThread();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TimerThread, 0x10>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TimerThread__TimerNode__TimerState, "System.Net", "TimerThread/TimerNode/TimerState");
NEED_NO_BOX(::System::Net::TimerThread);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread*, "System.Net", "TimerThread");
NEED_NO_BOX(::System::Net::__TimerThread__Callback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__Callback*, "System.Net", "TimerThread/Callback");
NEED_NO_BOX(::System::Net::__TimerThread__InfiniteTimer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__InfiniteTimer*, "System.Net", "TimerThread/InfiniteTimer");
NEED_NO_BOX(::System::Net::__TimerThread__InfiniteTimerQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__InfiniteTimerQueue*, "System.Net", "TimerThread/InfiniteTimerQueue");
NEED_NO_BOX(::System::Net::__TimerThread__Queue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__Queue*, "System.Net", "TimerThread/Queue");
NEED_NO_BOX(::System::Net::__TimerThread__Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__Timer*, "System.Net", "TimerThread/Timer");
NEED_NO_BOX(::System::Net::__TimerThread__TimerNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__TimerNode*, "System.Net", "TimerThread/TimerNode");
NEED_NO_BOX(::System::Net::__TimerThread__TimerQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__TimerThread__TimerQueue*, "System.Net", "TimerThread/TimerQueue");
