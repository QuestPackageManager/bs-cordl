#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobParallelForExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline void Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T>
inline void Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>::Invoke(::by_ref<T> data, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                                                        ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template <typename T>
inline ::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>*
Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction() {}
template <typename T>
inline void Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>::setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                    ::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>>(
      std::forward<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                           ::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>>();
}
template <typename T> inline void Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T>
inline void Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>::Execute(::by_ref<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                                      ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>>(),
                                                                                         { "Execute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1<T>::IJobParallelForExtensions_ParallelForJobStruct_1() {}
template <typename T> inline void Unity::Jobs::IJobParallelForExtensions::EarlyJobInit() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForExtensions*>(), { "EarlyJobInit", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline ::System::IntPtr Unity::Jobs::IJobParallelForExtensions::GetReflectionData() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForExtensions*>(), { "GetReflectionData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForExtensions::Schedule(T jobData, int32_t arrayLength, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForExtensions*>(),
                          { "Schedule", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, arrayLength, innerloopBatchCount, dependsOn);
}
template <typename T> inline void Unity::Jobs::IJobParallelForExtensions::Run(T jobData, int32_t arrayLength) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForExtensions*>(), { "Run", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, arrayLength);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::IJobParallelForExtensions::IJobParallelForExtensions() {}
