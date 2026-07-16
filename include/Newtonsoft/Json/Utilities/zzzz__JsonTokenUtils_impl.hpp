#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JsonTokenUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__JsonTokenUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsEndToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsEndToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d177e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JsonTokenUtils*>(), { "IsEndToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsStartToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsStartToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d2b1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JsonTokenUtils*>(), { "IsStartToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsPrimitiveToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsPrimitiveToken)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d2b1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JsonTokenUtils*>(), { "IsPrimitiveToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::Utilities::JsonTokenUtils::IsEndToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JsonTokenUtils*>(), { "IsEndToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Utilities::JsonTokenUtils::IsStartToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JsonTokenUtils*>(), { "IsStartToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Utilities::JsonTokenUtils::IsPrimitiveToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::JsonTokenUtils*>(), { "IsPrimitiveToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JsonTokenUtils::JsonTokenUtils() {}
