#pragma once
// IWYU pragma private; include "UnityEngine\Jobs\IJobParallelForTransformExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_impl.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransformExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransformExtensions_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
// Ctor Parameters [CppParam { name: "TransformAccessArray", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsReadOnly", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData<
    T>::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData(::System::IntPtr TransformAccessArray, int32_t IsReadOnly) noexcept {
  this->TransformAccessArray = TransformAccessArray;
  this->IsReadOnly = IsReadOnly;
}
// Ctor Parameters []
template <typename T>
constexpr ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData<
    T>::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData() {}
template <typename T>
inline void UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T>
inline void UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>::Invoke(::by_ref<T> jobData, ::System::IntPtr additionalPtr,
                                                                                                                                 ::System::IntPtr bufferRangePatchData,
                                                                                                                                 ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                                                                                                                                 int32_t jobIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template <typename T>
inline ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*
UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template <typename T>
constexpr ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<
    T>::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction() {}
template <typename T>
inline void UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::setStaticF_jobReflectionData(
    ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                    ::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>(
      std::forward<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>
UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                           ::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>();
}
template <typename T> inline void UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T>
inline void UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::Execute(::by_ref<T> jobData, ::System::IntPtr jobData2, ::System::IntPtr bufferRangePatchData,
                                                                                                               ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>(),
                                                                                         { "Execute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData, jobData2, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1() {}
template <typename T> inline ::System::IntPtr UnityEngine::Jobs::IJobParallelForTransformExtensions::GetReflectionData() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransformExtensions*>(), { "GetReflectionData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
template <typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::Jobs::IJobParallelForTransformExtensions::Schedule(T jobData, ::UnityEngine::Jobs::TransformAccessArray transforms, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransformExtensions*>(),
                          { "Schedule", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, transforms, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::Jobs::IJobParallelForTransformExtensions::ScheduleReadOnly(T jobData, ::UnityEngine::Jobs::TransformAccessArray transforms, int32_t batchSize,
                                                                                                        ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransformExtensions*>(),
                          { "ScheduleReadOnly",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, transforms, batchSize, dependsOn);
}
// Ctor Parameters []
constexpr ::UnityEngine::Jobs::IJobParallelForTransformExtensions::IJobParallelForTransformExtensions() {}
