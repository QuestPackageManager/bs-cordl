#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeTextSettings.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_impl.hpp"
#include "UnityEngine/zzzz__RuntimeTextSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.get_defaultTextSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RuntimeTextSettings> (*)()>(&::UnityEngine::RuntimeTextSettings::get_defaultTextSettings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6986534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(),
                                                                               "get_defaultTextSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.GetFontShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::RuntimeTextSettings::*)()>(
    &::UnityEngine::RuntimeTextSettings::GetFontShader)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69865f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.GetStaticFallbackOSFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (
    ::UnityEngine::RuntimeTextSettings::*)()>(&::UnityEngine::RuntimeTextSettings::GetStaticFallbackOSFontAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6986648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.SetStaticFallbackOSFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeTextSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*)>(&::UnityEngine::RuntimeTextSettings::SetStaticFallbackOSFontAsset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6986694;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeTextSettings::*)()>(&::UnityEngine::RuntimeTextSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69866e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::RuntimeTextSettings::setStaticF_s_DefaultTextSettings(::UnityW<::UnityEngine::RuntimeTextSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::RuntimeTextSettings>, "s_DefaultTextSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get>(
      std::forward<::UnityW<::UnityEngine::RuntimeTextSettings>>(value));
}
inline ::UnityW<::UnityEngine::RuntimeTextSettings> UnityEngine::RuntimeTextSettings::getStaticF_s_DefaultTextSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::RuntimeTextSettings>, "s_DefaultTextSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get>();
}
inline void UnityEngine::RuntimeTextSettings::setStaticF_s_FallbackOSFontAssetIMGUIInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FallbackOSFontAssetIMGUIInternal",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::RuntimeTextSettings::getStaticF_s_FallbackOSFontAssetIMGUIInternal() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FallbackOSFontAssetIMGUIInternal",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get>();
}
inline ::UnityW<::UnityEngine::RuntimeTextSettings> UnityEngine::RuntimeTextSettings::get_defaultTextSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(),
                                                                             "get_defaultTextSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RuntimeTextSettings>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::RuntimeTextSettings::GetFontShader() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::RuntimeTextSettings::GetStaticFallbackOSFontAsset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, false>(this, ___internal_method);
}
inline void UnityEngine::RuntimeTextSettings::SetStaticFallbackOSFontAsset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fontAssets) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fontAssets);
}
inline void UnityEngine::RuntimeTextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeTextSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RuntimeTextSettings* UnityEngine::RuntimeTextSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::RuntimeTextSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeTextSettings::RuntimeTextSettings() {}
