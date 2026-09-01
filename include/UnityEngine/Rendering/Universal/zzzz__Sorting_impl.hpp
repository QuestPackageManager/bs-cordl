#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Sorting.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Sorting_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Sorting_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1<T>::Sorting___c__DisplayClass4_0_1(::ArrayW<T> data) noexcept {
  this->data = data;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1<T>::Sorting___c__DisplayClass4_0_1() {}
inline void UnityEngine::Rendering::Universal::Sorting::setStaticF_s_QuickSortSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_QuickSortSampler", ::UnityEngine::Rendering::Universal::Sorting>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Sorting::getStaticF_s_QuickSortSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_QuickSortSampler", ::UnityEngine::Rendering::Universal::Sorting>();
}
inline void UnityEngine::Rendering::Universal::Sorting::setStaticF_s_InsertionSortSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_InsertionSortSampler", ::UnityEngine::Rendering::Universal::Sorting>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Sorting::getStaticF_s_InsertionSortSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_InsertionSortSampler", ::UnityEngine::Rendering::Universal::Sorting>();
}
template <typename T> inline void UnityEngine::Rendering::Universal::Sorting::QuickSort(::ArrayW<T> data, ::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(),
                                                           { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_3<T, T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, compare);
}
template <typename T> inline void UnityEngine::Rendering::Universal::Sorting::QuickSort(::ArrayW<T> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(),
          { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<T, T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, start, end, compare);
}
template <typename T> inline T UnityEngine::Rendering::Universal::Sorting::Median3Pivot(::ArrayW<T> data, int32_t start, int32_t pivot, int32_t end, ::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(), { "Median3Pivot",
                                                                                                                 { ::i2c::class_of<T>() },
                                                                                                                 { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<T, T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, data, start, pivot, end, compare);
}
template <typename T> inline int32_t UnityEngine::Rendering::Universal::Sorting::Partition(::ArrayW<T> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(),
          { "Partition", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<T, T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, start, end, compare);
}
template <typename T> inline void UnityEngine::Rendering::Universal::Sorting::InsertionSort(::ArrayW<T> data, ::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(),
                                                           { "InsertionSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_3<T, T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, compare);
}
template <typename T> inline void UnityEngine::Rendering::Universal::Sorting::InsertionSort(::ArrayW<T> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(),
          { "InsertionSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<T, T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, start, end, compare);
}
template <typename T>
inline void UnityEngine::Rendering::Universal::Sorting::_Median3Pivot_g__Swap_4_0(int32_t a, int32_t b,
                                                                                  ::by_ref<::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1<T>> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Sorting>(),
                          { "<Median3Pivot>g__Swap|4_0",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Sorting::Sorting() {}
