#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobFilterExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobFilterExtensions_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__IJobFilterExtensions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
// Ctor Parameters [CppParam { name: "outputIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "appendCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "JobData", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>::JobFilterProducer_1_IJobFilterExtensions_JobWrapper(::Unity::Collections::NativeList_1<int32_t> outputIndices,
                                                                                                                                     int32_t appendCount, T JobData) noexcept {
  this->outputIndices = outputIndices;
  this->appendCount = appendCount;
  this->JobData = JobData;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>::JobFilterProducer_1_IJobFilterExtensions_JobWrapper() {}
template <typename T> inline void Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T>
inline void Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>::Invoke(::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper,
                                                                                                ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                                                ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobWrapper, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template <typename T>
inline ::System::IAsyncResult* Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>::BeginInvoke(
    ::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, jobWrapper, additionalPtr, bufferRangePatchData, ranges, jobIndex, callback, object);
}
template <typename T>
inline void Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>::EndInvoke(::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper,
                                                                                                   ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobWrapper, ranges, result);
}
template <typename T>
inline ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>* Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction() {}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::setStaticF_jobReflectionData(::Unity::Burst::SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "jobReflectionData", ::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>>(
      std::forward<::Unity::Burst::SharedStatic_1<::System::IntPtr>>(value));
}
template <typename T> inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "jobReflectionData", ::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>>();
}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T>
inline void Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::Execute(::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper,
                                                                              ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                              ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>>(),
                                              { "Execute",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>>>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobWrapper, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template <typename T>
inline void Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::ExecuteAppend(::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper,
                                                                                    ::System::IntPtr bufferRangePatchData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>>(),
                          { "ExecuteAppend", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobWrapper, bufferRangePatchData);
}
template <typename T>
inline void Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::ExecuteFilter(::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper,
                                                                                    ::System::IntPtr bufferRangePatchData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>>(),
                          { "ExecuteFilter", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobWrapper, bufferRangePatchData);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>::IJobFilterExtensions_JobFilterProducer_1() {}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions::EarlyJobInit() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(), { "EarlyJobInit", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline ::System::IntPtr Unity::Jobs::IJobFilterExtensions::GetReflectionData() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(), { "GetReflectionData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobFilterExtensions::ScheduleAppend(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength,
                                                                                  ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(), { "ScheduleAppend",
                                                                                                         { ::i2c::class_of<T>() },
                                                                                                         { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, indices, arrayLength, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobFilterExtensions::ScheduleFilter(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(),
          { "ScheduleFilter", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, indices, dependsOn);
}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions::RunAppend(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(),
                                       { "RunAppend", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, indices, arrayLength);
}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions::RunFilter(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(),
                                                           { "RunFilter", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, indices);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobFilterExtensions::ScheduleAppendByRef(::by_ref<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength,
                                                                                       ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(), { "ScheduleAppendByRef",
                                                                                                         { ::i2c::class_of<T>() },
                                                                                                         { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, indices, arrayLength, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobFilterExtensions::ScheduleFilterByRef(::by_ref<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(),
                                              { "ScheduleFilterByRef",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, indices, dependsOn);
}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions::RunAppendByRef(::by_ref<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(),
                       { "RunAppendByRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, indices, arrayLength);
}
template <typename T> inline void Unity::Jobs::IJobFilterExtensions::RunFilterByRef(::by_ref<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilterExtensions*>(),
                                              { "RunFilterByRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, indices);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::IJobFilterExtensions::IJobFilterExtensions() {}
