#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\DateTimeConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__DateTimeConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::DateTimeConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::GraphQL::Client::DateTimeConverter::*)(::System::Type*)>(
    &::OculusStudios::GraphQL::Client::DateTimeConverter::CanConvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2251c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::DateTimeConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::OculusStudios::GraphQL::Client::DateTimeConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::OculusStudios::GraphQL::Client::DateTimeConverter::ReadJson)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f22524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::DateTimeConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::DateTimeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::OculusStudios::GraphQL::Client::DateTimeConverter::WriteJson)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5f22650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::DateTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::DateTimeConverter::*)()>(&::OculusStudios::GraphQL::Client::DateTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::DateTimeConverter::setStaticF_epoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "epoch", ::OculusStudios::GraphQL::Client::DateTimeConverter*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime OculusStudios::GraphQL::Client::DateTimeConverter::getStaticF_epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "epoch", ::OculusStudios::GraphQL::Client::DateTimeConverter*>();
}
inline bool OculusStudios::GraphQL::Client::DateTimeConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline ::System::Object* OculusStudios::GraphQL::Client::DateTimeConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                     ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline void OculusStudios::GraphQL::Client::DateTimeConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void OculusStudios::GraphQL::Client::DateTimeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::DateTimeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::DateTimeConverter* OculusStudios::GraphQL::Client::DateTimeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::DateTimeConverter*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::DateTimeConverter::DateTimeConverter() {}
