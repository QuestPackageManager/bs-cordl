#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobParallelForDeferExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForDeferExtensions_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForDeferExtensions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline void Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T>
inline void Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>::Invoke(::by_ref<T> jobData, ::System::IntPtr additionalPtr,
                                                                                                                    ::System::IntPtr bufferRangePatchData,
                                                                                                                    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template <typename T>
inline ::System::IAsyncResult*
Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>::BeginInvoke(::by_ref<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                                                             ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex,
                                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex, callback, object);
}
template <typename T>
inline void Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>::EndInvoke(::by_ref<T> jobData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                                                                                                                       ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobData, ranges, result);
}
template <typename T>
inline ::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>*
Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template <typename T>
constexpr ::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction() {}
template <typename T> inline void Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>::setStaticF_jobReflectionData(::Unity::Burst::SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "jobReflectionData", ::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>>(
      std::forward<::Unity::Burst::SharedStatic_1<::System::IntPtr>>(value));
}
template <typename T> inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "jobReflectionData", ::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>>();
}
template <typename T> inline void Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T>
inline void Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>::Execute(::by_ref<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                                                  ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>>(),
                                                                                         { "Execute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1() {}
template <typename T> inline void Unity::Jobs::IJobParallelForDeferExtensions::EarlyJobInit() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions*>(), { "EarlyJobInit", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T, typename U>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForDeferExtensions::Schedule(T jobData, ::Unity::Collections::NativeList_1<U> list, int32_t innerloopBatchCount,
                                                                                      ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions*>(),
                                       { "Schedule",
                                         { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                         { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<U>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, list, innerloopBatchCount, dependsOn);
}
template <typename T, typename U>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForDeferExtensions::ScheduleByRef(::by_ref<T> jobData, ::Unity::Collections::NativeList_1<U> list, int32_t innerloopBatchCount,
                                                                                           ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions*>(),
                          { "ScheduleByRef",
                            { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<U>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, list, innerloopBatchCount, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForDeferExtensions::Schedule(T jobData, int32_t* forEachCount, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions*>(),
                          { "Schedule", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, forEachCount, innerloopBatchCount, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForDeferExtensions::ScheduleByRef(::by_ref<T> jobData, int32_t* forEachCount, int32_t innerloopBatchCount,
                                                                                           ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions*>(),
          { "ScheduleByRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, forEachCount, innerloopBatchCount, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForDeferExtensions::ScheduleInternal(::by_ref<T> jobData, int32_t innerloopBatchCount, void* forEachListPtr, void* atomicSafetyHandlePtr,
                                                                                              ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDeferExtensions*>(), { "ScheduleInternal",
                                                                                                                   { ::i2c::class_of<T>() },
                                                                                                                   { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(),
                                                                                                                     ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, innerloopBatchCount, forEachListPtr, atomicSafetyHandlePtr, dependsOn);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::IJobParallelForDeferExtensions::IJobParallelForDeferExtensions() {}
