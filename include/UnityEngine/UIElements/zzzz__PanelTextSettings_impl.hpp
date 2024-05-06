#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelTextSettings_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.get_defaultPanelTextSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UIElements::PanelTextSettings> (*)()>(
    &::UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x359c2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                                               "get_defaultPanelTextSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.UpdateLocalizationFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::PanelTextSettings::UpdateLocalizationFontAsset)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x359c790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                                               "UpdateLocalizationFontAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.GetCachedFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (::UnityEngine::UIElements::PanelTextSettings::*)(
    ::UnityEngine::Font*)>(&::UnityEngine::UIElements::PanelTextSettings::GetCachedFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x359bda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(), "GetCachedFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelTextSettings::*)()>(&::UnityEngine::UIElements::PanelTextSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x359cc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PanelTextSettings::setStaticF_s_DefaultPanelTextSettings(::UnityW<::UnityEngine::UIElements::PanelTextSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::PanelTextSettings>, "s_DefaultPanelTextSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>(
      std::forward<::UnityW<::UnityEngine::UIElements::PanelTextSettings>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> UnityEngine::UIElements::PanelTextSettings::getStaticF_s_DefaultPanelTextSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::PanelTextSettings>, "s_DefaultPanelTextSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>();
}
inline void UnityEngine::UIElements::PanelTextSettings::setStaticF_EditorGUIUtilityLoad(::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>*, "EditorGUIUtilityLoad",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>* UnityEngine::UIElements::PanelTextSettings::getStaticF_EditorGUIUtilityLoad() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>*, "EditorGUIUtilityLoad",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>();
}
inline void UnityEngine::UIElements::PanelTextSettings::setStaticF_GetCurrentLanguage(::System::Func_1<::UnityEngine::SystemLanguage>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::SystemLanguage>*, "GetCurrentLanguage",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>(
      std::forward<::System::Func_1<::UnityEngine::SystemLanguage>*>(value));
}
inline ::System::Func_1<::UnityEngine::SystemLanguage>* UnityEngine::UIElements::PanelTextSettings::getStaticF_GetCurrentLanguage() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::SystemLanguage>*, "GetCurrentLanguage",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>();
}
inline void UnityEngine::UIElements::PanelTextSettings::setStaticF_s_DefaultEditorPanelTextSettingPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DefaultEditorPanelTextSettingPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PanelTextSettings::getStaticF_s_DefaultEditorPanelTextSettingPath() {
  return ::cordl_internals::getStaticField<::StringW, "s_DefaultEditorPanelTextSettingPath",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                                             "get_defaultPanelTextSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelTextSettings>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelTextSettings::UpdateLocalizationFontAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                                             "UpdateLocalizationFontAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::UIElements::PanelTextSettings::GetCachedFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(), "GetCachedFontAsset",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>, false>(this, ___internal_method, font);
}
inline ::UnityEngine::UIElements::PanelTextSettings* UnityEngine::UIElements::PanelTextSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PanelTextSettings*>());
}
inline void UnityEngine::UIElements::PanelTextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelTextSettings::PanelTextSettings() {}
