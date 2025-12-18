#pragma once
// IWYU pragma private; include "TMPro/TMP_Settings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextWrappingModes_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Settings)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_Asset;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Settings_LineBreakingTable;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_StyleSheet;
}
namespace TMPro {
struct TextWrappingModes;
}
namespace UnityEngine::TextCore {
struct OTL_FeatureTag;
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
class TMP_Settings_LineBreakingTable;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Settings);
MARK_REF_PTR_T(::TMPro::TMP_Settings_LineBreakingTable);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Settings/LineBreakingTable
class CORDL_TYPE TMP_Settings_LineBreakingTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field followingCharacters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_followingCharacters, put = __cordl_internal_set_followingCharacters)) ::System::Collections::Generic::HashSet_1<uint32_t>* followingCharacters;

  /// @brief Field leadingCharacters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_leadingCharacters, put = __cordl_internal_set_leadingCharacters)) ::System::Collections::Generic::HashSet_1<uint32_t>* leadingCharacters;

  static inline ::TMPro::TMP_Settings_LineBreakingTable* New_ctor();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_followingCharacters() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_followingCharacters();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_leadingCharacters() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_leadingCharacters();

  constexpr void __cordl_internal_set_followingCharacters(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_leadingCharacters(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x67e5484, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Settings_LineBreakingTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Settings_LineBreakingTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Settings_LineBreakingTable(TMP_Settings_LineBreakingTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Settings_LineBreakingTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Settings_LineBreakingTable(TMP_Settings_LineBreakingTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15943 };

  /// @brief Field leadingCharacters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___leadingCharacters;

  /// @brief Field followingCharacters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___followingCharacters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Settings_LineBreakingTable, ___leadingCharacters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings_LineBreakingTable, ___followingCharacters) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Settings_LineBreakingTable, 0x20>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.TextWrappingModes, UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Settings
class CORDL_TYPE TMP_Settings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using LineBreakingTable = ::TMPro::TMP_Settings_LineBreakingTable;

  /// @brief Field assetVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assetVersion, put = __cordl_internal_set_assetVersion)) ::StringW assetVersion;

  /// @brief Field m_ActiveFontFeatures, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveFontFeatures,
                      put = __cordl_internal_set_m_ActiveFontFeatures)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* m_ActiveFontFeatures;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDynamicDataOnBuild, put = __cordl_internal_set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_EmojiFallbackTextAssets, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmojiFallbackTextAssets,
                      put = __cordl_internal_set_m_EmojiFallbackTextAssets)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* m_EmojiFallbackTextAssets;

  /// @brief Field m_EnableRaycastTarget, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRaycastTarget, put = __cordl_internal_set_m_EnableRaycastTarget)) bool m_EnableRaycastTarget;

  /// @brief Field m_GetFontFeaturesAtRuntime, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GetFontFeaturesAtRuntime, put = __cordl_internal_set_m_GetFontFeaturesAtRuntime)) bool m_GetFontFeaturesAtRuntime;

  /// @brief Field m_HideSubTextObjects, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideSubTextObjects, put = __cordl_internal_set_m_HideSubTextObjects)) bool m_HideSubTextObjects;

  /// @brief Field m_IsTextObjectScaleStatic, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextObjectScaleStatic, put = __cordl_internal_set_m_IsTextObjectScaleStatic)) bool m_IsTextObjectScaleStatic;

  /// @brief Field m_MissingCharacterSpriteUnicode, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MissingCharacterSpriteUnicode, put = __cordl_internal_set_m_MissingCharacterSpriteUnicode)) uint32_t m_MissingCharacterSpriteUnicode;

  /// @brief Field m_StyleSheetsResourcePath, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleSheetsResourcePath, put = __cordl_internal_set_m_StyleSheetsResourcePath)) ::StringW m_StyleSheetsResourcePath;

  /// @brief Field m_TextWrappingMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextWrappingMode, put = __cordl_internal_set_m_TextWrappingMode)) ::TMPro::TextWrappingModes m_TextWrappingMode;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseModernHangulLineBreakingRules, put = __cordl_internal_set_m_UseModernHangulLineBreakingRules)) bool m_UseModernHangulLineBreakingRules;

  /// @brief Field m_autoSizeTextContainer, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_autoSizeTextContainer, put = __cordl_internal_set_m_autoSizeTextContainer)) bool m_autoSizeTextContainer;

  /// @brief Field m_defaultAutoSizeMaxRatio, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultAutoSizeMaxRatio, put = __cordl_internal_set_m_defaultAutoSizeMaxRatio)) float_t m_defaultAutoSizeMaxRatio;

  /// @brief Field m_defaultAutoSizeMinRatio, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultAutoSizeMinRatio, put = __cordl_internal_set_m_defaultAutoSizeMinRatio)) float_t m_defaultAutoSizeMinRatio;

  /// @brief Field m_defaultColorGradientPresetsPath, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultColorGradientPresetsPath, put = __cordl_internal_set_m_defaultColorGradientPresetsPath)) ::StringW m_defaultColorGradientPresetsPath;

  /// @brief Field m_defaultFontAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultFontAsset, put = __cordl_internal_set_m_defaultFontAsset)) ::UnityW<::TMPro::TMP_FontAsset> m_defaultFontAsset;

  /// @brief Field m_defaultFontAssetPath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultFontAssetPath, put = __cordl_internal_set_m_defaultFontAssetPath)) ::StringW m_defaultFontAssetPath;

  /// @brief Field m_defaultFontSize, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_defaultFontSize, put = __cordl_internal_set_m_defaultFontSize)) float_t m_defaultFontSize;

  /// @brief Field m_defaultSpriteAsset, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultSpriteAsset, put = __cordl_internal_set_m_defaultSpriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> m_defaultSpriteAsset;

  /// @brief Field m_defaultSpriteAssetPath, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultSpriteAssetPath, put = __cordl_internal_set_m_defaultSpriteAssetPath)) ::StringW m_defaultSpriteAssetPath;

  /// @brief Field m_defaultStyleSheet, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultStyleSheet, put = __cordl_internal_set_m_defaultStyleSheet)) ::UnityW<::TMPro::TMP_StyleSheet> m_defaultStyleSheet;

  /// @brief Field m_defaultTextMeshProTextContainerSize, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultTextMeshProTextContainerSize,
                      put = __cordl_internal_set_m_defaultTextMeshProTextContainerSize)) ::UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize;

  /// @brief Field m_defaultTextMeshProUITextContainerSize, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultTextMeshProUITextContainerSize,
                      put = __cordl_internal_set_m_defaultTextMeshProUITextContainerSize)) ::UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize;

  /// @brief Field m_enableEmojiSupport, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableEmojiSupport, put = __cordl_internal_set_m_enableEmojiSupport)) bool m_enableEmojiSupport;

  /// @brief Field m_enableExtraPadding, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableExtraPadding, put = __cordl_internal_set_m_enableExtraPadding)) bool m_enableExtraPadding;

  /// @brief Field m_enableKerning, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableKerning, put = __cordl_internal_set_m_enableKerning)) bool m_enableKerning;

  /// @brief Field m_enableParseEscapeCharacters, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableParseEscapeCharacters, put = __cordl_internal_set_m_enableParseEscapeCharacters)) bool m_enableParseEscapeCharacters;

  /// @brief Field m_enableTintAllSprites, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableTintAllSprites, put = __cordl_internal_set_m_enableTintAllSprites)) bool m_enableTintAllSprites;

  /// @brief Field m_fallbackFontAssets, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fallbackFontAssets,
                      put = __cordl_internal_set_m_fallbackFontAssets)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* m_fallbackFontAssets;

  /// @brief Field m_followingCharacters, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_followingCharacters, put = __cordl_internal_set_m_followingCharacters)) ::UnityW<::UnityEngine::TextAsset> m_followingCharacters;

  /// @brief Field m_leadingCharacters, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_leadingCharacters, put = __cordl_internal_set_m_leadingCharacters)) ::UnityW<::UnityEngine::TextAsset> m_leadingCharacters;

  /// @brief Field m_linebreakingRules, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_linebreakingRules, put = __cordl_internal_set_m_linebreakingRules)) ::TMPro::TMP_Settings_LineBreakingTable* m_linebreakingRules;

  /// @brief Field m_matchMaterialPreset, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_matchMaterialPreset, put = __cordl_internal_set_m_matchMaterialPreset)) bool m_matchMaterialPreset;

  /// @brief Field m_missingGlyphCharacter, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_missingGlyphCharacter, put = __cordl_internal_set_m_missingGlyphCharacter)) int32_t m_missingGlyphCharacter;

  /// @brief Field m_warningsDisabled, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_warningsDisabled, put = __cordl_internal_set_m_warningsDisabled)) bool m_warningsDisabled;

  /// @brief Field s_CurrentAssetVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentAssetVersion, put = setStaticF_s_CurrentAssetVersion)) ::StringW s_CurrentAssetVersion;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityW<::TMPro::TMP_Settings> s_Instance;

  /// @brief Method GetCharacters, addr 0x67e5488, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* GetCharacters(::UnityEngine::TextAsset* file);

  /// @brief Method GetFontAsset, addr 0x67e5244, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> GetFontAsset();

  /// @brief Method GetSettings, addr 0x67e518c, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> GetSettings();

  /// @brief Method GetSpriteAsset, addr 0x67e5304, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> GetSpriteAsset();

  /// @brief Method GetStyleSheet, addr 0x67e53c4, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_StyleSheet> GetStyleSheet();

  /// @brief Method LoadDefaultSettings, addr 0x67e5050, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> LoadDefaultSettings();

  /// @brief Method LoadLinebreakingRules, addr 0x67e4d88, size 0x16c, virtual false, abstract: false, final false
  static inline void LoadLinebreakingRules();

  static inline ::TMPro::TMP_Settings* New_ctor();

  /// @brief Method SetAssetVersion, addr 0x67e39cc, size 0x64, virtual false, abstract: false, final false
  inline void SetAssetVersion();

  constexpr ::StringW const& __cordl_internal_get_assetVersion() const;

  constexpr ::StringW& __cordl_internal_get_assetVersion();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* const& __cordl_internal_get_m_ActiveFontFeatures() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>*& __cordl_internal_get_m_ActiveFontFeatures();

  constexpr bool const& __cordl_internal_get_m_ClearDynamicDataOnBuild() const;

  constexpr bool& __cordl_internal_get_m_ClearDynamicDataOnBuild();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* const& __cordl_internal_get_m_EmojiFallbackTextAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*& __cordl_internal_get_m_EmojiFallbackTextAssets();

  constexpr bool const& __cordl_internal_get_m_EnableRaycastTarget() const;

  constexpr bool& __cordl_internal_get_m_EnableRaycastTarget();

  constexpr bool const& __cordl_internal_get_m_GetFontFeaturesAtRuntime() const;

  constexpr bool& __cordl_internal_get_m_GetFontFeaturesAtRuntime();

  constexpr bool const& __cordl_internal_get_m_HideSubTextObjects() const;

  constexpr bool& __cordl_internal_get_m_HideSubTextObjects();

  constexpr bool const& __cordl_internal_get_m_IsTextObjectScaleStatic() const;

  constexpr bool& __cordl_internal_get_m_IsTextObjectScaleStatic();

  constexpr uint32_t const& __cordl_internal_get_m_MissingCharacterSpriteUnicode() const;

  constexpr uint32_t& __cordl_internal_get_m_MissingCharacterSpriteUnicode();

  constexpr ::StringW const& __cordl_internal_get_m_StyleSheetsResourcePath() const;

  constexpr ::StringW& __cordl_internal_get_m_StyleSheetsResourcePath();

  constexpr ::TMPro::TextWrappingModes const& __cordl_internal_get_m_TextWrappingMode() const;

  constexpr ::TMPro::TextWrappingModes& __cordl_internal_get_m_TextWrappingMode();

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

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& __cordl_internal_get_m_fallbackFontAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get_m_fallbackFontAssets();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_followingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_followingCharacters();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_leadingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_leadingCharacters();

  constexpr ::TMPro::TMP_Settings_LineBreakingTable* const& __cordl_internal_get_m_linebreakingRules() const;

  constexpr ::TMPro::TMP_Settings_LineBreakingTable*& __cordl_internal_get_m_linebreakingRules();

  constexpr bool const& __cordl_internal_get_m_matchMaterialPreset() const;

  constexpr bool& __cordl_internal_get_m_matchMaterialPreset();

  constexpr int32_t const& __cordl_internal_get_m_missingGlyphCharacter() const;

  constexpr int32_t& __cordl_internal_get_m_missingGlyphCharacter();

  constexpr bool const& __cordl_internal_get_m_warningsDisabled() const;

  constexpr bool& __cordl_internal_get_m_warningsDisabled();

  constexpr void __cordl_internal_set_assetVersion(::StringW value);

  constexpr void __cordl_internal_set_m_ActiveFontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* value);

  constexpr void __cordl_internal_set_m_ClearDynamicDataOnBuild(bool value);

  constexpr void __cordl_internal_set_m_EmojiFallbackTextAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* value);

  constexpr void __cordl_internal_set_m_EnableRaycastTarget(bool value);

  constexpr void __cordl_internal_set_m_GetFontFeaturesAtRuntime(bool value);

  constexpr void __cordl_internal_set_m_HideSubTextObjects(bool value);

  constexpr void __cordl_internal_set_m_IsTextObjectScaleStatic(bool value);

  constexpr void __cordl_internal_set_m_MissingCharacterSpriteUnicode(uint32_t value);

  constexpr void __cordl_internal_set_m_StyleSheetsResourcePath(::StringW value);

  constexpr void __cordl_internal_set_m_TextWrappingMode(::TMPro::TextWrappingModes value);

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

  constexpr void __cordl_internal_set_m_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  constexpr void __cordl_internal_set_m_followingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_leadingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_linebreakingRules(::TMPro::TMP_Settings_LineBreakingTable* value);

  constexpr void __cordl_internal_set_m_matchMaterialPreset(bool value);

  constexpr void __cordl_internal_set_m_missingGlyphCharacter(int32_t value);

  constexpr void __cordl_internal_set_m_warningsDisabled(bool value);

  /// @brief Method .ctor, addr 0x67e557c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_CurrentAssetVersion();

  static inline ::UnityW<::TMPro::TMP_Settings> getStaticF_s_Instance();

  /// @brief Method get_autoSizeTextContainer, addr 0x67e4490, size 0x60, virtual false, abstract: false, final false
  static inline bool get_autoSizeTextContainer();

  /// @brief Method get_clearDynamicDataOnBuild, addr 0x67e40cc, size 0x60, virtual false, abstract: false, final false
  static inline bool get_clearDynamicDataOnBuild();

  /// @brief Method get_defaultColorGradientPresetsPath, addr 0x67e4ab0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW get_defaultColorGradientPresetsPath();

  /// @brief Method get_defaultFontAsset, addr 0x67e418c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> get_defaultFontAsset();

  /// @brief Method get_defaultFontAssetPath, addr 0x67e4250, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW get_defaultFontAssetPath();

  /// @brief Method get_defaultFontSize, addr 0x67e42b0, size 0x60, virtual false, abstract: false, final false
  static inline float_t get_defaultFontSize();

  /// @brief Method get_defaultSpriteAsset, addr 0x67e473c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> get_defaultSpriteAsset();

  /// @brief Method get_defaultSpriteAssetPath, addr 0x67e4800, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW get_defaultSpriteAssetPath();

  /// @brief Method get_defaultStyleSheet, addr 0x67e4b10, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_StyleSheet> get_defaultStyleSheet();

  /// @brief Method get_defaultTextAutoSizingMaxRatio, addr 0x67e4370, size 0x60, virtual false, abstract: false, final false
  static inline float_t get_defaultTextAutoSizingMaxRatio();

  /// @brief Method get_defaultTextAutoSizingMinRatio, addr 0x67e4310, size 0x60, virtual false, abstract: false, final false
  static inline float_t get_defaultTextAutoSizingMinRatio();

  /// @brief Method get_defaultTextMeshProTextContainerSize, addr 0x67e43d0, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize();

  /// @brief Method get_defaultTextMeshProUITextContainerSize, addr 0x67e4430, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize();

  /// @brief Method get_emojiFallbackTextAssets, addr 0x67e49ec, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* get_emojiFallbackTextAssets();

  /// @brief Method get_enableEmojiSupport, addr 0x67e4860, size 0x60, virtual false, abstract: false, final false
  static inline bool get_enableEmojiSupport();

  /// @brief Method get_enableExtraPadding, addr 0x67e3e28, size 0x60, virtual false, abstract: false, final false
  static inline bool get_enableExtraPadding();

  /// @brief Method get_enableKerning, addr 0x67e3cfc, size 0xcc, virtual false, abstract: false, final false
  static inline bool get_enableKerning();

  /// @brief Method get_enableParseEscapeCharacters, addr 0x67e3ee8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_enableParseEscapeCharacters();

  /// @brief Method get_enableRaycastTarget, addr 0x67e3f48, size 0x60, virtual false, abstract: false, final false
  static inline bool get_enableRaycastTarget();

  /// @brief Method get_enableTintAllSprites, addr 0x67e3e88, size 0x60, virtual false, abstract: false, final false
  static inline bool get_enableTintAllSprites();

  /// @brief Method get_fallbackFontAssets, addr 0x67e45b8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* get_fallbackFontAssets();

  /// @brief Method get_followingCharacters, addr 0x67e4c94, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextAsset> get_followingCharacters();

  /// @brief Method get_fontFeatures, addr 0x67e3dc8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* get_fontFeatures();

  /// @brief Method get_getFontFeaturesAtRuntime, addr 0x67e3fa8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_getFontFeaturesAtRuntime();

  /// @brief Method get_hideSubTextObjects, addr 0x67e46dc, size 0x60, virtual false, abstract: false, final false
  static inline bool get_hideSubTextObjects();

  /// @brief Method get_instance, addr 0x67e3a90, size 0x26c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> get_instance();

  /// @brief Method get_isTMPSettingsNull, addr 0x67e4fbc, size 0x94, virtual false, abstract: false, final false
  static inline bool get_isTMPSettingsNull();

  /// @brief Method get_isTextObjectScaleStatic, addr 0x67e44f0, size 0x60, virtual false, abstract: false, final false
  static inline bool get_isTextObjectScaleStatic();

  /// @brief Method get_leadingCharacters, addr 0x67e4c34, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextAsset> get_leadingCharacters();

  /// @brief Method get_linebreakingRules, addr 0x67e4cf4, size 0x94, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Settings_LineBreakingTable* get_linebreakingRules();

  /// @brief Method get_matchMaterialPreset, addr 0x67e467c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_matchMaterialPreset();

  /// @brief Method get_missingCharacterSpriteUnicode, addr 0x67e4928, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t get_missingCharacterSpriteUnicode();

  /// @brief Method get_missingGlyphCharacter, addr 0x67e4008, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_missingGlyphCharacter();

  /// @brief Method get_styleSheetsResourcePath, addr 0x67e4bd4, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW get_styleSheetsResourcePath();

  /// @brief Method get_textWrappingMode, addr 0x67e3a30, size 0x60, virtual false, abstract: false, final false
  static inline ::TMPro::TextWrappingModes get_textWrappingMode();

  /// @brief Method get_useModernHangulLineBreakingRules, addr 0x67e4ef4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_useModernHangulLineBreakingRules();

  /// @brief Method get_version, addr 0x67e3988, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_version();

  /// @brief Method get_warningsDisabled, addr 0x67e412c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_warningsDisabled();

  static inline void setStaticF_s_CurrentAssetVersion(::StringW value);

  static inline void setStaticF_s_Instance(::UnityW<::TMPro::TMP_Settings> value);

  /// @brief Method set_defaultFontAsset, addr 0x67e41ec, size 0x64, virtual false, abstract: false, final false
  static inline void set_defaultFontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method set_defaultSpriteAsset, addr 0x67e479c, size 0x64, virtual false, abstract: false, final false
  static inline void set_defaultSpriteAsset(::TMPro::TMP_SpriteAsset* value);

  /// @brief Method set_defaultStyleSheet, addr 0x67e4b70, size 0x64, virtual false, abstract: false, final false
  static inline void set_defaultStyleSheet(::TMPro::TMP_StyleSheet* value);

  /// @brief Method set_emojiFallbackTextAssets, addr 0x67e4a4c, size 0x64, virtual false, abstract: false, final false
  static inline void set_emojiFallbackTextAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* value);

  /// @brief Method set_enableEmojiSupport, addr 0x67e48c0, size 0x68, virtual false, abstract: false, final false
  static inline void set_enableEmojiSupport(bool value);

  /// @brief Method set_fallbackFontAssets, addr 0x67e4618, size 0x64, virtual false, abstract: false, final false
  static inline void set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method set_isTextObjectScaleStatic, addr 0x67e4550, size 0x68, virtual false, abstract: false, final false
  static inline void set_isTextObjectScaleStatic(bool value);

  /// @brief Method set_missingCharacterSpriteUnicode, addr 0x67e4988, size 0x64, virtual false, abstract: false, final false
  static inline void set_missingCharacterSpriteUnicode(uint32_t value);

  /// @brief Method set_missingGlyphCharacter, addr 0x67e4068, size 0x64, virtual false, abstract: false, final false
  static inline void set_missingGlyphCharacter(int32_t value);

  /// @brief Method set_useModernHangulLineBreakingRules, addr 0x67e4f54, size 0x68, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15944 };

  /// @brief Field assetVersion, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assetVersion;

  /// @brief Field m_TextWrappingMode, offset: 0x20, size: 0x4, def value: None
  ::TMPro::TextWrappingModes ___m_TextWrappingMode;

  /// @brief Field m_enableKerning, offset: 0x24, size: 0x1, def value: None
  bool ___m_enableKerning;

  /// @brief Field m_ActiveFontFeatures, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* ___m_ActiveFontFeatures;

  /// @brief Field m_enableExtraPadding, offset: 0x30, size: 0x1, def value: None
  bool ___m_enableExtraPadding;

  /// @brief Field m_enableTintAllSprites, offset: 0x31, size: 0x1, def value: None
  bool ___m_enableTintAllSprites;

  /// @brief Field m_enableParseEscapeCharacters, offset: 0x32, size: 0x1, def value: None
  bool ___m_enableParseEscapeCharacters;

  /// @brief Field m_EnableRaycastTarget, offset: 0x33, size: 0x1, def value: None
  bool ___m_EnableRaycastTarget;

  /// @brief Field m_GetFontFeaturesAtRuntime, offset: 0x34, size: 0x1, def value: None
  bool ___m_GetFontFeaturesAtRuntime;

  /// @brief Field m_missingGlyphCharacter, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_missingGlyphCharacter;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0x3c, size: 0x1, def value: None
  bool ___m_ClearDynamicDataOnBuild;

  /// @brief Field m_warningsDisabled, offset: 0x3d, size: 0x1, def value: None
  bool ___m_warningsDisabled;

  /// @brief Field m_defaultFontAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_defaultFontAsset;

  /// @brief Field m_defaultFontAssetPath, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_defaultFontAssetPath;

  /// @brief Field m_defaultFontSize, offset: 0x50, size: 0x4, def value: None
  float_t ___m_defaultFontSize;

  /// @brief Field m_defaultAutoSizeMinRatio, offset: 0x54, size: 0x4, def value: None
  float_t ___m_defaultAutoSizeMinRatio;

  /// @brief Field m_defaultAutoSizeMaxRatio, offset: 0x58, size: 0x4, def value: None
  float_t ___m_defaultAutoSizeMaxRatio;

  /// @brief Field m_defaultTextMeshProTextContainerSize, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_defaultTextMeshProTextContainerSize;

  /// @brief Field m_defaultTextMeshProUITextContainerSize, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_defaultTextMeshProUITextContainerSize;

  /// @brief Field m_autoSizeTextContainer, offset: 0x6c, size: 0x1, def value: None
  bool ___m_autoSizeTextContainer;

  /// @brief Field m_IsTextObjectScaleStatic, offset: 0x6d, size: 0x1, def value: None
  bool ___m_IsTextObjectScaleStatic;

  /// @brief Field m_fallbackFontAssets, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ___m_fallbackFontAssets;

  /// @brief Field m_matchMaterialPreset, offset: 0x78, size: 0x1, def value: None
  bool ___m_matchMaterialPreset;

  /// @brief Field m_HideSubTextObjects, offset: 0x79, size: 0x1, def value: None
  bool ___m_HideSubTextObjects;

  /// @brief Field m_defaultSpriteAsset, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_defaultSpriteAsset;

  /// @brief Field m_defaultSpriteAssetPath, offset: 0x88, size: 0x8, def value: None
  ::StringW ___m_defaultSpriteAssetPath;

  /// @brief Field m_enableEmojiSupport, offset: 0x90, size: 0x1, def value: None
  bool ___m_enableEmojiSupport;

  /// @brief Field m_MissingCharacterSpriteUnicode, offset: 0x94, size: 0x4, def value: None
  uint32_t ___m_MissingCharacterSpriteUnicode;

  /// @brief Field m_EmojiFallbackTextAssets, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* ___m_EmojiFallbackTextAssets;

  /// @brief Field m_defaultColorGradientPresetsPath, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_defaultColorGradientPresetsPath;

  /// @brief Field m_defaultStyleSheet, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_StyleSheet> ___m_defaultStyleSheet;

  /// @brief Field m_StyleSheetsResourcePath, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_StyleSheetsResourcePath;

  /// @brief Field m_leadingCharacters, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_leadingCharacters;

  /// @brief Field m_followingCharacters, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_followingCharacters;

  /// @brief Field m_linebreakingRules, offset: 0xc8, size: 0x8, def value: None
  ::TMPro::TMP_Settings_LineBreakingTable* ___m_linebreakingRules;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset: 0xd0, size: 0x1, def value: None
  bool ___m_UseModernHangulLineBreakingRules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Settings, ___assetVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_TextWrappingMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableKerning) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_ActiveFontFeatures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableExtraPadding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableTintAllSprites) == 0x31, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableParseEscapeCharacters) == 0x32, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_EnableRaycastTarget) == 0x33, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_GetFontFeaturesAtRuntime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_missingGlyphCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_ClearDynamicDataOnBuild) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_warningsDisabled) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultFontAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultFontAssetPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultFontSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultAutoSizeMinRatio) == 0x54, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultAutoSizeMaxRatio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultTextMeshProTextContainerSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultTextMeshProUITextContainerSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_autoSizeTextContainer) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_IsTextObjectScaleStatic) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_fallbackFontAssets) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_matchMaterialPreset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_HideSubTextObjects) == 0x79, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultSpriteAsset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultSpriteAssetPath) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_enableEmojiSupport) == 0x90, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_MissingCharacterSpriteUnicode) == 0x94, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_EmojiFallbackTextAssets) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultColorGradientPresetsPath) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_defaultStyleSheet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_StyleSheetsResourcePath) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_leadingCharacters) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_followingCharacters) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_linebreakingRules) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Settings, ___m_UseModernHangulLineBreakingRules) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Settings, 0xd8>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Settings);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Settings*, "TMPro", "TMP_Settings");
NEED_NO_BOX(::TMPro::TMP_Settings_LineBreakingTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Settings_LineBreakingTable*, "TMPro", "TMP_Settings/LineBreakingTable");
