#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/NestedFragmentConverter_1.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__NestedFragmentConverter_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IFragment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline bool OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template <typename T>
inline ::System::Object* OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                                ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template <typename T>
inline void OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template <typename T>
inline ::Newtonsoft::Json::Linq::JObject* OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::MergeFragments(::OculusStudios::GraphQL::Client::IFragment* frag,
                                                                                                                       ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>*>(),
                                              { "MergeFragments", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::IFragment*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JObject*>(nullptr, ___internal_method, frag, serializer);
}
template <typename T> inline void OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>* OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::NestedFragmentConverter_1<T>::NestedFragmentConverter_1() {}
