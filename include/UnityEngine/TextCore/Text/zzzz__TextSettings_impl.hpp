#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextSettings.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__UnicodeLineBreakingRules_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap::*)(::UnityEngine::Font*, ::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70557b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextSettings_FontReferenceMap::_ctor(::UnityEngine::Font* font, ::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, font, fontAsset);
}
// Ctor Parameters [CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty:
// "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap::TextSettings_FontReferenceMap(::UnityW<::UnityEngine::Font> font,
                                                                                                      ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept {
  this->font = font;
  this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap::TextSettings_FontReferenceMap() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7055d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0._GetGlobalFallbacks_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__0)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x7055e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                           { "<GetGlobalFallbacks>b__0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0._GetGlobalFallbacks_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::*)(::UnityEngine::TextCore::Text::TextAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__1)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x7055ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                           { "<GetGlobalFallbacks>b__1", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0._GetGlobalFallbacks_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__2)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x70561c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                           { "<GetGlobalFallbacks>b__2", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0._GetGlobalFallbacks_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::*)(::UnityEngine::TextCore::Text::TextAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__3)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x705638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                           { "<GetGlobalFallbacks>b__3", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextAsset*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::IntPtr>*& UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::__cordl_internal_get_globalFontAssetFallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalFontAssetFallbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::IntPtr>* const& UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::__cordl_internal_get_globalFontAssetFallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalFontAssetFallbacks;
}
constexpr void UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::__cordl_internal_set_globalFontAssetFallbacks(::System::Collections::Generic::List_1<::System::IntPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalFontAssetFallbacks = value;
}
inline void UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__0(::UnityEngine::TextCore::Text::FontAsset* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                         { "<GetGlobalFallbacks>b__0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline void UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__1(::UnityEngine::TextCore::Text::TextAsset* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                         { "<GetGlobalFallbacks>b__1", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline void UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__2(::UnityEngine::TextCore::Text::FontAsset* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                         { "<GetGlobalFallbacks>b__2", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline void UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::_GetGlobalFallbacks_b__3(::UnityEngine::TextCore::Text::TextAsset* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>(),
                                                                                         { "<GetGlobalFallbacks>b__3", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0* UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextSettings___c__DisplayClass98_0::TextSettings___c__DisplayClass98_0() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&::UnityEngine::TextCore::Text::TextSettings::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_version", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultFontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                           { "set_defaultFontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultFontAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultFontAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultFontAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&::UnityEngine::TextCore::Text::TextSettings::set_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_defaultFontAssetPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7054d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_fallbackFontAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*)>(&::UnityEngine::TextCore::Text::TextSettings::set_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7054d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                { "set_fallbackFontAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_fallbackOSFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_fallbackOSFontAssets)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x7054d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_fallbackOSFontAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_isFallbackOSFontAssetsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_isFallbackOSFontAssetsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7054dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_isFallbackOSFontAssetsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.GetDefaultFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::GetDefaultFont)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x7054de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetDefaultFont", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.GetFallbackFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (
    ::UnityEngine::TextCore::Text::TextSettings::*)(bool, int32_t)>(&::UnityEngine::TextCore::Text::TextSettings::GetFallbackFontAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_matchMaterialPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_matchMaterialPreset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_matchMaterialPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&::UnityEngine::TextCore::Text::TextSettings::set_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_matchMaterialPreset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_missingCharacterUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_missingCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_missingCharacterUnicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_missingCharacterUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextSettings::set_missingCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_missingCharacterUnicode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&::UnityEngine::TextCore::Text::TextSettings::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_clearDynamicDataOnBuild", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_enableEmojiSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_enableEmojiSupport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_enableEmojiSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&::UnityEngine::TextCore::Text::TextSettings::set_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_enableEmojiSupport", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_emojiFallbackTextAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_emojiFallbackTextAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_emojiFallbackTextAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_emojiFallbackTextAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*)>(&::UnityEngine::TextCore::Text::TextSettings::set_emojiFallbackTextAssets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70551a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                         { "set_emojiFallbackTextAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70551b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultSpriteAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::SpriteAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70551b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                           { "set_defaultSpriteAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultSpriteAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70551c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultSpriteAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultSpriteAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&::UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70551c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_defaultSpriteAssetPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_fallbackSpriteAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* (
    ::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_fallbackSpriteAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70551d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_fallbackSpriteAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_fallbackSpriteAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*)>(&::UnityEngine::TextCore::Text::TextSettings::set_fallbackSpriteAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70551d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                         { "set_fallbackSpriteAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_s_GlobalSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::SpriteAsset*)>(&::UnityEngine::TextCore::Text::TextSettings::set_s_GlobalSpriteAsset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70551e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                           { "set_s_GlobalSpriteAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_s_GlobalSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_s_GlobalSpriteAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7055230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_s_GlobalSpriteAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_missingSpriteCharacterUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_missingSpriteCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x705527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_missingSpriteCharacterUnicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_missingSpriteCharacterUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(uint32_t)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_missingSpriteCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_missingSpriteCharacterUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x705528c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultStyleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::TextStyleSheet*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                           { "set_defaultStyleSheet", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_styleSheetsResourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x705529c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_styleSheetsResourcePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_styleSheetsResourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&::UnityEngine::TextCore::Text::TextSettings::set_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70552a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_styleSheetsResourcePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultColorGradientPresetsPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70552ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultColorGradientPresetsPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultColorGradientPresetsPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70552b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_defaultColorGradientPresetsPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_lineBreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_lineBreakingRules)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70552bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_lineBreakingRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_lineBreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_lineBreakingRules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                             { "set_lineBreakingRules", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_displayWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_displayWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_displayWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_displayWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&::UnityEngine::TextCore::Text::TextSettings::set_displayWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7055338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_displayWarnings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x7055340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7055474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.InitializeFontReferenceLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::InitializeFontReferenceLookup)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x7055538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "InitializeFontReferenceLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.GetCachedFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::Font*)>(
    &::UnityEngine::TextCore::Text::TextSettings::GetCachedFontAsset)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x7054e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetCachedFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.GetOSFontAssetList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::GetOSFontAssetList)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7054d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetOSFontAssetList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.CreateNativeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::System::IntPtr>, ::System::IntPtr)>(&::UnityEngine::TextCore::Text::TextSettings::CreateNativeObject)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x70557c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                             { "CreateNativeObject", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.DestroyNativeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::TextCore::Text::TextSettings::DestroyNativeObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70554f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                           { "DestroyNativeObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.UpdateFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>)>(&::UnityEngine::TextCore::Text::TextSettings::UpdateFallbacks)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x70558d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                             { "UpdateFallbacks", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_nativeTextSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_nativeTextSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x70559f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_nativeTextSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.GetGlobalFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IntPtr> (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::GetGlobalFallbacks)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x7055a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetGlobalFallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.SetNativeTextSettingsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::SetNativeTextSettingsDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7055d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "SetNativeTextSettingsDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.UpdateNativeTextSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::UpdateNativeTextSettings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x7055a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "UpdateNativeTextSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x7055d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.CreateNativeObject_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IntPtr)>(
    &::UnityEngine::TextCore::Text::TextSettings::CreateNativeObject_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7055894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                         { "CreateNativeObject_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.UpdateFallbacks_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::Text::TextSettings::UpdateFallbacks_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70559ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                { "UpdateFallbacks_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_Version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultFontAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultFontAsset;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DefaultFontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultFontAsset = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultFontAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultFontAssetPath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultFontAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultFontAssetPath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DefaultFontAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultFontAssetPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FallbackFontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* const&
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FallbackFontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssets;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_FallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FallbackFontAssets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FallbackOSFontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackOSFontAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* const&
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FallbackOSFontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackOSFontAssets;
}
constexpr void
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_FallbackOSFontAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FallbackOSFontAssets = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_MatchMaterialPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchMaterialPreset;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_MatchMaterialPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchMaterialPreset;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_MatchMaterialPreset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchMaterialPreset = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_MissingCharacterUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingCharacterUnicode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_MissingCharacterUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingCharacterUnicode;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_MissingCharacterUnicode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MissingCharacterUnicode = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_ClearDynamicDataOnBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_ClearDynamicDataOnBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_ClearDynamicDataOnBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDynamicDataOnBuild = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_EnableEmojiSupport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableEmojiSupport;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_EnableEmojiSupport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableEmojiSupport;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_EnableEmojiSupport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableEmojiSupport = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_EmojiFallbackTextAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmojiFallbackTextAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>* const&
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_EmojiFallbackTextAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmojiFallbackTextAssets;
}
constexpr void
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_EmojiFallbackTextAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmojiFallbackTextAssets = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultSpriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultSpriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteAsset;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DefaultSpriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultSpriteAsset = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultSpriteAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteAssetPath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultSpriteAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteAssetPath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DefaultSpriteAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultSpriteAssetPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FallbackSpriteAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackSpriteAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* const&
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FallbackSpriteAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackSpriteAssets;
}
constexpr void
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_FallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FallbackSpriteAssets = value;
}
constexpr uint32_t& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_MissingSpriteCharacterUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingSpriteCharacterUnicode;
}
constexpr uint32_t const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_MissingSpriteCharacterUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingSpriteCharacterUnicode;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_MissingSpriteCharacterUnicode(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MissingSpriteCharacterUnicode = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet>& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultStyleSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStyleSheet;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultStyleSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStyleSheet;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DefaultStyleSheet(::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStyleSheet = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_StyleSheetsResourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleSheetsResourcePath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_StyleSheetsResourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleSheetsResourcePath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_StyleSheetsResourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleSheetsResourcePath = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultColorGradientPresetsPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultColorGradientPresetsPath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DefaultColorGradientPresetsPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultColorGradientPresetsPath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DefaultColorGradientPresetsPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultColorGradientPresetsPath = value;
}
constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_UnicodeLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_UnicodeLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_UnicodeLineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnicodeLineBreakingRules = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DisplayWarnings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayWarnings;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_DisplayWarnings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayWarnings;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_DisplayWarnings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayWarnings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FontLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* const&
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FontLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontLookup;
}
constexpr void
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_FontLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap>*& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FontReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontReferences;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap>* const&
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_FontReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontReferences;
}
constexpr void
UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_FontReferences(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextSettings_FontReferenceMap>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontReferences = value;
}
constexpr ::System::IntPtr& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_NativeTextSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeTextSettings;
}
constexpr ::System::IntPtr const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_NativeTextSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeTextSettings;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_NativeTextSettings(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeTextSettings = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_IsNativeTextSettingsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsNativeTextSettingsDirty;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__cordl_internal_get_m_IsNativeTextSettingsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsNativeTextSettingsDirty;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__cordl_internal_set_m_IsNativeTextSettingsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsNativeTextSettingsDirty = value;
}
inline void UnityEngine::TextCore::Text::TextSettings::setStaticF_s_RuntimeDefault(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::TextCore::Text::FontAsset>, "s_RuntimeDefault", ::UnityEngine::TextCore::Text::TextSettings*>(
      std::forward<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(value));
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::getStaticF_s_RuntimeDefault() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::TextCore::Text::FontAsset>, "s_RuntimeDefault", ::UnityEngine::TextCore::Text::TextSettings*>();
}
inline void UnityEngine::TextCore::Text::TextSettings::setStaticF__s_GlobalSpriteAsset_k__BackingField(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>, "<s_GlobalSpriteAsset>k__BackingField", ::UnityEngine::TextCore::Text::TextSettings*>(
      std::forward<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(value));
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::TextSettings::getStaticF__s_GlobalSpriteAsset_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>, "<s_GlobalSpriteAsset>k__BackingField", ::UnityEngine::TextCore::Text::TextSettings*>();
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_version(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_version", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::get_defaultFontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultFontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultFontAsset(::UnityEngine::TextCore::Text::FontAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                         { "set_defaultFontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultFontAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultFontAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultFontAssetPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_defaultFontAssetPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::TextSettings::get_fallbackFontAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_fallbackFontAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                              { "set_fallbackFontAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::TextSettings::get_fallbackOSFontAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_fallbackOSFontAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_isFallbackOSFontAssetsInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_isFallbackOSFontAssetsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::GetDefaultFont() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetDefaultFont", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::TextSettings::GetFallbackFontAssets(bool isRaster,
                                                                                                                                                                    int32_t textPixelSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(this, ___internal_method, isRaster, textPixelSize);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_matchMaterialPreset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_matchMaterialPreset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_matchMaterialPreset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_matchMaterialPreset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::TextSettings::get_missingCharacterUnicode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_missingCharacterUnicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_missingCharacterUnicode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_missingCharacterUnicode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_clearDynamicDataOnBuild(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_clearDynamicDataOnBuild", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_enableEmojiSupport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_enableEmojiSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_enableEmojiSupport(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_enableEmojiSupport", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>* UnityEngine::TextCore::Text::TextSettings::get_emojiFallbackTextAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_emojiFallbackTextAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_emojiFallbackTextAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                       { "set_emojiFallbackTextAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultSpriteAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                         { "set_defaultSpriteAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultSpriteAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAssetPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_defaultSpriteAssetPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* UnityEngine::TextCore::Text::TextSettings::get_fallbackSpriteAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_fallbackSpriteAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                       { "set_fallbackSpriteAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_s_GlobalSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                         { "set_s_GlobalSpriteAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::TextSettings::get_s_GlobalSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_s_GlobalSpriteAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::Text::TextSettings::get_missingSpriteCharacterUnicode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_missingSpriteCharacterUnicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_missingSpriteCharacterUnicode(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_missingSpriteCharacterUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> UnityEngine::TextCore::Text::TextSettings::get_defaultStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultStyleSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                         { "set_defaultStyleSheet", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextStyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_styleSheetsResourcePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_styleSheetsResourcePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_styleSheetsResourcePath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_styleSheetsResourcePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultColorGradientPresetsPath() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_defaultColorGradientPresetsPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultColorGradientPresetsPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_defaultColorGradientPresetsPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* UnityEngine::TextCore::Text::TextSettings::get_lineBreakingRules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_lineBreakingRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_lineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                           { "set_lineBreakingRules", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_displayWarnings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_displayWarnings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_displayWarnings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "set_displayWarnings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::TextSettings::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::InitializeFontReferenceLookup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "InitializeFontReferenceLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::GetCachedFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetCachedFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(this, ___internal_method, font);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::TextSettings::GetOSFontAssetList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetOSFontAssetList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::TextSettings::CreateNativeObject(::ArrayW<::System::IntPtr> fallbacks, ::System::IntPtr managedObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                           { "CreateNativeObject", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, fallbacks, managedObject);
}
inline void UnityEngine::TextCore::Text::TextSettings::DestroyNativeObject(::System::IntPtr m_NativeTextSettings, ::System::IntPtr managedObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                                                         { "DestroyNativeObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m_NativeTextSettings, managedObject);
}
inline void UnityEngine::TextCore::Text::TextSettings::UpdateFallbacks(::System::IntPtr ptr, ::ArrayW<::System::IntPtr> fallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                                           { "UpdateFallbacks", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, fallbacks);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::TextSettings::get_nativeTextSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "get_nativeTextSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::ArrayW<::System::IntPtr> UnityEngine::TextCore::Text::TextSettings::GetGlobalFallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "GetGlobalFallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IntPtr>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::SetNativeTextSettingsDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "SetNativeTextSettingsDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::UpdateNativeTextSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { "UpdateNativeTextSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::TextSettings::CreateNativeObject_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fallbacks, ::System::IntPtr managedObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                              { "CreateNativeObject_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, fallbacks, managedObject);
}
inline void UnityEngine::TextCore::Text::TextSettings::UpdateFallbacks_Injected(::System::IntPtr ptr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextSettings*>(),
                                              { "UpdateFallbacks_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, fallbacks);
}
inline ::UnityEngine::TextCore::Text::TextSettings* UnityEngine::TextCore::Text::TextSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextSettings::TextSettings() {}
