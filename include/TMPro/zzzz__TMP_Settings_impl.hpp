#pragma once
// IWYU pragma private; include "TMPro\TMP_Settings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TextWrappingModes_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_StyleSheet_def.hpp"
#include "TMPro/zzzz__TextWrappingModes_def.hpp"
#include "UnityEngine/TextCore/zzzz__OTL_FeatureTag_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Settings_LineBreakingTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Settings_LineBreakingTable::*)()>(&::TMPro::TMP_Settings_LineBreakingTable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699d9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings_LineBreakingTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_leadingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leadingCharacters;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_leadingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leadingCharacters;
}
constexpr void TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_set_leadingCharacters(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leadingCharacters = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_followingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followingCharacters;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_followingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followingCharacters;
}
constexpr void TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_set_followingCharacters(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___followingCharacters = value;
}
inline void TMPro::TMP_Settings_LineBreakingTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings_LineBreakingTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_Settings_LineBreakingTable* TMPro::TMP_Settings_LineBreakingTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Settings_LineBreakingTable*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Settings_LineBreakingTable::TMP_Settings_LineBreakingTable() {}
//  Writing Method size for method: ::TMPro::TMP_Settings.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_version)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x699bec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.SetAssetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Settings::*)()>(&::TMPro::TMP_Settings::SetAssetVersion)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699bf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "SetAssetVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_textWrappingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextWrappingModes (*)()>(&::TMPro::TMP_Settings::get_textWrappingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699bf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_textWrappingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableKerning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableKerning)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x699c23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableKerning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_fontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* (*)()>(&::TMPro::TMP_Settings::get_fontFeatures)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_fontFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableExtraPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableExtraPadding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableExtraPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableTintAllSprites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableTintAllSprites)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableTintAllSprites", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableParseEscapeCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableParseEscapeCharacters)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableParseEscapeCharacters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableRaycastTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableRaycastTarget)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableRaycastTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_getFontFeaturesAtRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_getFontFeaturesAtRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_getFontFeaturesAtRuntime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_missingGlyphCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::TMPro::TMP_Settings::get_missingGlyphCharacter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_missingGlyphCharacter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_missingGlyphCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::TMPro::TMP_Settings::set_missingGlyphCharacter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_missingGlyphCharacter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_warningsDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_warningsDisabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_warningsDisabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)()>(&::TMPro::TMP_Settings::get_defaultFontAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultFontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_defaultFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_Settings::set_defaultFontAsset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699c72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_defaultFontAsset", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultFontAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultFontSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultFontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextAutoSizingMinRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextAutoSizingMinRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextAutoSizingMaxRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextAutoSizingMaxRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextMeshProTextContainerSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextMeshProTextContainerSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextMeshProUITextContainerSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextMeshProUITextContainerSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_autoSizeTextContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_autoSizeTextContainer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699c9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_autoSizeTextContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_isTextObjectScaleStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_isTextObjectScaleStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_isTextObjectScaleStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x699ca90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_isTextObjectScaleStatic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* (*)()>(&::TMPro::TMP_Settings::get_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699caf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_fallbackFontAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*)>(&::TMPro::TMP_Settings::set_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699cb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(),
                                                             { "set_fallbackFontAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_matchMaterialPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_matchMaterialPreset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_hideSubTextObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_hideSubTextObjects)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_hideSubTextObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)()>(&::TMPro::TMP_Settings::get_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultSpriteAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_SpriteAsset*)>(&::TMPro::TMP_Settings::set_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699ccdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_defaultSpriteAsset", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultSpriteAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultSpriteAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableEmojiSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableEmojiSupport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_enableEmojiSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x699ce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_enableEmojiSupport", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_missingCharacterSpriteUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::TMPro::TMP_Settings::get_missingCharacterSpriteUnicode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699ce68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_missingCharacterSpriteUnicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_missingCharacterSpriteUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::TMPro::TMP_Settings::set_missingCharacterSpriteUnicode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699cec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_missingCharacterSpriteUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_emojiFallbackTextAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* (*)()>(&::TMPro::TMP_Settings::get_emojiFallbackTextAssets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_emojiFallbackTextAssets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_emojiFallbackTextAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*)>(&::TMPro::TMP_Settings::set_emojiFallbackTextAssets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699cf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(),
                                                             { "set_emojiFallbackTextAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultColorGradientPresetsPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699cff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultColorGradientPresetsPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_StyleSheet> (*)()>(&::TMPro::TMP_Settings::get_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699d050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultStyleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_StyleSheet*)>(&::TMPro::TMP_Settings::set_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x699d0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_defaultStyleSheet", {}, { ::i2c::type_of<::TMPro::TMP_StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_styleSheetsResourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699d114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_styleSheetsResourcePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_leadingCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::TMPro::TMP_Settings::get_leadingCharacters)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699d174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_leadingCharacters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_followingCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::TMPro::TMP_Settings::get_followingCharacters)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699d1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_followingCharacters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_linebreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Settings_LineBreakingTable* (*)()>(&::TMPro::TMP_Settings::get_linebreakingRules)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x699d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_linebreakingRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_useModernHangulLineBreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x699d434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_useModernHangulLineBreakingRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_useModernHangulLineBreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x699d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_useModernHangulLineBreakingRules", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_Settings::get_instance)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x699bfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_isTMPSettingsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_isTMPSettingsNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x699d4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_isTMPSettingsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.LoadDefaultSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_Settings::LoadDefaultSettings)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x699d590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "LoadDefaultSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_Settings::GetSettings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x699d6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)()>(&::TMPro::TMP_Settings::GetFontAsset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x699d784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetFontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)()>(&::TMPro::TMP_Settings::GetSpriteAsset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x699d844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetSpriteAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_StyleSheet> (*)()>(&::TMPro::TMP_Settings::GetStyleSheet)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x699d904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetStyleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.LoadLinebreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::TMPro::TMP_Settings::LoadLinebreakingRules)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x699d2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "LoadLinebreakingRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (*)(::UnityEngine::TextAsset*)>(&::TMPro::TMP_Settings::GetCharacters)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x699d9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetCharacters", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Settings::*)()>(&::TMPro::TMP_Settings::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x699dabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& TMPro::TMP_Settings::__cordl_internal_get_assetVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetVersion;
}
constexpr ::StringW const& TMPro::TMP_Settings::__cordl_internal_get_assetVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetVersion;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_assetVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assetVersion = value;
}
constexpr ::TMPro::TextWrappingModes& TMPro::TMP_Settings::__cordl_internal_get_m_TextWrappingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextWrappingMode;
}
constexpr ::TMPro::TextWrappingModes const& TMPro::TMP_Settings::__cordl_internal_get_m_TextWrappingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextWrappingMode;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_TextWrappingMode(::TMPro::TextWrappingModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextWrappingMode = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_enableKerning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableKerning;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_enableKerning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableKerning;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_enableKerning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableKerning = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>*& TMPro::TMP_Settings::__cordl_internal_get_m_ActiveFontFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveFontFeatures;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* const& TMPro::TMP_Settings::__cordl_internal_get_m_ActiveFontFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveFontFeatures;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_ActiveFontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveFontFeatures = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_enableExtraPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableExtraPadding;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_enableExtraPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableExtraPadding;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_enableExtraPadding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableExtraPadding = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_enableTintAllSprites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableTintAllSprites;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_enableTintAllSprites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableTintAllSprites;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_enableTintAllSprites(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableTintAllSprites = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_enableParseEscapeCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableParseEscapeCharacters;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_enableParseEscapeCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableParseEscapeCharacters;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_enableParseEscapeCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableParseEscapeCharacters = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_EnableRaycastTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRaycastTarget;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_EnableRaycastTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRaycastTarget;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_EnableRaycastTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableRaycastTarget = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_GetFontFeaturesAtRuntime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetFontFeaturesAtRuntime;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_GetFontFeaturesAtRuntime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetFontFeaturesAtRuntime;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_GetFontFeaturesAtRuntime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetFontFeaturesAtRuntime = value;
}
constexpr int32_t& TMPro::TMP_Settings::__cordl_internal_get_m_missingGlyphCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingGlyphCharacter;
}
constexpr int32_t const& TMPro::TMP_Settings::__cordl_internal_get_m_missingGlyphCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingGlyphCharacter;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_missingGlyphCharacter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_missingGlyphCharacter = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_ClearDynamicDataOnBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_ClearDynamicDataOnBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_ClearDynamicDataOnBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDynamicDataOnBuild = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_warningsDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_warningsDisabled;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_warningsDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_warningsDisabled;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_warningsDisabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_warningsDisabled = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& TMPro::TMP_Settings::__cordl_internal_get_m_defaultFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultFontAsset;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultFontAsset;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultFontAsset(::UnityW<::TMPro::TMP_FontAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultFontAsset = value;
}
constexpr ::StringW& TMPro::TMP_Settings::__cordl_internal_get_m_defaultFontAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultFontAssetPath;
}
constexpr ::StringW const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultFontAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultFontAssetPath;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultFontAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultFontAssetPath = value;
}
constexpr float_t& TMPro::TMP_Settings::__cordl_internal_get_m_defaultFontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultFontSize;
}
constexpr float_t const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultFontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultFontSize;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultFontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultFontSize = value;
}
constexpr float_t& TMPro::TMP_Settings::__cordl_internal_get_m_defaultAutoSizeMinRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultAutoSizeMinRatio;
}
constexpr float_t const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultAutoSizeMinRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultAutoSizeMinRatio;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultAutoSizeMinRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultAutoSizeMinRatio = value;
}
constexpr float_t& TMPro::TMP_Settings::__cordl_internal_get_m_defaultAutoSizeMaxRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultAutoSizeMaxRatio;
}
constexpr float_t const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultAutoSizeMaxRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultAutoSizeMaxRatio;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultAutoSizeMaxRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultAutoSizeMaxRatio = value;
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Settings::__cordl_internal_get_m_defaultTextMeshProTextContainerSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultTextMeshProTextContainerSize;
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultTextMeshProTextContainerSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultTextMeshProTextContainerSize;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultTextMeshProTextContainerSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultTextMeshProTextContainerSize = value;
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Settings::__cordl_internal_get_m_defaultTextMeshProUITextContainerSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultTextMeshProUITextContainerSize;
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultTextMeshProUITextContainerSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultTextMeshProUITextContainerSize;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultTextMeshProUITextContainerSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultTextMeshProUITextContainerSize = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_autoSizeTextContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_autoSizeTextContainer;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_autoSizeTextContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_autoSizeTextContainer;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_autoSizeTextContainer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_autoSizeTextContainer = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_IsTextObjectScaleStatic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextObjectScaleStatic;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_IsTextObjectScaleStatic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextObjectScaleStatic;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_IsTextObjectScaleStatic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTextObjectScaleStatic = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& TMPro::TMP_Settings::__cordl_internal_get_m_fallbackFontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fallbackFontAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& TMPro::TMP_Settings::__cordl_internal_get_m_fallbackFontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fallbackFontAssets;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fallbackFontAssets = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_matchMaterialPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_matchMaterialPreset;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_matchMaterialPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_matchMaterialPreset;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_matchMaterialPreset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_matchMaterialPreset = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_HideSubTextObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideSubTextObjects;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_HideSubTextObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideSubTextObjects;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_HideSubTextObjects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HideSubTextObjects = value;
}
constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& TMPro::TMP_Settings::__cordl_internal_get_m_defaultSpriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultSpriteAsset;
}
constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultSpriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultSpriteAsset;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultSpriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultSpriteAsset = value;
}
constexpr ::StringW& TMPro::TMP_Settings::__cordl_internal_get_m_defaultSpriteAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultSpriteAssetPath;
}
constexpr ::StringW const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultSpriteAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultSpriteAssetPath;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultSpriteAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultSpriteAssetPath = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_enableEmojiSupport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableEmojiSupport;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_enableEmojiSupport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableEmojiSupport;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_enableEmojiSupport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableEmojiSupport = value;
}
constexpr uint32_t& TMPro::TMP_Settings::__cordl_internal_get_m_MissingCharacterSpriteUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingCharacterSpriteUnicode;
}
constexpr uint32_t const& TMPro::TMP_Settings::__cordl_internal_get_m_MissingCharacterSpriteUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingCharacterSpriteUnicode;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_MissingCharacterSpriteUnicode(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MissingCharacterSpriteUnicode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*& TMPro::TMP_Settings::__cordl_internal_get_m_EmojiFallbackTextAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmojiFallbackTextAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* const& TMPro::TMP_Settings::__cordl_internal_get_m_EmojiFallbackTextAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmojiFallbackTextAssets;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_EmojiFallbackTextAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmojiFallbackTextAssets = value;
}
constexpr ::StringW& TMPro::TMP_Settings::__cordl_internal_get_m_defaultColorGradientPresetsPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultColorGradientPresetsPath;
}
constexpr ::StringW const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultColorGradientPresetsPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultColorGradientPresetsPath;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultColorGradientPresetsPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultColorGradientPresetsPath = value;
}
constexpr ::UnityW<::TMPro::TMP_StyleSheet>& TMPro::TMP_Settings::__cordl_internal_get_m_defaultStyleSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultStyleSheet;
}
constexpr ::UnityW<::TMPro::TMP_StyleSheet> const& TMPro::TMP_Settings::__cordl_internal_get_m_defaultStyleSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultStyleSheet;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_defaultStyleSheet(::UnityW<::TMPro::TMP_StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultStyleSheet = value;
}
constexpr ::StringW& TMPro::TMP_Settings::__cordl_internal_get_m_StyleSheetsResourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleSheetsResourcePath;
}
constexpr ::StringW const& TMPro::TMP_Settings::__cordl_internal_get_m_StyleSheetsResourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleSheetsResourcePath;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_StyleSheetsResourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleSheetsResourcePath = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& TMPro::TMP_Settings::__cordl_internal_get_m_leadingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_leadingCharacters;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& TMPro::TMP_Settings::__cordl_internal_get_m_leadingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_leadingCharacters;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_leadingCharacters(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_leadingCharacters = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& TMPro::TMP_Settings::__cordl_internal_get_m_followingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_followingCharacters;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& TMPro::TMP_Settings::__cordl_internal_get_m_followingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_followingCharacters;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_followingCharacters(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_followingCharacters = value;
}
constexpr ::TMPro::TMP_Settings_LineBreakingTable*& TMPro::TMP_Settings::__cordl_internal_get_m_linebreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_linebreakingRules;
}
constexpr ::TMPro::TMP_Settings_LineBreakingTable* const& TMPro::TMP_Settings::__cordl_internal_get_m_linebreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_linebreakingRules;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_linebreakingRules(::TMPro::TMP_Settings_LineBreakingTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_linebreakingRules = value;
}
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_UseModernHangulLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseModernHangulLineBreakingRules;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_UseModernHangulLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseModernHangulLineBreakingRules;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_UseModernHangulLineBreakingRules(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseModernHangulLineBreakingRules = value;
}
inline void TMPro::TMP_Settings::setStaticF_s_Instance(::UnityW<::TMPro::TMP_Settings> value) {
  ::cordl_internals::setStaticField<::UnityW<::TMPro::TMP_Settings>, "s_Instance", ::TMPro::TMP_Settings*>(std::forward<::UnityW<::TMPro::TMP_Settings>>(value));
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::TMPro::TMP_Settings>, "s_Instance", ::TMPro::TMP_Settings*>();
}
inline void TMPro::TMP_Settings::setStaticF_s_CurrentAssetVersion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_CurrentAssetVersion", ::TMPro::TMP_Settings*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::TMP_Settings::getStaticF_s_CurrentAssetVersion() {
  return ::cordl_internals::getStaticField<::StringW, "s_CurrentAssetVersion", ::TMPro::TMP_Settings*>();
}
inline ::StringW TMPro::TMP_Settings::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::SetAssetVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "SetAssetVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TextWrappingModes TMPro::TMP_Settings::get_textWrappingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_textWrappingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextWrappingModes>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableKerning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableKerning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* TMPro::TMP_Settings::get_fontFeatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_fontFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>*>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableExtraPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableExtraPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableTintAllSprites() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableTintAllSprites", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableParseEscapeCharacters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableParseEscapeCharacters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableRaycastTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableRaycastTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_getFontFeaturesAtRuntime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_getFontFeaturesAtRuntime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t TMPro::TMP_Settings::get_missingGlyphCharacter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_missingGlyphCharacter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_missingGlyphCharacter(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_missingGlyphCharacter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool TMPro::TMP_Settings::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_warningsDisabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_warningsDisabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_Settings::get_defaultFontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultFontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_defaultFontAsset(::TMPro::TMP_FontAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_defaultFontAsset", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW TMPro::TMP_Settings::get_defaultFontAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultFontAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultFontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultFontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextAutoSizingMinRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextAutoSizingMaxRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextMeshProTextContainerSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultTextMeshProUITextContainerSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_autoSizeTextContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_autoSizeTextContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_isTextObjectScaleStatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_isTextObjectScaleStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_isTextObjectScaleStatic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_isTextObjectScaleStatic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_Settings::get_fallbackFontAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_fallbackFontAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(),
                                                           { "set_fallbackFontAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool TMPro::TMP_Settings::get_matchMaterialPreset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_matchMaterialPreset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_hideSubTextObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_hideSubTextObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_Settings::get_defaultSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultSpriteAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_defaultSpriteAsset(::TMPro::TMP_SpriteAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_defaultSpriteAsset", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW TMPro::TMP_Settings::get_defaultSpriteAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultSpriteAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableEmojiSupport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_enableEmojiSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_enableEmojiSupport(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_enableEmojiSupport", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline uint32_t TMPro::TMP_Settings::get_missingCharacterSpriteUnicode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_missingCharacterSpriteUnicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_missingCharacterSpriteUnicode(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_missingCharacterSpriteUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* TMPro::TMP_Settings::get_emojiFallbackTextAssets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_emojiFallbackTextAssets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_emojiFallbackTextAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(),
                                                           { "set_emojiFallbackTextAssets", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW TMPro::TMP_Settings::get_defaultColorGradientPresetsPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultColorGradientPresetsPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_StyleSheet> TMPro::TMP_Settings::get_defaultStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_defaultStyleSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_StyleSheet>>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_defaultStyleSheet(::TMPro::TMP_StyleSheet* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_defaultStyleSheet", {}, { ::i2c::type_of<::TMPro::TMP_StyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW TMPro::TMP_Settings::get_styleSheetsResourcePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_styleSheetsResourcePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> TMPro::TMP_Settings::get_leadingCharacters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_leadingCharacters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> TMPro::TMP_Settings::get_followingCharacters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_followingCharacters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_Settings_LineBreakingTable* TMPro::TMP_Settings::get_linebreakingRules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_linebreakingRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Settings_LineBreakingTable*>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_useModernHangulLineBreakingRules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_useModernHangulLineBreakingRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_useModernHangulLineBreakingRules(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "set_useModernHangulLineBreakingRules", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_isTMPSettingsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "get_isTMPSettingsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::LoadDefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "LoadDefaultSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::GetSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_Settings::GetFontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetFontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_Settings::GetSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetSpriteAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_StyleSheet> TMPro::TMP_Settings::GetStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetStyleSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_StyleSheet>>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::LoadLinebreakingRules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "LoadLinebreakingRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* TMPro::TMP_Settings::GetCharacters(::UnityEngine::TextAsset* file) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { "GetCharacters", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*>(nullptr, ___internal_method, file);
}
inline void TMPro::TMP_Settings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Settings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Settings*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Settings::TMP_Settings() {}
