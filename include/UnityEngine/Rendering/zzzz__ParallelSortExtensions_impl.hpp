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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6833a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6833af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                                                                                           { "AtomicIncrement", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob.JobIndexPrefixSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6833b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                                                                                           { "JobIndexPrefixSum", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6833ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t> counter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                                                                                         { "AtomicIncrement", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counter);
}
inline int32_t UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum(int32_t sum, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                                                                                         { "JobIndexPrefixSum", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sum, i);
}
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6833c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::Execute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6833d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::ParallelSortExtensions::ParallelSort)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x6833590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                                                                                           { "ParallelSort", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelSortExtensions._ParallelSort_g__Swap_2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>)>(
    &::UnityEngine::Rendering::ParallelSortExtensions::_ParallelSort_g__Swap_2_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6833a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                                         { "<ParallelSort>g__Swap|2_0",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::ParallelSortExtensions::ParallelSort(::Unity::Collections::NativeArray_1<int32_t> array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                                                                                         { "ParallelSort", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, array);
}
inline void UnityEngine::Rendering::ParallelSortExtensions::_ParallelSort_g__Swap_2_0(::by_ref<::Unity::Collections::NativeArray_1<int32_t>> a,
                                                                                      ::by_ref<::Unity::Collections::NativeArray_1<int32_t>> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelSortExtensions*>(),
                                       { "<ParallelSort>g__Swap|2_0",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelSortExtensions::ParallelSortExtensions() {}
