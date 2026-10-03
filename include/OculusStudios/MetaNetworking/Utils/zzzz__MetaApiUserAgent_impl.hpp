#pragma once
// IWYU pragma private; include "OculusStudios/MetaNetworking/Utils/MetaApiUserAgent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/MetaNetworking/Utils/zzzz__MetaApiUserAgent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW,
                                                                     ::by_ref<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*>)>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::Build)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6348c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(),
                                                { "Build",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent.AppendToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*)>(
        &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::AppendToken)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6348ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(),
                                                             { "AppendToken",
                                                               {},
                                                               { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent.Sanitize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<bool>)>(&::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::Sanitize)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6349034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(),
                                                                                           { "Sanitize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent.IsReserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::IsReserved)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63491a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(), { "IsReserved", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::Build(
    ::StringW baseUserAgent, ::StringW appName, ::StringW appVersion, ::StringW buildVersion, ::StringW systemName, ::StringW systemVersion, ::StringW device, /* [Nullable(2)] */ ::StringW locale,
    /* [TupleElementNames(new[] { "original", "sanitized" })] [Nullable(new[] { 1, 1, 0, 1, 1 })] */
    ::by_ref<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*> sanitizedAgentParts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(),
                                              { "Build",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, baseUserAgent, appName, appVersion, buildVersion, systemName, systemVersion, device, locale, sanitizedAgentParts);
}
inline void
OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::AppendToken(::System::Text::StringBuilder* builder, ::StringW key, /* [Nullable(2)] */ ::StringW value,
                                                                    /* [TupleElementNames(new[] { "original", "sanitized" })] [Nullable(new[] { 1, 1, 0, 1, 1 })] */
                                                                    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>* sanitizedAgentParts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(),
                                                           { "AppendToken",
                                                             {},
                                                             { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, key, value, sanitizedAgentParts);
}
inline ::StringW OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::Sanitize(::StringW value, ::by_ref<bool> didStrip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(),
                                                                                         { "Sanitize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, didStrip);
}
inline bool OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::IsReserved(char16_t character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*>(), { "IsReserved", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, character);
}
// Ctor Parameters []
constexpr ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent::MetaApiUserAgent() {}
