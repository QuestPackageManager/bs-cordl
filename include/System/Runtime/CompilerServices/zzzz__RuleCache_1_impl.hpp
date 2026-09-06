#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuleCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuleCache_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::ArrayW<T>& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__rules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rules;
}
template <typename T> constexpr ::ArrayW<T> const& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__rules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rules;
}
template <typename T> constexpr void System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_set__rules(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rules = value;
}
template <typename T> constexpr ::System::Object*& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__cacheLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLock;
}
template <typename T> constexpr ::System::Object* const& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__cacheLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLock;
}
template <typename T> constexpr void System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_set__cacheLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheLock = value;
}
template <typename T> inline void System::Runtime::CompilerServices::RuleCache_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> System::Runtime::CompilerServices::RuleCache_1<T>::GetRules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>(), { "GetRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::RuleCache_1<T>::MoveRule(T rule, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>(), { "MoveRule", {}, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rule, i);
}
template <typename T> inline void System::Runtime::CompilerServices::RuleCache_1<T>::AddRule(T newRule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>(), { "AddRule", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRule);
}
template <typename T> inline ::ArrayW<T> System::Runtime::CompilerServices::RuleCache_1<T>::AddOrInsert(::ArrayW<T> rules, T item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>(), { "AddOrInsert", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rules, item);
}
template <typename T> inline ::System::Runtime::CompilerServices::RuleCache_1<T>* System::Runtime::CompilerServices::RuleCache_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::RuleCache_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::RuleCache_1<T>::RuleCache_1() {}
