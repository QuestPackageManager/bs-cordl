#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::ChangeEvent_1<T>::__get__previousValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::ChangeEvent_1<T>::__get__previousValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ChangeEvent_1<T>::__set__previousValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previousValue_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::UIElements::ChangeEvent_1<T>::__get__newValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::ChangeEvent_1<T>::__get__newValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ChangeEvent_1<T>::__set__newValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newValue_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T UnityEngine::UIElements::ChangeEvent_1<T>::get_previousValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(),
                                                                             "get_previousValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::set_previousValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "set_previousValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::ChangeEvent_1<T>::get_newValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(),
                                                                             "get_newValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::set_newValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "set_newValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "LocalInit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1<T>::GetPooled(T previousValue, T newValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ChangeEvent_1<T>*, false>(nullptr, ___internal_method, previousValue, newValue);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ChangeEvent_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ChangeEvent_1<T>::ChangeEvent_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
