#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseStateTransition_1.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_impl.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::BaseStateTransition_1<T>::__cordl_internal_get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr T const& GlobalNamespace::BaseStateTransition_1<T>::__cordl_internal_get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr void GlobalNamespace::BaseStateTransition_1<T>::__cordl_internal_set__component(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____component)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::BaseStateTransition_1<T>* GlobalNamespace::BaseStateTransition_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BaseStateTransition_1<T>*>());
}
template <typename T> inline void GlobalNamespace::BaseStateTransition_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseStateTransition_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BaseStateTransition_1<T>::BaseStateTransition_1() {}
