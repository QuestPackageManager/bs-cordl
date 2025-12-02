#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListChangedEventArgs_1.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ListChangedEventArgs_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr int32_t const& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr void UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename T> constexpr T& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr T const& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr void UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___item, value);
}
template <typename T> inline void UnityEngine::Rendering::ListChangedEventArgs_1<T>::_ctor(int32_t index, T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListChangedEventArgs_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline ::UnityEngine::Rendering::ListChangedEventArgs_1<T>* UnityEngine::Rendering::ListChangedEventArgs_1<T>::New_ctor(int32_t index, T item) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ListChangedEventArgs_1<T>*>(index, item));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ListChangedEventArgs_1<T>::ListChangedEventArgs_1() {}
