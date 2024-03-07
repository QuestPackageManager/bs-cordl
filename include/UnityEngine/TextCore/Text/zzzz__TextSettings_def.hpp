#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSettings)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
namespace UnityEngine::TextCore::Text {
class UnicodeLineBreakingRules;
}
namespace UnityEngine::TextCore::Text {
struct __TextSettings__FontReferenceMap;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
struct __TextSettings__FontReferenceMap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextSettings);
MARK_VAL_T(::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap);
// Type: ::FontReferenceMap
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::TextSettings::FontReferenceMap
struct CORDL_TYPE __TextSettings__FontReferenceMap {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2ea78e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Font* font, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextSettings__FontReferenceMap();

  // Ctor Parameters [CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }]
  constexpr __TextSettings__FontReferenceMap(::UnityW<::UnityEngine::Font> font, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept;

  /// @brief Field font, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> font;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap, font) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap, fontAsset) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextSettings
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextSettings*
class CORDL_TYPE TextSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using FontReferenceMap = ::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap;

  __declspec(property(get = get_clearDynamicDataOnBuild, put = set_clearDynamicDataOnBuild)) bool clearDynamicDataOnBuild;

  __declspec(property(get = get_defaultColorGradientPresetsPath, put = set_defaultColorGradientPresetsPath))::StringW defaultColorGradientPresetsPath;

  __declspec(property(get = get_defaultFontAsset, put = set_defaultFontAsset))::UnityW<::UnityEngine::TextCore::Text::FontAsset> defaultFontAsset;

  __declspec(property(get = get_defaultFontAssetPath, put = set_defaultFontAssetPath))::StringW defaultFontAssetPath;

  __declspec(property(get = get_defaultSpriteAsset, put = set_defaultSpriteAsset))::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> defaultSpriteAsset;

  __declspec(property(get = get_defaultSpriteAssetPath, put = set_defaultSpriteAssetPath))::StringW defaultSpriteAssetPath;

  __declspec(property(get = get_defaultStyleSheet, put = set_defaultStyleSheet))::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> defaultStyleSheet;

  __declspec(property(get = get_displayWarnings, put = set_displayWarnings)) bool displayWarnings;

  __declspec(property(get = get_fallbackFontAssets, put = set_fallbackFontAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fallbackFontAssets;

  __declspec(property(get = get_fallbackSpriteAssets,
                      put = set_fallbackSpriteAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* fallbackSpriteAssets;

  __declspec(property(get = get_lineBreakingRules, put = set_lineBreakingRules))::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* lineBreakingRules;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDynamicDataOnBuild, put = __cordl_internal_set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_DefaultColorGradientPresetsPath, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultColorGradientPresetsPath, put = __cordl_internal_set_m_DefaultColorGradientPresetsPath))::StringW m_DefaultColorGradientPresetsPath;

  /// @brief Field m_DefaultFontAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultFontAsset, put = __cordl_internal_set_m_DefaultFontAsset))::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_DefaultFontAsset;

  /// @brief Field m_DefaultFontAssetPath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultFontAssetPath, put = __cordl_internal_set_m_DefaultFontAssetPath))::StringW m_DefaultFontAssetPath;

  /// @brief Field m_DefaultSpriteAsset, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultSpriteAsset, put = __cordl_internal_set_m_DefaultSpriteAsset))::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> m_DefaultSpriteAsset;

  /// @brief Field m_DefaultSpriteAssetPath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultSpriteAssetPath, put = __cordl_internal_set_m_DefaultSpriteAssetPath))::StringW m_DefaultSpriteAssetPath;

  /// @brief Field m_DefaultStyleSheet, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStyleSheet, put = __cordl_internal_set_m_DefaultStyleSheet))::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> m_DefaultStyleSheet;

  /// @brief Field m_DisplayWarnings, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisplayWarnings, put = __cordl_internal_set_m_DisplayWarnings)) bool m_DisplayWarnings;

  /// @brief Field m_FallbackFontAssets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackFontAssets,
                      put = __cordl_internal_set_m_FallbackFontAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* m_FallbackFontAssets;

  /// @brief Field m_FallbackSpriteAssets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackSpriteAssets,
                      put = __cordl_internal_set_m_FallbackSpriteAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* m_FallbackSpriteAssets;

  /// @brief Field m_FontLookup, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontLookup,
                      put = __cordl_internal_set_m_FontLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* m_FontLookup;

  /// @brief Field m_FontReferences, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontReferences,
                      put = __cordl_internal_set_m_FontReferences))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>* m_FontReferences;

  /// @brief Field m_MatchMaterialPreset, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MatchMaterialPreset, put = __cordl_internal_set_m_MatchMaterialPreset)) bool m_MatchMaterialPreset;

  /// @brief Field m_MissingCharacterUnicode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MissingCharacterUnicode, put = __cordl_internal_set_m_MissingCharacterUnicode)) int32_t m_MissingCharacterUnicode;

  /// @brief Field m_MissingSpriteCharacterUnicode, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MissingSpriteCharacterUnicode, put = __cordl_internal_set_m_MissingSpriteCharacterUnicode)) uint32_t m_MissingSpriteCharacterUnicode;

  /// @brief Field m_StyleSheetsResourcePath, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleSheetsResourcePath, put = __cordl_internal_set_m_StyleSheetsResourcePath))::StringW m_StyleSheetsResourcePath;

  /// @brief Field m_UnicodeLineBreakingRules, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnicodeLineBreakingRules,
                      put = __cordl_internal_set_m_UnicodeLineBreakingRules))::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* m_UnicodeLineBreakingRules;

  /// @brief Field m_Version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version))::StringW m_Version;

  __declspec(property(get = get_matchMaterialPreset, put = set_matchMaterialPreset)) bool matchMaterialPreset;

  __declspec(property(get = get_missingCharacterUnicode, put = set_missingCharacterUnicode)) int32_t missingCharacterUnicode;

  __declspec(property(get = get_missingSpriteCharacterUnicode, put = set_missingSpriteCharacterUnicode)) uint32_t missingSpriteCharacterUnicode;

  __declspec(property(get = get_styleSheetsResourcePath, put = set_styleSheetsResourcePath))::StringW styleSheetsResourcePath;

  __declspec(property(get = get_version, put = set_version))::StringW version;

  /// @brief Method GetCachedFontAssetInternal, addr 0x2ea75dc, size 0x308, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetCachedFontAssetInternal(::UnityEngine::Font* font);

  /// @brief Method InitializeFontReferenceLookup, addr 0x2ea73f0, size 0x1ec, virtual false, abstract: false, final false
  inline void InitializeFontReferenceLookup();

  static inline ::UnityEngine::TextCore::Text::TextSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_m_ClearDynamicDataOnBuild() const;

  constexpr bool& __cordl_internal_get_m_ClearDynamicDataOnBuild();

  constexpr ::StringW const& __cordl_internal_get_m_DefaultColorGradientPresetsPath() const;

  constexpr ::StringW& __cordl_internal_get_m_DefaultColorGradientPresetsPath();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& __cordl_internal_get_m_DefaultFontAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& __cordl_internal_get_m_DefaultFontAsset();

  constexpr ::StringW const& __cordl_internal_get_m_DefaultFontAssetPath() const;

  constexpr ::StringW& __cordl_internal_get_m_DefaultFontAssetPath();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& __cordl_internal_get_m_DefaultSpriteAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& __cordl_internal_get_m_DefaultSpriteAsset();

  constexpr ::StringW const& __cordl_internal_get_m_DefaultSpriteAssetPath() const;

  constexpr ::StringW& __cordl_internal_get_m_DefaultSpriteAssetPath();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> const& __cordl_internal_get_m_DefaultStyleSheet() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet>& __cordl_internal_get_m_DefaultStyleSheet();

  constexpr bool const& __cordl_internal_get_m_DisplayWarnings() const;

  constexpr bool& __cordl_internal_get_m_DisplayWarnings();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& __cordl_internal_get_m_FallbackFontAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*> const& __cordl_internal_get_m_FallbackFontAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*& __cordl_internal_get_m_FallbackSpriteAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*> const&
  __cordl_internal_get_m_FallbackSpriteAssets() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& __cordl_internal_get_m_FontLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*> const&
  __cordl_internal_get_m_FontLookup() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*& __cordl_internal_get_m_FontReferences();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*> const&
  __cordl_internal_get_m_FontReferences() const;

  constexpr bool const& __cordl_internal_get_m_MatchMaterialPreset() const;

  constexpr bool& __cordl_internal_get_m_MatchMaterialPreset();

  constexpr int32_t const& __cordl_internal_get_m_MissingCharacterUnicode() const;

  constexpr int32_t& __cordl_internal_get_m_MissingCharacterUnicode();

  constexpr uint32_t const& __cordl_internal_get_m_MissingSpriteCharacterUnicode() const;

  constexpr uint32_t& __cordl_internal_get_m_MissingSpriteCharacterUnicode();

  constexpr ::StringW const& __cordl_internal_get_m_StyleSheetsResourcePath() const;

  constexpr ::StringW& __cordl_internal_get_m_StyleSheetsResourcePath();

  constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*& __cordl_internal_get_m_UnicodeLineBreakingRules();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*> const& __cordl_internal_get_m_UnicodeLineBreakingRules() const;

  constexpr ::StringW const& __cordl_internal_get_m_Version() const;

  constexpr ::StringW& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_ClearDynamicDataOnBuild(bool value);

  constexpr void __cordl_internal_set_m_DefaultColorGradientPresetsPath(::StringW value);

  constexpr void __cordl_internal_set_m_DefaultFontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value);

  constexpr void __cordl_internal_set_m_DefaultFontAssetPath(::StringW value);

  constexpr void __cordl_internal_set_m_DefaultSpriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value);

  constexpr void __cordl_internal_set_m_DefaultSpriteAssetPath(::StringW value);

  constexpr void __cordl_internal_set_m_DefaultStyleSheet(::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> value);

  constexpr void __cordl_internal_set_m_DisplayWarnings(bool value);

  constexpr void __cordl_internal_set_m_FallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value);

  constexpr void __cordl_internal_set_m_FontLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FontReferences(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>* value);

  constexpr void __cordl_internal_set_m_MatchMaterialPreset(bool value);

  constexpr void __cordl_internal_set_m_MissingCharacterUnicode(int32_t value);

  constexpr void __cordl_internal_set_m_MissingSpriteCharacterUnicode(uint32_t value);

  constexpr void __cordl_internal_set_m_StyleSheetsResourcePath(::StringW value);

  constexpr void __cordl_internal_set_m_UnicodeLineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value);

  constexpr void __cordl_internal_set_m_Version(::StringW value);

  /// @brief Method .ctor, addr 0x2ea78ec, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clearDynamicDataOnBuild, addr 0x2ea72cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDynamicDataOnBuild();

  /// @brief Method get_defaultColorGradientPresetsPath, addr 0x2ea7340, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_defaultColorGradientPresetsPath();

  /// @brief Method get_defaultFontAsset, addr 0x2ea7278, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> get_defaultFontAsset();

  /// @brief Method get_defaultFontAssetPath, addr 0x2ea7288, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_defaultFontAssetPath();

  /// @brief Method get_defaultSpriteAsset, addr 0x2ea72e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> get_defaultSpriteAsset();

  /// @brief Method get_defaultSpriteAssetPath, addr 0x2ea72f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_defaultSpriteAssetPath();

  /// @brief Method get_defaultStyleSheet, addr 0x2ea7320, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> get_defaultStyleSheet();

  /// @brief Method get_displayWarnings, addr 0x2ea73dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_displayWarnings();

  /// @brief Method get_fallbackFontAssets, addr 0x2ea7298, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* get_fallbackFontAssets();

  /// @brief Method get_fallbackSpriteAssets, addr 0x2ea7300, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* get_fallbackSpriteAssets();

  /// @brief Method get_lineBreakingRules, addr 0x2ea7350, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* get_lineBreakingRules();

  /// @brief Method get_matchMaterialPreset, addr 0x2ea72a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_matchMaterialPreset();

  /// @brief Method get_missingCharacterUnicode, addr 0x2ea72bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_missingCharacterUnicode();

  /// @brief Method get_missingSpriteCharacterUnicode, addr 0x2ea7310, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_missingSpriteCharacterUnicode();

  /// @brief Method get_styleSheetsResourcePath, addr 0x2ea7330, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_styleSheetsResourcePath();

  /// @brief Method get_version, addr 0x2ea7268, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  /// @brief Method set_clearDynamicDataOnBuild, addr 0x2ea72d4, size 0xc, virtual false, abstract: false, final false
  inline void set_clearDynamicDataOnBuild(bool value);

  /// @brief Method set_defaultColorGradientPresetsPath, addr 0x2ea7348, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultColorGradientPresetsPath(::StringW value);

  /// @brief Method set_defaultFontAsset, addr 0x2ea7280, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultFontAsset(::UnityEngine::TextCore::Text::FontAsset* value);

  /// @brief Method set_defaultFontAssetPath, addr 0x2ea7290, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultFontAssetPath(::StringW value);

  /// @brief Method set_defaultSpriteAsset, addr 0x2ea72e8, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* value);

  /// @brief Method set_defaultSpriteAssetPath, addr 0x2ea72f8, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultSpriteAssetPath(::StringW value);

  /// @brief Method set_defaultStyleSheet, addr 0x2ea7328, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* value);

  /// @brief Method set_displayWarnings, addr 0x2ea73e4, size 0xc, virtual false, abstract: false, final false
  inline void set_displayWarnings(bool value);

  /// @brief Method set_fallbackFontAssets, addr 0x2ea72a0, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  /// @brief Method set_fallbackSpriteAssets, addr 0x2ea7308, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value);

  /// @brief Method set_lineBreakingRules, addr 0x2ea73d4, size 0x8, virtual false, abstract: false, final false
  inline void set_lineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value);

  /// @brief Method set_matchMaterialPreset, addr 0x2ea72b0, size 0xc, virtual false, abstract: false, final false
  inline void set_matchMaterialPreset(bool value);

  /// @brief Method set_missingCharacterUnicode, addr 0x2ea72c4, size 0x8, virtual false, abstract: false, final false
  inline void set_missingCharacterUnicode(int32_t value);

  /// @brief Method set_missingSpriteCharacterUnicode, addr 0x2ea7318, size 0x8, virtual false, abstract: false, final false
  inline void set_missingSpriteCharacterUnicode(uint32_t value);

  /// @brief Method set_styleSheetsResourcePath, addr 0x2ea7338, size 0x8, virtual false, abstract: false, final false
  inline void set_styleSheetsResourcePath(::StringW value);

  /// @brief Method set_version, addr 0x2ea7270, size 0x8, virtual false, abstract: false, final false
  inline void set_version(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSettings(TextSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSettings(TextSettings const&) = delete;

  /// @brief Field m_Version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Version;

  /// @brief Field m_DefaultFontAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> ___m_DefaultFontAsset;

  /// @brief Field m_DefaultFontAssetPath, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_DefaultFontAssetPath;

  /// @brief Field m_FallbackFontAssets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* ___m_FallbackFontAssets;

  /// @brief Field m_MatchMaterialPreset, offset: 0x38, size: 0x1, def value: None
  bool ___m_MatchMaterialPreset;

  /// @brief Field m_MissingCharacterUnicode, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_MissingCharacterUnicode;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0x40, size: 0x1, def value: None
  bool ___m_ClearDynamicDataOnBuild;

  /// @brief Field m_DefaultSpriteAsset, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> ___m_DefaultSpriteAsset;

  /// @brief Field m_DefaultSpriteAssetPath, offset: 0x50, size: 0x8, def value: None
  ::StringW ___m_DefaultSpriteAssetPath;

  /// @brief Field m_FallbackSpriteAssets, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* ___m_FallbackSpriteAssets;

  /// @brief Field m_MissingSpriteCharacterUnicode, offset: 0x60, size: 0x4, def value: None
  uint32_t ___m_MissingSpriteCharacterUnicode;

  /// @brief Field m_DefaultStyleSheet, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> ___m_DefaultStyleSheet;

  /// @brief Field m_StyleSheetsResourcePath, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_StyleSheetsResourcePath;

  /// @brief Field m_DefaultColorGradientPresetsPath, offset: 0x78, size: 0x8, def value: None
  ::StringW ___m_DefaultColorGradientPresetsPath;

  /// @brief Field m_UnicodeLineBreakingRules, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* ___m_UnicodeLineBreakingRules;

  /// @brief Field m_DisplayWarnings, offset: 0x88, size: 0x1, def value: None
  bool ___m_DisplayWarnings;

  /// @brief Field m_FontLookup, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* ___m_FontLookup;

  /// @brief Field m_FontReferences, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>* ___m_FontReferences;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextSettings, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DefaultFontAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DefaultFontAssetPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_FallbackFontAssets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_MatchMaterialPreset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_MissingCharacterUnicode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_ClearDynamicDataOnBuild) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DefaultSpriteAsset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DefaultSpriteAssetPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_FallbackSpriteAssets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_MissingSpriteCharacterUnicode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DefaultStyleSheet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_StyleSheetsResourcePath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DefaultColorGradientPresetsPath) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_UnicodeLineBreakingRules) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_DisplayWarnings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_FontLookup) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextSettings, ___m_FontReferences) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextSettings*, "UnityEngine.TextCore.Text", "TextSettings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap, "UnityEngine.TextCore.Text", "TextSettings/FontReferenceMap");
