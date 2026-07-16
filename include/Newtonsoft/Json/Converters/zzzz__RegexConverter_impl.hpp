#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/RegexConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__RegexConverter_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::RegexConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::RegexConverter::WriteJson)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d9aad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::RegexConverter::*)(
    ::System::Text::RegularExpressions::RegexOptions, ::System::Text::RegularExpressions::RegexOptions)>(&::Newtonsoft::Json::Converters::RegexConverter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                            { "HasFlag", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.WriteBson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::Bson::BsonWriter*, ::System::Text::RegularExpressions::Regex*)>(
    &::Newtonsoft::Json::Converters::RegexConverter::WriteBson)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d9abf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                                { "WriteBson", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonWriter*>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::RegexConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Text::RegularExpressions::Regex*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::RegexConverter::WriteJson)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d9ad60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                                             { "WriteJson",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::RegexConverter::ReadJson)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d9af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.ReadRegexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::Converters::RegexConverter::ReadRegexString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5d9b27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { "ReadRegexString", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.ReadRegexObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Regex* (
    ::Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::RegexConverter::ReadRegexObject)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d9b008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                                             { "ReadRegexObject", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::RegexConverter::*)(::System::Type*)>(&::Newtonsoft::Json::Converters::RegexConverter::CanConvert)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d9b3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter.IsRegex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::RegexConverter::*)(::System::Type*)>(&::Newtonsoft::Json::Converters::RegexConverter::IsRegex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d9b440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { "IsRegex", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::RegexConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::RegexConverter::*)()>(&::Newtonsoft::Json::Converters::RegexConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9b4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::RegexConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline bool Newtonsoft::Json::Converters::RegexConverter::HasFlag(::System::Text::RegularExpressions::RegexOptions options, ::System::Text::RegularExpressions::RegexOptions flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                       { "HasFlag", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, options, flag);
}
inline void Newtonsoft::Json::Converters::RegexConverter::WriteBson(::Newtonsoft::Json::Bson::BsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                              { "WriteBson", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonWriter*>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, regex);
}
inline void Newtonsoft::Json::Converters::RegexConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex,
                                                                    ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                                           { "WriteJson",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, regex, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::RegexConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::RegexConverter::ReadRegexString(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { "ReadRegexString", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader);
}
inline ::System::Text::RegularExpressions::Regex* Newtonsoft::Json::Converters::RegexConverter::ReadRegexObject(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(),
                                                           { "ReadRegexObject", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Regex*>(this, ___internal_method, reader, serializer);
}
inline bool Newtonsoft::Json::Converters::RegexConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline bool Newtonsoft::Json::Converters::RegexConverter::IsRegex(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { "IsRegex", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void Newtonsoft::Json::Converters::RegexConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::RegexConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::RegexConverter* Newtonsoft::Json::Converters::RegexConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::RegexConverter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::RegexConverter::RegexConverter() {}
