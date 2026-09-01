#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonConverter_1.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline void Newtonsoft::Json::JsonConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverter_1<T>*>(),
                          { "WriteJson", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template <typename T> inline void Newtonsoft::Json::JsonConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, T value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonConverter_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template <typename T>
inline ::System::Object* Newtonsoft::Json::JsonConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                        ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverter_1<T>*>(),
                                                                                         { "ReadJson",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template <typename T>
inline T Newtonsoft::Json::JsonConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, T existingValue, bool hasExistingValue,
                                                        ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonConverter_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
template <typename T> inline bool Newtonsoft::Json::JsonConverter_1<T>::CanConvert(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverter_1<T>*>(), { "CanConvert", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template <typename T> inline void Newtonsoft::Json::JsonConverter_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverter_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::JsonConverter_1<T>* Newtonsoft::Json::JsonConverter_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonConverter_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::JsonConverter_1<T>::JsonConverter_1() {}
