#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\CustomCreationConverter_1.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__CustomCreationConverter_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T>
inline void Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template <typename T>
inline ::System::Object* Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                              ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template <typename T> inline T Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::Create(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, objectType);
}
template <typename T> inline bool Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template <typename T> inline bool Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>* Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>::CustomCreationConverter_1() {}
