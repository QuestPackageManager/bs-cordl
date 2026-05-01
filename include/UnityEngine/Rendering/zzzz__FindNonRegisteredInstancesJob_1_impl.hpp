#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindNonRegisteredInstancesJob_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FindNonRegisteredInstancesJob_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
template <typename T> inline void UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
template <typename T> constexpr UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
template <typename T> constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hashMap", ty:
// "::Unity::Collections::NativeParallelHashMap_2<int32_t,T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "outInstancesWriter", ty:
// "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::FindNonRegisteredInstancesJob_1(::Unity::Collections::NativeArray_1<int32_t> instanceIDs,
                                                                                                        ::Unity::Collections::NativeParallelHashMap_2<int32_t, T> hashMap,
                                                                                                        ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outInstancesWriter) noexcept {
  this->instanceIDs = instanceIDs;
  this->hashMap = hashMap;
  this->outInstancesWriter = outInstancesWriter;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::FindNonRegisteredInstancesJob_1() {}
