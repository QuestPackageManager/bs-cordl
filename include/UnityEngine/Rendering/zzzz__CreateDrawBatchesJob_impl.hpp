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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::DrawRange> (::UnityEngine::Rendering::CreateDrawBatchesJob::*)(
    ::ByRef<::UnityEngine::Rendering::RangeKey>)>(&::UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawRange)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x65fe01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "EditDrawRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RangeKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.EditDrawBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::DrawBatch> (::UnityEngine::Rendering::CreateDrawBatchesJob::*)(
    ::ByRef<::UnityEngine::Rendering::DrawKey>, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>)>(&::UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawBatch)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x65fe194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "EditDrawBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawKey>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.ProcessRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CreateDrawBatchesJob::*)(int32_t)>(
    &::UnityEngine::Rendering::CreateDrawBatchesJob::ProcessRenderer)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x65fe340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "ProcessRenderer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CreateDrawBatchesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CreateDrawBatchesJob::*)()>(
    &::UnityEngine::Rendering::CreateDrawBatchesJob::Execute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65fe9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "Execute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ByRef<::UnityEngine::Rendering::DrawRange> UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawRange(::ByRef<::UnityEngine::Rendering::RangeKey> key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "EditDrawRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RangeKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::DrawRange>, false>(this, ___internal_method, key);
}
inline ::ByRef<::UnityEngine::Rendering::DrawBatch> UnityEngine::Rendering::CreateDrawBatchesJob::EditDrawBatch(::ByRef<::UnityEngine::Rendering::DrawKey> key,
                                                                                                                ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> subMeshDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "EditDrawBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawKey>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::DrawBatch>, false>(this, ___internal_method, key, subMeshDescriptor);
}
inline void UnityEngine::Rendering::CreateDrawBatchesJob::ProcessRenderer(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "ProcessRenderer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::Rendering::CreateDrawBatchesJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CreateDrawBatchesJob>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::CreateDrawBatchesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::CreateDrawBatchesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
