#pragma once
// IWYU pragma private; include "TMPro/TMP_TextProcessingStack_1.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_def.hpp"
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::_ctor(::ArrayW<T, ::Array<T>*> stack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::_ctor(int32_t capacity, int32_t rolloverSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, rolloverSize);
}
template <typename T> inline int32_t TMPro::TMP_TextProcessingStack_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T TMPro::TMP_TextProcessingStack_1<T>::get_current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "get_current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline int32_t TMPro::TMP_TextProcessingStack_1<T>::get_rolloverSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "get_rolloverSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::set_rolloverSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "set_rolloverSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<T>, ::Array<::TMPro::TMP_TextProcessingStack_1<T>>*> stack, T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "SetDefault", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::TMP_TextProcessingStack_1<T>, ::Array<::TMPro::TMP_TextProcessingStack_1<T>>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stack, item);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::SetDefault(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "SetDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline T TMPro::TMP_TextProcessingStack_1<T>::Remove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "Remove",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_TextProcessingStack_1<T>::Push(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline T TMPro::TMP_TextProcessingStack_1<T>::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "Pop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T TMPro::TMP_TextProcessingStack_1<T>::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "Peek",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T TMPro::TMP_TextProcessingStack_1<T>::CurrentItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "CurrentItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T TMPro::TMP_TextProcessingStack_1<T>::PreviousItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_TextProcessingStack_1<T>>::get(), "PreviousItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::TMPro::TMP_TextProcessingStack_1<T>::TMP_TextProcessingStack_1(::ArrayW<T, ::Array<T>*> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize,
                                                                           int32_t m_Count) noexcept {
  this->itemStack = itemStack;
  this->index = index;
  this->m_DefaultItem = m_DefaultItem;
  this->m_Capacity = m_Capacity;
  this->m_RolloverSize = m_RolloverSize;
  this->m_Count = m_Count;
}
// Ctor Parameters []
template <typename T> constexpr ::TMPro::TMP_TextProcessingStack_1<T>::TMP_TextProcessingStack_1() {}
