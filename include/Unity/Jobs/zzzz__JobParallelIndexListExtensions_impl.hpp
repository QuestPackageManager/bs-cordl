#pragma once
// IWYU pragma private; include "Unity\Jobs\JobParallelIndexListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobParallelIndexListExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobParallelIndexListExtensions::ScheduleAppend(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength,
                                                                                            int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobParallelIndexListExtensions*>(),
                                                           { "ScheduleAppend",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, indices, arrayLength, innerloopBatchCount, dependsOn);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobParallelIndexListExtensions::ScheduleFilter(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t innerloopBatchCount,
                                                                                            ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobParallelIndexListExtensions*>(), { "ScheduleFilter",
                                                                                                                   { ::i2c::class_of<T>() },
                                                                                                                   { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(),
                                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, indices, innerloopBatchCount, dependsOn);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::JobParallelIndexListExtensions::JobParallelIndexListExtensions() {}
