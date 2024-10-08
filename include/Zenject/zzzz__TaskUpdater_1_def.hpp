#pragma once
// IWYU pragma private; include "Zenject/TaskUpdater_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskUpdater_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename TTask> class __TaskUpdater_1__TaskInfo;
}
namespace Zenject {
template <typename TTask> class __TaskUpdater_1____c__DisplayClass8_0;
}
namespace Zenject {
template <typename TTask> class __TaskUpdater_1____c;
}
// Forward declare root types
namespace Zenject {
template <typename TTask> class TaskUpdater_1;
}
namespace Zenject {
template <typename TTask> class __TaskUpdater_1__TaskInfo;
}
namespace Zenject {
template <typename TTask> class __TaskUpdater_1____c;
}
namespace Zenject {
template <typename TTask> class __TaskUpdater_1____c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::TaskUpdater_1);
MARK_GEN_REF_PTR_T(::Zenject::__TaskUpdater_1__TaskInfo);
MARK_GEN_REF_PTR_T(::Zenject::__TaskUpdater_1____c);
MARK_GEN_REF_PTR_T(::Zenject::__TaskUpdater_1____c__DisplayClass8_0);
// Type: ::TaskInfo
// SizeInfo { instance_size: 32, native_size: 29, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TTask>
// Is value type: false
// CS Name: ::TaskUpdater`1::TaskInfo<TTask>*
class CORDL_TYPE __TaskUpdater_1__TaskInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsRemoved, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_IsRemoved, put = __cordl_internal_set_IsRemoved)) bool IsRemoved;

  /// @brief Field Priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Priority, put = __cordl_internal_set_Priority)) int32_t Priority;

  /// @brief Field Task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Task, put = __cordl_internal_set_Task)) TTask Task;

  static inline ::Zenject::__TaskUpdater_1__TaskInfo<TTask>* New_ctor(TTask task, int32_t priority);

  constexpr bool const& __cordl_internal_get_IsRemoved() const;

  constexpr bool& __cordl_internal_get_IsRemoved();

  constexpr int32_t const& __cordl_internal_get_Priority() const;

  constexpr int32_t& __cordl_internal_get_Priority();

  constexpr TTask const& __cordl_internal_get_Task() const;

  constexpr TTask& __cordl_internal_get_Task();

  constexpr void __cordl_internal_set_IsRemoved(bool value);

  constexpr void __cordl_internal_set_Priority(int32_t value);

  constexpr void __cordl_internal_set_Task(TTask value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TTask task, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskUpdater_1__TaskInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1__TaskInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskUpdater_1__TaskInfo(__TaskUpdater_1__TaskInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1__TaskInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskUpdater_1__TaskInfo(__TaskUpdater_1__TaskInfo const&) = delete;

  /// @brief Field Task, offset: 0x10, size: 0x8, def value: None
  TTask ___Task;

  /// @brief Field Priority, offset: 0x18, size: 0x4, def value: None
  int32_t ___Priority;

  /// @brief Field IsRemoved, offset: 0x1c, size: 0x1, def value: None
  bool ___IsRemoved;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TTask>
// Is value type: false
// CS Name: ::TaskUpdater`1::<>c<TTask>*
class CORDL_TYPE __TaskUpdater_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__TaskUpdater_1____c<TTask>* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*, TTask>* __9__7_0;

  static inline ::Zenject::__TaskUpdater_1____c<TTask>* New_ctor();

  /// @brief Method <AddTaskInternal>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TTask _AddTaskInternal_b__7_0(::Zenject::__TaskUpdater_1__TaskInfo<TTask>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__TaskUpdater_1____c<TTask>* getStaticF___9();

  static inline ::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*, TTask>* getStaticF___9__7_0();

  static inline void setStaticF___9(::Zenject::__TaskUpdater_1____c<TTask>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*, TTask>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskUpdater_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskUpdater_1____c(__TaskUpdater_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskUpdater_1____c(__TaskUpdater_1____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TTask>
// Is value type: false
// CS Name: ::TaskUpdater`1::<>c__DisplayClass8_0<TTask>*
class CORDL_TYPE __TaskUpdater_1____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) TTask task;

  static inline ::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>* New_ctor();

  /// @brief Method <RemoveTask>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _RemoveTask_b__0(::Zenject::__TaskUpdater_1__TaskInfo<TTask>* x);

  constexpr TTask const& __cordl_internal_get_task() const;

  constexpr TTask& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_task(TTask value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskUpdater_1____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskUpdater_1____c__DisplayClass8_0(__TaskUpdater_1____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskUpdater_1____c__DisplayClass8_0(__TaskUpdater_1____c__DisplayClass8_0 const&) = delete;

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  TTask ___task;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::TaskUpdater`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TTask>
// Is value type: false
// CS Name: ::Zenject::TaskUpdater`1<TTask>*
class CORDL_TYPE TaskUpdater_1 : public ::System::Object {
public:
  // Declarations
  using TaskInfo = ::Zenject::__TaskUpdater_1__TaskInfo<TTask>;

  using __c = ::Zenject::__TaskUpdater_1____c<TTask>;

  using __c__DisplayClass8_0 = ::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>;

  __declspec(property(get = get_ActiveTasks)) ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* ActiveTasks;

  __declspec(property(get = get_AllTasks)) ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* AllTasks;

  /// @brief Field _queuedTasks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__queuedTasks,
                      put = __cordl_internal_set__queuedTasks)) ::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* _queuedTasks;

  /// @brief Field _tasks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tasks, put = __cordl_internal_set__tasks)) ::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* _tasks;

  /// @brief Method AddQueuedTasks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddQueuedTasks();

  /// @brief Method AddTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddTask(TTask task, int32_t priority);

  /// @brief Method AddTaskInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddTaskInternal(TTask task, int32_t priority);

  /// @brief Method ClearRemovedTasks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearRemovedTasks(::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* tasks);

  /// @brief Method InsertTaskSorted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertTaskSorted(::Zenject::__TaskUpdater_1__TaskInfo<TTask>* task);

  static inline ::Zenject::TaskUpdater_1<TTask>* New_ctor();

  /// @brief Method OnFrameStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnFrameStart();

  /// @brief Method RemoveTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveTask(TTask task);

  /// @brief Method UpdateAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateAll();

  /// @brief Method UpdateItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateItem(TTask task);

  /// @brief Method UpdateRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateRange(int32_t minPriority, int32_t maxPriority);

  constexpr ::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*& __cordl_internal_get__queuedTasks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*> const& __cordl_internal_get__queuedTasks() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*& __cordl_internal_get__tasks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*> const& __cordl_internal_get__tasks() const;

  constexpr void __cordl_internal_set__queuedTasks(::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* value);

  constexpr void __cordl_internal_set__tasks(::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ActiveTasks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* get_ActiveTasks();

  /// @brief Method get_AllTasks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* get_AllTasks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskUpdater_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskUpdater_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskUpdater_1(TaskUpdater_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskUpdater_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskUpdater_1(TaskUpdater_1 const&) = delete;

  /// @brief Field _tasks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* ____tasks;

  /// @brief Field _queuedTasks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* ____queuedTasks;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::TaskUpdater_1, "Zenject", "TaskUpdater`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__TaskUpdater_1__TaskInfo, "Zenject", "TaskUpdater`1/TaskInfo");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__TaskUpdater_1____c, "Zenject", "TaskUpdater`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__TaskUpdater_1____c__DisplayClass8_0, "Zenject", "TaskUpdater`1/<>c__DisplayClass8_0");
