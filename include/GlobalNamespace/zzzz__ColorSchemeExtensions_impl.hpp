#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__ILightshowColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.ResolveColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (*)(::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::ColorScheme*,
                                                                                           bool)>(&::GlobalNamespace::ColorSchemeExtensions::ResolveColorScheme)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x36f4cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeExtensions*>(),
                                                             { "ResolveColorScheme",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.GetColorSchemeForLightshowOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILightshowColorScheme* (*)(::GlobalNamespace::ILightshowColorScheme*, bool, ::GlobalNamespace::ILightshowColorScheme*,
                                                                                                     ::GlobalNamespace::ILightshowColorScheme*, bool)>(
    &::GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForLightshowOverride)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x36f52d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeExtensions*>(),
                                                { "GetColorSchemeForLightshowOverride",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::ILightshowColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ILightshowColorScheme*>(),
                                                    ::i2c::type_of<::GlobalNamespace::ILightshowColorScheme*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.GetColorSchemeForGameplayOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::IGameplayColorScheme* (*)(::GlobalNamespace::IGameplayColorScheme*, ::GlobalNamespace::IGameplayColorScheme*, ::GlobalNamespace::IGameplayColorScheme*, bool)>(
        &::GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForGameplayOverride)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x36f51fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeExtensions*>(),
                                                             { "GetColorSchemeForGameplayOverride",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IGameplayColorScheme*>(), ::i2c::type_of<::GlobalNamespace::IGameplayColorScheme*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IGameplayColorScheme*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeExtensions::ResolveColorScheme(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                                                                                                  ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
                                                                                                  ::GlobalNamespace::ColorScheme* environmentColorScheme, bool usingBeatmapDefaultEnvironment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeExtensions*>(),
                                                           { "ResolveColorScheme",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                               ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors, beatmapOverrideColorScheme,
                                                                              environmentColorScheme, usingBeatmapDefaultEnvironment);
}
inline ::GlobalNamespace::ILightshowColorScheme* GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForLightshowOverride(::GlobalNamespace::ILightshowColorScheme* playerOverrideColorScheme,
                                                                                                                            bool playerOverrideLightshowColors,
                                                                                                                            ::GlobalNamespace::ILightshowColorScheme* beatmapOverrideColorScheme,
                                                                                                                            ::GlobalNamespace::ILightshowColorScheme* environmentColorScheme,
                                                                                                                            bool usingBeatmapDefaultEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeExtensions*>(),
                                              { "GetColorSchemeForLightshowOverride",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::ILightshowColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ILightshowColorScheme*>(),
                                                  ::i2c::type_of<::GlobalNamespace::ILightshowColorScheme*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightshowColorScheme*>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                                                        beatmapOverrideColorScheme, environmentColorScheme, usingBeatmapDefaultEnvironment);
}
inline ::GlobalNamespace::IGameplayColorScheme* GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForGameplayOverride(::GlobalNamespace::IGameplayColorScheme* playerOverrideColorScheme,
                                                                                                                          ::GlobalNamespace::IGameplayColorScheme* beatmapOverrideColorScheme,
                                                                                                                          ::GlobalNamespace::IGameplayColorScheme* environmentColorScheme,
                                                                                                                          bool usingBeatmapDefaultEnvironment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeExtensions*>(),
                                                           { "GetColorSchemeForGameplayOverride",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IGameplayColorScheme*>(), ::i2c::type_of<::GlobalNamespace::IGameplayColorScheme*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IGameplayColorScheme*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IGameplayColorScheme*>(nullptr, ___internal_method, playerOverrideColorScheme, beatmapOverrideColorScheme, environmentColorScheme,
                                                                                       usingBeatmapDefaultEnvironment);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeExtensions::ColorSchemeExtensions() {}
