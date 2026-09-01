#pragma once
// IWYU pragma private; include "OSCE\Networking\PureCSharpPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Networking/zzzz__PureCSharpPool_1_def.hpp"
#include "OSCE/Networking/zzzz__PureCSharpPool_1_def.hpp"
template <typename T> constexpr T& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_AllocatedElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllocatedElement;
}
template <typename T> constexpr T const& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_AllocatedElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllocatedElement;
}
template <typename T> constexpr void OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_set_AllocatedElement(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AllocatedElement = value;
}
template <typename T> constexpr ::StringW& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_Stacktrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stacktrace;
}
template <typename T> constexpr ::StringW const& OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_get_Stacktrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stacktrace;
}
template <typename T> constexpr void OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::__cordl_internal_set_Stacktrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Stacktrace = value;
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>* OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>::PureCSharpPool_1_DebugTrace() {}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__pooledObjects(::ArrayW<T> value) {
  ::cordl_internals::setStaticField<::ArrayW<T>, "_pooledObjects", ::OSCE::Networking::PureCSharpPool_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template <typename T> inline ::ArrayW<T> OSCE::Networking::PureCSharpPool_1<T>::getStaticF__pooledObjects() {
  return ::cordl_internals::getStaticField<::ArrayW<T>, "_pooledObjects", ::OSCE::Networking::PureCSharpPool_1<T>*>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__balance(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_balance", ::OSCE::Networking::PureCSharpPool_1<T>*>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::getStaticF__balance() {
  return ::cordl_internals::getStaticField<int32_t, "_balance", ::OSCE::Networking::PureCSharpPool_1<T>*>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__pooledObjectsCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_pooledObjectsCount", ::OSCE::Networking::PureCSharpPool_1<T>*>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::getStaticF__pooledObjectsCount() {
  return ::cordl_internals::getStaticField<int32_t, "_pooledObjectsCount", ::OSCE::Networking::PureCSharpPool_1<T>*>();
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::setStaticF__poolCapacity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_poolCapacity", ::OSCE::Networking::PureCSharpPool_1<T>*>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::getStaticF__poolCapacity() {
  return ::cordl_internals::getStaticField<int32_t, "_poolCapacity", ::OSCE::Networking::PureCSharpPool_1<T>*>();
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1<T>*>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline int32_t OSCE::Networking::PureCSharpPool_1<T>::get_Balance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1<T>*>(), { "get_Balance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline T OSCE::Networking::PureCSharpPool_1<T>::GetFromPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1<T>*>(), { "GetFromPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::Return(T obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1<T>*>(), { "Return", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
template <typename T> inline void OSCE::Networking::PureCSharpPool_1<T>::ResetPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Networking::PureCSharpPool_1<T>*>(), { "ResetPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::OSCE::Networking::PureCSharpPool_1<T>::PureCSharpPool_1() {}
