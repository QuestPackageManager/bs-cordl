#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ChangeEvent_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::__ChangeEvent_1____c<T>::setStaticF___9(::UnityEngine::UIElements::__ChangeEvent_1____c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*>::get>(
      std::forward<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::__ChangeEvent_1____c<T>* UnityEngine::UIElements::__ChangeEvent_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*>::get>();
}
template <typename T> inline ::UnityEngine::UIElements::__ChangeEvent_1____c<T>* UnityEngine::UIElements::__ChangeEvent_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__ChangeEvent_1____c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::__ChangeEvent_1____c<T>::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ChangeEvent_1____c<T>*>::get(),
                                                                             "<.cctor>b__0_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ChangeEvent_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__ChangeEvent_1____c<T>::__ChangeEvent_1____c() {}
template <typename T> constexpr T& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__previousValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__previousValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_set__previousValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____previousValue_k__BackingField, value);
}
template <typename T> constexpr T& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__newValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__newValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_set__newValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____newValue_k__BackingField, value);
}
template <typename T> inline T UnityEngine::UIElements::ChangeEvent_1<T>::get_previousValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(),
                                                                             "get_previousValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::set_previousValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "set_previousValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::ChangeEvent_1<T>::get_newValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(),
                                                                             "get_newValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::set_newValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "set_newValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "LocalInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1<T>::GetPooled(T previousValue, T newValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ChangeEvent_1<T>*, false>(nullptr, ___internal_method, previousValue, newValue);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ChangeEvent_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ChangeEvent_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ChangeEvent_1<T>::ChangeEvent_1() {}
