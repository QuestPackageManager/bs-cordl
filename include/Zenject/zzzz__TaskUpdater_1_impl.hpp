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
  this->___Task = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>(), { ".ctor", {}, { ::i2c::type_of<TTask>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, priority);
}
template <typename TTask> inline ::System::Object* Zenject::TaskUpdater_1_TaskInfo<TTask>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1_TaskInfo<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1_TaskInfo<TTask>* Zenject::TaskUpdater_1_TaskInfo<TTask>::New_ctor(TTask task, int32_t priority) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>(task, priority));
}
// Ctor Parameters []
template <typename TTask> constexpr ::Zenject::TaskUpdater_1_TaskInfo<TTask>::TaskUpdater_1_TaskInfo() {}
template <typename TTask> inline void Zenject::TaskUpdater_1___c<TTask>::setStaticF___9(::Zenject::TaskUpdater_1___c<TTask>* value) {
  ::cordl_internals::setStaticField<::Zenject::TaskUpdater_1___c<TTask>*, "<>9", ::Zenject::TaskUpdater_1___c<TTask>*>(std::forward<::Zenject::TaskUpdater_1___c<TTask>*>(value));
}
template <typename TTask> inline ::Zenject::TaskUpdater_1___c<TTask>* Zenject::TaskUpdater_1___c<TTask>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::TaskUpdater_1___c<TTask>*, "<>9", ::Zenject::TaskUpdater_1___c<TTask>*>();
}
template <typename TTask> inline void Zenject::TaskUpdater_1___c<TTask>::setStaticF___9__7_0(::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>*, "<>9__7_0", ::Zenject::TaskUpdater_1___c<TTask>*>(
      std::forward<::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>*>(value));
}
template <typename TTask> inline ::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>* Zenject::TaskUpdater_1___c<TTask>::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::TaskUpdater_1_TaskInfo<TTask>*, TTask>*, "<>9__7_0", ::Zenject::TaskUpdater_1___c<TTask>*>();
}
template <typename TTask> inline void Zenject::TaskUpdater_1___c<TTask>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c<TTask>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TTask> inline TTask Zenject::TaskUpdater_1___c<TTask>::_AddTaskInternal_b__7_0(::Zenject::TaskUpdater_1_TaskInfo<TTask>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c<TTask>*>(), { "<AddTaskInternal>b__7_0", {}, { ::i2c::type_of<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>() } })));
  return ::cordl_internals::RunMethodRethrow<TTask>(this, ___internal_method, x);
}
template <typename TTask> inline ::System::Object* Zenject::TaskUpdater_1___c<TTask>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c<TTask>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1___c<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c<TTask>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1___c<TTask>* Zenject::TaskUpdater_1___c<TTask>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TaskUpdater_1___c<TTask>*>());
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
  this->___task = value;
}
template <typename TTask> inline void Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TTask> inline bool Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::_RemoveTask_b__0(::Zenject::TaskUpdater_1_TaskInfo<TTask>* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>(),
                                                                                         { "<RemoveTask>b__0", {}, { ::i2c::type_of<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
template <typename TTask> inline ::System::Object* Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>* Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TaskUpdater_1___c__DisplayClass8_0<TTask>*>());
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
  this->____tasks = value;
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
  this->____queuedTasks = value;
}
template <typename TTask> inline ::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::get_AllTasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "get_AllTasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*>(this, ___internal_method);
}
template <typename TTask> inline ::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::get_ActiveTasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "get_ActiveTasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::AddTask(TTask task, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "AddTask", {}, { ::i2c::type_of<TTask>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, priority);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::AddTaskInternal(TTask task, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "AddTaskInternal", {}, { ::i2c::type_of<TTask>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, priority);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::RemoveTask(TTask task) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "RemoveTask", {}, { ::i2c::type_of<TTask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::OnFrameStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "OnFrameStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::UpdateAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "UpdateAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::UpdateRange(int32_t minPriority, int32_t maxPriority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "UpdateRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minPriority, maxPriority);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::ClearRemovedTasks(::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>* tasks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(),
                                              { "ClearRemovedTasks", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedList_1<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tasks);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::AddQueuedTasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "AddQueuedTasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::InsertTaskSorted(::Zenject::TaskUpdater_1_TaskInfo<TTask>* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "InsertTaskSorted", {}, { ::i2c::type_of<::Zenject::TaskUpdater_1_TaskInfo<TTask>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::UpdateItem(TTask task) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template <typename TTask> inline void Zenject::TaskUpdater_1<TTask>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TTask> inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1<TTask>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TaskUpdater_1<TTask>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TTask> inline ::Zenject::TaskUpdater_1<TTask>* Zenject::TaskUpdater_1<TTask>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TaskUpdater_1<TTask>*>());
}
// Ctor Parameters []
template <typename TTask> constexpr ::Zenject::TaskUpdater_1<TTask>::TaskUpdater_1() {}
