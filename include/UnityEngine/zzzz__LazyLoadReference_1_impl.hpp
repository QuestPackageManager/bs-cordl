#pragma once
// IWYU pragma private; include "UnityEngine\LazyLoadReference_1.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
template <typename T> inline bool UnityEngine::LazyLoadReference_1<T>::get_isSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LazyLoadReference_1<T>>(), { "get_isSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline T UnityEngine::LazyLoadReference_1<T>::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LazyLoadReference_1<T>>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::LazyLoadReference_1<T>::set_asset(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LazyLoadReference_1<T>>(), { "set_asset", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::LazyLoadReference_1<T> UnityEngine::LazyLoadReference_1<T>::op_Implicit___UnityEngine__LazyLoadReference_1_T_(T asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LazyLoadReference_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LazyLoadReference_1<T>>(nullptr, ___internal_method, asset);
}
// Ctor Parameters [CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::LazyLoadReference_1<T>::LazyLoadReference_1(int32_t m_InstanceID) noexcept {
  this->m_InstanceID = m_InstanceID;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::LazyLoadReference_1<T>::LazyLoadReference_1() {}
