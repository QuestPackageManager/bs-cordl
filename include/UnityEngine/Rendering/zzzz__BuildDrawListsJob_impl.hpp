#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BuildDrawListsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BuildDrawListsJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BuildDrawListsJob.IncrementCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t*)>(&::UnityEngine::Rendering::BuildDrawListsJob::IncrementCounter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x681c0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BuildDrawListsJob>(), { "IncrementCounter", {}, { ::i2c::type_of<int32_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BuildDrawListsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BuildDrawListsJob::*)(int32_t)>(&::UnityEngine::Rendering::BuildDrawListsJob::Execute)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x681c12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BuildDrawListsJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::BuildDrawListsJob::IncrementCounter(int32_t* counter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BuildDrawListsJob>(), { "IncrementCounter", {}, { ::i2c::type_of<int32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counter);
}
inline void UnityEngine::Rendering::BuildDrawListsJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BuildDrawListsJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::BuildDrawListsJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::BuildDrawListsJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "batchHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "drawInstances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawBatches", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "internalDrawIndex", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BuildDrawListsJob::BuildDrawListsJob(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
                                                                         ::Unity::Collections::NativeArray_1<int32_t> internalDrawIndex,
                                                                         ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices) noexcept {
  this->batchHash = batchHash;
  this->drawInstances = drawInstances;
  this->drawBatches = drawBatches;
  this->internalDrawIndex = internalDrawIndex;
  this->drawInstanceIndices = drawInstanceIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BuildDrawListsJob::BuildDrawListsJob() {}
