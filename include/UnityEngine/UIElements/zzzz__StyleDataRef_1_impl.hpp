#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleDataRef_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleDataRef_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleDataRef_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_get_m_RefCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_get_m_RefCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefCount;
}
template <typename T> constexpr void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_set_m_RefCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RefCount = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
template <typename T> constexpr void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_set_m_Id(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Id = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::setStaticF_m_NextId(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "m_NextId", ::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(std::forward<uint32_t>(value));
}
template <typename T> inline uint32_t UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::getStaticF_m_NextId() {
  return ::cordl_internals::getStaticField<uint32_t, "m_NextId", ::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>();
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::get_refCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(), { "get_refCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>* UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>* UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>::StyleDataRef_1_RefCounted() {}
template <typename T> inline ::UnityEngine::UIElements::StyleDataRef_1<T> UnityEngine::UIElements::StyleDataRef_1<T>::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleDataRef_1<T>>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1<T>::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleDataRef_1<T>::CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleDataRef_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline ::by_ref<T> UnityEngine::UIElements::StyleDataRef_1<T>::Read() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "Read", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline ::by_ref<T> UnityEngine::UIElements::StyleDataRef_1<T>::Write() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "Write", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::StyleDataRef_1<T> UnityEngine::UIElements::StyleDataRef_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleDataRef_1<T>>(nullptr, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleDataRef_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::op_Equality(::UnityEngine::UIElements::StyleDataRef_1<T> lhs, ::UnityEngine::UIElements::StyleDataRef_1<T> rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleDataRef_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::Equals(::UnityEngine::UIElements::StyleDataRef_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleDataRef_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline bool UnityEngine::UIElements::StyleDataRef_1<T>::ReferenceEquals(::UnityEngine::UIElements::StyleDataRef_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleDataRef_1<T>>(),
                                                                                         { "ReferenceEquals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleDataRef_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::StyleDataRef_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>* UnityEngine::UIElements::StyleDataRef_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__StyleDataRef_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::StyleDataRef_1<T>::StyleDataRef_1(::UnityEngine::UIElements::StyleDataRef_1_RefCounted<T>* m_Ref) noexcept {
  this->m_Ref = m_Ref;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StyleDataRef_1<T>::StyleDataRef_1() {}
