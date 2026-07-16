#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CreateDrawBatchesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CreateDrawBatchesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.EditDrawRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::DrawRange> (::UnityEngine::Rendering::CreateDrawBatchesJob::*)(::by_ref<::UnityEngine::Rendering::RangeKey>)>(
    &::UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawRange)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x68174f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(),
                                                                                           { "EditDrawRange", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.EditDrawBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::DrawBatch> (::UnityEngine::Rendering::CreateDrawBatchesJob::*)(
    ::by_ref<::UnityEngine::Rendering::DrawKey>, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>)>(&::UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawBatch)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6817670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(),
                            { "EditDrawBatch", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.ProcessRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CreateDrawBatchesJob::*)(int32_t)>(&::UnityEngine::Rendering::CreateDrawBatchesJob::ProcessRenderer)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x681781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(), { "ProcessRenderer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CreateDrawBatchesJob::*)()>(&::UnityEngine::Rendering::CreateDrawBatchesJob::Execute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6817eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline ::by_ref<::UnityEngine::Rendering::DrawRange> UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawRange(::by_ref<::UnityEngine::Rendering::RangeKey> key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(),
                                                                                         { "EditDrawRange", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RangeKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::DrawRange>>(*this, ___internal_method, key);
}
inline ::by_ref<::UnityEngine::Rendering::DrawBatch> UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawBatch(::by_ref<::UnityEngine::Rendering::DrawKey> key,
                                                                                                                 ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> subMeshDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(),
                          { "EditDrawBatch", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawKey>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::DrawBatch>>(*this, ___internal_method, key, subMeshDescriptor);
}
inline void UnityEngine::Rendering::CreateDrawBatchesJob::ProcessRenderer(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(), { "ProcessRenderer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
inline void UnityEngine::Rendering::CreateDrawBatchesJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CreateDrawBatchesJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::CreateDrawBatchesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::CreateDrawBatchesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererData", ty:
// "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchMeshHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchMaterialHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedMaterialDataHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rangeHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawRanges", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawBatches", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInstances", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CreateDrawBatchesJob::CreateDrawBatchesJob(
    bool implicitInstanceIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::UnityEngine::Rendering::GPUDrivenRendererGroupData rendererData,
    ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMeshID> batchMeshHash,
    ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash,
    ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDataHash,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges,
    ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances) noexcept {
  this->implicitInstanceIndices = implicitInstanceIndices;
  this->instances = instances;
  this->rendererData = rendererData;
  this->batchMeshHash = batchMeshHash;
  this->batchMaterialHash = batchMaterialHash;
  this->packedMaterialDataHash = packedMaterialDataHash;
  this->rangeHash = rangeHash;
  this->drawRanges = drawRanges;
  this->batchHash = batchHash;
  this->drawBatches = drawBatches;
  this->drawInstances = drawInstances;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CreateDrawBatchesJob::CreateDrawBatchesJob() {}
