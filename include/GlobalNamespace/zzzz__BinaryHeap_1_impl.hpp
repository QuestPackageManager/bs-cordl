#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BinaryHeap_1_def.hpp"
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_set__data(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr int32_t const& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr void GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_set__tail(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tail = value;
}
template <typename T> inline ::GlobalNamespace::BinaryHeap_1<T>* GlobalNamespace::BinaryHeap_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BinaryHeap_1<T>*>());
}
template <typename T> inline void GlobalNamespace::BinaryHeap_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BinaryHeap_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BinaryHeap_1<T>* GlobalNamespace::BinaryHeap_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BinaryHeap_1<T>*>(capacity));
}
template <typename T> inline void GlobalNamespace::BinaryHeap_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BinaryHeap_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::BinaryHeap_1<T>::Insert(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BinaryHeap_1<T>*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::BinaryHeap_1<T>::RemoveMin(ByRef<T> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BinaryHeap_1<T>*>::get(), "RemoveMin", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, output);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BinaryHeap_1<T>::BinaryHeap_1() {}
