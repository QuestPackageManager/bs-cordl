#pragma once
// IWYU pragma private; include "BGLib\JsonExtension\Vector2Converter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "BGLib/JsonExtension/zzzz__Vector2Converter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2Converter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::BGLib::JsonExtension::Vector2Converter::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::UnityEngine::Vector2, bool, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector2Converter::ReadJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33166ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), { ::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2Converter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::Vector2Converter::*)(::Newtonsoft::Json::JsonWriter*, ::UnityEngine::Vector2,
                                                                                                          ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector2Converter::WriteJson)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3316768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), { ::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2Converter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::Vector2Converter::*)()>(&::BGLib::JsonExtension::Vector2Converter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3316860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 BGLib::JsonExtension::Vector2Converter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Vector2 existingValue,
                                                                               bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
inline void BGLib::JsonExtension::Vector2Converter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Vector2 value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void BGLib::JsonExtension::Vector2Converter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2Converter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::JsonExtension::Vector2Converter* BGLib::JsonExtension::Vector2Converter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::JsonExtension::Vector2Converter*>());
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::Vector2Converter::Vector2Converter() {}
