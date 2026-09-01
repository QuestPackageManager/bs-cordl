#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\ConcreteListConverter_2.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__ConcreteListConverter_2_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__ConcreteListConverter_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename I, typename T>
inline void OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::setStaticF___9(::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*, "<>9", ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>(
      std::forward<::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>(value));
}
template <typename I, typename T> inline ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*, "<>9", ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>();
}
template <typename I, typename T> inline void OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::setStaticF___9__1_0(::System::Func_2<T, I>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, I>*, "<>9__1_0", ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>(std::forward<::System::Func_2<T, I>*>(value));
}
template <typename I, typename T> inline ::System::Func_2<T, I>* OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, I>*, "<>9__1_0", ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>();
}
template <typename I, typename T> inline void OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename I, typename T> inline I OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::_ReadJson_b__1_0(T x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>(), { "<ReadJson>b__1_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<I>(this, ___internal_method, x);
}
template <typename I, typename T> inline ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>*>());
}
// Ctor Parameters []
template <typename I, typename T> constexpr ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>::ConcreteListConverter_2___c() {}
template <typename I, typename T> inline bool OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template <typename I, typename T>
inline ::System::Object* OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                                 ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template <typename I, typename T>
inline void OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template <typename I, typename T> inline void OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename I, typename T> inline ::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>* OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>*>());
}
// Ctor Parameters []
template <typename I, typename T> constexpr ::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>::ConcreteListConverter_2() {}
