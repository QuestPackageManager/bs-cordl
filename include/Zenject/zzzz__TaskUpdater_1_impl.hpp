#pragma once
// IWYU pragma private; include "Zenject/TaskUpdater_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
template <typename TTask> constexpr TTask& Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_get_Task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
template <typename TTask> constexpr TTask const& Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_get_Task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
template <typename TTask> constexpr void Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_set_Task(TTask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Task, value);
}
template <typename TTask> constexpr int32_t& Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_get_Priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
template <typename TTask> constexpr int32_t const& Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_get_Priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
template <typename TTask> constexpr void Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_set_Priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Priority = value;
}
template <typename TTask> constexpr bool& Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_get_IsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRemoved;
}
template <typename TTask> constexpr bool const& Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_get_IsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRemoved;
}
template <typename TTask> constexpr void Zenject::TaskUpdater_1_TaskInfo<TTask>::__cordl_internal_set_IsRemoved(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsRemoved = value;
}
template <typename TTask> inline void Zenject::TaskUpdater_1_TaskInfo<TTask>::_ctor(TTask task, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, priority);
}
template <typename TTask> inline ::System::Object* Zenject::TaskUpdater_1_TaskInfo<TTask>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1_TaskInfo<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1_TaskInfo<TTask>* Zenject::TaskUpdater_1_TaskInfo<TTask>::New_ctor(TTask task, int32_t priority) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>(task, priority));
}
// Ctor Parameters []
template <typename TTask> constexpr ::Zenject::TaskUpdater_1_TaskInfo<TTask>::TaskUpdater_1_TaskInfo() {}
template <typename TTask> inline void Zenject::TaskUpdater_1___c<TTask>::setStaticF___9(::Zenject::TaskUpdater_1___c<TTask>* value) {
  ::cordl_internals::setStaticField<::Zenject::TaskUpdater_1___c<TTask>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get>(
      std::forward<::Zenject::TaskUpdater_1___c<TTask>*>(value));
}
template <typename TTask> inline ::Zenject::TaskUpdater_1___c<TTask>* Zenject::TaskUpdater_1___c<TTask>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::TaskUpdater_1___c<TTask>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get>();
}
template <typename TTask> inline void Zenject::TaskUpdater_1___c<TTask>::setStaticF___9__7_0(::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get>(
      std::forward<::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>*>(value));
}
template <typename TTask> inline ::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>* Zenject::TaskUpdater_1___c<TTask>::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get>();
}
template <typename TTask> inline void Zenject::TaskUpdater_1___c<TTask>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTask> inline TTask Zenject::TaskUpdater_1___c<TTask>::_AddTaskInternal_b__7_0(::Zenject::TaskUpdater_1_TaskInfo<TTask>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get(), "<AddTaskInternal>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TTask, false>(this, ___internal_method, x);
}
template <typename TTask> inline ::System::Object* Zenject::TaskUpdater_1___c<TTask>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1___c<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c<TTask>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1___c<TTask>* Zenject::TaskUpdater_1___c<TTask>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::TaskUpdater_1___c<TTask>*>());
}
// Ctor Parameters []
template <typename TTask> constexpr ::Zenject::TaskUpdater_1___c<TTask>::TaskUpdater_1___c() {}
template <typename TTask> constexpr TTask& Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
template <typename TTask> constexpr TTask const& Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
template <typename TTask> constexpr void Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__cordl_internal_set_task(TTask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___task, value);
}
template <typename TTask> inline void Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTask> inline bool Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::_RemoveTask_b__0(::Zenject::TaskUpdater_1_TaskInfo<TTask>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>::get(), "<RemoveTask>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
template <typename TTask> inline ::System::Object* Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>* Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>());
}
// Ctor Parameters []
template <typename TTask> constexpr ::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::TaskUpdater_1___c__DisplayClass8_0() {}
template <typename TTask> constexpr ::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*& Zenject::TaskUpdater_1<TTask>::__cordl_internal_get__tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tasks;
}
template <typename TTask> constexpr ::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* const& Zenject::TaskUpdater_1<TTask>::__cordl_internal_get__tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tasks;
}
template <typename TTask> constexpr void Zenject::TaskUpdater_1<TTask>::__cordl_internal_set__tasks(::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____tasks, value);
}
template <typename TTask> constexpr ::System::Collections::Generic::List_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*& Zenject::TaskUpdater_1<TTask>::__cordl_internal_get__queuedTasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedTasks;
}
template <typename TTask> constexpr ::System::Collections::Generic::List_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* const& Zenject::TaskUpdater_1<TTask>::__cordl_internal_get__queuedTasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedTasks;
}
template <typename TTask> constexpr void Zenject::TaskUpdater_1<TTask>::__cordl_internal_set__queuedTasks(::System::Collections::Generic::List_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____queuedTasks, value);
}
template <typename TTask> inline ::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::get_AllTasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "get_AllTasks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*, false>(this, ___internal_method);
}
template <typename TTask> inline ::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::get_ActiveTasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "get_ActiveTasks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*, false>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::AddTask(TTask task, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "AddTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, priority);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::AddTaskInternal(TTask task, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "AddTaskInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, priority);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::RemoveTask(TTask task) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "RemoveTask", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::OnFrameStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "OnFrameStart",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::UpdateAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "UpdateAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::UpdateRange(int32_t minPriority, int32_t maxPriority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "UpdateRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minPriority, maxPriority);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::ClearRemovedTasks(::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "ClearRemovedTasks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tasks);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::AddQueuedTasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "AddQueuedTasks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::InsertTaskSorted(::Zenject::TaskUpdater_1_TaskInfo<TTask>* task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), "InsertTaskSorted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::UpdateItem(TTask task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1<TTask>* Zenject::TaskUpdater_1<TTask>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::TaskUpdater_1<TTask>*>());
}
// Ctor Parameters []
template <typename TTask> constexpr ::Zenject::TaskUpdater_1<TTask>::TaskUpdater_1() {}
