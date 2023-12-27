#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__get_poolNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___poolNext;
}
template <typename T> constexpr T const& UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__get_poolNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___poolNext;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__set_poolNext(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poolNext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>* UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::LinkedPoolItem_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
