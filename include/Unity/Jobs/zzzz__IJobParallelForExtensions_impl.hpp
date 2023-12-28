#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
template <typename T>
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>*
GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>*>(object, method));
}
template <typename T> inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T>
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>::Invoke(ByRef<T> data, void* additionalPtr, void* bufferRangePatchData,
                                                                                                                ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>*>::get(), "Invoke",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction() {}
template <typename T> inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>::setStaticF_jobReflectionData(void* value) {
  ::cordl_internals::setStaticField<void*, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>>::get>(
      std::forward<void*>(value));
}
template <typename T> inline void* Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<void*, "jobReflectionData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>>::get>();
}
template <typename T>
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>::Execute(ByRef<T> jobData, void* additionalPtr, void* bufferRangePatchData,
                                                                                         ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>>::get(), "Execute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>::__IJobParallelForExtensions__ParallelForJobStruct_1() {}
/// @param dependsOn: ::Unity::Jobs::JobHandle (default: {})
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForExtensions::Schedule(T jobData, int32_t arrayLength, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForExtensions*>::get(), "Schedule",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, arrayLength, innerloopBatchCount, dependsOn);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::IJobParallelForExtensions::IJobParallelForExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
