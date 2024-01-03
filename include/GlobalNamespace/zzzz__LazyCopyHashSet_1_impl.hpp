#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
template <typename T> constexpr GlobalNamespace::LazyCopyHashSet_1<T>::operator ::GlobalNamespace::ILazyCopyHashSet_1<T>*() noexcept {
  return static_cast<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
template <typename T> constexpr ::GlobalNamespace::ILazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::i___GlobalNamespace__ILazyCopyHashSet_1_T_() noexcept {
  return static_cast<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::LazyCopyHashSet_1<T>::__get__itemsCopy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsCopy;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& GlobalNamespace::LazyCopyHashSet_1<T>::__get__itemsCopy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsCopy;
}
template <typename T> constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__itemsCopy(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____itemsCopy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::LazyCopyHashSet_1<T>::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& GlobalNamespace::LazyCopyHashSet_1<T>::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__items(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& GlobalNamespace::LazyCopyHashSet_1<T>::__get__dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
template <typename T> constexpr bool const& GlobalNamespace::LazyCopyHashSet_1<T>::__get__dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
template <typename T> constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirty = value;
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "get_items",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LazyCopyHashSet_1<T>*>());
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LazyCopyHashSet_1<T>*>(capacity));
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>::LazyCopyHashSet_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
