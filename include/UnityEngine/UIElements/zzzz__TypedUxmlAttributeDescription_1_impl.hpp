#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__get__defaultValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__get__defaultValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__set__defaultValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultValue_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(), "GetValueFromBag", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, bag, cc);
}
template <typename T> inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::get_defaultValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(), "get_defaultValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::set_defaultValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(), "set_defaultValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::TypedUxmlAttributeDescription_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
