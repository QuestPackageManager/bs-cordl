#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JEnumerable_1.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void Newtonsoft::Json::Linq::JEnumerable_1<T>::setStaticF_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T> value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::Newtonsoft::Json::Linq::JEnumerable_1<T>>(std::forward<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(value));
}
template <typename T> inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> Newtonsoft::Json::Linq::JEnumerable_1<T>::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::Newtonsoft::Json::Linq::JEnumerable_1<T>>();
}
template <typename T> inline void Newtonsoft::Json::Linq::JEnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JEnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JEnumerable_1<T>::get_Item(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(*this, ___internal_method, key);
}
template <typename T> inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t Newtonsoft::Json::Linq::JEnumerable_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*() {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
template <typename T> constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___Newtonsoft__Json__Linq__IJEnumerable_1_T_() {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___System__IEquatable_1___Newtonsoft__Json__Linq__JEnumerable_1_T__() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept {
  this->_enumerable = _enumerable;
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1() {}
