#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/IJobParallelForTransformExtensions.hpp"
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T>
inline void UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>::Invoke(::ByRef<T> jobData, ::System::IntPtr additionalPtr,
                                                                                                                                 ::System::IntPtr bufferRangePatchData,
                                                                                                                                 ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                                                                                                                                 int32_t jobIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template <typename T>
inline ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*
UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template <typename T>
constexpr ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<
    T>::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction() {}
template <typename T>
inline void UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::setStaticF_jobReflectionData(
    ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>::get>(
      std::forward<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>
UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>::get>();
}
template <typename T> inline void UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>::get(),
                                  "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T>
inline void UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::Execute(::ByRef<T> jobData, ::System::IntPtr jobData2, ::System::IntPtr bufferRangePatchData,
                                                                                                               ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>>::get(), "Execute",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, jobData2, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1() {}
template <typename T> inline ::System::IntPtr UnityEngine::Jobs::IJobParallelForTransformExtensions::GetReflectionData() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransformExtensions*>::get(), "GetReflectionData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::Jobs::IJobParallelForTransformExtensions::Schedule(T jobData, ::UnityEngine::Jobs::TransformAccessArray transforms, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Jobs::IJobParallelForTransformExtensions*>::get(), "Schedule",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Jobs::TransformAccessArray>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, transforms, dependsOn);
}
// Ctor Parameters []
constexpr ::UnityEngine::Jobs::IJobParallelForTransformExtensions::IJobParallelForTransformExtensions() {}
