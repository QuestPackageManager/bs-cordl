#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelTextSettings.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelTextSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.get_defaultPanelTextSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UIElements::PanelTextSettings> (*)()>(
    &::UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ad8484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                                               "get_defaultPanelTextSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.InitializeDefaultPanelTextSettingsIfNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::PanelTextSettings::InitializeDefaultPanelTextSettingsIfNull)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ad84d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                 "InitializeDefaultPanelTextSettingsIfNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelTextSettings::*)()>(&::UnityEngine::UIElements::PanelTextSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad8588;

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
inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(),
                                                                             "get_defaultPanelTextSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelTextSettings>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelTextSettings::InitializeDefaultPanelTextSettingsIfNull() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(), "InitializeDefaultPanelTextSettingsIfNull",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelTextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelTextSettings* UnityEngine::UIElements::PanelTextSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PanelTextSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelTextSettings::PanelTextSettings() {}
