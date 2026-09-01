#pragma once
// IWYU pragma private; include "Unity\Collections\SortJobDefer_2.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__SortJobDefer_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__SortJobDefer_2_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForDefer_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T, typename U> inline void Unity::Collections::SortJobDefer_2_SegmentSort<T, U>::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SortJobDefer_2_SegmentSort<T, U>>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForDefer"
template <typename T, typename U> constexpr Unity::Collections::SortJobDefer_2_SegmentSort<T, U>::operator ::Unity::Jobs::IJobParallelForDefer*() {
  return static_cast<::Unity::Jobs::IJobParallelForDefer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForDefer"
template <typename T, typename U> constexpr ::Unity::Jobs::IJobParallelForDefer* Unity::Collections::SortJobDefer_2_SegmentSort<T, U>::i___Unity__Jobs__IJobParallelForDefer() {
  return static_cast<::Unity::Jobs::IJobParallelForDefer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "DataRO", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SegmentWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T, typename U>
constexpr ::Unity::Collections::SortJobDefer_2_SegmentSort<T, U>::SortJobDefer_2_SegmentSort(::Unity::Collections::NativeList_1<T> DataRO,
                                                                                             ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Data, U Comp, int32_t SegmentWidth) noexcept {
  this->DataRO = DataRO;
  this->Data = Data;
  this->Comp = Comp;
  this->SegmentWidth = SegmentWidth;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::SortJobDefer_2_SegmentSort<T, U>::SortJobDefer_2_SegmentSort() {}
template <typename T, typename U> inline void Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
template <typename T, typename U> constexpr Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
template <typename T, typename U> constexpr ::Unity::Jobs::IJob* Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T, typename U>
constexpr ::Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>::SortJobDefer_2_SegmentSortMerge(::Unity::Collections::NativeList_1<T> Data, U Comp, int32_t SegmentWidth) noexcept {
  this->Data = Data;
  this->Comp = Comp;
  this->SegmentWidth = SegmentWidth;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>::SortJobDefer_2_SegmentSortMerge() {}
template <typename T, typename U> inline ::Unity::Jobs::JobHandle Unity::Collections::SortJobDefer_2<T, U>::Schedule(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SortJobDefer_2<T, U>>(), { "Schedule", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}")
// }]
template <typename T, typename U> constexpr ::Unity::Collections::SortJobDefer_2<T, U>::SortJobDefer_2(::Unity::Collections::NativeList_1<T> Data, U Comp) noexcept {
  this->Data = Data;
  this->Comp = Comp;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::SortJobDefer_2<T, U>::SortJobDefer_2() {}
