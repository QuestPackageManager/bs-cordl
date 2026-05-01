#pragma once
// IWYU pragma private; include "GlobalNamespace/LazyCopyHashSet_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_get__itemsCopy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsCopy;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_get__itemsCopy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemsCopy;
}
template <typename T> constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_set__itemsCopy(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____itemsCopy, value);
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>* const& GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_set__items(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____items, value);
}
template <typename T> constexpr bool& GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_get__dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
template <typename T> constexpr bool const& GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_get__dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
template <typename T> constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__cordl_internal_set__dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirty = value;
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "get_items",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::LazyCopyHashSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LazyCopyHashSet_1<T>*>());
}
template <typename T> inline ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LazyCopyHashSet_1<T>*>(capacity));
}
/// @brief Convert operator to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
template <typename T> constexpr GlobalNamespace::LazyCopyHashSet_1<T>::operator ::GlobalNamespace::ILazyCopyHashSet_1<T>*() noexcept {
  return static_cast<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
template <typename T> constexpr ::GlobalNamespace::ILazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::i___GlobalNamespace__ILazyCopyHashSet_1_T_() noexcept {
  return static_cast<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>::LazyCopyHashSet_1() {}
