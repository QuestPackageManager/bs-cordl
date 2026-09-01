#pragma once
// IWYU pragma private; include "System\Collections\Generic\SortedSet`1_TreeSubSet.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet`1_TreeSubSet_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1<T>*& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__underlying() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____underlying;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1<T>* const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__underlying() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____underlying;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__underlying(::System::Collections::Generic::SortedSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____underlying = value;
}
template <typename T> constexpr T& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
template <typename T> constexpr T const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__min(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____min = value;
}
template <typename T> constexpr T& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename T> constexpr T const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__max(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
template <typename T> constexpr bool& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__lBoundActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lBoundActive;
}
template <typename T> constexpr bool const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__lBoundActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lBoundActive;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__lBoundActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lBoundActive = value;
}
template <typename T> constexpr bool& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__uBoundActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uBoundActive;
}
template <typename T> constexpr bool const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__uBoundActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uBoundActive;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__uBoundActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uBoundActive = value;
}
template <typename T>
inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>* Underlying, T Min, T Max, bool lowerBoundActive, bool upperBoundActive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Underlying, Min, Max, lowerBoundActive, upperBoundActive);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::AddIfNotPresent(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::Contains(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::DoRemove(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::IsWithinRange(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline T GlobalNamespace::SortedSet_1_TreeSubSet<T>::get_MinInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::SortedSet_1_TreeSubSet<T>::get_MaxInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::BreadthFirstTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* GlobalNamespace::SortedSet_1_TreeSubSet<T>::FindNode(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method, item);
}
template <typename T> inline int32_t GlobalNamespace::SortedSet_1_TreeSubSet<T>::InternalIndexOf(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::VersionCheck() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::VersionCheckImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), { "VersionCheckImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* GlobalNamespace::SortedSet_1_TreeSubSet<T>::GetViewBetween(T lowerValue, T upperValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1<T>*>(this, ___internal_method, lowerValue, upperValue);
}
template <typename T>
inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T>
inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::_VersionCheckImpl_b__20_0(::System::Collections::Generic::SortedSet_1_Node<T>* n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(),
                                                           { "<VersionCheckImpl>b__20_0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
template <typename T>
inline ::GlobalNamespace::SortedSet_1_TreeSubSet<T>* GlobalNamespace::SortedSet_1_TreeSubSet<T>::New_ctor(::System::Collections::Generic::SortedSet_1<T>* Underlying, T Min, T Max,
                                                                                                          bool lowerBoundActive, bool upperBoundActive) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(Underlying, Min, Max, lowerBoundActive, upperBoundActive));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr GlobalNamespace::SortedSet_1_TreeSubSet<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* GlobalNamespace::SortedSet_1_TreeSubSet<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr GlobalNamespace::SortedSet_1_TreeSubSet<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* GlobalNamespace::SortedSet_1_TreeSubSet<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SortedSet_1_TreeSubSet<T>::SortedSet_1_TreeSubSet() {}
