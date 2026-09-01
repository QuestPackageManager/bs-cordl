#pragma once
// IWYU pragma private; include "BGLib\JsonExtension\Vector2IntConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "BGLib/JsonExtension/zzzz__Vector2IntConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2IntConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::BGLib::JsonExtension::Vector2IntConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::UnityEngine::Vector2Int, bool, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector2IntConverter::ReadJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x331689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), { ::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2IntConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::Vector2IntConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::UnityEngine::Vector2Int, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector2IntConverter::WriteJson)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3316958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), { ::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2IntConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::Vector2IntConverter::*)()>(&::BGLib::JsonExtension::Vector2IntConverter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3316a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2Int BGLib::JsonExtension::Vector2IntConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Vector2Int existingValue,
                                                                                     bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
inline void BGLib::JsonExtension::Vector2IntConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Vector2Int value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void BGLib::JsonExtension::Vector2IntConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector2IntConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::JsonExtension::Vector2IntConverter* BGLib::JsonExtension::Vector2IntConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::JsonExtension::Vector2IntConverter*>());
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::Vector2IntConverter::Vector2IntConverter() {}
