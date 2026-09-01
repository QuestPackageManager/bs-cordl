#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RemoveDrawInstanceIndicesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RemoveDrawInstanceIndicesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob.RemoveDrawRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::*)(::by_ref<::UnityEngine::Rendering::RangeKey>)>(
    &::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawRange)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x681c5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>(),
                                                                                           { "RemoveDrawRange", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob.RemoveDrawBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::*)(::by_ref<::UnityEngine::Rendering::DrawKey>)>(
    &::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawBatch)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x681c770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>(),
                                                                                           { "RemoveDrawBatch", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::*)()>(&::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::Execute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x681c9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawRange(::by_ref<::UnityEngine::Rendering::RangeKey> key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>(),
                                                                                         { "RemoveDrawRange", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
inline void UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawBatch(::by_ref<::UnityEngine::Rendering::DrawKey> key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>(),
                                                                                         { "RemoveDrawBatch", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
inline void UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "drawInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInstances", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rangeHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawRanges", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawBatches", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawInstanceIndicesJob(::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices,
                                                                                               ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                                                                                               ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash,
                                                                                               ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash,
                                                                                               ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges,
                                                                                               ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches) noexcept {
  this->drawInstanceIndices = drawInstanceIndices;
  this->drawInstances = drawInstances;
  this->rangeHash = rangeHash;
  this->batchHash = batchHash;
  this->drawRanges = drawRanges;
  this->drawBatches = drawBatches;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawInstanceIndicesJob() {}
