#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeTextSettings.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_impl.hpp"
#include "UnityEngine/zzzz__RuntimeTextSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.get_defaultTextSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RuntimeTextSettings> (*)()>(&::UnityEngine::RuntimeTextSettings::get_defaultTextSettings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b4e490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { "get_defaultTextSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.GetFontShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::RuntimeTextSettings::*)()>(&::UnityEngine::RuntimeTextSettings::GetFontShader)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b4e550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { ::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.GetStaticFallbackOSFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (::UnityEngine::RuntimeTextSettings::*)()>(
    &::UnityEngine::RuntimeTextSettings::GetStaticFallbackOSFontAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b4e5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { ::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings.SetStaticFallbackOSFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RuntimeTextSettings::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*)>(
    &::UnityEngine::RuntimeTextSettings::SetStaticFallbackOSFontAsset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b4e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { ::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeTextSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RuntimeTextSettings::*)()>(&::UnityEngine::RuntimeTextSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4e640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::RuntimeTextSettings::setStaticF_s_DefaultTextSettings(::UnityW<::UnityEngine::RuntimeTextSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::RuntimeTextSettings>, "s_DefaultTextSettings", ::UnityEngine::RuntimeTextSettings*>(
      std::forward<::UnityW<::UnityEngine::RuntimeTextSettings>>(value));
}
inline ::UnityW<::UnityEngine::RuntimeTextSettings> UnityEngine::RuntimeTextSettings::getStaticF_s_DefaultTextSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::RuntimeTextSettings>, "s_DefaultTextSettings", ::UnityEngine::RuntimeTextSettings*>();
}
inline void UnityEngine::RuntimeTextSettings::setStaticF_s_FallbackOSFontAssetIMGUIInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FallbackOSFontAssetIMGUIInternal",
                                    ::UnityEngine::RuntimeTextSettings*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::RuntimeTextSettings::getStaticF_s_FallbackOSFontAssetIMGUIInternal() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FallbackOSFontAssetIMGUIInternal",
                                           ::UnityEngine::RuntimeTextSettings*>();
}
inline ::UnityW<::UnityEngine::RuntimeTextSettings> UnityEngine::RuntimeTextSettings::get_defaultTextSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { "get_defaultTextSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RuntimeTextSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::RuntimeTextSettings::GetFontShader() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::RuntimeTextSettings::GetStaticFallbackOSFontAsset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(this, ___internal_method);
}
inline void UnityEngine::RuntimeTextSettings::SetStaticFallbackOSFontAsset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fontAssets) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontAssets);
}
inline void UnityEngine::RuntimeTextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeTextSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RuntimeTextSettings* UnityEngine::RuntimeTextSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RuntimeTextSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeTextSettings::RuntimeTextSettings() {}
