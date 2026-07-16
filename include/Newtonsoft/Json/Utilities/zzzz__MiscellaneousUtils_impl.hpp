#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MiscellaneousUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MiscellaneousUtils_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__ArgumentOutOfRangeException_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils._cordl_Assert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::_cordl_Assert)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d2b970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "Assert", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.ValueEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Object*)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::ValueEquals)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5d2b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                                                                           { "ValueEquals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.CreateArgumentOutOfRangeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::StringW, ::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Utilities::MiscellaneousUtils::CreateArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d1fd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                                { "CreateArgumentOutOfRangeException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d2bc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.ByteArrayCompare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::ByteArrayCompare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d2bd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                                                                           { "ByteArrayCompare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.GetPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::GetPrefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d2bda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "GetPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.GetLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::GetLocalName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d2be5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "GetLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.GetQualifiedNameParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::GetQualifiedNameParts)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d2bdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                                { "GetQualifiedNameParts", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MiscellaneousUtils.GetRegexOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexOptions (*)(::StringW)>(&::Newtonsoft::Json::Utilities::MiscellaneousUtils::GetRegexOptions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d2be7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "GetRegexOptions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::MiscellaneousUtils::_cordl_Assert(bool condition, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "Assert", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline bool Newtonsoft::Json::Utilities::MiscellaneousUtils::ValueEquals(::System::Object* objA, ::System::Object* objB) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                                                                         { "ValueEquals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, objA, objB);
}
inline ::System::ArgumentOutOfRangeException* Newtonsoft::Json::Utilities::MiscellaneousUtils::CreateArgumentOutOfRangeException(::StringW paramName, ::System::Object* actualValue,
                                                                                                                                 ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                              { "CreateArgumentOutOfRangeException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, paramName, actualValue, message);
}
inline ::StringW Newtonsoft::Json::Utilities::MiscellaneousUtils::ToString(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Utilities::MiscellaneousUtils::ByteArrayCompare(::ArrayW<uint8_t> a1, ::ArrayW<uint8_t> a2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                                                                         { "ByteArrayCompare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a1, a2);
}
inline ::StringW Newtonsoft::Json::Utilities::MiscellaneousUtils::GetPrefix(::StringW qualifiedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "GetPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, qualifiedName);
}
inline ::StringW Newtonsoft::Json::Utilities::MiscellaneousUtils::GetLocalName(::StringW qualifiedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "GetLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, qualifiedName);
}
inline void Newtonsoft::Json::Utilities::MiscellaneousUtils::GetQualifiedNameParts(::StringW qualifiedName, ::by_ref<::StringW> prefix, ::by_ref<::StringW> localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(),
                                              { "GetQualifiedNameParts", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, qualifiedName, prefix, localName);
}
inline ::System::Text::RegularExpressions::RegexOptions Newtonsoft::Json::Utilities::MiscellaneousUtils::GetRegexOptions(::StringW optionsText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MiscellaneousUtils*>(), { "GetRegexOptions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexOptions>(nullptr, ___internal_method, optionsText);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::MiscellaneousUtils::MiscellaneousUtils() {}
