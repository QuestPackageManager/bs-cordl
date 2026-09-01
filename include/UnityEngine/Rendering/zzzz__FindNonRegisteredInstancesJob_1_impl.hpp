#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\FindNonRegisteredInstancesJob_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FindNonRegisteredInstancesJob_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
template <typename T> inline void UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>>(), { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
template <typename T> constexpr UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
template <typename T> constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::FindNonRegisteredInstancesJob_1<T>::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
