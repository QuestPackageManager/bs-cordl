#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RegisterNewInstancesJob_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RegisterNewInstancesJob_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
template <typename T> inline void UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RegisterNewInstancesJob_1<T>>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
template <typename T> constexpr UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
template <typename T> constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::RegisterNewInstancesJob_1<T>::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
