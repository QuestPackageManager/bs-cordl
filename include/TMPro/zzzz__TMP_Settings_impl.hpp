#pragma once
// IWYU pragma private; include "TMPro/TMP_Settings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_StyleSheet_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Settings_LineBreakingTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Settings_LineBreakingTable::*)()>(&::TMPro::TMP_Settings_LineBreakingTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fd264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings_LineBreakingTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_leadingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leadingCharacters;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* const& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_leadingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leadingCharacters;
}
constexpr void TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_set_leadingCharacters(::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leadingCharacters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_followingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followingCharacters;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* const& TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_get_followingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followingCharacters;
}
constexpr void TMPro::TMP_Settings_LineBreakingTable::__cordl_internal_set_followingCharacters(::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followingCharacters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_Settings_LineBreakingTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings_LineBreakingTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_Settings_LineBreakingTable* TMPro::TMP_Settings_LineBreakingTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Settings_LineBreakingTable*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Settings_LineBreakingTable::TMP_Settings_LineBreakingTable() {}
//  Writing Method size for method: ::TMPro::TMP_Settings.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_version)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x47fc928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableWordWrapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableWordWrapping)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fc968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableWordWrapping",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableKerning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableKerning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fca50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableKerning",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableExtraPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableExtraPadding)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fca6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableExtraPadding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableTintAllSprites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableTintAllSprites)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fca88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableTintAllSprites",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableParseEscapeCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableParseEscapeCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcaa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableParseEscapeCharacters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableRaycastTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableRaycastTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableRaycastTarget",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_getFontFeaturesAtRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_getFontFeaturesAtRuntime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_getFontFeaturesAtRuntime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_missingGlyphCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::TMPro::TMP_Settings::get_missingGlyphCharacter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_missingGlyphCharacter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_missingGlyphCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::TMPro::TMP_Settings::set_missingGlyphCharacter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x47fcb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_missingGlyphCharacter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_warningsDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_warningsDisabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_warningsDisabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)()>(&::TMPro::TMP_Settings::get_defaultFontAsset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultFontAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultFontAssetPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultFontSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultFontSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextAutoSizingMinRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextAutoSizingMinRatio",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextAutoSizingMaxRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextAutoSizingMaxRatio",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextMeshProTextContainerSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&::TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextMeshProTextContainerSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextMeshProUITextContainerSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&::TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextMeshProUITextContainerSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_autoSizeTextContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_autoSizeTextContainer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_autoSizeTextContainer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_isTextObjectScaleStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_isTextObjectScaleStatic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_isTextObjectScaleStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x47fcc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_isTextObjectScaleStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* (*)()>(
    &::TMPro::TMP_Settings::get_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_fallbackFontAssets",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_matchMaterialPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_matchMaterialPreset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)()>(&::TMPro::TMP_Settings::get_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultSpriteAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultSpriteAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fccc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultSpriteAssetPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableEmojiSupport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableEmojiSupport",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_enableEmojiSupport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x47fccfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_enableEmojiSupport",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_missingCharacterSpriteUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::TMPro::TMP_Settings::get_missingCharacterSpriteUnicode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_missingCharacterSpriteUnicode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_missingCharacterSpriteUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::TMPro::TMP_Settings::set_missingCharacterSpriteUnicode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x47fcd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_missingCharacterSpriteUnicode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultColorGradientPresetsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultColorGradientPresetsPath",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_StyleSheet> (*)()>(&::TMPro::TMP_Settings::get_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultStyleSheet",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_styleSheetsResourcePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_styleSheetsResourcePath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_leadingCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::TMPro::TMP_Settings::get_leadingCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_leadingCharacters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_followingCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (*)()>(&::TMPro::TMP_Settings::get_followingCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcdcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_followingCharacters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_linebreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings_LineBreakingTable* (*)()>(&::TMPro::TMP_Settings::get_linebreakingRules)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x47fcde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_linebreakingRules",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_useModernHangulLineBreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x47fcf24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_useModernHangulLineBreakingRules",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_useModernHangulLineBreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x47fcf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_useModernHangulLineBreakingRules",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_Settings::get_instance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x47fc984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.LoadDefaultSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_Settings::LoadDefaultSettings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x47fcf64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "LoadDefaultSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_Settings::GetSettings)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x47fd05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)()>(&::TMPro::TMP_Settings::GetFontAsset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x47fd0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetFontAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetSpriteAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)()>(&::TMPro::TMP_Settings::GetSpriteAsset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x47fd15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetSpriteAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetStyleSheet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_StyleSheet> (*)()>(&::TMPro::TMP_Settings::GetStyleSheet)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x47fd1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetStyleSheet",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.LoadLinebreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_Settings::LoadLinebreakingRules)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x47fce18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "LoadLinebreakingRules",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* (*)(::UnityEngine::TextAsset*)>(
    &::TMPro::TMP_Settings::GetCharacters)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x47fd26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Settings::*)()>(&::TMPro::TMP_Settings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x47fd390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& TMPro::TMP_Settings::__cordl_internal_get_m_enableWordWrapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableWordWrapping;
}
constexpr bool const& TMPro::TMP_Settings::__cordl_internal_get_m_enableWordWrapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableWordWrapping;
}
constexpr void TMPro::TMP_Settings::__cordl_internal_set_m_enableWordWrapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableWordWrapping = value;
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultFontAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultFontAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fallbackFontAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultSpriteAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultSpriteAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultColorGradientPresetsPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultStyleSheet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleSheetsResourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_leadingCharacters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_followingCharacters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_linebreakingRules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::UnityW<::TMPro::TMP_Settings>, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get>(
      std::forward<::UnityW<::TMPro::TMP_Settings>>(value));
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::TMPro::TMP_Settings>, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get>();
}
inline ::StringW TMPro::TMP_Settings::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableWordWrapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableWordWrapping",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableKerning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableKerning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableExtraPadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableExtraPadding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableTintAllSprites() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableTintAllSprites",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableParseEscapeCharacters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableParseEscapeCharacters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableRaycastTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableRaycastTarget",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_getFontFeaturesAtRuntime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_getFontFeaturesAtRuntime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t TMPro::TMP_Settings::get_missingGlyphCharacter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_missingGlyphCharacter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_missingGlyphCharacter(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_missingGlyphCharacter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool TMPro::TMP_Settings::get_warningsDisabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_warningsDisabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_Settings::get_defaultFontAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultFontAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method);
}
inline ::StringW TMPro::TMP_Settings::get_defaultFontAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultFontAssetPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultFontSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultFontSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextAutoSizingMinRatio",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextAutoSizingMaxRatio",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextMeshProTextContainerSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultTextMeshProUITextContainerSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_autoSizeTextContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_autoSizeTextContainer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_isTextObjectScaleStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_isTextObjectScaleStatic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_isTextObjectScaleStatic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_isTextObjectScaleStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_Settings::get_fallbackFontAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_fallbackFontAssets",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_matchMaterialPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_matchMaterialPreset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_Settings::get_defaultSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultSpriteAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>, false>(nullptr, ___internal_method);
}
inline ::StringW TMPro::TMP_Settings::get_defaultSpriteAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultSpriteAssetPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableEmojiSupport() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_enableEmojiSupport",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_enableEmojiSupport(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_enableEmojiSupport",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline uint32_t TMPro::TMP_Settings::get_missingCharacterSpriteUnicode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_missingCharacterSpriteUnicode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_missingCharacterSpriteUnicode(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_missingCharacterSpriteUnicode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW TMPro::TMP_Settings::get_defaultColorGradientPresetsPath() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultColorGradientPresetsPath",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_StyleSheet> TMPro::TMP_Settings::get_defaultStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_defaultStyleSheet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_StyleSheet>, false>(nullptr, ___internal_method);
}
inline ::StringW TMPro::TMP_Settings::get_styleSheetsResourcePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_styleSheetsResourcePath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> TMPro::TMP_Settings::get_leadingCharacters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_leadingCharacters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> TMPro::TMP_Settings::get_followingCharacters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_followingCharacters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_Settings_LineBreakingTable* TMPro::TMP_Settings::get_linebreakingRules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_linebreakingRules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Settings_LineBreakingTable*, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_useModernHangulLineBreakingRules() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_useModernHangulLineBreakingRules",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_useModernHangulLineBreakingRules(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "set_useModernHangulLineBreakingRules",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::LoadDefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "LoadDefaultSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_Settings::GetSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_Settings::GetFontAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetFontAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_Settings::GetSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetSpriteAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_StyleSheet> TMPro::TMP_Settings::GetStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetStyleSheet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_StyleSheet>, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::LoadLinebreakingRules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "LoadLinebreakingRules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* TMPro::TMP_Settings::GetCharacters(::UnityEngine::TextAsset* file) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), "GetCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*, false>(nullptr, ___internal_method, file);
}
inline void TMPro::TMP_Settings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Settings*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Settings::TMP_Settings() {}
