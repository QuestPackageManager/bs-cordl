#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleEnum_1.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleEnum_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
template <typename T> inline T UnityEngine::UIElements::StyleEnum_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::set_value(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "set_value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleEnum_1<T>::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(T v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(T v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::op_Equality(::UnityEngine::UIElements::StyleEnum_1<T> lhs, ::UnityEngine::UIElements::StyleEnum_1<T> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::op_Inequality(::UnityEngine::UIElements::StyleEnum_1<T> lhs, ::UnityEngine::UIElements::StyleEnum_1<T> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T>
inline ::UnityEngine::UIElements::StyleEnum_1<T> UnityEngine::UIElements::StyleEnum_1<T>::op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<T>>(nullptr, ___internal_method, keyword);
}
template <typename T> inline ::UnityEngine::UIElements::StyleEnum_1<T> UnityEngine::UIElements::StyleEnum_1<T>::op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(T v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<T>>(nullptr, ___internal_method, v);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::Equals(::UnityEngine::UIElements::StyleEnum_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleEnum_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::UIElements::StyleEnum_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleEnum_1<T>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<T>"
template <typename T> constexpr UnityEngine::UIElements::StyleEnum_1<T>::operator ::UnityEngine::UIElements::IStyleValue_1<T>*() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<T>"
template <typename T> constexpr ::UnityEngine::UIElements::IStyleValue_1<T>* UnityEngine::UIElements::StyleEnum_1<T>::i___UnityEngine__UIElements__IStyleValue_1_T_() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::StyleEnum_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>* UnityEngine::UIElements::StyleEnum_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__StyleEnum_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value:
// Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::StyleEnum_1<T>::StyleEnum_1(T m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept {
  this->m_Value = m_Value;
  this->m_Keyword = m_Keyword;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StyleEnum_1<T>::StyleEnum_1() {}
