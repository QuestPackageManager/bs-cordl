#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RegisterNewInstancesJob_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RegisterNewInstancesJob_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
template <typename T> inline void UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RegisterNewInstancesJob_1<T>>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
template <typename T> constexpr UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
template <typename T> constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchIDs", ty:
// "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hashMap", ty: "::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<int32_t,T>",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::RegisterNewInstancesJob_1(::Unity::Collections::NativeArray_1<int32_t> instanceIDs, ::Unity::Collections::NativeArray_1<T> batchIDs,
                                                                                            ::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<int32_t, T> hashMap) noexcept {
  this->instanceIDs = instanceIDs;
  this->batchIDs = batchIDs;
  this->hashMap = hashMap;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::RegisterNewInstancesJob_1() {}
