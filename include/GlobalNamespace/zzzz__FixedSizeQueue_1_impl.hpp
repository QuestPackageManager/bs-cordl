#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedSizeQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_set__data(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__queueSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queueSize;
}
template <typename T> constexpr int32_t const& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__queueSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queueSize;
}
template <typename T> constexpr void GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_set__queueSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queueSize = value;
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::FixedSizeQueue_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizeQueue_1<T>*>::get(), "get_data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::FixedSizeQueue_1<T>* GlobalNamespace::FixedSizeQueue_1<T>::New_ctor(int32_t queueSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FixedSizeQueue_1<T>*>(queueSize));
}
template <typename T> inline void GlobalNamespace::FixedSizeQueue_1<T>::_ctor(int32_t queueSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizeQueue_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queueSize);
}
template <typename T> inline ::GlobalNamespace::FixedSizeQueue_1<T>* GlobalNamespace::FixedSizeQueue_1<T>::New_ctor(::System::Collections::Generic::List_1<T>* data, int32_t queueSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FixedSizeQueue_1<T>*>(data, queueSize));
}
template <typename T> inline void GlobalNamespace::FixedSizeQueue_1<T>::_ctor(::System::Collections::Generic::List_1<T>* data, int32_t queueSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizeQueue_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, queueSize);
}
template <typename T> inline void GlobalNamespace::FixedSizeQueue_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizeQueue_1<T>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::FixedSizeQueue_1<T>::FixedSizeQueue_1() {}
