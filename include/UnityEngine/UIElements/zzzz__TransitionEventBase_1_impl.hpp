#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::StylePropertyNameCollection& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__stylePropertyNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylePropertyNames_k__BackingField;
}
template <typename T>
constexpr ::UnityEngine::UIElements::StylePropertyNameCollection const& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__stylePropertyNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylePropertyNames_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_set__stylePropertyNames_k__BackingField(::UnityEngine::UIElements::StylePropertyNameCollection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stylePropertyNames_k__BackingField = value;
}
template <typename T> constexpr double_t& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__elapsedTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_k__BackingField;
}
template <typename T> constexpr double_t const& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__elapsedTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_set__elapsedTime_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::UIElements::StylePropertyNameCollection UnityEngine::UIElements::TransitionEventBase_1<T>::get_stylePropertyNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventBase_1<T>*>::get(),
                                                                             "get_stylePropertyNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyNameCollection, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::set_elapsedTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventBase_1<T>*>::get(), "set_elapsedTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventBase_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventBase_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::TransitionEventBase_1<T>::GetPooled(::UnityEngine::UIElements::StylePropertyName stylePropertyName, double_t elapsedTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventBase_1<T>*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, stylePropertyName, elapsedTime);
}
template <typename T> inline ::UnityEngine::UIElements::TransitionEventBase_1<T>* UnityEngine::UIElements::TransitionEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TransitionEventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TransitionEventBase_1<T>::TransitionEventBase_1() {}
