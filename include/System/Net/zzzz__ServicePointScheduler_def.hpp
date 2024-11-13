#pragma once
// IWYU pragma private; include "System/Net/ServicePointScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointScheduler)
namespace GlobalNamespace {
class __ServicePointScheduler__AsyncManualResetEvent____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class __ServicePointScheduler__AsyncManualResetEvent;
}
namespace System::Net {
class __ServicePointScheduler__ConnectionGroup;
}
namespace System::Net {
struct __ServicePointScheduler___RunScheduler_d__32;
}
namespace System::Net {
struct __ServicePointScheduler___WaitAsync_d__46;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
class __ServicePointScheduler__AsyncManualResetEvent____c;
}
namespace System::Net {
class ServicePointScheduler;
}
namespace System::Net {
class __ServicePointScheduler__AsyncManualResetEvent;
}
namespace System::Net {
class __ServicePointScheduler__ConnectionGroup;
}
namespace System::Net {
struct __ServicePointScheduler___RunScheduler_d__32;
}
namespace System::Net {
struct __ServicePointScheduler___WaitAsync_d__46;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c);
MARK_REF_PTR_T(::System::Net::ServicePointScheduler);
MARK_REF_PTR_T(::System::Net::__ServicePointScheduler__AsyncManualResetEvent);
MARK_REF_PTR_T(::System::Net::__ServicePointScheduler__ConnectionGroup);
MARK_VAL_T(::System::Net::__ServicePointScheduler___RunScheduler_d__32);
MARK_VAL_T(::System::Net::__ServicePointScheduler___WaitAsync_d__46);
// Type: ::ConnectionGroup
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::ServicePointScheduler::ConnectionGroup*
class CORDL_TYPE __ServicePointScheduler__ConnectionGroup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Scheduler)) ::System::Net::ServicePointScheduler* Scheduler;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <Scheduler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Scheduler_k__BackingField, put = __cordl_internal_set__Scheduler_k__BackingField)) ::System::Net::ServicePointScheduler* _Scheduler_k__BackingField;

  /// @brief Field ID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) int32_t _cordl_ID;

  /// @brief Field connections, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_connections, put = __cordl_internal_set_connections)) ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* connections;

  /// @brief Field nextId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextId, put = setStaticF_nextId)) int32_t nextId;

  /// @brief Field queue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_queue, put = __cordl_internal_set_queue)) ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* queue;

  /// @brief Method Cleanup, addr 0x4374f20, size 0xec, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Close, addr 0x437565c, size 0x2f0, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method CreateOrReuseConnection, addr 0x437500c, size 0x198, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::System::Net::WebConnection*, bool> CreateOrReuseConnection(::System::Net::WebOperation* operation, bool force);

  /// @brief Method EnqueueOperation, addr 0x4375604, size 0x58, virtual false, abstract: false, final false
  inline void EnqueueOperation(::System::Net::WebOperation* operation);

  /// @brief Method FindIdleConnection, addr 0x4375a98, size 0x31c, virtual false, abstract: false, final false
  inline ::System::Net::WebConnection* FindIdleConnection(::System::Net::WebOperation* operation);

  /// @brief Method GetNextOperation, addr 0x43751dc, size 0xec, virtual false, abstract: false, final false
  inline ::System::Net::WebOperation* GetNextOperation();

  /// @brief Method IsEmpty, addr 0x43746a4, size 0x74, virtual false, abstract: false, final false
  inline bool IsEmpty();

  static inline ::System::Net::__ServicePointScheduler__ConnectionGroup* New_ctor(::System::Net::ServicePointScheduler* scheduler, ::StringW name);

  /// @brief Method RemoveConnection, addr 0x4374dcc, size 0x88, virtual false, abstract: false, final false
  inline void RemoveConnection(::System::Net::WebConnection* connection);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Net::ServicePointScheduler*& __cordl_internal_get__Scheduler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePointScheduler*> const& __cordl_internal_get__Scheduler_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

  constexpr int32_t& __cordl_internal_get__cordl_ID();

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*& __cordl_internal_get_connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*> const& __cordl_internal_get_connections() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*& __cordl_internal_get_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*> const& __cordl_internal_get_queue() const;

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler* value);

  constexpr void __cordl_internal_set__cordl_ID(int32_t value);

  constexpr void __cordl_internal_set_connections(::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* value);

  constexpr void __cordl_internal_set_queue(::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* value);

  /// @brief Method .ctor, addr 0x4374024, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::ServicePointScheduler* scheduler, ::StringW name);

  static inline int32_t getStaticF_nextId();

  /// @brief Method get_Scheduler, addr 0x4375a78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePointScheduler* get_Scheduler();

  static inline void setStaticF_nextId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServicePointScheduler__ConnectionGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ServicePointScheduler__ConnectionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ServicePointScheduler__ConnectionGroup(__ServicePointScheduler__ConnectionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ServicePointScheduler__ConnectionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ServicePointScheduler__ConnectionGroup(__ServicePointScheduler__ConnectionGroup const&) = delete;

  /// @brief Field <Scheduler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::ServicePointScheduler* ____Scheduler_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field ID, offset: 0x20, size: 0x4, def value: None
  int32_t ____cordl_ID;

  /// @brief Field connections, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* ___connections;

  /// @brief Field queue, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* ___queue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServicePointScheduler__ConnectionGroup, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler__ConnectionGroup, ____Scheduler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler__ConnectionGroup, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler__ConnectionGroup, ____cordl_ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler__ConnectionGroup, ___connections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler__ConnectionGroup, ___queue) == 0x30, "Offset mismatch!");

} // namespace System::Net
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ServicePointScheduler::AsyncManualResetEvent::<>c*
class CORDL_TYPE __ServicePointScheduler__AsyncManualResetEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::System::Object*, bool>* __9__4_0;

  static inline ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c* New_ctor();

  /// @brief Method <Set>b__4_0, addr 0x43764bc, size 0x9c, virtual false, abstract: false, final false
  inline bool _Set_b__4_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x43764b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, bool>* getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::System::Object*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServicePointScheduler__AsyncManualResetEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ServicePointScheduler__AsyncManualResetEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ServicePointScheduler__AsyncManualResetEvent____c(__ServicePointScheduler__AsyncManualResetEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ServicePointScheduler__AsyncManualResetEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ServicePointScheduler__AsyncManualResetEvent____c(__ServicePointScheduler__AsyncManualResetEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9695 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AsyncManualResetEvent
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::ServicePointScheduler::AsyncManualResetEvent*
class CORDL_TYPE __ServicePointScheduler__AsyncManualResetEvent : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c;

  /// @brief Field m_tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_tcs, put = __cordl_internal_set_m_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* m_tcs;

  static inline ::System::Net::__ServicePointScheduler__AsyncManualResetEvent* New_ctor(bool state);

  /// @brief Method Reset, addr 0x43748a4, size 0xc0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Set, addr 0x43741f0, size 0x22c, virtual false, abstract: false, final false
  inline void Set();

  /// @brief Method WaitAsync, addr 0x4376404, size 0x54, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(int32_t millisecondTimeout);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_m_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get_m_tcs() const;

  constexpr void __cordl_internal_set_m_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x4373f84, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(bool state);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServicePointScheduler__AsyncManualResetEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ServicePointScheduler__AsyncManualResetEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ServicePointScheduler__AsyncManualResetEvent(__ServicePointScheduler__AsyncManualResetEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ServicePointScheduler__AsyncManualResetEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ServicePointScheduler__AsyncManualResetEvent(__ServicePointScheduler__AsyncManualResetEvent const&) = delete;

  /// @brief Field m_tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___m_tcs;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9696 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServicePointScheduler__AsyncManualResetEvent, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler__AsyncManualResetEvent, ___m_tcs) == 0x10, "Offset mismatch!");

} // namespace System::Net
// Type: ::<RunScheduler>d__32
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::ServicePointScheduler::<RunScheduler>d__32
struct CORDL_TYPE __ServicePointScheduler___RunScheduler_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4376558, size 0xb48, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43770a0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServicePointScheduler___RunScheduler_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::ServicePointScheduler*", modifiers: "",
  // def_value: None }, CppParam { name: "_operationArray_5__2", ty:
  // "::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>",
  // modifiers: "", def_value: None }, CppParam { name: "_idleArray_5__3", ty:
  // "::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>",
  // modifiers: "", def_value: None }, CppParam { name: "_taskList_5__4", ty: "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None }, CppParam {
  // name: "_schedulerTask_5__5", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "_finalCleanup_5__6", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ServicePointScheduler___RunScheduler_d__32(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::ServicePointScheduler* __4__this,
      ::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>,
               ::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>*>
          _operationArray_5__2,
      ::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>,
               ::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*>
          _idleArray_5__3,
      ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* _taskList_5__4, ::System::Threading::Tasks::Task_1<bool>* _schedulerTask_5__5, bool _finalCleanup_5__6,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::ServicePointScheduler* __4__this;

  /// @brief Field <operationArray>5__2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>,
           ::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>*>
      _operationArray_5__2;

  /// @brief Field <idleArray>5__3, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>,
           ::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*>
      _idleArray_5__3;

  /// @brief Field <taskList>5__4, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* _taskList_5__4;

  /// @brief Field <schedulerTask>5__5, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* _schedulerTask_5__5;

  /// @brief Field <finalCleanup>5__6, offset: 0x48, size: 0x1, def value: None
  bool _finalCleanup_5__6;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9697 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServicePointScheduler___RunScheduler_d__32, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, _operationArray_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, _idleArray_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, _taskList_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, _schedulerTask_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, _finalCleanup_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___RunScheduler_d__32, __u__1) == 0x50, "Offset mismatch!");

} // namespace System::Net
// Type: ::<WaitAsync>d__46
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::ServicePointScheduler::<WaitAsync>d__46
struct CORDL_TYPE __ServicePointScheduler___WaitAsync_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4377108, size 0x4a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43775a8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServicePointScheduler___WaitAsync_d__46();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "millisecondTimeout", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*",
  // modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __ServicePointScheduler___WaitAsync_d__46(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, int32_t millisecondTimeout,
                                                      ::System::Threading::Tasks::Task* workerTask, ::System::Threading::CancellationTokenSource* _cts_5__2,
                                                      ::System::Threading::Tasks::Task* _timeoutTask_5__3,
                                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field millisecondTimeout, offset: 0x20, size: 0x4, def value: None
  int32_t millisecondTimeout;

  /// @brief Field workerTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* workerTask;

  /// @brief Field <cts>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _cts_5__2;

  /// @brief Field <timeoutTask>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9698 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServicePointScheduler___WaitAsync_d__46, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, millisecondTimeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, workerTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, _cts_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, _timeoutTask_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointScheduler___WaitAsync_d__46, __u__1) == 0x40, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::ServicePointScheduler
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ServicePointScheduler*
class CORDL_TYPE ServicePointScheduler : public ::System::Object {
public:
  // Declarations
  using AsyncManualResetEvent = ::System::Net::__ServicePointScheduler__AsyncManualResetEvent;

  using ConnectionGroup = ::System::Net::__ServicePointScheduler__ConnectionGroup;

  using _RunScheduler_d__32 = ::System::Net::__ServicePointScheduler___RunScheduler_d__32;

  using _WaitAsync_d__46 = ::System::Net::__ServicePointScheduler___WaitAsync_d__46;

  __declspec(property(get = get_MaxIdleTime)) int32_t MaxIdleTime;

  __declspec(property(get = get_ServicePoint, put = set_ServicePoint)) ::System::Net::ServicePoint* ServicePoint;

  /// @brief Field <ServicePoint>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ServicePoint_k__BackingField, put = __cordl_internal_set__ServicePoint_k__BackingField)) ::System::Net::ServicePoint* _ServicePoint_k__BackingField;

  /// @brief Field ID, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) int32_t _cordl_ID;

  /// @brief Field connectionLimit, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_connectionLimit, put = __cordl_internal_set_connectionLimit)) int32_t connectionLimit;

  /// @brief Field currentConnections, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_currentConnections, put = __cordl_internal_set_currentConnections)) int32_t currentConnections;

  /// @brief Field defaultGroup, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultGroup, put = __cordl_internal_set_defaultGroup)) ::System::Net::__ServicePointScheduler__ConnectionGroup* defaultGroup;

  /// @brief Field groups, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_groups,
                      put = __cordl_internal_set_groups)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::__ServicePointScheduler__ConnectionGroup*>* groups;

  /// @brief Field idleConnections, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_idleConnections, put = __cordl_internal_set_idleConnections)) ::System::Collections::Generic::LinkedList_1<
      ::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>* idleConnections;

  /// @brief Field idleSince, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_idleSince, put = __cordl_internal_set_idleSince)) ::System::DateTime idleSince;

  /// @brief Field maxIdleTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxIdleTime, put = __cordl_internal_set_maxIdleTime)) int32_t maxIdleTime;

  /// @brief Field nextId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextId, put = setStaticF_nextId)) int32_t nextId;

  /// @brief Field operations, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_operations, put = __cordl_internal_set_operations)) ::System::Collections::Generic::LinkedList_1<
      ::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>* operations;

  /// @brief Field running, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_running, put = __cordl_internal_set_running)) int32_t running;

  /// @brief Field schedulerEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_schedulerEvent, put = __cordl_internal_set_schedulerEvent)) ::System::Net::__ServicePointScheduler__AsyncManualResetEvent* schedulerEvent;

  /// @brief Method Cleanup, addr 0x43744e4, size 0x1c0, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CloseConnectionGroup, addr 0x4373250, size 0x110, virtual false, abstract: false, final false
  inline bool CloseConnectionGroup(::StringW groupName);

  /// @brief Method CloseIdleConnection, addr 0x43751a4, size 0x38, virtual false, abstract: false, final false
  inline void CloseIdleConnection(::System::Net::__ServicePointScheduler__ConnectionGroup* group, ::System::Net::WebConnection* connection);

  /// @brief Method FinalCleanup, addr 0x4375394, size 0x80, virtual false, abstract: false, final false
  inline void FinalCleanup();

  /// @brief Method GetConnectionGroup, addr 0x4375414, size 0x1f0, virtual false, abstract: false, final false
  inline ::System::Net::__ServicePointScheduler__ConnectionGroup* GetConnectionGroup(::StringW name);

  static inline ::System::Net::ServicePointScheduler* New_ctor(::System::Net::ServicePoint* servicePoint, int32_t connectionLimit, int32_t maxIdleTime);

  /// @brief Method OnConnectionClosed, addr 0x4375958, size 0x1c, virtual false, abstract: false, final false
  inline void OnConnectionClosed(::System::Net::WebConnection* connection);

  /// @brief Method OnConnectionCreated, addr 0x437594c, size 0xc, virtual false, abstract: false, final false
  inline void OnConnectionCreated(::System::Net::WebConnection* connection);

  /// @brief Method OperationCompleted, addr 0x4374a44, size 0x220, virtual false, abstract: false, final false
  inline bool OperationCompleted(::System::Net::__ServicePointScheduler__ConnectionGroup* group, ::System::Net::WebOperation* operation);

  /// @brief Method RemoveIdleConnection, addr 0x4374e54, size 0xcc, virtual false, abstract: false, final false
  inline void RemoveIdleConnection(::System::Net::WebConnection* connection);

  /// @brief Method RemoveOperation, addr 0x43752c8, size 0xcc, virtual false, abstract: false, final false
  inline void RemoveOperation(::System::Net::WebOperation* operation);

  /// @brief Method Run, addr 0x437412c, size 0xc4, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method RunScheduler, addr 0x437441c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RunScheduler();

  /// @brief Method RunSchedulerIteration, addr 0x4374718, size 0x18c, virtual false, abstract: false, final false
  inline void RunSchedulerIteration();

  /// @brief Method SchedulerIteration, addr 0x4374964, size 0xe0, virtual false, abstract: false, final false
  inline bool SchedulerIteration(::System::Net::__ServicePointScheduler__ConnectionGroup* group);

  /// @brief Method SendRequest, addr 0x437307c, size 0xe8, virtual false, abstract: false, final false
  inline void SendRequest(::System::Net::WebOperation* operation, ::StringW groupName);

  /// @brief Method WaitAsync, addr 0x4375974, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(::System::Threading::Tasks::Task* workerTask, int32_t millisecondTimeout);

  /// @brief Method <Run>b__31_0, addr 0x4375a74, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _Run_b__31_0();

  constexpr ::System::Net::ServicePoint*& __cordl_internal_get__ServicePoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePoint*> const& __cordl_internal_get__ServicePoint_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

  constexpr int32_t& __cordl_internal_get__cordl_ID();

  constexpr int32_t const& __cordl_internal_get_connectionLimit() const;

  constexpr int32_t& __cordl_internal_get_connectionLimit();

  constexpr int32_t const& __cordl_internal_get_currentConnections() const;

  constexpr int32_t& __cordl_internal_get_currentConnections();

  constexpr ::System::Net::__ServicePointScheduler__ConnectionGroup*& __cordl_internal_get_defaultGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__ServicePointScheduler__ConnectionGroup*> const& __cordl_internal_get_defaultGroup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::__ServicePointScheduler__ConnectionGroup*>*& __cordl_internal_get_groups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::__ServicePointScheduler__ConnectionGroup*>*> const&
  __cordl_internal_get_groups() const;

  constexpr ::System::Collections::Generic::LinkedList_1<
      ::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*&
  __cordl_internal_get_idleConnections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<
      ::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*> const&
  __cordl_internal_get_idleConnections() const;

  constexpr ::System::DateTime const& __cordl_internal_get_idleSince() const;

  constexpr ::System::DateTime& __cordl_internal_get_idleSince();

  constexpr int32_t const& __cordl_internal_get_maxIdleTime() const;

  constexpr int32_t& __cordl_internal_get_maxIdleTime();

  constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>*&
  __cordl_internal_get_operations();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>*> const&
  __cordl_internal_get_operations() const;

  constexpr int32_t const& __cordl_internal_get_running() const;

  constexpr int32_t& __cordl_internal_get_running();

  constexpr ::System::Net::__ServicePointScheduler__AsyncManualResetEvent*& __cordl_internal_get_schedulerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*> const& __cordl_internal_get_schedulerEvent() const;

  constexpr void __cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint* value);

  constexpr void __cordl_internal_set__cordl_ID(int32_t value);

  constexpr void __cordl_internal_set_connectionLimit(int32_t value);

  constexpr void __cordl_internal_set_currentConnections(int32_t value);

  constexpr void __cordl_internal_set_defaultGroup(::System::Net::__ServicePointScheduler__ConnectionGroup* value);

  constexpr void __cordl_internal_set_groups(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::__ServicePointScheduler__ConnectionGroup*>* value);

  constexpr void __cordl_internal_set_idleConnections(
      ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*
          value);

  constexpr void __cordl_internal_set_idleSince(::System::DateTime value);

  constexpr void __cordl_internal_set_maxIdleTime(int32_t value);

  constexpr void
  __cordl_internal_set_operations(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>* value);

  constexpr void __cordl_internal_set_running(int32_t value);

  constexpr void __cordl_internal_set_schedulerEvent(::System::Net::__ServicePointScheduler__AsyncManualResetEvent* value);

  /// @brief Method .ctor, addr 0x4372788, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::ServicePoint* servicePoint, int32_t connectionLimit, int32_t maxIdleTime);

  static inline int32_t getStaticF_nextId();

  /// @brief Method get_MaxIdleTime, addr 0x4373f7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxIdleTime();

  /// @brief Method get_ServicePoint, addr 0x4373f6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  static inline void setStaticF_nextId(int32_t value);

  /// @brief Method set_ServicePoint, addr 0x4373f74, size 0x8, virtual false, abstract: false, final false
  inline void set_ServicePoint(::System::Net::ServicePoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServicePointScheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServicePointScheduler(ServicePointScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServicePointScheduler(ServicePointScheduler const&) = delete;

  /// @brief Field <ServicePoint>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::ServicePoint* ____ServicePoint_k__BackingField;

  /// @brief Field running, offset: 0x18, size: 0x4, def value: None
  int32_t ___running;

  /// @brief Field maxIdleTime, offset: 0x1c, size: 0x4, def value: None
  int32_t ___maxIdleTime;

  /// @brief Field schedulerEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Net::__ServicePointScheduler__AsyncManualResetEvent* ___schedulerEvent;

  /// @brief Field defaultGroup, offset: 0x28, size: 0x8, def value: None
  ::System::Net::__ServicePointScheduler__ConnectionGroup* ___defaultGroup;

  /// @brief Field groups, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::__ServicePointScheduler__ConnectionGroup*>* ___groups;

  /// @brief Field operations, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*>>* ___operations;

  /// @brief Field idleConnections, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*
      ___idleConnections;

  /// @brief Field currentConnections, offset: 0x48, size: 0x4, def value: None
  int32_t ___currentConnections;

  /// @brief Field connectionLimit, offset: 0x4c, size: 0x4, def value: None
  int32_t ___connectionLimit;

  /// @brief Field idleSince, offset: 0x50, size: 0x8, def value: None
  ::System::DateTime ___idleSince;

  /// @brief Field ID, offset: 0x58, size: 0x4, def value: None
  int32_t ____cordl_ID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServicePointScheduler, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ____ServicePoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___running) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___maxIdleTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___schedulerEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___defaultGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___groups) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___operations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___idleConnections) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___currentConnections) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___connectionLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___idleSince) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ____cordl_ID) == 0x58, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*, "System.Net", "ServicePointScheduler/AsyncManualResetEvent/<>c");
NEED_NO_BOX(::System::Net::ServicePointScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointScheduler*, "System.Net", "ServicePointScheduler");
NEED_NO_BOX(::System::Net::__ServicePointScheduler__AsyncManualResetEvent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServicePointScheduler__AsyncManualResetEvent*, "System.Net", "ServicePointScheduler/AsyncManualResetEvent");
NEED_NO_BOX(::System::Net::__ServicePointScheduler__ConnectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServicePointScheduler__ConnectionGroup*, "System.Net", "ServicePointScheduler/ConnectionGroup");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServicePointScheduler___RunScheduler_d__32, "System.Net", "ServicePointScheduler/<RunScheduler>d__32");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServicePointScheduler___WaitAsync_d__46, "System.Net", "ServicePointScheduler/<WaitAsync>d__46");
