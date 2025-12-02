#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RemoveDrawInstanceIndicesJob.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::*)(::ByRef<::UnityEngine::Rendering::RangeKey>)>(
    &::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawRange)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x65fd8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>::get(), "RemoveDrawRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RangeKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob.RemoveDrawBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::*)(::ByRef<::UnityEngine::Rendering::DrawKey>)>(
    &::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawBatch)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x65fda7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>::get(), "RemoveDrawBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::*)()>(
    &::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::Execute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x65fdcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawRange(::ByRef<::UnityEngine::Rendering::RangeKey> key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>::get(), "RemoveDrawRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RangeKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::RemoveDrawBatch(::ByRef<::UnityEngine::Rendering::DrawKey> key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>::get(), "RemoveDrawBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::RemoveDrawInstanceIndicesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
