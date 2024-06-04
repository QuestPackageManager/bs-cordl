#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T>
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>*>(object, method));
}
template <typename T> inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T>
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>::Invoke(ByRef<T> data, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                                          ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>::__IJobExtensions__JobStruct_1__ExecuteJobFunction() {}
template <typename T> inline void Unity::Jobs::__IJobExtensions__JobStruct_1<T>::setStaticF_jobReflectionData(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<T>>::get>(
      std::forward<::System::IntPtr>(value));
}
template <typename T> inline ::System::IntPtr Unity::Jobs::__IJobExtensions__JobStruct_1<T>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<T>>::get>();
}
template <typename T>
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<T>::Execute(ByRef<T> data, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                                                                   ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<T>>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Jobs::__IJobExtensions__JobStruct_1<T>::__IJobExtensions__JobStruct_1() {}
/// @param dependsOn: ::Unity::Jobs::JobHandle (default: {})
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobExtensions::Schedule(T jobData, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobExtensions*>::get(), "Schedule",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, dependsOn);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::IJobExtensions::IJobExtensions() {}
