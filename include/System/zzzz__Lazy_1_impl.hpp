#pragma once
// IWYU pragma private; include "System/Lazy_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__LazyHelper_def.hpp"
template <typename T> constexpr ::System::LazyHelper*& System::Lazy_1<T>::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename T> constexpr ::System::LazyHelper* const& System::Lazy_1<T>::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename T> constexpr void System::Lazy_1<T>::__cordl_internal_set__state(::System::LazyHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
template <typename T> constexpr ::System::Func_1<T>*& System::Lazy_1<T>::__cordl_internal_get__factory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename T> constexpr ::System::Func_1<T>* const& System::Lazy_1<T>::__cordl_internal_get__factory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename T> constexpr void System::Lazy_1<T>::__cordl_internal_set__factory(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____factory = value;
}
template <typename T> constexpr T& System::Lazy_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& System::Lazy_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void System::Lazy_1<T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename T> inline T System::Lazy_1<T>::CreateViaDefaultConstructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "CreateViaDefaultConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline void System::Lazy_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Lazy_1<T>::_ctor(::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueFactory);
}
template <typename T> inline void System::Lazy_1<T>::_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Threading::LazyThreadSafetyMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueFactory, mode, useDefaultConstructor);
}
template <typename T> inline void System::Lazy_1<T>::ViaConstructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "ViaConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Lazy_1<T>::ViaFactory(::System::Threading::LazyThreadSafetyMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "ViaFactory", {}, { ::i2c::type_of<::System::Threading::LazyThreadSafetyMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
template <typename T> inline void System::Lazy_1<T>::ExecutionAndPublication(::System::LazyHelper* executionAndPublication, bool useDefaultConstructor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "ExecutionAndPublication", {}, { ::i2c::type_of<::System::LazyHelper*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executionAndPublication, useDefaultConstructor);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnly(::System::LazyHelper* publicationOnly, T possibleValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "PublicationOnly", {}, { ::i2c::type_of<::System::LazyHelper*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicationOnly, possibleValue);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnlyViaConstructor(::System::LazyHelper* initializer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "PublicationOnlyViaConstructor", {}, { ::i2c::type_of<::System::LazyHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializer);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnlyViaFactory(::System::LazyHelper* initializer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "PublicationOnlyViaFactory", {}, { ::i2c::type_of<::System::LazyHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializer);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnlyWaitForOtherThreadToPublish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "PublicationOnlyWaitForOtherThreadToPublish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T System::Lazy_1<T>::CreateValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "CreateValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Lazy_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Lazy_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline bool System::Lazy_1<T>::get_IsValueCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "get_IsValueCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T System::Lazy_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Lazy_1<T>*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::System::Lazy_1<T>* System::Lazy_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Lazy_1<T>*>());
}
template <typename T> inline ::System::Lazy_1<T>* System::Lazy_1<T>::New_ctor(::System::Func_1<T>* valueFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Lazy_1<T>*>(valueFactory));
}
template <typename T> inline ::System::Lazy_1<T>* System::Lazy_1<T>::New_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Lazy_1<T>*>(valueFactory, mode, useDefaultConstructor));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Lazy_1<T>::Lazy_1() {}
