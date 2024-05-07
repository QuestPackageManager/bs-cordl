#pragma once
// IWYU pragma private; include "TMPro/TMP_Settings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Settings)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_StyleSheet;
}
namespace TMPro {
class __TMP_Settings__LineBreakingTable;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
class TMP_Settings;
}
namespace TMPro {
class __TMP_Settings__LineBreakingTable;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Settings);
MARK_REF_PTR_T(::TMPro::__TMP_Settings__LineBreakingTable);
// Type: ::LineBreakingTable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_Settings::LineBreakingTable*
class CORDL_TYPE __TMP_Settings__LineBreakingTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field followingCharacters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_followingCharacters,
                      put = __cordl_internal_set_followingCharacters))::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* followingCharacters;

  /// @brief Field leadingCharacters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_leadingCharacters, put = __cordl_internal_set_leadingCharacters))::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* leadingCharacters;

  static inline ::TMPro::__TMP_Settings__LineBreakingTable* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*& __cordl_internal_get_followingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*> const& __cordl_internal_get_followingCharacters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*& __cordl_internal_get_leadingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*> const& __cordl_internal_get_leadingCharacters() const;

  constexpr void __cordl_internal_set_followingCharacters(::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* value);

  constexpr void __cordl_internal_set_leadingCharacters(::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* value);

  /// @brief Method .ctor, addr 0x33758bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Settings__LineBreakingTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Settings__LineBreakingTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Settings__LineBreakingTable(__TMP_Settings__LineBreakingTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Settings__LineBreakingTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Settings__LineBreakingTable(__TMP_Settings__LineBreakingTable const&) = delete;

  /// @brief Field leadingCharacters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* ___leadingCharacters;

  /// @brief Field followingCharacters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* ___followingCharacters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Settings__LineBreakingTable, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Settings__LineBreakingTable, ___leadingCharacters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Settings__LineBreakingTable, ___followingCharacters) == 0x18, "Offset mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_Settings
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_Settings*
class CORDL_TYPE TMP_Settings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using LineBreakingTable = ::TMPro::__TMP_Settings__LineBreakingTable;

  /// @brief Field m_EnableRaycastTarget, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRaycastTarget, put = __cordl_internal_set_m_EnableRaycastTarget)) bool m_EnableRaycastTarget;

  /// @brief Field m_GetFontFeaturesAtRuntime, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GetFontFeaturesAtRuntime, put = __cordl_internal_set_m_GetFontFeaturesAtRuntime)) bool m_GetFontFeaturesAtRuntime;

  /// @brief Field m_IsTextObjectScaleStatic, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextObjectScaleStatic, put = __cordl_internal_set_m_IsTextObjectScaleStatic)) bool m_IsTextObjectScaleStatic;

  /// @brief Field m_MissingCharacterSpriteUnicode, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MissingCharacterSpriteUnicode, put = __cordl_internal_set_m_MissingCharacterSpriteUnicode)) uint32_t m_MissingCharacterSpriteUnicode;

  /// @brief Field m_StyleSheetsResourcePath, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleSheetsResourcePath, put = __cordl_internal_set_m_StyleSheetsResourcePath))::StringW m_StyleSheetsResourcePath;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseModernHangulLineBreakingRules, put = __cordl_internal_set_m_UseModernHangulLineBreakingRules)) bool m_UseModernHangulLineBreakingRules;

  /// @brief Field m_autoSizeTextContainer, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_m_autoSizeTextContainer, put = __cordl_internal_set_m_autoSizeTextContainer)) bool m_autoSizeTextContainer;

  /// @brief Field m_defaultAutoSizeMaxRatio, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultAutoSizeMaxRatio, put = __cordl_internal_set_m_defaultAutoSizeMaxRatio)) float_t m_defaultAutoSizeMaxRatio;

  /// @brief Field m_defaultAutoSizeMinRatio, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultAutoSizeMinRatio, put = __cordl_internal_set_m_defaultAutoSizeMinRatio)) float_t m_defaultAutoSizeMinRatio;

  /// @brief Field m_defaultColorGradientPresetsPath, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultColorGradientPresetsPath, put = __cordl_internal_set_m_defaultColorGradientPresetsPath))::StringW m_defaultColorGradientPresetsPath;

  /// @brief Field m_defaultFontAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultFontAsset, put = __cordl_internal_set_m_defaultFontAsset))::UnityW<::TMPro::TMP_FontAsset> m_defaultFontAsset;

  /// @brief Field m_defaultFontAssetPath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultFontAssetPath, put = __cordl_internal_set_m_defaultFontAssetPath))::StringW m_defaultFontAssetPath;

  /// @brief Field m_defaultFontSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultFontSize, put = __cordl_internal_set_m_defaultFontSize)) float_t m_defaultFontSize;

  /// @brief Field m_defaultSpriteAsset, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultSpriteAsset, put = __cordl_internal_set_m_defaultSpriteAsset))::UnityW<::TMPro::TMP_SpriteAsset> m_defaultSpriteAsset;

  /// @brief Field m_defaultSpriteAssetPath, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultSpriteAssetPath, put = __cordl_internal_set_m_defaultSpriteAssetPath))::StringW m_defaultSpriteAssetPath;

  /// @brief Field m_defaultStyleSheet, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultStyleSheet, put = __cordl_internal_set_m_defaultStyleSheet))::UnityW<::TMPro::TMP_StyleSheet> m_defaultStyleSheet;

  /// @brief Field m_defaultTextMeshProTextContainerSize, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultTextMeshProTextContainerSize,
                      put = __cordl_internal_set_m_defaultTextMeshProTextContainerSize))::UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize;

  /// @brief Field m_defaultTextMeshProUITextContainerSize, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultTextMeshProUITextContainerSize,
                      put = __cordl_internal_set_m_defaultTextMeshProUITextContainerSize))::UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize;

  /// @brief Field m_enableEmojiSupport, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableEmojiSupport, put = __cordl_internal_set_m_enableEmojiSupport)) bool m_enableEmojiSupport;

  /// @brief Field m_enableExtraPadding, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableExtraPadding, put = __cordl_internal_set_m_enableExtraPadding)) bool m_enableExtraPadding;

  /// @brief Field m_enableKerning, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableKerning, put = __cordl_internal_set_m_enableKerning)) bool m_enableKerning;

  /// @brief Field m_enableParseEscapeCharacters, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableParseEscapeCharacters, put = __cordl_internal_set_m_enableParseEscapeCharacters)) bool m_enableParseEscapeCharacters;

  /// @brief Field m_enableTintAllSprites, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableTintAllSprites, put = __cordl_internal_set_m_enableTintAllSprites)) bool m_enableTintAllSprites;

  /// @brief Field m_enableWordWrapping, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableWordWrapping, put = __cordl_internal_set_m_enableWordWrapping)) bool m_enableWordWrapping;

  /// @brief Field m_fallbackFontAssets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fallbackFontAssets,
                      put = __cordl_internal_set_m_fallbackFontAssets))::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* m_fallbackFontAssets;

  /// @brief Field m_followingCharacters, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_followingCharacters, put = __cordl_internal_set_m_followingCharacters))::UnityW<::UnityEngine::TextAsset> m_followingCharacters;

  /// @brief Field m_leadingCharacters, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_leadingCharacters, put = __cordl_internal_set_m_leadingCharacters))::UnityW<::UnityEngine::TextAsset> m_leadingCharacters;

  /// @brief Field m_linebreakingRules, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_linebreakingRules, put = __cordl_internal_set_m_linebreakingRules))::TMPro::__TMP_Settings__LineBreakingTable* m_linebreakingRules;

  /// @brief Field m_matchMaterialPreset, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_matchMaterialPreset, put = __cordl_internal_set_m_matchMaterialPreset)) bool m_matchMaterialPreset;

  /// @brief Field m_missingGlyphCharacter, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_missingGlyphCharacter, put = __cordl_internal_set_m_missingGlyphCharacter)) int32_t m_missingGlyphCharacter;

  /// @brief Field m_warningsDisabled, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_warningsDisabled, put = __cordl_internal_set_m_warningsDisabled)) bool m_warningsDisabled;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityW<::TMPro::TMP_Settings> s_Instance;

  /// @brief Method GetCharacters, addr 0x33758c4, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* GetCharacters(::UnityEngine::TextAsset* file);

  /// @brief Method GetFontAsset, addr 0x3375730, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> GetFontAsset();

  /// @brief Method GetSettings, addr 0x33756b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> GetSettings();

  /// @brief Method GetSpriteAsset, addr 0x33757b4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> GetSpriteAsset();

  /// @brief Method GetStyleSheet, addr 0x3375838, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_StyleSheet> GetStyleSheet();

  /// @brief Method LoadDefaultSettings, addr 0x33755bc, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> LoadDefaultSettings();

  /// @brief Method LoadLinebreakingRules, addr 0x337546c, size 0x110, virtual false, abstract: false, final false
  static inline void LoadLinebreakingRules();

  static inline ::TMPro::TMP_Settings* New_ctor();

  constexpr bool const& __cordl_internal_get_m_EnableRaycastTarget() const;

  constexpr bool& __cordl_internal_get_m_EnableRaycastTarget();

  constexpr bool const& __cordl_internal_get_m_GetFontFeaturesAtRuntime() const;

  constexpr bool& __cordl_internal_get_m_GetFontFeaturesAtRuntime();

  constexpr bool const& __cordl_internal_get_m_IsTextObjectScaleStatic() const;

  constexpr bool& __cordl_internal_get_m_IsTextObjectScaleStatic();

  constexpr uint32_t const& __cordl_internal_get_m_MissingCharacterSpriteUnicode() const;

  constexpr uint32_t& __cordl_internal_get_m_MissingCharacterSpriteUnicode();

  constexpr ::StringW const& __cordl_internal_get_m_StyleSheetsResourcePath() const;

  constexpr ::StringW& __cordl_internal_get_m_StyleSheetsResourcePath();

  constexpr bool const& __cordl_internal_get_m_UseModernHangulLineBreakingRules() const;

  constexpr bool& __cordl_internal_get_m_UseModernHangulLineBreakingRules();

  constexpr bool const& __cordl_internal_get_m_autoSizeTextContainer() const;

  constexpr bool& __cordl_internal_get_m_autoSizeTextContainer();

  constexpr float_t const& __cordl_internal_get_m_defaultAutoSizeMaxRatio() const;

  constexpr float_t& __cordl_internal_get_m_defaultAutoSizeMaxRatio();

  constexpr float_t const& __cordl_internal_get_m_defaultAutoSizeMinRatio() const;

  constexpr float_t& __cordl_internal_get_m_defaultAutoSizeMinRatio();

  constexpr ::StringW const& __cordl_internal_get_m_defaultColorGradientPresetsPath() const;

  constexpr ::StringW& __cordl_internal_get_m_defaultColorGradientPresetsPath();

  constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_m_defaultFontAsset() const;

  constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_m_defaultFontAsset();

  constexpr ::StringW const& __cordl_internal_get_m_defaultFontAssetPath() const;

  constexpr ::StringW& __cordl_internal_get_m_defaultFontAssetPath();

  constexpr float_t const& __cordl_internal_get_m_defaultFontSize() const;

  constexpr float_t& __cordl_internal_get_m_defaultFontSize();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_m_defaultSpriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_m_defaultSpriteAsset();

  constexpr ::StringW const& __cordl_internal_get_m_defaultSpriteAssetPath() const;

  constexpr ::StringW& __cordl_internal_get_m_defaultSpriteAssetPath();

  constexpr ::UnityW<::TMPro::TMP_StyleSheet> const& __cordl_internal_get_m_defaultStyleSheet() const;

  constexpr ::UnityW<::TMPro::TMP_StyleSheet>& __cordl_internal_get_m_defaultStyleSheet();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_defaultTextMeshProTextContainerSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_defaultTextMeshProTextContainerSize();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_defaultTextMeshProUITextContainerSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_defaultTextMeshProUITextContainerSize();

  constexpr bool const& __cordl_internal_get_m_enableEmojiSupport() const;

  constexpr bool& __cordl_internal_get_m_enableEmojiSupport();

  constexpr bool const& __cordl_internal_get_m_enableExtraPadding() const;

  constexpr bool& __cordl_internal_get_m_enableExtraPadding();

  constexpr bool const& __cordl_internal_get_m_enableKerning() const;

  constexpr bool& __cordl_internal_get_m_enableKerning();

  constexpr bool const& __cordl_internal_get_m_enableParseEscapeCharacters() const;

  constexpr bool& __cordl_internal_get_m_enableParseEscapeCharacters();

  constexpr bool const& __cordl_internal_get_m_enableTintAllSprites() const;

  constexpr bool& __cordl_internal_get_m_enableTintAllSprites();

  constexpr bool const& __cordl_internal_get_m_enableWordWrapping() const;

  constexpr bool& __cordl_internal_get_m_enableWordWrapping();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get_m_fallbackFontAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*> const& __cordl_internal_get_m_fallbackFontAssets() const;

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_followingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_followingCharacters();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_leadingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_leadingCharacters();

  constexpr ::TMPro::__TMP_Settings__LineBreakingTable*& __cordl_internal_get_m_linebreakingRules();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_Settings__LineBreakingTable*> const& __cordl_internal_get_m_linebreakingRules() const;

  constexpr bool const& __cordl_internal_get_m_matchMaterialPreset() const;

  constexpr bool& __cordl_internal_get_m_matchMaterialPreset();

  constexpr int32_t const& __cordl_internal_get_m_missingGlyphCharacter() const;

  constexpr int32_t& __cordl_internal_get_m_missingGlyphCharacter();

  constexpr bool const& __cordl_internal_get_m_warningsDisabled() const;

  constexpr bool& __cordl_internal_get_m_warningsDisabled();

  constexpr void __cordl_internal_set_m_EnableRaycastTarget(bool value);

  constexpr void __cordl_internal_set_m_GetFontFeaturesAtRuntime(bool value);

  constexpr void __cordl_internal_set_m_IsTextObjectScaleStatic(bool value);

  constexpr void __cordl_internal_set_m_MissingCharacterSpriteUnicode(uint32_t value);

  constexpr void __cordl_internal_set_m_StyleSheetsResourcePath(::StringW value);

  constexpr void __cordl_internal_set_m_UseModernHangulLineBreakingRules(bool value);

  constexpr void __cordl_internal_set_m_autoSizeTextContainer(bool value);

  constexpr void __cordl_internal_set_m_defaultAutoSizeMaxRatio(float_t value);

  constexpr void __cordl_internal_set_m_defaultAutoSizeMinRatio(float_t value);

  constexpr void __cordl_internal_set_m_defaultColorGradientPresetsPath(::StringW value);

  constexpr void __cordl_internal_set_m_defaultFontAsset(::UnityW<::TMPro::TMP_FontAsset> value);

  constexpr void __cordl_internal_set_m_defaultFontAssetPath(::StringW value);

  constexpr void __cordl_internal_set_m_defaultFontSize(float_t value);

  constexpr void __cordl_internal_set_m_defaultSpriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  constexpr void __cordl_internal_set_m_defaultSpriteAssetPath(::StringW value);

  constexpr void __cordl_internal_set_m_defaultStyleSheet(::UnityW<::TMPro::TMP_StyleSheet> value);

  constexpr void __cordl_internal_set_m_defaultTextMeshProTextContainerSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_defaultTextMeshProUITextContainerSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_enableEmojiSupport(bool value);

  constexpr void __cordl_internal_set_m_enableExtraPadding(bool value);

  constexpr void __cordl_internal_set_m_enableKerning(bool value);

  constexpr void __cordl_internal_set_m_enableParseEscapeCharacters(bool value);

  constexpr void __cordl_internal_set_m_enableTintAllSprites(bool value);

  constexpr void __cordl_internal_set_m_enableWordWrapping(bool value);

  constexpr void __cordl_internal_set_m_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  constexpr void __cordl_internal_set_m_followingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_leadingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_linebreakingRules(::TMPro::__TMP_Settings__LineBreakingTable* value);

  constexpr void __cordl_internal_set_m_matchMaterialPreset(bool value);

  constexpr void __cordl_internal_set_m_missingGlyphCharacter(int32_t value);

  constexpr void __cordl_internal_set_m_warningsDisabled(bool value);

  /// @brief Method .ctor, addr 0x33759e4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::TMPro::TMP_Settings> getStaticF_s_Instance();

  /// @brief Method get_autoSizeTextContainer, addr 0x3375268, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_autoSizeTextContainer();

  /// @brief Method get_defaultColorGradientPresetsPath, addr 0x33753b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_defaultColorGradientPresetsPath();

  /// @brief Method get_defaultFontAsset, addr 0x33751a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> get_defaultFontAsset();

  /// @brief Method get_defaultFontAssetPath, addr 0x33751c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_defaultFontAssetPath();

  /// @brief Method get_defaultFontSize, addr 0x33751dc, size 0x1c, virtual false, abstract: false, final false
  static inline float_t get_defaultFontSize();

  /// @brief Method get_defaultSpriteAsset, addr 0x33752fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> get_defaultSpriteAsset();

  /// @brief Method get_defaultSpriteAssetPath, addr 0x3375318, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_defaultSpriteAssetPath();

  /// @brief Method get_defaultStyleSheet, addr 0x33753cc, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_StyleSheet> get_defaultStyleSheet();

  /// @brief Method get_defaultTextAutoSizingMaxRatio, addr 0x3375214, size 0x1c, virtual false, abstract: false, final false
  static inline float_t get_defaultTextAutoSizingMaxRatio();

  /// @brief Method get_defaultTextAutoSizingMinRatio, addr 0x33751f8, size 0x1c, virtual false, abstract: false, final false
  static inline float_t get_defaultTextAutoSizingMinRatio();

  /// @brief Method get_defaultTextMeshProTextContainerSize, addr 0x3375230, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize();

  /// @brief Method get_defaultTextMeshProUITextContainerSize, addr 0x337524c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize();

  /// @brief Method get_enableEmojiSupport, addr 0x3375334, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableEmojiSupport();

  /// @brief Method get_enableExtraPadding, addr 0x33750c0, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableExtraPadding();

  /// @brief Method get_enableKerning, addr 0x33750a4, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableKerning();

  /// @brief Method get_enableParseEscapeCharacters, addr 0x33750f8, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableParseEscapeCharacters();

  /// @brief Method get_enableRaycastTarget, addr 0x3375114, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableRaycastTarget();

  /// @brief Method get_enableTintAllSprites, addr 0x33750dc, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableTintAllSprites();

  /// @brief Method get_enableWordWrapping, addr 0x3374fbc, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_enableWordWrapping();

  /// @brief Method get_fallbackFontAssets, addr 0x33752c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* get_fallbackFontAssets();

  /// @brief Method get_followingCharacters, addr 0x3375420, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextAsset> get_followingCharacters();

  /// @brief Method get_getFontFeaturesAtRuntime, addr 0x3375130, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_getFontFeaturesAtRuntime();

  /// @brief Method get_instance, addr 0x3374fd8, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> get_instance();

  /// @brief Method get_isTextObjectScaleStatic, addr 0x3375284, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_isTextObjectScaleStatic();

  /// @brief Method get_leadingCharacters, addr 0x3375404, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextAsset> get_leadingCharacters();

  /// @brief Method get_linebreakingRules, addr 0x337543c, size 0x30, virtual false, abstract: false, final false
  static inline ::TMPro::__TMP_Settings__LineBreakingTable* get_linebreakingRules();

  /// @brief Method get_matchMaterialPreset, addr 0x33752e0, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_matchMaterialPreset();

  /// @brief Method get_missingCharacterSpriteUnicode, addr 0x3375374, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t get_missingCharacterSpriteUnicode();

  /// @brief Method get_missingGlyphCharacter, addr 0x337514c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t get_missingGlyphCharacter();

  /// @brief Method get_styleSheetsResourcePath, addr 0x33753e8, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_styleSheetsResourcePath();

  /// @brief Method get_useModernHangulLineBreakingRules, addr 0x337557c, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_useModernHangulLineBreakingRules();

  /// @brief Method get_version, addr 0x3374f7c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_version();

  /// @brief Method get_warningsDisabled, addr 0x3375188, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_warningsDisabled();

  static inline void setStaticF_s_Instance(::UnityW<::TMPro::TMP_Settings> value);

  /// @brief Method set_enableEmojiSupport, addr 0x3375350, size 0x24, virtual false, abstract: false, final false
  static inline void set_enableEmojiSupport(bool value);

  /// @brief Method set_isTextObjectScaleStatic, addr 0x33752a0, size 0x24, virtual false, abstract: false, final false
  static inline void set_isTextObjectScaleStatic(bool value);

  /// @brief Method set_missingCharacterSpriteUnicode, addr 0x3375390, size 0x20, virtual false, abstract: false, final false
  static inline void set_missingCharacterSpriteUnicode(uint32_t value);

  /// @brief Method set_missingGlyphCharacter, addr 0x3375168, size 0x20, virtual false, abstract: false, final false
  static inline void set_missingGlyphCharacter(int32_t value);

  /// @brief Method set_useModernHangulLineBreakingRules, addr 0x3375598, size 0x24, virtual false, abstract: false, final false
  static inline void set_useModernHangulLineBreakingRules(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Settings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Settings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Settings(TMP_Settings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Settings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Settings(TMP_Settings const&) = delete;

  /// @brief Field m_enableWordWrapping, offset: 0x18, size: 0x1, def value: None
  bool ___m_enableWordWrapping;

  /// @brief Field m_enableKerning, offset: 0x19, size: 0x1, def value: None
  bool ___m_enableKerning;

  /// @brief Field m_enableExtraPadding, offset: 0x1a, size: 0x1, def value: None
  bool ___m_enableExtraPadding;

  /// @brief Field m_enableTintAllSprites, offset: 0x1b, size: 0x1, def value: None
  bool ___m_enableTintAllSprites;

  /// @brief Field m_enableParseEscapeCharacters, offset: 0x1c, size: 0x1, def value: None
  bool ___m_enableParseEscapeCharacters;

  /// @brief Field m_EnableRaycastTarget, offset: 0x1d, size: 0x1, def value: None
  bool ___m_EnableRaycastTarget;

  /// @brief Field m_GetFontFeaturesAtRuntime, offset: 0x1e, size: 0x1, def value: None
  bool ___m_GetFontFeaturesAtRuntime;

  /// @brief Field m_missingGlyphCharacter, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_missingGlyphCharacter;

  /// @brief Field m_warningsDisabled, offset: 0x24, size: 0x1, def value: None
  bool ___m_warningsDisabled;

  /// @brief Field m_defaultFontAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_defaultFontAsset;

  /// @brief Field m_defaultFontAssetPath, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_defaultFontAssetPath;

  /// @brief Field m_defaultFontSize, offset: 0x38, size: 0x4, def value: None
  float_t ___m_defaultFontSize;

  /// @brief Field m_defaultAutoSizeMinRatio, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_defaultAutoSizeMinRatio;

  /// @brief Field m_defaultAutoSizeMaxRatio, offset: 0x40, size: 0x4, def value: None
  float_t ___m_defaultAutoSizeMaxRatio;

  /// @brief Field m_defaultTextMeshProTextContainerSize, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_defaultTextMeshProTextContainerSize;

  /// @brief Field m_defaultTextMeshProUITextContainerSize, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_defaultTextMeshProUITextContainerSize;

  /// @brief Field m_autoSizeTextContainer, offset: 0x54, size: 0x1, def value: None
  bool ___m_autoSizeTextContainer;

  /// @brief Field m_IsTextObjectScaleStatic, offset: 0x55, size: 0x1, def value: None
  bool ___m_IsTextObjectScaleStatic;

  /// @brief Field m_fallbackFontAssets, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ___m_fallbackFontAssets;

  /// @brief Field m_matchMaterialPreset, offset: 0x60, size: 0x1, def value: None
  bool ___m_matchMaterialPreset;

  /// @brief Field m_defaultSpriteAsset, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_defaultSpriteAsset;

  /// @brief Field m_defaultSpriteAssetPath, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_defaultSpriteAssetPath;

  /// @brief Field m_enableEmojiSupport, offset: 0x78, size: 0x1, def value: None
  bool ___m_enableEmojiSupport;

  /// @brief Field m_MissingCharacterSpriteUnicode, offset: 0x7c, size: 0x4, def value: None
  uint32_t ___m_MissingCharacterSpriteUnicode;

  /// @brief Field m_defaultColorGradientPresetsPath, offset: 0x80, size: 0x8, def value: None
  ::StringW ___m_defaultColorGradientPresetsPath;

  /// @brief Field m_defaultStyleSheet, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_StyleSheet> ___m_defaultStyleSheet;

  /// @brief Field m_StyleSheetsResourcePath, offset: 0x90, size: 0x8, def value: None
  ::StringW ___m_StyleSheetsResourcePath;

  /// @brief Field m_leadingCharacters, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_leadingCharacters;

  /// @brief Field m_followingCharacters, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_followingCharacters;

  /// @brief Field m_linebreakingRules, offset: 0xa8, size: 0x8, def value: None
  ::TMPro::__TMP_Settings__LineBreakingTable* ___m_linebreakingRules;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset: 0xb0, size: 0x1, def value: None
  bool ___m_UseModernHangulLineBreakingRules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Settings, 0xb8>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableWordWrapping) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableKerning) == 0x19, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableExtraPadding) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableTintAllSprites) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableParseEscapeCharacters) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_EnableRaycastTarget) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_GetFontFeaturesAtRuntime) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_missingGlyphCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_warningsDisabled) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultFontAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultFontAssetPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultFontSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultAutoSizeMinRatio) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultAutoSizeMaxRatio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultTextMeshProTextContainerSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultTextMeshProUITextContainerSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_autoSizeTextContainer) == 0x54, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_IsTextObjectScaleStatic) == 0x55, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_fallbackFontAssets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_matchMaterialPreset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultSpriteAsset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultSpriteAssetPath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableEmojiSupport) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_MissingCharacterSpriteUnicode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultColorGradientPresetsPath) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultStyleSheet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_StyleSheetsResourcePath) == 0x90, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_leadingCharacters) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_followingCharacters) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_linebreakingRules) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_UseModernHangulLineBreakingRules) == 0xb0, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Settings);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Settings*, "TMPro", "TMP_Settings");
NEED_NO_BOX(::TMPro::__TMP_Settings__LineBreakingTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Settings__LineBreakingTable*, "TMPro", "TMP_Settings/LineBreakingTable");
