#pragma once
#include "Tweening/zzzz__Tween_impl.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> constexpr T& Tweening::Tween_1<T>::__cordl_internal_get_fromValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromValue;
}
template <typename T> constexpr T const& Tweening::Tween_1<T>::__cordl_internal_get_fromValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromValue;
}
template <typename T> constexpr void Tweening::Tween_1<T>::__cordl_internal_set_fromValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fromValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& Tweening::Tween_1<T>::__cordl_internal_get_toValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValue;
}
template <typename T> constexpr T const& Tweening::Tween_1<T>::__cordl_internal_get_toValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValue;
}
template <typename T> constexpr void Tweening::Tween_1<T>::__cordl_internal_set_toValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& Tweening::Tween_1<T>::__cordl_internal_get_onUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUpdate;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& Tweening::Tween_1<T>::__cordl_internal_get_onUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUpdate;
}
template <typename T> constexpr void Tweening::Tween_1<T>::__cordl_internal_set_onUpdate(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline void Tweening::Tween_1<T>::OnSpawned(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay, ::Tweening::Tween_1<T>* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), "OnSpawned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::Tween_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay, t);
}
template <typename T> inline void Tweening::Tween_1<T>::OnDespawned(::Tweening::Tween_1<T>* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), "OnDespawned", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::Tween_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
template <typename T> inline ::Tweening::Tween_1<T>* Tweening::Tween_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::Tween_1<T>*>());
}
template <typename T> inline void Tweening::Tween_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::Tweening::Tween_1<T>* Tweening::Tween_1<T>::New_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::Tween_1<T>*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
template <typename T> inline void Tweening::Tween_1<T>::_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
/// @param delay: float_t (default: 0.0)
template <typename T> inline void Tweening::Tween_1<T>::Init(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
template <typename T> inline void Tweening::Tween_1<T>::Update(float_t currentTime) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTime);
}
template <typename T> inline void Tweening::Tween_1<T>::Sample(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
template <typename T> inline void Tweening::Tween_1<T>::ForceOnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), "ForceOnUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Tweening::Tween_1<T>::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::Tween_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, t);
}
// Ctor Parameters []
template <typename T> constexpr ::Tweening::Tween_1<T>::Tween_1() {}
