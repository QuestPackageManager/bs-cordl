#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__AtlasPopulationMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FontAsset)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::Text {
struct AtlasPopulationMode;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace UnityEngine::TextCore::Text {
struct FontAssetCreationEditorSettings;
}
namespace UnityEngine::TextCore::Text {
class FontAsset___c;
}
namespace UnityEngine::TextCore::Text {
class FontFeatureTable;
}
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class FontAsset___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontAsset);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontAsset___c);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FontAsset/<>c
class CORDL_TYPE FontAsset___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::TextCore::Text::FontAsset___c* __9;

  /// @brief Field <>9__151_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__151_0, put = setStaticF___9__151_0)) ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* __9__151_0;

  /// @brief Field <>9__152_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__152_0, put = setStaticF___9__152_0)) ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* __9__152_0;

  static inline ::UnityEngine::TextCore::Text::FontAsset___c* New_ctor();

  /// @brief Method <SortCharacterTable>b__151_0, addr 0x4926f94, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__151_0(::UnityEngine::TextCore::Text::Character* c);

  /// @brief Method <SortGlyphTable>b__152_0, addr 0x4926fac, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__152_0(::UnityEngine::TextCore::Glyph* c);

  /// @brief Method .ctor, addr 0x4926f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::FontAsset___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* getStaticF___9__151_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* getStaticF___9__152_0();

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::FontAsset___c* value);

  static inline void setStaticF___9__151_0(::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* value);

  static inline void setStaticF___9__152_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAsset___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontAsset___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontAsset___c(FontAsset___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontAsset___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontAsset___c(FontAsset___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAsset___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.TextCore.FaceInfo, UnityEngine.TextCore.LowLevel.GlyphRenderMode, UnityEngine.TextCore.Text.AtlasPopulationMode,
// UnityEngine.TextCore.Text.FontAssetCreationEditorSettings, UnityEngine.TextCore.Text.TextAsset
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FontAsset
class CORDL_TYPE FontAsset : public ::UnityEngine::TextCore::Text::TextAsset {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::FontAsset___c;

  /// @brief Field InternalDynamicOS, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get_InternalDynamicOS, put = __cordl_internal_set_InternalDynamicOS)) bool InternalDynamicOS;

  /// @brief Field IsFontAssetLookupTablesDirty, offset 0x19a, size 0x1
  __declspec(property(get = __cordl_internal_get_IsFontAssetLookupTablesDirty, put = __cordl_internal_set_IsFontAssetLookupTablesDirty)) bool IsFontAssetLookupTablesDirty;

  __declspec(property(get = get_atlasHeight, put = set_atlasHeight)) int32_t atlasHeight;

  __declspec(property(get = get_atlasPadding, put = set_atlasPadding)) int32_t atlasPadding;

  __declspec(property(get = get_atlasPopulationMode, put = set_atlasPopulationMode)) ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode;

  __declspec(property(get = get_atlasRenderMode, put = set_atlasRenderMode)) ::UnityEngine::TextCore::LowLevel::GlyphRenderMode atlasRenderMode;

  __declspec(property(get = get_atlasTexture)) ::UnityW<::UnityEngine::Texture2D> atlasTexture;

  __declspec(property(get = get_atlasTextureCount)) int32_t atlasTextureCount;

  __declspec(property(get = get_atlasTextures, put = set_atlasTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> atlasTextures;

  __declspec(property(get = get_atlasWidth, put = set_atlasWidth)) int32_t atlasWidth;

  __declspec(property(get = get_boldStyleSpacing, put = set_boldStyleSpacing)) float_t boldStyleSpacing;

  __declspec(property(get = get_boldStyleWeight, put = set_boldStyleWeight)) float_t boldStyleWeight;

  __declspec(property(get = get_characterLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* characterLookupTable;

  __declspec(property(get = get_characterTable, put = set_characterTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* characterTable;

  __declspec(property(get = get_clearDynamicDataOnBuild, put = set_clearDynamicDataOnBuild)) bool clearDynamicDataOnBuild;

  __declspec(property(get = get_faceInfo, put = set_faceInfo)) ::UnityEngine::TextCore::FaceInfo faceInfo;

  __declspec(property(get = get_fallbackFontAssetTable,
                      put = set_fallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fallbackFontAssetTable;

  __declspec(property(get = get_familyNameHashCode, put = set_familyNameHashCode)) int32_t familyNameHashCode;

  __declspec(property(get = get_fontAssetCreationEditorSettings,
                      put = set_fontAssetCreationEditorSettings)) ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings fontAssetCreationEditorSettings;

  __declspec(property(get = get_fontFeatureTable, put = set_fontFeatureTable)) ::UnityEngine::TextCore::Text::FontFeatureTable* fontFeatureTable;

  __declspec(property(get = get_fontWeightTable, put = set_fontWeightTable)) ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>
      fontWeightTable;

  __declspec(property(get = get_freeGlyphRects, put = set_freeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects;

  __declspec(property(get = get_glyphLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* glyphLookupTable;

  __declspec(property(get = get_glyphTable, put = set_glyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* glyphTable;

  __declspec(property(get = get_isMultiAtlasTexturesEnabled, put = set_isMultiAtlasTexturesEnabled)) bool isMultiAtlasTexturesEnabled;

  __declspec(property(get = get_italicStyleSlant, put = set_italicStyleSlant)) uint8_t italicStyleSlant;

  /// @brief Field k_AddSynthesizedCharactersMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AddSynthesizedCharactersMarker, put = setStaticF_k_AddSynthesizedCharactersMarker)) ::Unity::Profiling::ProfilerMarker k_AddSynthesizedCharactersMarker;

  /// @brief Field k_ClearFontAssetDataMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ClearFontAssetDataMarker, put = setStaticF_k_ClearFontAssetDataMarker)) ::Unity::Profiling::ProfilerMarker k_ClearFontAssetDataMarker;

  /// @brief Field k_FontAssets_AtlasTexturesUpdateQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FontAssets_AtlasTexturesUpdateQueue,
                      put = setStaticF_k_FontAssets_AtlasTexturesUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* k_FontAssets_AtlasTexturesUpdateQueue;

  /// @brief Field k_FontAssets_AtlasTexturesUpdateQueueLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup,
                      put = setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* k_FontAssets_AtlasTexturesUpdateQueueLookup;

  /// @brief Field k_FontAssets_FontFeaturesUpdateQueue, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_k_FontAssets_FontFeaturesUpdateQueue,
      put = setStaticF_k_FontAssets_FontFeaturesUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* k_FontAssets_FontFeaturesUpdateQueue;

  /// @brief Field k_FontAssets_FontFeaturesUpdateQueueLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup,
                      put = setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* k_FontAssets_FontFeaturesUpdateQueueLookup;

  /// @brief Field k_GlyphIndexArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GlyphIndexArray, put = setStaticF_k_GlyphIndexArray)) ::ArrayW<uint32_t, ::Array<uint32_t>*> k_GlyphIndexArray;

  /// @brief Field k_ReadFontAssetDefinitionMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ReadFontAssetDefinitionMarker, put = setStaticF_k_ReadFontAssetDefinitionMarker)) ::Unity::Profiling::ProfilerMarker k_ReadFontAssetDefinitionMarker;

  /// @brief Field k_SearchedFontAssetLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SearchedFontAssetLookup, put = setStaticF_k_SearchedFontAssetLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* k_SearchedFontAssetLookup;

  /// @brief Field k_TryAddCharacterMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_TryAddCharacterMarker, put = setStaticF_k_TryAddCharacterMarker)) ::Unity::Profiling::ProfilerMarker k_TryAddCharacterMarker;

  /// @brief Field k_TryAddCharactersMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_TryAddCharactersMarker, put = setStaticF_k_TryAddCharactersMarker)) ::Unity::Profiling::ProfilerMarker k_TryAddCharactersMarker;

  /// @brief Field k_TryAddGlyphMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_TryAddGlyphMarker, put = setStaticF_k_TryAddGlyphMarker)) ::Unity::Profiling::ProfilerMarker k_TryAddGlyphMarker;

  /// @brief Field k_UpdateDiacriticalMarkAdjustmentRecordsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker,
                      put = setStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateDiacriticalMarkAdjustmentRecordsMarker;

  /// @brief Field k_UpdateFontAssetDataMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateFontAssetDataMarker, put = setStaticF_k_UpdateFontAssetDataMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateFontAssetDataMarker;

  /// @brief Field k_UpdateGlyphAdjustmentRecordsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateGlyphAdjustmentRecordsMarker,
                      put = setStaticF_k_UpdateGlyphAdjustmentRecordsMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

  /// @brief Field m_AtlasHeight, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasHeight, put = __cordl_internal_set_m_AtlasHeight)) int32_t m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasPadding, put = __cordl_internal_set_m_AtlasPadding)) int32_t m_AtlasPadding;

  /// @brief Field m_AtlasPopulationMode, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasPopulationMode, put = __cordl_internal_set_m_AtlasPopulationMode)) ::UnityEngine::TextCore::Text::AtlasPopulationMode m_AtlasPopulationMode;

  /// @brief Field m_AtlasRenderMode, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasRenderMode, put = __cordl_internal_set_m_AtlasRenderMode)) ::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;

  /// @brief Field m_AtlasTexture, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTexture, put = __cordl_internal_set_m_AtlasTexture)) ::UnityW<::UnityEngine::Texture2D> m_AtlasTexture;

  /// @brief Field m_AtlasTextureIndex, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasTextureIndex, put = __cordl_internal_set_m_AtlasTextureIndex)) int32_t m_AtlasTextureIndex;

  /// @brief Field m_AtlasTextures, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTextures,
                      put = __cordl_internal_set_m_AtlasTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      m_AtlasTextures;

  /// @brief Field m_AtlasWidth, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasWidth, put = __cordl_internal_set_m_AtlasWidth)) int32_t m_AtlasWidth;

  /// @brief Field m_BoldStyleSpacing, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BoldStyleSpacing, put = __cordl_internal_set_m_BoldStyleSpacing)) float_t m_BoldStyleSpacing;

  /// @brief Field m_BoldStyleWeight, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BoldStyleWeight, put = __cordl_internal_set_m_BoldStyleWeight)) float_t m_BoldStyleWeight;

  /// @brief Field m_CharacterLookupDictionary, offset 0x130, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CharacterLookupDictionary,
      put = __cordl_internal_set_m_CharacterLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* m_CharacterLookupDictionary;

  /// @brief Field m_CharacterTable, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterTable,
                      put = __cordl_internal_set_m_CharacterTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* m_CharacterTable;

  /// @brief Field m_CharactersToAdd, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAdd,
                      put = __cordl_internal_set_m_CharactersToAdd)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAddLookup,
                      put = __cordl_internal_set_m_CharactersToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_CharactersToAddLookup;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0x14d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDynamicDataOnBuild, put = __cordl_internal_set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_FaceInfo, offset 0xb0, size 0x60
  __declspec(property(get = __cordl_internal_get_m_FaceInfo, put = __cordl_internal_set_m_FaceInfo)) ::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_FallbackFontAssetTable, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackFontAssetTable,
                      put = __cordl_internal_set_m_FallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* m_FallbackFontAssetTable;

  /// @brief Field m_FamilyNameHashCode, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FamilyNameHashCode, put = __cordl_internal_set_m_FamilyNameHashCode)) int32_t m_FamilyNameHashCode;

  /// @brief Field m_FontFeatureTable, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontFeatureTable, put = __cordl_internal_set_m_FontFeatureTable)) ::UnityEngine::TextCore::Text::FontFeatureTable* m_FontFeatureTable;

  /// @brief Field m_FontWeightTable, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontWeightTable,
                      put = __cordl_internal_set_m_FontWeightTable)) ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>
      m_FontWeightTable;

  /// @brief Field m_FreeGlyphRects, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeGlyphRects,
                      put = __cordl_internal_set_m_FreeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;

  /// @brief Field m_GlyphIndexList, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexList, put = __cordl_internal_set_m_GlyphIndexList)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexListNewlyAdded,
                      put = __cordl_internal_set_m_GlyphIndexListNewlyAdded)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphLookupDictionary, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphLookupDictionary,
                      put = __cordl_internal_set_m_GlyphLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;

  /// @brief Field m_GlyphTable, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphTable, put = __cordl_internal_set_m_GlyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable;

  /// @brief Field m_GlyphsRendered, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsRendered,
                      put = __cordl_internal_set_m_GlyphsRendered)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered;

  /// @brief Field m_GlyphsToAdd, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAdd, put = __cordl_internal_set_m_GlyphsToAdd)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAddLookup, put = __cordl_internal_set_m_GlyphsToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_GlyphsToAddLookup;

  /// @brief Field m_GlyphsToRender, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToRender,
                      put = __cordl_internal_set_m_GlyphsToRender)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset 0x14c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMultiAtlasTexturesEnabled, put = __cordl_internal_set_m_IsMultiAtlasTexturesEnabled)) bool m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_ItalicStyleSlant, offset 0x198, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ItalicStyleSlant, put = __cordl_internal_set_m_ItalicStyleSlant)) uint8_t m_ItalicStyleSlant;

  /// @brief Field m_MissingUnicodesFromFontFile, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MissingUnicodesFromFontFile,
                      put = __cordl_internal_set_m_MissingUnicodesFromFontFile)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_MissingUnicodesFromFontFile;

  /// @brief Field m_RegularStyleSpacing, offset 0x18c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RegularStyleSpacing, put = __cordl_internal_set_m_RegularStyleSpacing)) float_t m_RegularStyleSpacing;

  /// @brief Field m_RegularStyleWeight, offset 0x188, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RegularStyleWeight, put = __cordl_internal_set_m_RegularStyleWeight)) float_t m_RegularStyleWeight;

  /// @brief Field m_SourceFontFile, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFile, put = __cordl_internal_set_m_SourceFontFile)) ::UnityW<::UnityEngine::Font> m_SourceFontFile;

  /// @brief Field m_SourceFontFileGUID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFileGUID, put = __cordl_internal_set_m_SourceFontFileGUID)) ::StringW m_SourceFontFileGUID;

  /// @brief Field m_SourceFontFilePath, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFilePath, put = __cordl_internal_set_m_SourceFontFilePath)) ::StringW m_SourceFontFilePath;

  /// @brief Field m_StyleNameHashCode, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StyleNameHashCode, put = __cordl_internal_set_m_StyleNameHashCode)) int32_t m_StyleNameHashCode;

  /// @brief Field m_TabMultiple, offset 0x199, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TabMultiple, put = __cordl_internal_set_m_TabMultiple)) uint8_t m_TabMultiple;

  /// @brief Field m_UsedGlyphRects, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsedGlyphRects,
                      put = __cordl_internal_set_m_UsedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;

  /// @brief Field m_fontAssetCreationEditorSettings, offset 0x40, size 0x58
  __declspec(property(get = __cordl_internal_get_m_fontAssetCreationEditorSettings,
                      put = __cordl_internal_set_m_fontAssetCreationEditorSettings)) ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings m_fontAssetCreationEditorSettings;

  __declspec(property(get = get_regularStyleSpacing, put = set_regularStyleSpacing)) float_t regularStyleSpacing;

  __declspec(property(get = get_regularStyleWeight, put = set_regularStyleWeight)) float_t regularStyleWeight;

  /// @brief Field s_DefaultMaterialSuffix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultMaterialSuffix, put = setStaticF_s_DefaultMaterialSuffix)) ::StringW s_DefaultMaterialSuffix;

  /// @brief Field s_MissingCharacterList, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_s_MissingCharacterList, put = __cordl_internal_set_s_MissingCharacterList)) ::System::Collections::Generic::List_1<uint32_t>* s_MissingCharacterList;

  __declspec(property(get = get_sourceFontFile, put = set_sourceFontFile)) ::UnityW<::UnityEngine::Font> sourceFontFile;

  __declspec(property(get = get_styleNameHashCode, put = set_styleNameHashCode)) int32_t styleNameHashCode;

  __declspec(property(get = get_tabMultiple, put = set_tabMultiple)) uint8_t tabMultiple;

  __declspec(property(get = get_usedGlyphRects, put = set_usedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects;

  /// @brief Method AddCharacterToLookupCache, addr 0x49201c0, size 0x68, virtual false, abstract: false, final false
  inline void AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character);

  /// @brief Method AddSynthesizedCharacter, addr 0x491ffa8, size 0x218, virtual false, abstract: false, final false
  inline void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately);

  /// @brief Method AddSynthesizedCharactersAndFaceMetrics, addr 0x491ef14, size 0x1d0, virtual false, abstract: false, final false
  inline void AddSynthesizedCharactersAndFaceMetrics();

  /// @brief Method Awake, addr 0x491edb0, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearAtlasTextures, addr 0x4926500, size 0x1ec, virtual false, abstract: false, final false
  inline void ClearAtlasTextures(bool setAtlasSizeToZero);

  /// @brief Method ClearFontAssetData, addr 0x4926138, size 0x140, virtual false, abstract: false, final false
  inline void ClearFontAssetData(bool setAtlasSizeToZero);

  /// @brief Method ClearFontAssetDataInternal, addr 0x49266ec, size 0x20, virtual false, abstract: false, final false
  inline void ClearFontAssetDataInternal(bool clearFontFeatures);

  /// @brief Method ClearFontAssetTables, addr 0x4926278, size 0x288, virtual false, abstract: false, final false
  inline void ClearFontAssetTables(bool clearFontFeatures);

  /// @brief Method CopyListDataToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ::ByRef<::ArrayW<T, ::Array<T>*>> dstArray);

  /// @brief Method CreateFontAsset, addr 0x491e1d0, size 0x1d8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method CreateFontAsset, addr 0x491ea44, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font);

  /// @brief Method CreateFontAsset, addr 0x491eb80, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x491eac0, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x491e51c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight);

  /// @brief Method CreateFontAsset, addr 0x491e3a8, size 0x174, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAssetInstance, addr 0x491e5d0, size 0x474, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding,
                                                                                           ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                           ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method DestroyAtlasTextures, addr 0x491ee18, size 0xc4, virtual false, abstract: false, final false
  inline void DestroyAtlasTextures();

  /// @brief Method GetCharacters, addr 0x4921f88, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetCharacters(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetCharactersArray, addr 0x4922094, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCharactersArray(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetGlyphIndex, addr 0x4922178, size 0xdc, virtual false, abstract: false, final false
  inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method HasCharacter, addr 0x4920b08, size 0x10, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacter, addr 0x4920aa8, size 0x60, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t character);

  /// @brief Method HasCharacter, addr 0x4920b18, size 0x314, virtual false, abstract: false, final false
  inline bool HasCharacter(uint32_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacter_Internal, addr 0x49216c8, size 0x224, virtual false, abstract: false, final false
  inline bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x4921ec4, size 0xc4, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text);

  /// @brief Method HasCharacters, addr 0x4921a8c, size 0x438, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x49218ec, size 0x1a0, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters);

  /// @brief Method InitializeCharacterLookupDictionary, addr 0x491f374, size 0x198, virtual false, abstract: false, final false
  inline void InitializeCharacterLookupDictionary();

  /// @brief Method InitializeDictionaryLookupTables, addr 0x491eedc, size 0x38, virtual false, abstract: false, final false
  inline void InitializeDictionaryLookupTables();

  /// @brief Method InitializeGlyphLookupDictionary, addr 0x491f0ec, size 0x288, virtual false, abstract: false, final false
  inline void InitializeGlyphLookupDictionary();

  /// @brief Method InitializeGlyphPaidAdjustmentRecordsLookupDictionary, addr 0x491f81c, size 0x238, virtual false, abstract: false, final false
  inline void InitializeGlyphPaidAdjustmentRecordsLookupDictionary();

  /// @brief Method InitializeLigatureSubstitutionLookupDictionary, addr 0x491f50c, size 0x310, virtual false, abstract: false, final false
  inline void InitializeLigatureSubstitutionLookupDictionary();

  /// @brief Method InitializeMarkToBaseAdjustmentRecordsLookupDictionary, addr 0x491fa54, size 0x1e0, virtual false, abstract: false, final false
  inline void InitializeMarkToBaseAdjustmentRecordsLookupDictionary();

  /// @brief Method InitializeMarkToMarkAdjustmentRecordsLookupDictionary, addr 0x491fc34, size 0x1e0, virtual false, abstract: false, final false
  inline void InitializeMarkToMarkAdjustmentRecordsLookupDictionary();

  /// @brief Method LoadFontFace, addr 0x491fe1c, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace();

  static inline ::UnityEngine::TextCore::Text::FontAsset* New_ctor();

  /// @brief Method OnDestroy, addr 0x491edb4, size 0x64, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReadFontAssetDefinition, addr 0x491dc38, size 0x3a0, virtual false, abstract: false, final false
  inline void ReadFontAssetDefinition();

  /// @brief Method RegisterAtlasTextureForApply, addr 0x4922570, size 0x128, virtual false, abstract: false, final false
  static inline void RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture);

  /// @brief Method RegisterFontAssetForFontFeatureUpdate, addr 0x4922254, size 0x130, virtual false, abstract: false, final false
  static inline void RegisterFontAssetForFontFeatureUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method SetupNewAtlasTexture, addr 0x4924e44, size 0x210, virtual false, abstract: false, final false
  inline void SetupNewAtlasTexture();

  /// @brief Method SortAllTables, addr 0x4920a88, size 0x20, virtual false, abstract: false, final false
  inline void SortAllTables();

  /// @brief Method SortCharacterTable, addr 0x4920228, size 0x134, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortFontFeatureTable, addr 0x4920490, size 0x34, virtual false, abstract: false, final false
  inline void SortFontFeatureTable();

  /// @brief Method SortGlyphTable, addr 0x492035c, size 0x134, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method TryAddCharacterInternal, addr 0x4920e2c, size 0x89c, virtual false, abstract: false, final false
  inline bool TryAddCharacterInternal(uint32_t unicode, ::ByRef<::UnityEngine::TextCore::Text::Character*> character, bool shouldGetFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x49238e0, size 0x20, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x4923900, size 0xbc8, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, ::ByRef<::StringW> missingCharacters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x4922860, size 0x20, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x4922880, size 0xbe8, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures);

  /// @brief Method TryAddGlyphInternal, addr 0x49244c8, size 0x97c, virtual false, abstract: false, final false
  inline bool TryAddGlyphInternal(uint32_t glyphIndex, ::ByRef<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryAddGlyphsToAtlasTextures, addr 0x49255ac, size 0x4, virtual false, abstract: false, final false
  inline void TryAddGlyphsToAtlasTextures();

  /// @brief Method TryAddGlyphsToNewAtlasTexture, addr 0x4923468, size 0x478, virtual false, abstract: false, final false
  inline bool TryAddGlyphsToNewAtlasTexture();

  /// @brief Method TryGetCharacter_and_QueueRenderToTexture, addr 0x4925054, size 0x558, virtual false, abstract: false, final false
  inline bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ::ByRef<::UnityEngine::TextCore::Text::Character*> character, bool shouldGetFontFeatures);

  /// @brief Method UpdateAllFontFeatures, addr 0x4922518, size 0x58, virtual false, abstract: false, final false
  inline void UpdateAllFontFeatures();

  /// @brief Method UpdateAtlasTexturesInQueue, addr 0x4922698, size 0x178, virtual false, abstract: false, final false
  static inline void UpdateAtlasTexturesInQueue();

  /// @brief Method UpdateFontAssetData, addr 0x492670c, size 0x23c, virtual false, abstract: false, final false
  inline void UpdateFontAssetData();

  /// @brief Method UpdateFontAssetsInUpdateQueue, addr 0x4922810, size 0x50, virtual false, abstract: false, final false
  static inline void UpdateFontAssetsInUpdateQueue();

  /// @brief Method UpdateFontFeaturesForFontAssetsInQueue, addr 0x49223ac, size 0x16c, virtual false, abstract: false, final false
  static inline void UpdateFontFeaturesForFontAssetsInQueue();

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x49255b0, size 0x4ac, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords();

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x4925cb4, size 0x47c, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes);

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x4926130, size 0x4, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x4926134, size 0x4, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* newGlyphIndexes, ::System::Collections::Generic::List_1<uint32_t>* allGlyphIndexes);

  constexpr bool const& __cordl_internal_get_InternalDynamicOS() const;

  constexpr bool& __cordl_internal_get_InternalDynamicOS();

  constexpr bool const& __cordl_internal_get_IsFontAssetLookupTablesDirty() const;

  constexpr bool& __cordl_internal_get_IsFontAssetLookupTablesDirty();

  constexpr int32_t const& __cordl_internal_get_m_AtlasHeight() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasHeight();

  constexpr int32_t const& __cordl_internal_get_m_AtlasPadding() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasPadding();

  constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode const& __cordl_internal_get_m_AtlasPopulationMode() const;

  constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode& __cordl_internal_get_m_AtlasPopulationMode();

  constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const& __cordl_internal_get_m_AtlasRenderMode() const;

  constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode& __cordl_internal_get_m_AtlasRenderMode();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_AtlasTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_AtlasTexture();

  constexpr int32_t const& __cordl_internal_get_m_AtlasTextureIndex() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasTextureIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_m_AtlasTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_m_AtlasTextures();

  constexpr int32_t const& __cordl_internal_get_m_AtlasWidth() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasWidth();

  constexpr float_t const& __cordl_internal_get_m_BoldStyleSpacing() const;

  constexpr float_t& __cordl_internal_get_m_BoldStyleSpacing();

  constexpr float_t const& __cordl_internal_get_m_BoldStyleWeight() const;

  constexpr float_t& __cordl_internal_get_m_BoldStyleWeight();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* const& __cordl_internal_get_m_CharacterLookupDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*& __cordl_internal_get_m_CharacterLookupDictionary();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* const& __cordl_internal_get_m_CharacterTable() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& __cordl_internal_get_m_CharacterTable();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* const& __cordl_internal_get_m_CharactersToAdd() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& __cordl_internal_get_m_CharactersToAdd();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_CharactersToAddLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_CharactersToAddLookup();

  constexpr bool const& __cordl_internal_get_m_ClearDynamicDataOnBuild() const;

  constexpr bool& __cordl_internal_get_m_ClearDynamicDataOnBuild();

  constexpr ::UnityEngine::TextCore::FaceInfo const& __cordl_internal_get_m_FaceInfo() const;

  constexpr ::UnityEngine::TextCore::FaceInfo& __cordl_internal_get_m_FaceInfo();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* const& __cordl_internal_get_m_FallbackFontAssetTable() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& __cordl_internal_get_m_FallbackFontAssetTable();

  constexpr int32_t const& __cordl_internal_get_m_FamilyNameHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_FamilyNameHashCode();

  constexpr ::UnityEngine::TextCore::Text::FontFeatureTable* const& __cordl_internal_get_m_FontFeatureTable() const;

  constexpr ::UnityEngine::TextCore::Text::FontFeatureTable*& __cordl_internal_get_m_FontFeatureTable();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> const& __cordl_internal_get_m_FontWeightTable() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>& __cordl_internal_get_m_FontWeightTable();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& __cordl_internal_get_m_FreeGlyphRects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __cordl_internal_get_m_FreeGlyphRects();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_m_GlyphIndexList() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_m_GlyphIndexList();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_m_GlyphIndexListNewlyAdded() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_m_GlyphIndexListNewlyAdded();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* const& __cordl_internal_get_m_GlyphLookupDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*& __cordl_internal_get_m_GlyphLookupDictionary();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& __cordl_internal_get_m_GlyphTable() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& __cordl_internal_get_m_GlyphTable();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& __cordl_internal_get_m_GlyphsRendered() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& __cordl_internal_get_m_GlyphsRendered();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_m_GlyphsToAdd() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_m_GlyphsToAdd();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_GlyphsToAddLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_GlyphsToAddLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& __cordl_internal_get_m_GlyphsToRender() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& __cordl_internal_get_m_GlyphsToRender();

  constexpr bool const& __cordl_internal_get_m_IsMultiAtlasTexturesEnabled() const;

  constexpr bool& __cordl_internal_get_m_IsMultiAtlasTexturesEnabled();

  constexpr uint8_t const& __cordl_internal_get_m_ItalicStyleSlant() const;

  constexpr uint8_t& __cordl_internal_get_m_ItalicStyleSlant();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_MissingUnicodesFromFontFile() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_MissingUnicodesFromFontFile();

  constexpr float_t const& __cordl_internal_get_m_RegularStyleSpacing() const;

  constexpr float_t& __cordl_internal_get_m_RegularStyleSpacing();

  constexpr float_t const& __cordl_internal_get_m_RegularStyleWeight() const;

  constexpr float_t& __cordl_internal_get_m_RegularStyleWeight();

  constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_m_SourceFontFile() const;

  constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_m_SourceFontFile();

  constexpr ::StringW const& __cordl_internal_get_m_SourceFontFileGUID() const;

  constexpr ::StringW& __cordl_internal_get_m_SourceFontFileGUID();

  constexpr ::StringW const& __cordl_internal_get_m_SourceFontFilePath() const;

  constexpr ::StringW& __cordl_internal_get_m_SourceFontFilePath();

  constexpr int32_t const& __cordl_internal_get_m_StyleNameHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_StyleNameHashCode();

  constexpr uint8_t const& __cordl_internal_get_m_TabMultiple() const;

  constexpr uint8_t& __cordl_internal_get_m_TabMultiple();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& __cordl_internal_get_m_UsedGlyphRects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __cordl_internal_get_m_UsedGlyphRects();

  constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings const& __cordl_internal_get_m_fontAssetCreationEditorSettings() const;

  constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings& __cordl_internal_get_m_fontAssetCreationEditorSettings();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_s_MissingCharacterList() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_s_MissingCharacterList();

  constexpr void __cordl_internal_set_InternalDynamicOS(bool value);

  constexpr void __cordl_internal_set_IsFontAssetLookupTablesDirty(bool value);

  constexpr void __cordl_internal_set_m_AtlasHeight(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasPadding(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value);

  constexpr void __cordl_internal_set_m_AtlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  constexpr void __cordl_internal_set_m_AtlasTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_AtlasTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_m_AtlasWidth(int32_t value);

  constexpr void __cordl_internal_set_m_BoldStyleSpacing(float_t value);

  constexpr void __cordl_internal_set_m_BoldStyleWeight(float_t value);

  constexpr void __cordl_internal_set_m_CharacterLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* value);

  constexpr void __cordl_internal_set_m_CharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  constexpr void __cordl_internal_set_m_CharactersToAdd(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  constexpr void __cordl_internal_set_m_CharactersToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_ClearDynamicDataOnBuild(bool value);

  constexpr void __cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr void __cordl_internal_set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FamilyNameHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_FontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value);

  constexpr void __cordl_internal_set_m_FontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value);

  constexpr void __cordl_internal_set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr void __cordl_internal_set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_IsMultiAtlasTexturesEnabled(bool value);

  constexpr void __cordl_internal_set_m_ItalicStyleSlant(uint8_t value);

  constexpr void __cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_RegularStyleSpacing(float_t value);

  constexpr void __cordl_internal_set_m_RegularStyleWeight(float_t value);

  constexpr void __cordl_internal_set_m_SourceFontFile(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_m_SourceFontFileGUID(::StringW value);

  constexpr void __cordl_internal_set_m_SourceFontFilePath(::StringW value);

  constexpr void __cordl_internal_set_m_StyleNameHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_TabMultiple(uint8_t value);

  constexpr void __cordl_internal_set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr void __cordl_internal_set_m_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value);

  constexpr void __cordl_internal_set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x4926948, size 0x278, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_AddSynthesizedCharactersMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ClearFontAssetDataMarker();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_k_FontAssets_FontFeaturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_k_GlyphIndexArray();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ReadFontAssetDefinitionMarker();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_SearchedFontAssetLookup();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddCharacterMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddCharactersMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddGlyphMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateFontAssetDataMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateGlyphAdjustmentRecordsMarker();

  static inline ::StringW getStaticF_s_DefaultMaterialSuffix();

  /// @brief Method get_atlasHeight, addr 0x491e0f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasHeight();

  /// @brief Method get_atlasPadding, addr 0x491e100, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasPadding();

  /// @brief Method get_atlasPopulationMode, addr 0x491db50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::AtlasPopulationMode get_atlasPopulationMode();

  /// @brief Method get_atlasRenderMode, addr 0x491e110, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();

  /// @brief Method get_atlasTexture, addr 0x491e00c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_atlasTexture();

  /// @brief Method get_atlasTextureCount, addr 0x491e0ac, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_atlasTextureCount();

  /// @brief Method get_atlasTextures, addr 0x491e09c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> get_atlasTextures();

  /// @brief Method get_atlasWidth, addr 0x491e0e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasWidth();

  /// @brief Method get_boldStyleSpacing, addr 0x491e1a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_boldStyleSpacing();

  /// @brief Method get_boldStyleWeight, addr 0x491e190, size 0x8, virtual false, abstract: false, final false
  inline float_t get_boldStyleWeight();

  /// @brief Method get_characterLookupTable, addr 0x491dfe8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* get_characterLookupTable();

  /// @brief Method get_characterTable, addr 0x491dfd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* get_characterTable();

  /// @brief Method get_clearDynamicDataOnBuild, addr 0x491e0cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDynamicDataOnBuild();

  /// @brief Method get_faceInfo, addr 0x491db60, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method get_fallbackFontAssetTable, addr 0x491e150, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* get_fallbackFontAssetTable();

  /// @brief Method get_familyNameHashCode, addr 0x491db94, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_familyNameHashCode();

  /// @brief Method get_fontAssetCreationEditorSettings, addr 0x491db0c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings get_fontAssetCreationEditorSettings();

  /// @brief Method get_fontFeatureTable, addr 0x491e140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::FontFeatureTable* get_fontFeatureTable();

  /// @brief Method get_fontWeightTable, addr 0x491e160, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> get_fontWeightTable();

  /// @brief Method get_freeGlyphRects, addr 0x491e130, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();

  /// @brief Method get_glyphLookupTable, addr 0x491dc14, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();

  /// @brief Method get_glyphTable, addr 0x491dc04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable();

  /// @brief Method get_isMultiAtlasTexturesEnabled, addr 0x491e0b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMultiAtlasTexturesEnabled();

  /// @brief Method get_italicStyleSlant, addr 0x491e1b0, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_italicStyleSlant();

  /// @brief Method get_regularStyleSpacing, addr 0x491e180, size 0x8, virtual false, abstract: false, final false
  inline float_t get_regularStyleSpacing();

  /// @brief Method get_regularStyleWeight, addr 0x491e170, size 0x8, virtual false, abstract: false, final false
  inline float_t get_regularStyleWeight();

  /// @brief Method get_sourceFontFile, addr 0x491db40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_sourceFontFile();

  /// @brief Method get_styleNameHashCode, addr 0x491dbcc, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_styleNameHashCode();

  /// @brief Method get_tabMultiple, addr 0x491e1c0, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_tabMultiple();

  /// @brief Method get_usedGlyphRects, addr 0x491e120, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();

  static inline void setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_TryAddGlyphMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_DefaultMaterialSuffix(::StringW value);

  /// @brief Method set_atlasHeight, addr 0x491e0f8, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasHeight(int32_t value);

  /// @brief Method set_atlasPadding, addr 0x491e108, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPadding(int32_t value);

  /// @brief Method set_atlasPopulationMode, addr 0x491db58, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value);

  /// @brief Method set_atlasRenderMode, addr 0x491e118, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  /// @brief Method set_atlasTextures, addr 0x491e0a4, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value);

  /// @brief Method set_atlasWidth, addr 0x491e0e8, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasWidth(int32_t value);

  /// @brief Method set_boldStyleSpacing, addr 0x491e1a8, size 0x8, virtual false, abstract: false, final false
  inline void set_boldStyleSpacing(float_t value);

  /// @brief Method set_boldStyleWeight, addr 0x491e198, size 0x8, virtual false, abstract: false, final false
  inline void set_boldStyleWeight(float_t value);

  /// @brief Method set_characterTable, addr 0x491dfe0, size 0x8, virtual false, abstract: false, final false
  inline void set_characterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  /// @brief Method set_clearDynamicDataOnBuild, addr 0x491e0d4, size 0xc, virtual false, abstract: false, final false
  inline void set_clearDynamicDataOnBuild(bool value);

  /// @brief Method set_faceInfo, addr 0x491db7c, size 0x18, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method set_fallbackFontAssetTable, addr 0x491e158, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  /// @brief Method set_familyNameHashCode, addr 0x491dbc4, size 0x8, virtual false, abstract: false, final false
  inline void set_familyNameHashCode(int32_t value);

  /// @brief Method set_fontAssetCreationEditorSettings, addr 0x491db28, size 0x18, virtual false, abstract: false, final false
  inline void set_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value);

  /// @brief Method set_fontFeatureTable, addr 0x491e148, size 0x8, virtual false, abstract: false, final false
  inline void set_fontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value);

  /// @brief Method set_fontWeightTable, addr 0x491e168, size 0x8, virtual false, abstract: false, final false
  inline void set_fontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value);

  /// @brief Method set_freeGlyphRects, addr 0x491e138, size 0x8, virtual false, abstract: false, final false
  inline void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method set_glyphTable, addr 0x491dc0c, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  /// @brief Method set_isMultiAtlasTexturesEnabled, addr 0x491e0c0, size 0xc, virtual false, abstract: false, final false
  inline void set_isMultiAtlasTexturesEnabled(bool value);

  /// @brief Method set_italicStyleSlant, addr 0x491e1b8, size 0x8, virtual false, abstract: false, final false
  inline void set_italicStyleSlant(uint8_t value);

  /// @brief Method set_regularStyleSpacing, addr 0x491e188, size 0x8, virtual false, abstract: false, final false
  inline void set_regularStyleSpacing(float_t value);

  /// @brief Method set_regularStyleWeight, addr 0x491e178, size 0x8, virtual false, abstract: false, final false
  inline void set_regularStyleWeight(float_t value);

  /// @brief Method set_sourceFontFile, addr 0x491db48, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceFontFile(::UnityEngine::Font* value);

  /// @brief Method set_styleNameHashCode, addr 0x491dbfc, size 0x8, virtual false, abstract: false, final false
  inline void set_styleNameHashCode(int32_t value);

  /// @brief Method set_tabMultiple, addr 0x491e1c8, size 0x8, virtual false, abstract: false, final false
  inline void set_tabMultiple(uint8_t value);

  /// @brief Method set_usedGlyphRects, addr 0x491e128, size 0x8, virtual false, abstract: false, final false
  inline void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontAsset(FontAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontAsset(FontAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15240 };

  /// @brief Field m_SourceFontFileGUID, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_SourceFontFileGUID;

  /// @brief Field m_fontAssetCreationEditorSettings, offset: 0x40, size: 0x58, def value: None
  ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings ___m_fontAssetCreationEditorSettings;

  /// @brief Field m_SourceFontFile, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> ___m_SourceFontFile;

  /// @brief Field m_SourceFontFilePath, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_SourceFontFilePath;

  /// @brief Field m_AtlasPopulationMode, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::AtlasPopulationMode ___m_AtlasPopulationMode;

  /// @brief Field InternalDynamicOS, offset: 0xac, size: 0x1, def value: None
  bool ___InternalDynamicOS;

  /// @brief Field m_FaceInfo, offset: 0xb0, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field m_FamilyNameHashCode, offset: 0x110, size: 0x4, def value: None
  int32_t ___m_FamilyNameHashCode;

  /// @brief Field m_StyleNameHashCode, offset: 0x114, size: 0x4, def value: None
  int32_t ___m_StyleNameHashCode;

  /// @brief Field m_GlyphTable, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphTable;

  /// @brief Field m_GlyphLookupDictionary, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* ___m_GlyphLookupDictionary;

  /// @brief Field m_CharacterTable, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* ___m_CharacterTable;

  /// @brief Field m_CharacterLookupDictionary, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* ___m_CharacterLookupDictionary;

  /// @brief Field m_AtlasTexture, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_AtlasTexture;

  /// @brief Field m_AtlasTextures, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___m_AtlasTextures;

  /// @brief Field m_AtlasTextureIndex, offset: 0x148, size: 0x4, def value: None
  int32_t ___m_AtlasTextureIndex;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset: 0x14c, size: 0x1, def value: None
  bool ___m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0x14d, size: 0x1, def value: None
  bool ___m_ClearDynamicDataOnBuild;

  /// @brief Field m_AtlasWidth, offset: 0x150, size: 0x4, def value: None
  int32_t ___m_AtlasWidth;

  /// @brief Field m_AtlasHeight, offset: 0x154, size: 0x4, def value: None
  int32_t ___m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset: 0x158, size: 0x4, def value: None
  int32_t ___m_AtlasPadding;

  /// @brief Field m_AtlasRenderMode, offset: 0x15c, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode ___m_AtlasRenderMode;

  /// @brief Field m_UsedGlyphRects, offset: 0x160, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_UsedGlyphRects;

  /// @brief Field m_FreeGlyphRects, offset: 0x168, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_FreeGlyphRects;

  /// @brief Field m_FontFeatureTable, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::FontFeatureTable* ___m_FontFeatureTable;

  /// @brief Field m_FallbackFontAssetTable, offset: 0x178, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* ___m_FallbackFontAssetTable;

  /// @brief Field m_FontWeightTable, offset: 0x180, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> ___m_FontWeightTable;

  /// @brief Field m_RegularStyleWeight, offset: 0x188, size: 0x4, def value: None
  float_t ___m_RegularStyleWeight;

  /// @brief Field m_RegularStyleSpacing, offset: 0x18c, size: 0x4, def value: None
  float_t ___m_RegularStyleSpacing;

  /// @brief Field m_BoldStyleWeight, offset: 0x190, size: 0x4, def value: None
  float_t ___m_BoldStyleWeight;

  /// @brief Field m_BoldStyleSpacing, offset: 0x194, size: 0x4, def value: None
  float_t ___m_BoldStyleSpacing;

  /// @brief Field m_ItalicStyleSlant, offset: 0x198, size: 0x1, def value: None
  uint8_t ___m_ItalicStyleSlant;

  /// @brief Field m_TabMultiple, offset: 0x199, size: 0x1, def value: None
  uint8_t ___m_TabMultiple;

  /// @brief Field IsFontAssetLookupTablesDirty, offset: 0x19a, size: 0x1, def value: None
  bool ___IsFontAssetLookupTablesDirty;

  /// @brief Field m_GlyphsToRender, offset: 0x1a0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsToRender;

  /// @brief Field m_GlyphsRendered, offset: 0x1a8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsRendered;

  /// @brief Field m_GlyphIndexList, offset: 0x1b0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset: 0x1b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphsToAdd, offset: 0x1c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset: 0x1c8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_GlyphsToAddLookup;

  /// @brief Field m_CharactersToAdd, offset: 0x1d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* ___m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset: 0x1d8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_CharactersToAddLookup;

  /// @brief Field s_MissingCharacterList, offset: 0x1e0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___s_MissingCharacterList;

  /// @brief Field m_MissingUnicodesFromFontFile, offset: 0x1e8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_MissingUnicodesFromFontFile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_SourceFontFileGUID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_fontAssetCreationEditorSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_SourceFontFile) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_SourceFontFilePath) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasPopulationMode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___InternalDynamicOS) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FaceInfo) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FamilyNameHashCode) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_StyleNameHashCode) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphTable) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphLookupDictionary) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_CharacterTable) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_CharacterLookupDictionary) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasTexture) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasTextures) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasTextureIndex) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_IsMultiAtlasTexturesEnabled) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_ClearDynamicDataOnBuild) == 0x14d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasWidth) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasHeight) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasPadding) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasRenderMode) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_UsedGlyphRects) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FreeGlyphRects) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FontFeatureTable) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FallbackFontAssetTable) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FontWeightTable) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_RegularStyleWeight) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_RegularStyleSpacing) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_BoldStyleWeight) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_BoldStyleSpacing) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_ItalicStyleSlant) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_TabMultiple) == 0x199, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___IsFontAssetLookupTablesDirty) == 0x19a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsToRender) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsRendered) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphIndexList) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphIndexListNewlyAdded) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsToAdd) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsToAddLookup) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_CharactersToAdd) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_CharactersToAddLookup) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___s_MissingCharacterList) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_MissingUnicodesFromFontFile) == 0x1e8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAsset, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAsset*, "UnityEngine.TextCore.Text", "FontAsset");
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAsset___c*, "UnityEngine.TextCore.Text", "FontAsset/<>c");
