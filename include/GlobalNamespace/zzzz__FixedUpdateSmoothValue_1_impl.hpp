#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedUpdateSmoothValue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__currentSmoothedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSmoothedValue;
}
template <typename T> constexpr T const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__currentSmoothedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSmoothedValue;
}
template <typename T> constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_set__currentSmoothedValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSmoothedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__prevSmoothedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSmoothedValue;
}
template <typename T> constexpr T const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__prevSmoothedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSmoothedValue;
}
template <typename T> constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_set__prevSmoothedValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevSmoothedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
template <typename T> constexpr float_t const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
template <typename T> constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
template <typename T> inline ::GlobalNamespace::FixedUpdateSmoothValue_1<T>* GlobalNamespace::FixedUpdateSmoothValue_1<T>::New_ctor(float_t smooth) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(smooth));
}
template <typename T> inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::_ctor(float_t smooth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, smooth);
}
template <typename T> inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::SetStartValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(), "SetStartValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::FixedUpdate(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(), "FixedUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T GlobalNamespace::FixedUpdateSmoothValue_1<T>::GetValue(float_t interpolationFactor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(), "GetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, interpolationFactor);
}
template <typename T> inline T GlobalNamespace::FixedUpdateSmoothValue_1<T>::Interpolate(T value0, T value1, float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, value0, value1, t);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::FixedUpdateSmoothValue_1<T>::FixedUpdateSmoothValue_1() {}
