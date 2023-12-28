#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerCaptureEventInternal_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IPointerCaptureEventInternal"
template <typename T> constexpr UnityEngine::UIElements::PointerCaptureEventBase_1<T>::operator ::UnityEngine::UIElements::IPointerCaptureEventInternal*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerCaptureEventInternal*>(static_cast<void*>(this));
}
template <typename T> constexpr ::UnityEngine::UIElements::IEventHandler*& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__get__relatedTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IEventHandler*> const& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__get__relatedTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__set__relatedTarget_k__BackingField(::UnityEngine::UIElements::IEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relatedTarget_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__get__pointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__get__pointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__set__pointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerId_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::set_relatedTarget(::UnityEngine::UIElements::IEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(), "set_relatedTarget", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::PointerCaptureEventBase_1<T>::get_pointerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(),
                                                                             "get_pointerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::set_pointerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(), "set_pointerId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(),
                                                                             "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline T UnityEngine::UIElements::PointerCaptureEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::IEventHandler* relatedTarget,
                                                                          int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, target, relatedTarget, pointerId);
}
template <typename T> inline ::UnityEngine::UIElements::PointerCaptureEventBase_1<T>* UnityEngine::UIElements::PointerCaptureEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::PointerCaptureEventBase_1<T>::PointerCaptureEventBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
