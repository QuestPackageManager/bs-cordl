#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob_2.hpp"
#include "Unity/Collections/zzzz__SortJob_2_def.hpp"
#include "Unity/Collections/zzzz__SortJob_2_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T, typename U> inline void Unity::Collections::SortJob_2_SegmentSort<T, U>::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SortJob_2_SegmentSort<T, U>>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
template <typename T, typename U> constexpr Unity::Collections::SortJob_2_SegmentSort<T, U>::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
template <typename T, typename U> constexpr ::Unity::Jobs::IJobParallelFor* Unity::Collections::SortJob_2_SegmentSort<T, U>::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T, typename U> constexpr ::Unity::Collections::SortJob_2_SegmentSort<T, U>::SortJob_2_SegmentSort(T* Data, U Comp, int32_t Length, int32_t SegmentWidth) noexcept {
  this->Data = Data;
  this->Comp = Comp;
  this->Length = Length;
  this->SegmentWidth = SegmentWidth;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::SortJob_2_SegmentSort<T, U>::SortJob_2_SegmentSort() {}
template <typename T, typename U> inline void Unity::Collections::SortJob_2_SegmentSortMerge<T, U>::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SortJob_2_SegmentSortMerge<T, U>>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
template <typename T, typename U> constexpr Unity::Collections::SortJob_2_SegmentSortMerge<T, U>::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
template <typename T, typename U> constexpr ::Unity::Jobs::IJob* Unity::Collections::SortJob_2_SegmentSortMerge<T, U>::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T, typename U> constexpr ::Unity::Collections::SortJob_2_SegmentSortMerge<T, U>::SortJob_2_SegmentSortMerge(T* Data, U Comp, int32_t Length, int32_t SegmentWidth) noexcept {
  this->Data = Data;
  this->Comp = Comp;
  this->Length = Length;
  this->SegmentWidth = SegmentWidth;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::SortJob_2_SegmentSortMerge<T, U>::SortJob_2_SegmentSortMerge() {}
template <typename T, typename U> inline ::Unity::Jobs::JobHandle Unity::Collections::SortJob_2<T, U>::Schedule(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SortJob_2<T, U>>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, inputDeps);
}
// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T, typename U> constexpr ::Unity::Collections::SortJob_2<T, U>::SortJob_2(T* Data, U Comp, int32_t Length) noexcept {
  this->Data = Data;
  this->Comp = Comp;
  this->Length = Length;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::SortJob_2<T, U>::SortJob_2() {}
