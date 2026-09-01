#pragma once
// IWYU pragma private; include "System\WeakReference_1.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename T> constexpr ::System::Runtime::InteropServices::GCHandle& System::WeakReference_1<T>::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
template <typename T> constexpr ::System::Runtime::InteropServices::GCHandle const& System::WeakReference_1<T>::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
template <typename T> constexpr void System::WeakReference_1<T>::__cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handle = value;
}
template <typename T> constexpr bool& System::WeakReference_1<T>::__cordl_internal_get_trackResurrection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackResurrection;
}
template <typename T> constexpr bool const& System::WeakReference_1<T>::__cordl_internal_get_trackResurrection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackResurrection;
}
template <typename T> constexpr void System::WeakReference_1<T>::__cordl_internal_set_trackResurrection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackResurrection = value;
}
template <typename T> inline void System::WeakReference_1<T>::_ctor(T target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
template <typename T> inline void System::WeakReference_1<T>::_ctor(T target, bool trackResurrection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, trackResurrection);
}
template <typename T> inline void System::WeakReference_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::WeakReference_1<T>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T> inline void System::WeakReference_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::WeakReference_1<T>*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T> inline void System::WeakReference_1<T>::SetTarget(T target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference_1<T>*>(), { "SetTarget", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
template <typename T> inline bool System::WeakReference_1<T>::TryGetTarget(::by_ref<T> target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference_1<T>*>(), { "TryGetTarget", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
template <typename T> inline void System::WeakReference_1<T>::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(T target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference_1<T>*>(target));
}
template <typename T> inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(T target, bool trackResurrection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference_1<T>*>(target, trackResurrection));
}
template <typename T>
inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference_1<T>*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::WeakReference_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* System::WeakReference_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::WeakReference_1<T>::WeakReference_1() {}
