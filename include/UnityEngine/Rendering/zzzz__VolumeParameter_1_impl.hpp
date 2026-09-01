#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\VolumeParameter_1.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
template <typename T> constexpr T& UnityEngine::Rendering::VolumeParameter_1<T>::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename T> constexpr T const& UnityEngine::Rendering::VolumeParameter_1<T>::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename T> constexpr void UnityEngine::Rendering::VolumeParameter_1<T>::__cordl_internal_set_m_Value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
template <typename T> inline T UnityEngine::Rendering::VolumeParameter_1<T>::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::set_value(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::_ctor(T value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::Interp(::UnityEngine::Rendering::VolumeParameter* from, ::UnityEngine::Rendering::VolumeParameter* to, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::Interp(T from, T to, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::Override(T x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), { "Override", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename T> inline void UnityEngine::Rendering::VolumeParameter_1<T>::SetValue(::UnityEngine::Rendering::VolumeParameter* parameter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter);
}
template <typename T> inline int32_t UnityEngine::Rendering::VolumeParameter_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::Rendering::VolumeParameter_1<T>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeParameter_1<T>::op_Equality(::UnityEngine::Rendering::VolumeParameter_1<T>* lhs, T rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeParameter_1<T>::op_Inequality(::UnityEngine::Rendering::VolumeParameter_1<T>* lhs, T rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeParameter_1<T>::Equals(::UnityEngine::Rendering::VolumeParameter_1<T>* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeParameter_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T> inline ::System::Object* UnityEngine::Rendering::VolumeParameter_1<T>::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::VolumeParameter_1<T>::op_Explicit_T(::UnityEngine::Rendering::VolumeParameter_1<T>* prop) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>(),
                                                                                         { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prop);
}
template <typename T> inline ::UnityEngine::Rendering::VolumeParameter_1<T>* UnityEngine::Rendering::VolumeParameter_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeParameter_1<T>*>());
}
template <typename T> inline ::UnityEngine::Rendering::VolumeParameter_1<T>* UnityEngine::Rendering::VolumeParameter_1<T>::New_ctor(T value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeParameter_1<T>*>(value, overrideState));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>"
template <typename T> constexpr UnityEngine::Rendering::VolumeParameter_1<T>::operator ::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>*
UnityEngine::Rendering::VolumeParameter_1<T>::i___System__IEquatable_1___UnityEngine__Rendering__VolumeParameter_1_T___() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::VolumeParameter_1<T>::VolumeParameter_1() {}
