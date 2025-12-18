#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelSortExtensions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x668213c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "batchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::ParallelSortExtensions_RadixSortBucketCountJob(int32_t radix, int32_t jobsCount, int32_t batchSize,
                                                                                                                                   ::Unity::Collections::NativeArray_1<int32_t> array,
                                                                                                                                   ::Unity::Collections::NativeArray_1<int32_t> buckets) noexcept {
  this->radix = radix;
  this->jobsCount = jobsCount;
  this->batchSize = batchSize;
  this->array = array;
  this->buckets = buckets;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::ParallelSortExtensions_RadixSortBucketCountJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob.AtomicIncrement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66821a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>::get(), "AtomicIncrement",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob.JobIndexPrefixSum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x668220c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>::get(), "JobIndexPrefixSum",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6682254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t> counter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>::get(), "AtomicIncrement",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, counter);
}
inline int32_t UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum(int32_t sum, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>::get(), "JobIndexPrefixSum",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sum, i);
}
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "buckets", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::ParallelSortExtensions_RadixSortBatchPrefixSumJob(
    int32_t radix, int32_t jobsCount, ::Unity::Collections::NativeArray_1<int32_t> array, ::Unity::Collections::NativeArray_1<int32_t> counter, ::Unity::Collections::NativeArray_1<int32_t> indicesSum,
    ::Unity::Collections::NativeArray_1<int32_t> buckets, ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept {
  this->radix = radix;
  this->jobsCount = jobsCount;
  this->array = array;
  this->counter = counter;
  this->indicesSum = indicesSum;
  this->buckets = buckets;
  this->indices = indices;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::ParallelSortExtensions_RadixSortBatchPrefixSumJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6682340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::ParallelSortExtensions_RadixSortPrefixSumJob(int32_t jobsCount,
                                                                                                                               ::Unity::Collections::NativeArray_1<int32_t> indicesSum,
                                                                                                                               ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept {
  this->jobsCount = jobsCount;
  this->indicesSum = indicesSum;
  this->indices = indices;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::ParallelSortExtensions_RadixSortPrefixSumJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::Execute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66823b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "arraySorted", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::ParallelSortExtensions_RadixSortBucketSortJob(int32_t radix, int32_t batchSize,
                                                                                                                                 ::Unity::Collections::NativeArray_1<int32_t> array,
                                                                                                                                 ::Unity::Collections::NativeArray_1<int32_t> indices,
                                                                                                                                 ::Unity::Collections::NativeArray_1<int32_t> arraySorted) noexcept {
  this->radix = radix;
  this->batchSize = batchSize;
  this->array = array;
  this->indices = indices;
  this->arraySorted = arraySorted;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::ParallelSortExtensions_RadixSortBucketSortJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions.ParallelSort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::ParallelSortExtensions::ParallelSort)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x6681c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions*>::get(), "ParallelSort", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions._ParallelSort_g__Swap_2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::Unity::Collections::NativeArray_1<int32_t>>, ::ByRef<::Unity::Collections::NativeArray_1<int32_t>>)>(&::UnityEngine::Rendering::ParallelSortExtensions::_ParallelSort_g__Swap_2_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6682120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions*>::get(), "<ParallelSort>g__Swap|2_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<int32_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<int32_t>>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::ParallelSortExtensions::ParallelSort(::Unity::Collections::NativeArray_1<int32_t> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions*>::get(), "ParallelSort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, array);
}
inline void UnityEngine::Rendering::ParallelSortExtensions::_ParallelSort_g__Swap_2_0(::ByRef<::Unity::Collections::NativeArray_1<int32_t>> a,
                                                                                      ::ByRef<::Unity::Collections::NativeArray_1<int32_t>> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ParallelSortExtensions*>::get(), "<ParallelSort>g__Swap|2_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<int32_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<int32_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions::ParallelSortExtensions() {}
