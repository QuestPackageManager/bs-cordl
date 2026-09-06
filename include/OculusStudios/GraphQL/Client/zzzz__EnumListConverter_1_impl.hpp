#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/EnumListConverter_1.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__EnumListConverter_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__EnumListConverter_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline void OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::setStaticF___9(::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*, "<>9", ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(
      std::forward<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(value));
}
template <typename T> inline ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*, "<>9", ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>();
}
template <typename T> inline void OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::setStaticF___9__2_0(::System::Func_2<T, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, bool>*, "<>9__2_0", ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(std::forward<::System::Func_2<T, bool>*>(value));
}
template <typename T> inline ::System::Func_2<T, bool>* OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, bool>*, "<>9__2_0", ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>();
}
template <typename T> inline void OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::setStaticF___9__2_1(::System::Func_2<T, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::StringW>*, "<>9__2_1", ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(std::forward<::System::Func_2<T, ::StringW>*>(value));
}
template <typename T> inline ::System::Func_2<T, ::StringW>* OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::StringW>*, "<>9__2_1", ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>();
}
template <typename T> inline void OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::_WriteJson_b__2_0(T x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(), { "<WriteJson>b__2_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
template <typename T> inline ::StringW OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::_WriteJson_b__2_1(T x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>(), { "<WriteJson>b__2_1", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
template <typename T> inline ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>::EnumListConverter_1___c() {}
template <typename T> inline bool OculusStudios::GraphQL::Client::EnumListConverter_1<T>::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template <typename T>
inline ::System::Object* OculusStudios::GraphQL::Client::EnumListConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                          ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template <typename T>
inline void OculusStudios::GraphQL::Client::EnumListConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template <typename T> inline void OculusStudios::GraphQL::Client::EnumListConverter_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::EnumListConverter_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::OculusStudios::GraphQL::Client::EnumListConverter_1<T>* OculusStudios::GraphQL::Client::EnumListConverter_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::EnumListConverter_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::EnumListConverter_1<T>::EnumListConverter_1() {}
