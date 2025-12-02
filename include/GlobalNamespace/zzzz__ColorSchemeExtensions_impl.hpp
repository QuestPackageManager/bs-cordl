#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__ILightshowColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.ResolveColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ColorScheme* (*)(::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::ColorScheme*, bool)>(
        &::GlobalNamespace::ColorSchemeExtensions::ResolveColorScheme)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x35d0cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "ResolveColorScheme", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.GetColorSchemeForLightshowOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ILightshowColorScheme* (*)(::GlobalNamespace::ILightshowColorScheme*, bool, ::GlobalNamespace::ILightshowColorScheme*, ::GlobalNamespace::ILightshowColorScheme*,
                                                              bool)>(&::GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForLightshowOverride)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x35d12ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "GetColorSchemeForLightshowOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightshowColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightshowColorScheme*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightshowColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.GetColorSchemeForGameplayOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IGameplayColorScheme* (*)(::GlobalNamespace::IGameplayColorScheme*, ::GlobalNamespace::IGameplayColorScheme*, ::GlobalNamespace::IGameplayColorScheme*, bool)>(
        &::GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForGameplayOverride)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35d11d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "GetColorSchemeForGameplayOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayColorScheme*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayColorScheme*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayColorScheme*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeExtensions::ResolveColorScheme(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                                                                                                  ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
                                                                                                  ::GlobalNamespace::ColorScheme* environmentColorScheme, bool usingBeatmapDefaultEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "ResolveColorScheme", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors, beatmapOverrideColorScheme,
                                                                                     environmentColorScheme, usingBeatmapDefaultEnvironment);
}
inline ::GlobalNamespace::ILightshowColorScheme* GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForLightshowOverride(::GlobalNamespace::ILightshowColorScheme* playerOverrideColorScheme,
                                                                                                                            bool playerOverrideLightshowColors,
                                                                                                                            ::GlobalNamespace::ILightshowColorScheme* beatmapOverrideColorScheme,
                                                                                                                            ::GlobalNamespace::ILightshowColorScheme* environmentColorScheme,
                                                                                                                            bool usingBeatmapDefaultEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "GetColorSchemeForLightshowOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightshowColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightshowColorScheme*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightshowColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightshowColorScheme*, false>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                                                               beatmapOverrideColorScheme, environmentColorScheme, usingBeatmapDefaultEnvironment);
}
inline ::GlobalNamespace::IGameplayColorScheme* GlobalNamespace::ColorSchemeExtensions::GetColorSchemeForGameplayOverride(::GlobalNamespace::IGameplayColorScheme* playerOverrideColorScheme,
                                                                                                                          ::GlobalNamespace::IGameplayColorScheme* beatmapOverrideColorScheme,
                                                                                                                          ::GlobalNamespace::IGameplayColorScheme* environmentColorScheme,
                                                                                                                          bool usingBeatmapDefaultEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "GetColorSchemeForGameplayOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayColorScheme*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayColorScheme*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayColorScheme*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IGameplayColorScheme*, false>(nullptr, ___internal_method, playerOverrideColorScheme, beatmapOverrideColorScheme,
                                                                                              environmentColorScheme, usingBeatmapDefaultEnvironment);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeExtensions::ColorSchemeExtensions() {}
