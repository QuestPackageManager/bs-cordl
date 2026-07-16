#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/EntityKeyMemberConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__EntityKeyMemberConverter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionObject_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::EntityKeyMemberConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::EntityKeyMemberConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::EntityKeyMemberConverter::WriteJson)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5d98430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::EntityKeyMemberConverter.ReadAndAssertProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::JsonReader*, ::StringW)>(&::Newtonsoft::Json::Converters::EntityKeyMemberConverter::ReadAndAssertProperty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d98880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(),
                                                             { "ReadAndAssertProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::EntityKeyMemberConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Converters::EntityKeyMemberConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*,
                                                                                                                                       ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Converters::EntityKeyMemberConverter::ReadJson)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d98974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::EntityKeyMemberConverter.EnsureReflectionObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Newtonsoft::Json::Converters::EntityKeyMemberConverter::EnsureReflectionObject)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d98790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), { "EnsureReflectionObject", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::EntityKeyMemberConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::EntityKeyMemberConverter::*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::EntityKeyMemberConverter::CanConvert)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d98c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::EntityKeyMemberConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::EntityKeyMemberConverter::*)()>(&::Newtonsoft::Json::Converters::EntityKeyMemberConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d98cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::EntityKeyMemberConverter::setStaticF__reflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ReflectionObject*, "_reflectionObject", ::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(
      std::forward<::Newtonsoft::Json::Utilities::ReflectionObject*>(value));
}
inline ::Newtonsoft::Json::Utilities::ReflectionObject* Newtonsoft::Json::Converters::EntityKeyMemberConverter::getStaticF__reflectionObject() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ReflectionObject*, "_reflectionObject", ::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>();
}
inline void Newtonsoft::Json::Converters::EntityKeyMemberConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void Newtonsoft::Json::Converters::EntityKeyMemberConverter::ReadAndAssertProperty(::Newtonsoft::Json::JsonReader* reader, ::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(),
                                                           { "ReadAndAssertProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, propertyName);
}
inline ::System::Object* Newtonsoft::Json::Converters::EntityKeyMemberConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                          ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline void Newtonsoft::Json::Converters::EntityKeyMemberConverter::EnsureReflectionObject(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), { "EnsureReflectionObject", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objectType);
}
inline bool Newtonsoft::Json::Converters::EntityKeyMemberConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void Newtonsoft::Json::Converters::EntityKeyMemberConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::EntityKeyMemberConverter* Newtonsoft::Json::Converters::EntityKeyMemberConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::EntityKeyMemberConverter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::EntityKeyMemberConverter::EntityKeyMemberConverter() {}
