#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.ResolveColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ColorScheme* (*)(::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::ColorScheme*)>(
        &::GlobalNamespace::ColorSchemeExtensions::ResolveColorScheme)> {
  constexpr static std::size_t size = 0xa3c;
  constexpr static std::size_t addrs = 0x26a586c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "ResolveColorScheme", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeExtensions.ResolveColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Color (*)(::System::Nullable_1<::UnityEngine::Color>, bool, ::System::Nullable_1<bool>, ::System::Nullable_1<::UnityEngine::Color>, ::UnityEngine::Color)>(
        &::GlobalNamespace::ColorSchemeExtensions::ResolveColor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x26a62a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "ResolveColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeExtensions::ResolveColorScheme(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                                                                                                  ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
                                                                                                  ::GlobalNamespace::ColorScheme* environmentColorScheme) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "ResolveColorScheme", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors, beatmapOverrideColorScheme,
                                                                                     environmentColorScheme);
}
inline ::UnityEngine::Color GlobalNamespace::ColorSchemeExtensions::ResolveColor(::System::Nullable_1<::UnityEngine::Color> playerOverrideColor, bool usePlayerOverride,
                                                                                 ::System::Nullable_1<bool> useBeatmapOverride, ::System::Nullable_1<::UnityEngine::Color> beatmapOverrideColor,
                                                                                 ::UnityEngine::Color environmentColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeExtensions*>::get(), "ResolveColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, playerOverrideColor, usePlayerOverride, useBeatmapOverride, beatmapOverrideColor,
                                                                          environmentColor);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeExtensions::ColorSchemeExtensions() {}
