#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\VersionConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__VersionConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::VersionConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::VersionConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::VersionConverter::WriteJson)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d9e8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::VersionConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::VersionConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::VersionConverter::ReadJson)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d9e9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::VersionConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::VersionConverter::*)(::System::Type*)>(&::Newtonsoft::Json::Converters::VersionConverter::CanConvert)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d9ec28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::VersionConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::VersionConverter::*)()>(&::Newtonsoft::Json::Converters::VersionConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::VersionConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::VersionConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                  ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool Newtonsoft::Json::Converters::VersionConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void Newtonsoft::Json::Converters::VersionConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::VersionConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::VersionConverter* Newtonsoft::Json::Converters::VersionConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::VersionConverter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::VersionConverter::VersionConverter() {}
