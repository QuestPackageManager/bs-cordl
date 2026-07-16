#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/ColorConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "BGLib/JsonExtension/zzzz__ColorConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BGLib::JsonExtension::ColorConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BGLib::JsonExtension::ColorConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::UnityEngine::Color, bool, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::ColorConverter::ReadJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3314058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), { ::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::ColorConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::ColorConverter::*)(::Newtonsoft::Json::JsonWriter*, ::UnityEngine::Color, ::Newtonsoft::Json::JsonSerializer*)>(
    &::BGLib::JsonExtension::ColorConverter::WriteJson)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3314114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), { ::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::ColorConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::ColorConverter::*)()>(&::BGLib::JsonExtension::ColorConverter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x33142ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color BGLib::JsonExtension::ColorConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Color existingValue,
                                                                           bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
inline void BGLib::JsonExtension::ColorConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Color value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void BGLib::JsonExtension::ColorConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::ColorConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::JsonExtension::ColorConverter* BGLib::JsonExtension::ColorConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::JsonExtension::ColorConverter*>());
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::ColorConverter::ColorConverter() {}
