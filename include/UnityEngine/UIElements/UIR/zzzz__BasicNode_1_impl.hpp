#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>*& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> const& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::BasicNode_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr T const& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_set_data(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void UnityEngine::UIElements::UIR::BasicNode_1<T>::AppendTo(ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> first) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>::get(), "AppendTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* UnityEngine::UIElements::UIR::BasicNode_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::UIR::BasicNode_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>::BasicNode_1() {}
