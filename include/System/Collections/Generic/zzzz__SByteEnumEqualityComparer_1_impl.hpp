#pragma once
// IWYU pragma private; include "System/Collections/Generic/SByteEnumEqualityComparer_1.hpp"
#include "System/Collections/Generic/zzzz__EnumEqualityComparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__SByteEnumEqualityComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename T> inline void System::Collections::Generic::SByteEnumEqualityComparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::SByteEnumEqualityComparer_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* information,
                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, information, context);
}
template <typename T> inline int32_t System::Collections::Generic::SByteEnumEqualityComparer_1<T>::GetHashCode(T obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
template <typename T> inline ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>* System::Collections::Generic::SByteEnumEqualityComparer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>());
}
template <typename T>
inline ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*
System::Collections::Generic::SByteEnumEqualityComparer_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>(information, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::SByteEnumEqualityComparer_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T>
constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Generic::SByteEnumEqualityComparer_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>::SByteEnumEqualityComparer_1() {}
