#pragma once
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
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine {
class TextAsset;
}
namespace TMPro {
class __TMP_Settings__LineBreakingTable;
}
namespace TMPro {
class TMP_StyleSheet;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12414))
// CS Name: ::TMP_Settings::LineBreakingTable*
class CORDL_TYPE __TMP_Settings__LineBreakingTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field leadingCharacters, offset 0x10, size 0x8
  __declspec(property(get = __get_leadingCharacters, put = __set_leadingCharacters))::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* leadingCharacters;

  /// @brief Field followingCharacters, offset 0x18, size 0x8
  __declspec(property(get = __get_followingCharacters, put = __set_followingCharacters))::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* followingCharacters;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*& __get_leadingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*> const& __get_leadingCharacters() const;

  constexpr void __set_leadingCharacters(::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*& __get_followingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, char16_t>*> const& __get_followingCharacters() const;

  constexpr void __set_followingCharacters(::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* value);

  static inline ::TMPro::__TMP_Settings__LineBreakingTable* New_ctor();

  /// @brief Method .ctor addr 0x2c40510 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Settings__LineBreakingTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Settings__LineBreakingTable(__TMP_Settings__LineBreakingTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Settings__LineBreakingTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Settings__LineBreakingTable(__TMP_Settings__LineBreakingTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Settings__LineBreakingTable();

public:
  /// @brief Field leadingCharacters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* ___leadingCharacters;

  /// @brief Field followingCharacters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* ___followingCharacters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Settings__LineBreakingTable, 0x20>, "Size mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_Settings
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12415))
// CS Name: ::TMPro::TMP_Settings*
class CORDL_TYPE TMP_Settings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using LineBreakingTable = ::TMPro::__TMP_Settings__LineBreakingTable;

  /// @brief Field m_enableWordWrapping, offset 0x18, size 0x1
  __declspec(property(get = __get_m_enableWordWrapping, put = __set_m_enableWordWrapping)) bool m_enableWordWrapping;

  /// @brief Field m_enableKerning, offset 0x19, size 0x1
  __declspec(property(get = __get_m_enableKerning, put = __set_m_enableKerning)) bool m_enableKerning;

  /// @brief Field m_enableExtraPadding, offset 0x1a, size 0x1
  __declspec(property(get = __get_m_enableExtraPadding, put = __set_m_enableExtraPadding)) bool m_enableExtraPadding;

  /// @brief Field m_enableTintAllSprites, offset 0x1b, size 0x1
  __declspec(property(get = __get_m_enableTintAllSprites, put = __set_m_enableTintAllSprites)) bool m_enableTintAllSprites;

  /// @brief Field m_enableParseEscapeCharacters, offset 0x1c, size 0x1
  __declspec(property(get = __get_m_enableParseEscapeCharacters, put = __set_m_enableParseEscapeCharacters)) bool m_enableParseEscapeCharacters;

  /// @brief Field m_EnableRaycastTarget, offset 0x1d, size 0x1
  __declspec(property(get = __get_m_EnableRaycastTarget, put = __set_m_EnableRaycastTarget)) bool m_EnableRaycastTarget;

  /// @brief Field m_GetFontFeaturesAtRuntime, offset 0x1e, size 0x1
  __declspec(property(get = __get_m_GetFontFeaturesAtRuntime, put = __set_m_GetFontFeaturesAtRuntime)) bool m_GetFontFeaturesAtRuntime;

  /// @brief Field m_missingGlyphCharacter, offset 0x20, size 0x4
  __declspec(property(get = __get_m_missingGlyphCharacter, put = __set_m_missingGlyphCharacter)) int32_t m_missingGlyphCharacter;

  /// @brief Field m_warningsDisabled, offset 0x24, size 0x1
  __declspec(property(get = __get_m_warningsDisabled, put = __set_m_warningsDisabled)) bool m_warningsDisabled;

  /// @brief Field m_defaultFontAsset, offset 0x28, size 0x8
  __declspec(property(get = __get_m_defaultFontAsset, put = __set_m_defaultFontAsset))::TMPro::TMP_FontAsset* m_defaultFontAsset;

  /// @brief Field m_defaultFontAssetPath, offset 0x30, size 0x8
  __declspec(property(get = __get_m_defaultFontAssetPath, put = __set_m_defaultFontAssetPath))::StringW m_defaultFontAssetPath;

  /// @brief Field m_defaultFontSize, offset 0x38, size 0x4
  __declspec(property(get = __get_m_defaultFontSize, put = __set_m_defaultFontSize)) float_t m_defaultFontSize;

  /// @brief Field m_defaultAutoSizeMinRatio, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_defaultAutoSizeMinRatio, put = __set_m_defaultAutoSizeMinRatio)) float_t m_defaultAutoSizeMinRatio;

  /// @brief Field m_defaultAutoSizeMaxRatio, offset 0x40, size 0x4
  __declspec(property(get = __get_m_defaultAutoSizeMaxRatio, put = __set_m_defaultAutoSizeMaxRatio)) float_t m_defaultAutoSizeMaxRatio;

  /// @brief Field m_defaultTextMeshProTextContainerSize, offset 0x44, size 0x8
  __declspec(property(get = __get_m_defaultTextMeshProTextContainerSize, put = __set_m_defaultTextMeshProTextContainerSize))::UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize;

  /// @brief Field m_defaultTextMeshProUITextContainerSize, offset 0x4c, size 0x8
  __declspec(property(get = __get_m_defaultTextMeshProUITextContainerSize, put = __set_m_defaultTextMeshProUITextContainerSize))::UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize;

  /// @brief Field m_autoSizeTextContainer, offset 0x54, size 0x1
  __declspec(property(get = __get_m_autoSizeTextContainer, put = __set_m_autoSizeTextContainer)) bool m_autoSizeTextContainer;

  /// @brief Field m_IsTextObjectScaleStatic, offset 0x55, size 0x1
  __declspec(property(get = __get_m_IsTextObjectScaleStatic, put = __set_m_IsTextObjectScaleStatic)) bool m_IsTextObjectScaleStatic;

  /// @brief Field m_fallbackFontAssets, offset 0x58, size 0x8
  __declspec(property(get = __get_m_fallbackFontAssets, put = __set_m_fallbackFontAssets))::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* m_fallbackFontAssets;

  /// @brief Field m_matchMaterialPreset, offset 0x60, size 0x1
  __declspec(property(get = __get_m_matchMaterialPreset, put = __set_m_matchMaterialPreset)) bool m_matchMaterialPreset;

  /// @brief Field m_defaultSpriteAsset, offset 0x68, size 0x8
  __declspec(property(get = __get_m_defaultSpriteAsset, put = __set_m_defaultSpriteAsset))::TMPro::TMP_SpriteAsset* m_defaultSpriteAsset;

  /// @brief Field m_defaultSpriteAssetPath, offset 0x70, size 0x8
  __declspec(property(get = __get_m_defaultSpriteAssetPath, put = __set_m_defaultSpriteAssetPath))::StringW m_defaultSpriteAssetPath;

  /// @brief Field m_enableEmojiSupport, offset 0x78, size 0x1
  __declspec(property(get = __get_m_enableEmojiSupport, put = __set_m_enableEmojiSupport)) bool m_enableEmojiSupport;

  /// @brief Field m_MissingCharacterSpriteUnicode, offset 0x7c, size 0x4
  __declspec(property(get = __get_m_MissingCharacterSpriteUnicode, put = __set_m_MissingCharacterSpriteUnicode)) uint32_t m_MissingCharacterSpriteUnicode;

  /// @brief Field m_defaultColorGradientPresetsPath, offset 0x80, size 0x8
  __declspec(property(get = __get_m_defaultColorGradientPresetsPath, put = __set_m_defaultColorGradientPresetsPath))::StringW m_defaultColorGradientPresetsPath;

  /// @brief Field m_defaultStyleSheet, offset 0x88, size 0x8
  __declspec(property(get = __get_m_defaultStyleSheet, put = __set_m_defaultStyleSheet))::TMPro::TMP_StyleSheet* m_defaultStyleSheet;

  /// @brief Field m_StyleSheetsResourcePath, offset 0x90, size 0x8
  __declspec(property(get = __get_m_StyleSheetsResourcePath, put = __set_m_StyleSheetsResourcePath))::StringW m_StyleSheetsResourcePath;

  /// @brief Field m_leadingCharacters, offset 0x98, size 0x8
  __declspec(property(get = __get_m_leadingCharacters, put = __set_m_leadingCharacters))::UnityEngine::TextAsset* m_leadingCharacters;

  /// @brief Field m_followingCharacters, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_followingCharacters, put = __set_m_followingCharacters))::UnityEngine::TextAsset* m_followingCharacters;

  /// @brief Field m_linebreakingRules, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_linebreakingRules, put = __set_m_linebreakingRules))::TMPro::__TMP_Settings__LineBreakingTable* m_linebreakingRules;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset 0xb0, size 0x1
  __declspec(property(get = __get_m_UseModernHangulLineBreakingRules, put = __set_m_UseModernHangulLineBreakingRules)) bool m_UseModernHangulLineBreakingRules;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::TMPro::TMP_Settings* s_Instance;

  constexpr bool& __get_m_enableWordWrapping();

  constexpr bool const& __get_m_enableWordWrapping() const;

  constexpr void __set_m_enableWordWrapping(bool value);

  constexpr bool& __get_m_enableKerning();

  constexpr bool const& __get_m_enableKerning() const;

  constexpr void __set_m_enableKerning(bool value);

  constexpr bool& __get_m_enableExtraPadding();

  constexpr bool const& __get_m_enableExtraPadding() const;

  constexpr void __set_m_enableExtraPadding(bool value);

  constexpr bool& __get_m_enableTintAllSprites();

  constexpr bool const& __get_m_enableTintAllSprites() const;

  constexpr void __set_m_enableTintAllSprites(bool value);

  constexpr bool& __get_m_enableParseEscapeCharacters();

  constexpr bool const& __get_m_enableParseEscapeCharacters() const;

  constexpr void __set_m_enableParseEscapeCharacters(bool value);

  constexpr bool& __get_m_EnableRaycastTarget();

  constexpr bool const& __get_m_EnableRaycastTarget() const;

  constexpr void __set_m_EnableRaycastTarget(bool value);

  constexpr bool& __get_m_GetFontFeaturesAtRuntime();

  constexpr bool const& __get_m_GetFontFeaturesAtRuntime() const;

  constexpr void __set_m_GetFontFeaturesAtRuntime(bool value);

  constexpr int32_t& __get_m_missingGlyphCharacter();

  constexpr int32_t const& __get_m_missingGlyphCharacter() const;

  constexpr void __set_m_missingGlyphCharacter(int32_t value);

  constexpr bool& __get_m_warningsDisabled();

  constexpr bool const& __get_m_warningsDisabled() const;

  constexpr void __set_m_warningsDisabled(bool value);

  constexpr ::TMPro::TMP_FontAsset*& __get_m_defaultFontAsset();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> const& __get_m_defaultFontAsset() const;

  constexpr void __set_m_defaultFontAsset(::TMPro::TMP_FontAsset* value);

  constexpr ::StringW& __get_m_defaultFontAssetPath();

  constexpr ::StringW const& __get_m_defaultFontAssetPath() const;

  constexpr void __set_m_defaultFontAssetPath(::StringW value);

  constexpr float_t& __get_m_defaultFontSize();

  constexpr float_t const& __get_m_defaultFontSize() const;

  constexpr void __set_m_defaultFontSize(float_t value);

  constexpr float_t& __get_m_defaultAutoSizeMinRatio();

  constexpr float_t const& __get_m_defaultAutoSizeMinRatio() const;

  constexpr void __set_m_defaultAutoSizeMinRatio(float_t value);

  constexpr float_t& __get_m_defaultAutoSizeMaxRatio();

  constexpr float_t const& __get_m_defaultAutoSizeMaxRatio() const;

  constexpr void __set_m_defaultAutoSizeMaxRatio(float_t value);

  constexpr ::UnityEngine::Vector2& __get_m_defaultTextMeshProTextContainerSize();

  constexpr ::UnityEngine::Vector2 const& __get_m_defaultTextMeshProTextContainerSize() const;

  constexpr void __set_m_defaultTextMeshProTextContainerSize(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_defaultTextMeshProUITextContainerSize();

  constexpr ::UnityEngine::Vector2 const& __get_m_defaultTextMeshProUITextContainerSize() const;

  constexpr void __set_m_defaultTextMeshProUITextContainerSize(::UnityEngine::Vector2 value);

  constexpr bool& __get_m_autoSizeTextContainer();

  constexpr bool const& __get_m_autoSizeTextContainer() const;

  constexpr void __set_m_autoSizeTextContainer(bool value);

  constexpr bool& __get_m_IsTextObjectScaleStatic();

  constexpr bool const& __get_m_IsTextObjectScaleStatic() const;

  constexpr void __set_m_IsTextObjectScaleStatic(bool value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*& __get_m_fallbackFontAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*> const& __get_m_fallbackFontAssets() const;

  constexpr void __set_m_fallbackFontAssets(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* value);

  constexpr bool& __get_m_matchMaterialPreset();

  constexpr bool const& __get_m_matchMaterialPreset() const;

  constexpr void __set_m_matchMaterialPreset(bool value);

  constexpr ::TMPro::TMP_SpriteAsset*& __get_m_defaultSpriteAsset();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAsset*> const& __get_m_defaultSpriteAsset() const;

  constexpr void __set_m_defaultSpriteAsset(::TMPro::TMP_SpriteAsset* value);

  constexpr ::StringW& __get_m_defaultSpriteAssetPath();

  constexpr ::StringW const& __get_m_defaultSpriteAssetPath() const;

  constexpr void __set_m_defaultSpriteAssetPath(::StringW value);

  constexpr bool& __get_m_enableEmojiSupport();

  constexpr bool const& __get_m_enableEmojiSupport() const;

  constexpr void __set_m_enableEmojiSupport(bool value);

  constexpr uint32_t& __get_m_MissingCharacterSpriteUnicode();

  constexpr uint32_t const& __get_m_MissingCharacterSpriteUnicode() const;

  constexpr void __set_m_MissingCharacterSpriteUnicode(uint32_t value);

  constexpr ::StringW& __get_m_defaultColorGradientPresetsPath();

  constexpr ::StringW const& __get_m_defaultColorGradientPresetsPath() const;

  constexpr void __set_m_defaultColorGradientPresetsPath(::StringW value);

  constexpr ::TMPro::TMP_StyleSheet*& __get_m_defaultStyleSheet();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_StyleSheet*> const& __get_m_defaultStyleSheet() const;

  constexpr void __set_m_defaultStyleSheet(::TMPro::TMP_StyleSheet* value);

  constexpr ::StringW& __get_m_StyleSheetsResourcePath();

  constexpr ::StringW const& __get_m_StyleSheetsResourcePath() const;

  constexpr void __set_m_StyleSheetsResourcePath(::StringW value);

  constexpr ::UnityEngine::TextAsset*& __get_m_leadingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_m_leadingCharacters() const;

  constexpr void __set_m_leadingCharacters(::UnityEngine::TextAsset* value);

  constexpr ::UnityEngine::TextAsset*& __get_m_followingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_m_followingCharacters() const;

  constexpr void __set_m_followingCharacters(::UnityEngine::TextAsset* value);

  constexpr ::TMPro::__TMP_Settings__LineBreakingTable*& __get_m_linebreakingRules();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_Settings__LineBreakingTable*> const& __get_m_linebreakingRules() const;

  constexpr void __set_m_linebreakingRules(::TMPro::__TMP_Settings__LineBreakingTable* value);

  constexpr bool& __get_m_UseModernHangulLineBreakingRules();

  constexpr bool const& __get_m_UseModernHangulLineBreakingRules() const;

  constexpr void __set_m_UseModernHangulLineBreakingRules(bool value);

  static inline void setStaticF_s_Instance(::TMPro::TMP_Settings* value);

  static inline ::TMPro::TMP_Settings* getStaticF_s_Instance();

  /// @brief Method get_version addr 0x2c3fbd0 size 0x40 virtual false final false
  static inline ::StringW get_version();

  /// @brief Method get_enableWordWrapping addr 0x2c3fc10 size 0x1c virtual false final false
  static inline bool get_enableWordWrapping();

  /// @brief Method get_enableKerning addr 0x2c3fcf8 size 0x1c virtual false final false
  static inline bool get_enableKerning();

  /// @brief Method get_enableExtraPadding addr 0x2c3fd14 size 0x1c virtual false final false
  static inline bool get_enableExtraPadding();

  /// @brief Method get_enableTintAllSprites addr 0x2c3fd30 size 0x1c virtual false final false
  static inline bool get_enableTintAllSprites();

  /// @brief Method get_enableParseEscapeCharacters addr 0x2c3fd4c size 0x1c virtual false final false
  static inline bool get_enableParseEscapeCharacters();

  /// @brief Method get_enableRaycastTarget addr 0x2c3fd68 size 0x1c virtual false final false
  static inline bool get_enableRaycastTarget();

  /// @brief Method get_getFontFeaturesAtRuntime addr 0x2c3fd84 size 0x1c virtual false final false
  static inline bool get_getFontFeaturesAtRuntime();

  /// @brief Method get_missingGlyphCharacter addr 0x2c3fda0 size 0x1c virtual false final false
  static inline int32_t get_missingGlyphCharacter();

  /// @brief Method set_missingGlyphCharacter addr 0x2c3fdbc size 0x20 virtual false final false
  static inline void set_missingGlyphCharacter(int32_t value);

  /// @brief Method get_warningsDisabled addr 0x2c3fddc size 0x1c virtual false final false
  static inline bool get_warningsDisabled();

  /// @brief Method get_defaultFontAsset addr 0x2c3fdf8 size 0x1c virtual false final false
  static inline ::TMPro::TMP_FontAsset* get_defaultFontAsset();

  /// @brief Method get_defaultFontAssetPath addr 0x2c3fe14 size 0x1c virtual false final false
  static inline ::StringW get_defaultFontAssetPath();

  /// @brief Method get_defaultFontSize addr 0x2c3fe30 size 0x1c virtual false final false
  static inline float_t get_defaultFontSize();

  /// @brief Method get_defaultTextAutoSizingMinRatio addr 0x2c3fe4c size 0x1c virtual false final false
  static inline float_t get_defaultTextAutoSizingMinRatio();

  /// @brief Method get_defaultTextAutoSizingMaxRatio addr 0x2c3fe68 size 0x1c virtual false final false
  static inline float_t get_defaultTextAutoSizingMaxRatio();

  /// @brief Method get_defaultTextMeshProTextContainerSize addr 0x2c3fe84 size 0x1c virtual false final false
  static inline ::UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize();

  /// @brief Method get_defaultTextMeshProUITextContainerSize addr 0x2c3fea0 size 0x1c virtual false final false
  static inline ::UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize();

  /// @brief Method get_autoSizeTextContainer addr 0x2c3febc size 0x1c virtual false final false
  static inline bool get_autoSizeTextContainer();

  /// @brief Method get_isTextObjectScaleStatic addr 0x2c3fed8 size 0x1c virtual false final false
  static inline bool get_isTextObjectScaleStatic();

  /// @brief Method set_isTextObjectScaleStatic addr 0x2c3fef4 size 0x24 virtual false final false
  static inline void set_isTextObjectScaleStatic(bool value);

  /// @brief Method get_fallbackFontAssets addr 0x2c3ff18 size 0x1c virtual false final false
  static inline ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* get_fallbackFontAssets();

  /// @brief Method get_matchMaterialPreset addr 0x2c3ff34 size 0x1c virtual false final false
  static inline bool get_matchMaterialPreset();

  /// @brief Method get_defaultSpriteAsset addr 0x2c3ff50 size 0x1c virtual false final false
  static inline ::TMPro::TMP_SpriteAsset* get_defaultSpriteAsset();

  /// @brief Method get_defaultSpriteAssetPath addr 0x2c3ff6c size 0x1c virtual false final false
  static inline ::StringW get_defaultSpriteAssetPath();

  /// @brief Method get_enableEmojiSupport addr 0x2c3ff88 size 0x1c virtual false final false
  static inline bool get_enableEmojiSupport();

  /// @brief Method set_enableEmojiSupport addr 0x2c3ffa4 size 0x24 virtual false final false
  static inline void set_enableEmojiSupport(bool value);

  /// @brief Method get_missingCharacterSpriteUnicode addr 0x2c3ffc8 size 0x1c virtual false final false
  static inline uint32_t get_missingCharacterSpriteUnicode();

  /// @brief Method set_missingCharacterSpriteUnicode addr 0x2c3ffe4 size 0x20 virtual false final false
  static inline void set_missingCharacterSpriteUnicode(uint32_t value);

  /// @brief Method get_defaultColorGradientPresetsPath addr 0x2c40004 size 0x1c virtual false final false
  static inline ::StringW get_defaultColorGradientPresetsPath();

  /// @brief Method get_defaultStyleSheet addr 0x2c40020 size 0x1c virtual false final false
  static inline ::TMPro::TMP_StyleSheet* get_defaultStyleSheet();

  /// @brief Method get_styleSheetsResourcePath addr 0x2c4003c size 0x1c virtual false final false
  static inline ::StringW get_styleSheetsResourcePath();

  /// @brief Method get_leadingCharacters addr 0x2c40058 size 0x1c virtual false final false
  static inline ::UnityEngine::TextAsset* get_leadingCharacters();

  /// @brief Method get_followingCharacters addr 0x2c40074 size 0x1c virtual false final false
  static inline ::UnityEngine::TextAsset* get_followingCharacters();

  /// @brief Method get_linebreakingRules addr 0x2c40090 size 0x30 virtual false final false
  static inline ::TMPro::__TMP_Settings__LineBreakingTable* get_linebreakingRules();

  /// @brief Method get_useModernHangulLineBreakingRules addr 0x2c401d0 size 0x1c virtual false final false
  static inline bool get_useModernHangulLineBreakingRules();

  /// @brief Method set_useModernHangulLineBreakingRules addr 0x2c401ec size 0x24 virtual false final false
  static inline void set_useModernHangulLineBreakingRules(bool value);

  /// @brief Method get_instance addr 0x2c3fc2c size 0xcc virtual false final false
  static inline ::TMPro::TMP_Settings* get_instance();

  /// @brief Method LoadDefaultSettings addr 0x2c40210 size 0xf8 virtual false final false
  static inline ::TMPro::TMP_Settings* LoadDefaultSettings();

  /// @brief Method GetSettings addr 0x2c40308 size 0x7c virtual false final false
  static inline ::TMPro::TMP_Settings* GetSettings();

  /// @brief Method GetFontAsset addr 0x2c40384 size 0x84 virtual false final false
  static inline ::TMPro::TMP_FontAsset* GetFontAsset();

  /// @brief Method GetSpriteAsset addr 0x2c40408 size 0x84 virtual false final false
  static inline ::TMPro::TMP_SpriteAsset* GetSpriteAsset();

  /// @brief Method GetStyleSheet addr 0x2c4048c size 0x84 virtual false final false
  static inline ::TMPro::TMP_StyleSheet* GetStyleSheet();

  /// @brief Method LoadLinebreakingRules addr 0x2c400c0 size 0x110 virtual false final false
  static inline void LoadLinebreakingRules();

  /// @brief Method GetCharacters addr 0x2c40518 size 0x120 virtual false final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, char16_t>* GetCharacters(::UnityEngine::TextAsset* file);

  static inline ::TMPro::TMP_Settings* New_ctor();

  /// @brief Method .ctor addr 0x2c40638 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Settings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Settings(TMP_Settings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Settings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Settings(TMP_Settings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Settings();

public:
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
  ::TMPro::TMP_FontAsset* ___m_defaultFontAsset;

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
  ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* ___m_fallbackFontAssets;

  /// @brief Field m_matchMaterialPreset, offset: 0x60, size: 0x1, def value: None
  bool ___m_matchMaterialPreset;

  /// @brief Field m_defaultSpriteAsset, offset: 0x68, size: 0x8, def value: None
  ::TMPro::TMP_SpriteAsset* ___m_defaultSpriteAsset;

  /// @brief Field m_defaultSpriteAssetPath, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_defaultSpriteAssetPath;

  /// @brief Field m_enableEmojiSupport, offset: 0x78, size: 0x1, def value: None
  bool ___m_enableEmojiSupport;

  /// @brief Field m_MissingCharacterSpriteUnicode, offset: 0x7c, size: 0x4, def value: None
  uint32_t ___m_MissingCharacterSpriteUnicode;

  /// @brief Field m_defaultColorGradientPresetsPath, offset: 0x80, size: 0x8, def value: None
  ::StringW ___m_defaultColorGradientPresetsPath;

  /// @brief Field m_defaultStyleSheet, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TMP_StyleSheet* ___m_defaultStyleSheet;

  /// @brief Field m_StyleSheetsResourcePath, offset: 0x90, size: 0x8, def value: None
  ::StringW ___m_StyleSheetsResourcePath;

  /// @brief Field m_leadingCharacters, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___m_leadingCharacters;

  /// @brief Field m_followingCharacters, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___m_followingCharacters;

  /// @brief Field m_linebreakingRules, offset: 0xa8, size: 0x8, def value: None
  ::TMPro::__TMP_Settings__LineBreakingTable* ___m_linebreakingRules;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset: 0xb0, size: 0x1, def value: None
  bool ___m_UseModernHangulLineBreakingRules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Settings, 0xb8>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Settings);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Settings*, "TMPro", "TMP_Settings");
NEED_NO_BOX(::TMPro::__TMP_Settings__LineBreakingTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Settings__LineBreakingTable*, "TMPro", "TMP_Settings/LineBreakingTable");
