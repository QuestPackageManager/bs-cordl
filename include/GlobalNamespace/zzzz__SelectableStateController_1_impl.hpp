#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableStateController_1.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::SelectableStateController_1<T>::__cordl_internal_get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr T const& GlobalNamespace::SelectableStateController_1<T>::__cordl_internal_get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr void GlobalNamespace::SelectableStateController_1<T>::__cordl_internal_set__component(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____component, value);
}
template <typename T> inline void GlobalNamespace::SelectableStateController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SelectableStateController_1<T>* GlobalNamespace::SelectableStateController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectableStateController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SelectableStateController_1<T>::SelectableStateController_1() {}
