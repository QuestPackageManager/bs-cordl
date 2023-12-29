#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IValue_1_def.hpp"
#include "GlobalNamespace/zzzz__IObservableChange_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
template <typename T> constexpr GlobalNamespace::ObservableVariableSO_1<T>::operator ::GlobalNamespace::IValue_1<T>*() noexcept {
  return static_cast<::GlobalNamespace::IValue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
template <typename T> constexpr GlobalNamespace::ObservableVariableSO_1<T>::operator ::GlobalNamespace::IObservableChange*() noexcept {
  return static_cast<::GlobalNamespace::IObservableChange*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Action*& GlobalNamespace::ObservableVariableSO_1<T>::__get_didChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeEvent;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::ObservableVariableSO_1<T>::__get_didChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeEvent;
}
template <typename T> constexpr void GlobalNamespace::ObservableVariableSO_1<T>::__set_didChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::ObservableVariableSO_1<T>::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::ObservableVariableSO_1<T>::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::ObservableVariableSO_1<T>::__set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void GlobalNamespace::ObservableVariableSO_1<T>::add_didChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObservableVariableSO_1<T>*>::get(), "add_didChangeEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ObservableVariableSO_1<T>::remove_didChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObservableVariableSO_1<T>*>::get(), "remove_didChangeEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ObservableVariableSO_1<T>::set_value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObservableVariableSO_1<T>*>::get(), "set_value", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T GlobalNamespace::ObservableVariableSO_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObservableVariableSO_1<T>*>::get(), "get_value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::ObservableVariableSO_1<T>::op_Implicit_T(::GlobalNamespace::ObservableVariableSO_1<T>* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObservableVariableSO_1<T>*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObservableVariableSO_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, obj);
}
template <typename T> inline ::GlobalNamespace::ObservableVariableSO_1<T>* GlobalNamespace::ObservableVariableSO_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObservableVariableSO_1<T>*>());
}
template <typename T> inline void GlobalNamespace::ObservableVariableSO_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObservableVariableSO_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ObservableVariableSO_1<T>::ObservableVariableSO_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
