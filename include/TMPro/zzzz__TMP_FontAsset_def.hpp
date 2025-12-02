#pragma once
// IWYU pragma private; include "TMPro/TMP_FontAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_def.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_def.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontAsset)
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
namespace System {
template <typename T> class WeakReference_1;
}
namespace TMPro {
struct AtlasPopulationMode;
}
namespace TMPro {
class FaceInfo_Legacy;
}
namespace TMPro {
struct FontAssetCreationSettings;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct FontWeight;
}
namespace TMPro {
class KerningTable;
}
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_FontAsset___c;
}
namespace TMPro {
class TMP_FontFeatureTable;
}
namespace TMPro {
struct TMP_FontWeightPair;
}
namespace TMPro {
class TMP_Glyph;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::LowLevel {
struct LigatureSubstitutionRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct MarkToBaseAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct MarkToMarkAdjustmentRecord;
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
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_FontAsset___c;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontAsset);
MARK_REF_PTR_T(::TMPro::TMP_FontAsset___c);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_FontAsset/<>c
class CORDL_TYPE TMP_FontAsset___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::TMPro::TMP_FontAsset___c* __9;

  /// @brief Field <>9__145_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__145_0, put = setStaticF___9__145_0)) ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* __9__145_0;

  /// @brief Field <>9__146_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__146_0, put = setStaticF___9__146_0)) ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* __9__146_0;

  static inline ::TMPro::TMP_FontAsset___c* New_ctor();

  /// @brief Method <SortCharacterTable>b__145_0, addr 0x673c950, size 0x14, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__145_0(::TMPro::TMP_Character* c);

  /// @brief Method <SortGlyphTable>b__146_0, addr 0x673c964, size 0x14, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__146_0(::UnityEngine::TextCore::Glyph* c);

  /// @brief Method .ctor, addr 0x673c94c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_FontAsset___c* getStaticF___9();

  static inline ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* getStaticF___9__145_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* getStaticF___9__146_0();

  static inline void setStaticF___9(::TMPro::TMP_FontAsset___c* value);

  static inline void setStaticF___9__145_0(::System::Func_2<::TMPro::TMP_Character*, uint32_t>* value);

  static inline void setStaticF___9__146_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontAsset___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontAsset___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontAsset___c(TMP_FontAsset___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontAsset___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontAsset___c(TMP_FontAsset___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontAsset___c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.AtlasPopulationMode, TMPro.FontAssetCreationSettings, TMPro.TMP_Asset, Unity.Profiling.ProfilerMarker, UnityEngine.TextCore.LowLevel.GlyphRenderMode
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_FontAsset
class CORDL_TYPE TMP_FontAsset : public ::TMPro::TMP_Asset {
public:
  // Declarations
  using __c = ::TMPro::TMP_FontAsset___c;

  /// @brief Field InternalDynamicOS, offset 0x114, size 0x1
  __declspec(property(get = __cordl_internal_get_InternalDynamicOS, put = __cordl_internal_set_InternalDynamicOS)) bool InternalDynamicOS;

  /// @brief Field IsFontAssetLookupTablesDirty, offset 0x1b2, size 0x1
  __declspec(property(get = __cordl_internal_get_IsFontAssetLookupTablesDirty, put = __cordl_internal_set_IsFontAssetLookupTablesDirty)) bool IsFontAssetLookupTablesDirty;

  /// @brief Field atlas, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_atlas, put = __cordl_internal_set_atlas)) ::UnityW<::UnityEngine::Texture2D> atlas;

  __declspec(property(get = get_atlasHeight, put = set_atlasHeight)) int32_t atlasHeight;

  __declspec(property(get = get_atlasPadding, put = set_atlasPadding)) int32_t atlasPadding;

  __declspec(property(get = get_atlasPopulationMode, put = set_atlasPopulationMode)) ::TMPro::AtlasPopulationMode atlasPopulationMode;

  __declspec(property(get = get_atlasRenderMode, put = set_atlasRenderMode)) ::UnityEngine::TextCore::LowLevel::GlyphRenderMode atlasRenderMode;

  __declspec(property(get = get_atlasTexture)) ::UnityW<::UnityEngine::Texture2D> atlasTexture;

  __declspec(property(get = get_atlasTextureCount)) int32_t atlasTextureCount;

  __declspec(property(get = get_atlasTextures, put = set_atlasTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> atlasTextures;

  __declspec(property(get = get_atlasWidth, put = set_atlasWidth)) int32_t atlasWidth;

  /// @brief Field boldSpacing, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_boldSpacing, put = __cordl_internal_set_boldSpacing)) float_t boldSpacing;

  /// @brief Field boldStyle, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_boldStyle, put = __cordl_internal_set_boldStyle)) float_t boldStyle;

  __declspec(property(get = get_characterLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* characterLookupTable;

  __declspec(property(get = get_characterTable, put = set_characterTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* characterTable;

  __declspec(property(get = get_clearDynamicDataOnBuild, put = set_clearDynamicDataOnBuild)) bool clearDynamicDataOnBuild;

  __declspec(property(get = get_creationSettings, put = set_creationSettings)) ::TMPro::FontAssetCreationSettings creationSettings;

  __declspec(property(get = get_fallbackFontAssetTable, put = set_fallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fallbackFontAssetTable;

  /// @brief Field fallbackFontAssets, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackFontAssets,
                      put = __cordl_internal_set_fallbackFontAssets)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fallbackFontAssets;

  __declspec(property(get = get_familyNameHashCode, put = set_familyNameHashCode)) int32_t familyNameHashCode;

  __declspec(property(get = get_fontFeatureTable, put = set_fontFeatureTable)) ::TMPro::TMP_FontFeatureTable* fontFeatureTable;

  __declspec(property(get = get_fontInfo)) ::TMPro::FaceInfo_Legacy* fontInfo;

  __declspec(property(get = get_fontWeightTable, put = set_fontWeightTable)) ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> fontWeightTable;

  /// @brief Field fontWeights, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_fontWeights, put = __cordl_internal_set_fontWeights)) ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> fontWeights;

  __declspec(property(get = get_freeGlyphRects, put = set_freeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects;

  __declspec(property(get = get_getFontFeatures, put = set_getFontFeatures)) bool getFontFeatures;

  __declspec(property(get = get_glyphLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* glyphLookupTable;

  __declspec(property(get = get_glyphTable, put = set_glyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* glyphTable;

  __declspec(property(get = get_isMultiAtlasTexturesEnabled, put = set_isMultiAtlasTexturesEnabled)) bool isMultiAtlasTexturesEnabled;

  /// @brief Field italicStyle, offset 0x1b0, size 0x1
  __declspec(property(get = __cordl_internal_get_italicStyle, put = __cordl_internal_set_italicStyle)) uint8_t italicStyle;

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
  __declspec(property(get = getStaticF_k_FontAssets_FontFeaturesUpdateQueue,
                      put = setStaticF_k_FontAssets_FontFeaturesUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* k_FontAssets_FontFeaturesUpdateQueue;

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

  /// @brief Field k_UpdateLigatureSubstitutionRecordsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateLigatureSubstitutionRecordsMarker,
                      put = setStaticF_k_UpdateLigatureSubstitutionRecordsMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateLigatureSubstitutionRecordsMarker;

  /// @brief Field m_AtlasHeight, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasHeight, put = __cordl_internal_set_m_AtlasHeight)) int32_t m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasPadding, put = __cordl_internal_set_m_AtlasPadding)) int32_t m_AtlasPadding;

  /// @brief Field m_AtlasPopulationMode, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasPopulationMode, put = __cordl_internal_set_m_AtlasPopulationMode)) ::TMPro::AtlasPopulationMode m_AtlasPopulationMode;

  /// @brief Field m_AtlasRenderMode, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasRenderMode, put = __cordl_internal_set_m_AtlasRenderMode)) ::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;

  /// @brief Field m_AtlasTexture, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTexture, put = __cordl_internal_set_m_AtlasTexture)) ::UnityW<::UnityEngine::Texture2D> m_AtlasTexture;

  /// @brief Field m_AtlasTextureIndex, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasTextureIndex, put = __cordl_internal_set_m_AtlasTextureIndex)) int32_t m_AtlasTextureIndex;

  /// @brief Field m_AtlasTextures, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTextures,
                      put = __cordl_internal_set_m_AtlasTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      m_AtlasTextures;

  /// @brief Field m_AtlasWidth, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasWidth, put = __cordl_internal_set_m_AtlasWidth)) int32_t m_AtlasWidth;

  /// @brief Field m_CharacterLookupDictionary, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterLookupDictionary,
                      put = __cordl_internal_set_m_CharacterLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* m_CharacterLookupDictionary;

  /// @brief Field m_CharacterTable, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterTable, put = __cordl_internal_set_m_CharacterTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharacterTable;

  /// @brief Field m_CharactersToAdd, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAdd, put = __cordl_internal_set_m_CharactersToAdd)) ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAddLookup,
                      put = __cordl_internal_set_m_CharactersToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_CharactersToAddLookup;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0x156, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDynamicDataOnBuild, put = __cordl_internal_set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_CreationSettings, offset 0xa0, size 0x60
  __declspec(property(get = __cordl_internal_get_m_CreationSettings, put = __cordl_internal_set_m_CreationSettings)) ::TMPro::FontAssetCreationSettings m_CreationSettings;

  /// @brief Field m_FallbackFontAssetTable, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackFontAssetTable,
                      put = __cordl_internal_set_m_FallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* m_FallbackFontAssetTable;

  /// @brief Field m_FamilyNameHashCode, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FamilyNameHashCode, put = __cordl_internal_set_m_FamilyNameHashCode)) int32_t m_FamilyNameHashCode;

  /// @brief Field m_FontFeatureTable, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontFeatureTable, put = __cordl_internal_set_m_FontFeatureTable)) ::TMPro::TMP_FontFeatureTable* m_FontFeatureTable;

  /// @brief Field m_FontWeightTable, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontWeightTable, put = __cordl_internal_set_m_FontWeightTable)) ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>
      m_FontWeightTable;

  /// @brief Field m_FreeGlyphRects, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeGlyphRects,
                      put = __cordl_internal_set_m_FreeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;

  /// @brief Field m_GetFontFeatures, offset 0x155, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GetFontFeatures, put = __cordl_internal_set_m_GetFontFeatures)) bool m_GetFontFeatures;

  /// @brief Field m_GlyphIndexList, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexList, put = __cordl_internal_set_m_GlyphIndexList)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexListNewlyAdded,
                      put = __cordl_internal_set_m_GlyphIndexListNewlyAdded)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphLookupDictionary, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphLookupDictionary,
                      put = __cordl_internal_set_m_GlyphLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;

  /// @brief Field m_GlyphTable, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphTable, put = __cordl_internal_set_m_GlyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable;

  /// @brief Field m_GlyphsRendered, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsRendered,
                      put = __cordl_internal_set_m_GlyphsRendered)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered;

  /// @brief Field m_GlyphsToAdd, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAdd, put = __cordl_internal_set_m_GlyphsToAdd)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAddLookup, put = __cordl_internal_set_m_GlyphsToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_GlyphsToAddLookup;

  /// @brief Field m_GlyphsToRender, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToRender,
                      put = __cordl_internal_set_m_GlyphsToRender)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset 0x154, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMultiAtlasTexturesEnabled, put = __cordl_internal_set_m_IsMultiAtlasTexturesEnabled)) bool m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_KerningTable, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KerningTable, put = __cordl_internal_set_m_KerningTable)) ::TMPro::KerningTable* m_KerningTable;

  /// @brief Field m_MissingUnicodesFromFontFile, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MissingUnicodesFromFontFile,
                      put = __cordl_internal_set_m_MissingUnicodesFromFontFile)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_MissingUnicodesFromFontFile;

  /// @brief Field m_ShouldReimportFontFeatures, offset 0x180, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldReimportFontFeatures, put = __cordl_internal_set_m_ShouldReimportFontFeatures)) bool m_ShouldReimportFontFeatures;

  /// @brief Field m_SourceFontFile, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFile, put = __cordl_internal_set_m_SourceFontFile)) ::UnityW<::UnityEngine::Font> m_SourceFontFile;

  /// @brief Field m_SourceFontFileGUID, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFileGUID, put = __cordl_internal_set_m_SourceFontFileGUID)) ::StringW m_SourceFontFileGUID;

  /// @brief Field m_SourceFontFilePath, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFilePath, put = __cordl_internal_set_m_SourceFontFilePath)) ::StringW m_SourceFontFilePath;

  /// @brief Field m_StyleNameHashCode, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StyleNameHashCode, put = __cordl_internal_set_m_StyleNameHashCode)) int32_t m_StyleNameHashCode;

  /// @brief Field m_UsedGlyphRects, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsedGlyphRects,
                      put = __cordl_internal_set_m_UsedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;

  /// @brief Field m_fontInfo, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontInfo, put = __cordl_internal_set_m_fontInfo)) ::TMPro::FaceInfo_Legacy* m_fontInfo;

  /// @brief Field m_glyphInfoList, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_glyphInfoList, put = __cordl_internal_set_m_glyphInfoList)) ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* m_glyphInfoList;

  /// @brief Field normalSpacingOffset, offset 0x1a4, size 0x4
  __declspec(property(get = __cordl_internal_get_normalSpacingOffset, put = __cordl_internal_set_normalSpacingOffset)) float_t normalSpacingOffset;

  /// @brief Field normalStyle, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_normalStyle, put = __cordl_internal_set_normalStyle)) float_t normalStyle;

  /// @brief Field s_CallbackInstances, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallbackInstances,
                      put = setStaticF_s_CallbackInstances)) ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* s_CallbackInstances;

  /// @brief Field s_DefaultMaterialSuffix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultMaterialSuffix, put = setStaticF_s_DefaultMaterialSuffix)) ::StringW s_DefaultMaterialSuffix;

  /// @brief Field s_MissingCharacterList, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_s_MissingCharacterList, put = __cordl_internal_set_s_MissingCharacterList)) ::System::Collections::Generic::List_1<uint32_t>* s_MissingCharacterList;

  __declspec(property(get = get_sourceFontFile, put = set_sourceFontFile)) ::UnityW<::UnityEngine::Font> sourceFontFile;

  __declspec(property(get = get_styleNameHashCode, put = set_styleNameHashCode)) int32_t styleNameHashCode;

  /// @brief Field tabSize, offset 0x1b1, size 0x1
  __declspec(property(get = __cordl_internal_get_tabSize, put = __cordl_internal_set_tabSize)) uint8_t tabSize;

  __declspec(property(get = get_usedGlyphRects, put = set_usedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects;

  /// @brief Method AddCharacterToLookupCache, addr 0x673518c, size 0xcc, virtual false, abstract: false, final false
  inline void AddCharacterToLookupCache(uint32_t unicode, ::TMPro::TMP_Character* character, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, bool isAlternativeTypeface);

  /// @brief Method AddGlyphInternal, addr 0x6739a0c, size 0x18, virtual false, abstract: false, final false
  inline bool AddGlyphInternal(uint32_t glyphIndex);

  /// @brief Method AddLigatureSubstitutionRecords, addr 0x673b3a4, size 0x3bc, virtual false, abstract: false, final false
  inline void AddLigatureSubstitutionRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> records);

  /// @brief Method AddMarkToBaseAdjustmentRecords, addr 0x673af74, size 0x218, virtual false, abstract: false, final false
  inline void AddMarkToBaseAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> records);

  /// @brief Method AddMarkToMarkAdjustmentRecords, addr 0x673b18c, size 0x218, virtual false, abstract: false, final false
  inline void AddMarkToMarkAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> records);

  /// @brief Method AddPairAdjustmentRecords, addr 0x673ad28, size 0x24c, virtual false, abstract: false, final false
  inline void AddPairAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> records);

  /// @brief Method AddSynthesizedCharacter, addr 0x6734f30, size 0x25c, virtual false, abstract: false, final false
  inline void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately);

  /// @brief Method AddSynthesizedCharactersAndFaceMetrics, addr 0x6733504, size 0x20c, virtual false, abstract: false, final false
  inline void AddSynthesizedCharactersAndFaceMetrics();

  /// @brief Method ClearAtlasTextures, addr 0x673bdf4, size 0x1f0, virtual false, abstract: false, final false
  inline void ClearAtlasTextures(bool setAtlasSizeToZero);

  /// @brief Method ClearCharacterAndGlyphTables, addr 0x673bb44, size 0x1bc, virtual false, abstract: false, final false
  inline void ClearCharacterAndGlyphTables();

  /// @brief Method ClearCharacterAndGlyphTablesInternal, addr 0x673c1a8, size 0x24, virtual false, abstract: false, final false
  inline void ClearCharacterAndGlyphTablesInternal();

  /// @brief Method ClearFallbackCharacterTable, addr 0x6734720, size 0x3c8, virtual false, abstract: false, final false
  inline void ClearFallbackCharacterTable();

  /// @brief Method ClearFontAssetData, addr 0x673bfe4, size 0x1c4, virtual false, abstract: false, final false
  inline void ClearFontAssetData(bool setAtlasSizeToZero);

  /// @brief Method ClearFontFeaturesInternal, addr 0x673c1cc, size 0x18, virtual false, abstract: false, final false
  inline void ClearFontFeaturesInternal();

  /// @brief Method ClearFontFeaturesTables, addr 0x673bd00, size 0xf4, virtual false, abstract: false, final false
  inline void ClearFontFeaturesTables();

  /// @brief Method CopyListDataToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ::ByRef<::ArrayW<T, ::Array<T>*>> dstArray);

  /// @brief Method CreateFontAsset, addr 0x6732420, size 0x1f4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method CreateFontAsset, addr 0x6732d34, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::UnityEngine::Font* font);

  /// @brief Method CreateFontAsset, addr 0x6732e78, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                 ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                 ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x6732db4, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                 ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                 ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x6732794, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                 ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight);

  /// @brief Method CreateFontAsset, addr 0x6732614, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                 ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                 ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAssetInstance, addr 0x673284c, size 0x4e8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                         int32_t atlasWidth, int32_t atlasHeight, ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method DestroyAtlasTextures, addr 0x67333e4, size 0xc8, virtual false, abstract: false, final false
  inline void DestroyAtlasTextures();

  /// @brief Method GetCharacters, addr 0x67371c0, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW GetCharacters(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetCharactersArray, addr 0x67372b8, size 0xf4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCharactersArray(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetGlyphIndex, addr 0x67373ac, size 0x11c, virtual false, abstract: false, final false
  inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method GetGlyphVariantIndex, addr 0x67374c8, size 0xac, virtual false, abstract: false, final false
  inline uint32_t GetGlyphVariantIndex(uint32_t unicode, uint32_t variantSelectorUnicode);

  /// @brief Method HasCharacter, addr 0x67355e0, size 0x5a0, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacter, addr 0x6735558, size 0x88, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t character);

  /// @brief Method HasCharacter_Internal, addr 0x67365d0, size 0x250, virtual false, abstract: false, final false
  inline bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x67370ec, size 0xd4, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text);

  /// @brief Method HasCharacters, addr 0x67369e8, size 0x704, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x6736820, size 0x1c8, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters);

  /// @brief Method ImportFontFeatures, addr 0x6733c30, size 0x10c, virtual false, abstract: false, final false
  inline void ImportFontFeatures();

  /// @brief Method InitializeCharacterLookupDictionary, addr 0x67339f8, size 0x238, virtual false, abstract: false, final false
  inline void InitializeCharacterLookupDictionary();

  /// @brief Method InitializeDictionaryLookupTables, addr 0x67334ac, size 0x58, virtual false, abstract: false, final false
  inline void InitializeDictionaryLookupTables();

  /// @brief Method InitializeGlyphLookupDictionary, addr 0x6733710, size 0x2e8, virtual false, abstract: false, final false
  inline void InitializeGlyphLookupDictionary();

  /// @brief Method InitializeGlyphPaidAdjustmentRecordsLookupDictionary, addr 0x673408c, size 0x264, virtual false, abstract: false, final false
  inline void InitializeGlyphPaidAdjustmentRecordsLookupDictionary();

  /// @brief Method InitializeLigatureSubstitutionLookupDictionary, addr 0x6733d3c, size 0x350, virtual false, abstract: false, final false
  inline void InitializeLigatureSubstitutionLookupDictionary();

  /// @brief Method InitializeMarkToBaseAdjustmentRecordsLookupDictionary, addr 0x67342f0, size 0x218, virtual false, abstract: false, final false
  inline void InitializeMarkToBaseAdjustmentRecordsLookupDictionary();

  /// @brief Method InitializeMarkToMarkAdjustmentRecordsLookupDictionary, addr 0x6734508, size 0x218, virtual false, abstract: false, final false
  inline void InitializeMarkToMarkAdjustmentRecordsLookupDictionary();

  /// @brief Method LoadFontFace, addr 0x6734e18, size 0x118, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace();

  static inline ::TMPro::TMP_FontAsset* New_ctor();

  /// @brief Method OnDestroy, addr 0x673337c, size 0x68, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReadFontAssetDefinition, addr 0x6731c74, size 0x600, virtual false, abstract: false, final false
  inline void ReadFontAssetDefinition();

  /// @brief Method RegisterAtlasTextureForApply, addr 0x67378a0, size 0x140, virtual false, abstract: false, final false
  static inline void RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture);

  /// @brief Method RegisterCallbackInstance, addr 0x6733020, size 0x35c, virtual false, abstract: false, final false
  inline void RegisterCallbackInstance(::TMPro::TMP_FontAsset* instance);

  /// @brief Method RegisterFontAssetForFontFeatureUpdate, addr 0x6737574, size 0x148, virtual false, abstract: false, final false
  static inline void RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method SetupNewAtlasTexture, addr 0x673a1b8, size 0x200, virtual false, abstract: false, final false
  inline void SetupNewAtlasTexture();

  /// @brief Method SortAllTables, addr 0x6735538, size 0x20, virtual false, abstract: false, final false
  inline void SortAllTables();

  /// @brief Method SortCharacterTable, addr 0x6735258, size 0x150, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortFontFeatureTable, addr 0x67354f8, size 0x40, virtual false, abstract: false, final false
  inline void SortFontFeatureTable();

  /// @brief Method SortGlyphTable, addr 0x67353a8, size 0x150, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method TryAddCharacterInternal, addr 0x6735b80, size 0xa50, virtual false, abstract: false, final false
  inline bool TryAddCharacterInternal(uint32_t unicode, ::ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method TryAddCharacters, addr 0x6738d8c, size 0x1c, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x6738da8, size 0xc64, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, ::ByRef<::StringW> missingCharacters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x6737bbc, size 0x1c, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x6737bd8, size 0xc90, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures);

  /// @brief Method TryAddGlyphInternal, addr 0x6739a24, size 0x70c, virtual false, abstract: false, final false
  inline bool TryAddGlyphInternal(uint32_t glyphIndex, ::ByRef<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryAddGlyphsToAtlasTextures, addr 0x673a9f4, size 0x4, virtual false, abstract: false, final false
  inline void TryAddGlyphsToAtlasTextures();

  /// @brief Method TryAddGlyphsToNewAtlasTexture, addr 0x6738868, size 0x4b4, virtual false, abstract: false, final false
  inline bool TryAddGlyphsToNewAtlasTexture();

  /// @brief Method TryGetCharacter_and_QueueRenderToTexture, addr 0x673a3b8, size 0x63c, virtual false, abstract: false, final false
  inline bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ::ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method UpdateAtlasTexture, addr 0x673a9f8, size 0x18c, virtual false, abstract: false, final false
  inline void UpdateAtlasTexture();

  /// @brief Method UpdateAtlasTexturesInQueue, addr 0x67379e0, size 0x188, virtual false, abstract: false, final false
  static inline void UpdateAtlasTexturesInQueue();

  /// @brief Method UpdateDiacriticalMarkAdjustmentRecords, addr 0x673ac7c, size 0xac, virtual false, abstract: false, final false
  inline void UpdateDiacriticalMarkAdjustmentRecords();

  /// @brief Method UpdateFontAssetData, addr 0x673b9d4, size 0x170, virtual false, abstract: false, final false
  inline void UpdateFontAssetData();

  /// @brief Method UpdateFontAssetsInUpdateQueue, addr 0x6737b68, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateFontAssetsInUpdateQueue();

  /// @brief Method UpdateFontFeaturesForFontAssetsInQueue, addr 0x67376bc, size 0x17c, virtual false, abstract: false, final false
  static inline void UpdateFontFeaturesForFontAssetsInQueue();

  /// @brief Method UpdateFontFeaturesForNewlyAddedGlyphs, addr 0x6738d1c, size 0x70, virtual false, abstract: false, final false
  inline void UpdateFontFeaturesForNewlyAddedGlyphs();

  /// @brief Method UpdateGPOSFontFeaturesForNewlyAddedGlyphs, addr 0x6737838, size 0x68, virtual false, abstract: false, final false
  inline void UpdateGPOSFontFeaturesForNewlyAddedGlyphs();

  /// @brief Method UpdateGSUBFontFeaturesForNewGlyphIndex, addr 0x673a130, size 0x88, virtual false, abstract: false, final false
  inline void UpdateGSUBFontFeaturesForNewGlyphIndex(uint32_t glyphIndex);

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x673ac00, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords();

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x673b760, size 0x274, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes);

  /// @brief Method UpdateLigatureSubstitutionRecords, addr 0x673ab84, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateLigatureSubstitutionRecords();

  /// @brief Method UpgradeGlyphAdjustmentTableToFontFeatureTable, addr 0x6734ae8, size 0x330, virtual false, abstract: false, final false
  inline void UpgradeGlyphAdjustmentTableToFontFeatureTable();

  constexpr bool const& __cordl_internal_get_InternalDynamicOS() const;

  constexpr bool& __cordl_internal_get_InternalDynamicOS();

  constexpr bool const& __cordl_internal_get_IsFontAssetLookupTablesDirty() const;

  constexpr bool& __cordl_internal_get_IsFontAssetLookupTablesDirty();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_atlas() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_atlas();

  constexpr float_t const& __cordl_internal_get_boldSpacing() const;

  constexpr float_t& __cordl_internal_get_boldSpacing();

  constexpr float_t const& __cordl_internal_get_boldStyle() const;

  constexpr float_t& __cordl_internal_get_boldStyle();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& __cordl_internal_get_fallbackFontAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get_fallbackFontAssets();

  constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> const& __cordl_internal_get_fontWeights() const;

  constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>& __cordl_internal_get_fontWeights();

  constexpr uint8_t const& __cordl_internal_get_italicStyle() const;

  constexpr uint8_t& __cordl_internal_get_italicStyle();

  constexpr int32_t const& __cordl_internal_get_m_AtlasHeight() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasHeight();

  constexpr int32_t const& __cordl_internal_get_m_AtlasPadding() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasPadding();

  constexpr ::TMPro::AtlasPopulationMode const& __cordl_internal_get_m_AtlasPopulationMode() const;

  constexpr ::TMPro::AtlasPopulationMode& __cordl_internal_get_m_AtlasPopulationMode();

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

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* const& __cordl_internal_get_m_CharacterLookupDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>*& __cordl_internal_get_m_CharacterLookupDictionary();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* const& __cordl_internal_get_m_CharacterTable() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*& __cordl_internal_get_m_CharacterTable();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* const& __cordl_internal_get_m_CharactersToAdd() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*& __cordl_internal_get_m_CharactersToAdd();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_CharactersToAddLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_CharactersToAddLookup();

  constexpr bool const& __cordl_internal_get_m_ClearDynamicDataOnBuild() const;

  constexpr bool& __cordl_internal_get_m_ClearDynamicDataOnBuild();

  constexpr ::TMPro::FontAssetCreationSettings const& __cordl_internal_get_m_CreationSettings() const;

  constexpr ::TMPro::FontAssetCreationSettings& __cordl_internal_get_m_CreationSettings();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& __cordl_internal_get_m_FallbackFontAssetTable() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get_m_FallbackFontAssetTable();

  constexpr int32_t const& __cordl_internal_get_m_FamilyNameHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_FamilyNameHashCode();

  constexpr ::TMPro::TMP_FontFeatureTable* const& __cordl_internal_get_m_FontFeatureTable() const;

  constexpr ::TMPro::TMP_FontFeatureTable*& __cordl_internal_get_m_FontFeatureTable();

  constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> const& __cordl_internal_get_m_FontWeightTable() const;

  constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>& __cordl_internal_get_m_FontWeightTable();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& __cordl_internal_get_m_FreeGlyphRects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __cordl_internal_get_m_FreeGlyphRects();

  constexpr bool const& __cordl_internal_get_m_GetFontFeatures() const;

  constexpr bool& __cordl_internal_get_m_GetFontFeatures();

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

  constexpr ::TMPro::KerningTable* const& __cordl_internal_get_m_KerningTable() const;

  constexpr ::TMPro::KerningTable*& __cordl_internal_get_m_KerningTable();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_MissingUnicodesFromFontFile() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_MissingUnicodesFromFontFile();

  constexpr bool const& __cordl_internal_get_m_ShouldReimportFontFeatures() const;

  constexpr bool& __cordl_internal_get_m_ShouldReimportFontFeatures();

  constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_m_SourceFontFile() const;

  constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_m_SourceFontFile();

  constexpr ::StringW const& __cordl_internal_get_m_SourceFontFileGUID() const;

  constexpr ::StringW& __cordl_internal_get_m_SourceFontFileGUID();

  constexpr ::StringW const& __cordl_internal_get_m_SourceFontFilePath() const;

  constexpr ::StringW& __cordl_internal_get_m_SourceFontFilePath();

  constexpr int32_t const& __cordl_internal_get_m_StyleNameHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_StyleNameHashCode();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& __cordl_internal_get_m_UsedGlyphRects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __cordl_internal_get_m_UsedGlyphRects();

  constexpr ::TMPro::FaceInfo_Legacy* const& __cordl_internal_get_m_fontInfo() const;

  constexpr ::TMPro::FaceInfo_Legacy*& __cordl_internal_get_m_fontInfo();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* const& __cordl_internal_get_m_glyphInfoList() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>*& __cordl_internal_get_m_glyphInfoList();

  constexpr float_t const& __cordl_internal_get_normalSpacingOffset() const;

  constexpr float_t& __cordl_internal_get_normalSpacingOffset();

  constexpr float_t const& __cordl_internal_get_normalStyle() const;

  constexpr float_t& __cordl_internal_get_normalStyle();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_s_MissingCharacterList() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_s_MissingCharacterList();

  constexpr uint8_t const& __cordl_internal_get_tabSize() const;

  constexpr uint8_t& __cordl_internal_get_tabSize();

  constexpr void __cordl_internal_set_InternalDynamicOS(bool value);

  constexpr void __cordl_internal_set_IsFontAssetLookupTablesDirty(bool value);

  constexpr void __cordl_internal_set_atlas(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_boldSpacing(float_t value);

  constexpr void __cordl_internal_set_boldStyle(float_t value);

  constexpr void __cordl_internal_set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  constexpr void __cordl_internal_set_fontWeights(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value);

  constexpr void __cordl_internal_set_italicStyle(uint8_t value);

  constexpr void __cordl_internal_set_m_AtlasHeight(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasPadding(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasPopulationMode(::TMPro::AtlasPopulationMode value);

  constexpr void __cordl_internal_set_m_AtlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  constexpr void __cordl_internal_set_m_AtlasTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_AtlasTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_m_AtlasWidth(int32_t value);

  constexpr void __cordl_internal_set_m_CharacterLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* value);

  constexpr void __cordl_internal_set_m_CharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value);

  constexpr void __cordl_internal_set_m_CharactersToAdd(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value);

  constexpr void __cordl_internal_set_m_CharactersToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_ClearDynamicDataOnBuild(bool value);

  constexpr void __cordl_internal_set_m_CreationSettings(::TMPro::FontAssetCreationSettings value);

  constexpr void __cordl_internal_set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FamilyNameHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_FontFeatureTable(::TMPro::TMP_FontFeatureTable* value);

  constexpr void __cordl_internal_set_m_FontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value);

  constexpr void __cordl_internal_set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr void __cordl_internal_set_m_GetFontFeatures(bool value);

  constexpr void __cordl_internal_set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_IsMultiAtlasTexturesEnabled(bool value);

  constexpr void __cordl_internal_set_m_KerningTable(::TMPro::KerningTable* value);

  constexpr void __cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_ShouldReimportFontFeatures(bool value);

  constexpr void __cordl_internal_set_m_SourceFontFile(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_m_SourceFontFileGUID(::StringW value);

  constexpr void __cordl_internal_set_m_SourceFontFilePath(::StringW value);

  constexpr void __cordl_internal_set_m_StyleNameHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr void __cordl_internal_set_m_fontInfo(::TMPro::FaceInfo_Legacy* value);

  constexpr void __cordl_internal_set_m_glyphInfoList(::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* value);

  constexpr void __cordl_internal_set_normalSpacingOffset(float_t value);

  constexpr void __cordl_internal_set_normalStyle(float_t value);

  constexpr void __cordl_internal_set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_tabSize(uint8_t value);

  /// @brief Method .ctor, addr 0x673c1e4, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_AddSynthesizedCharactersMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ClearFontAssetDataMarker();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup();

  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_k_FontAssets_FontFeaturesUpdateQueue();

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

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateLigatureSubstitutionRecordsMarker();

  static inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* getStaticF_s_CallbackInstances();

  static inline ::StringW getStaticF_s_DefaultMaterialSuffix();

  /// @brief Method get_atlasHeight, addr 0x6732398, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasHeight();

  /// @brief Method get_atlasPadding, addr 0x67323a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasPadding();

  /// @brief Method get_atlasPopulationMode, addr 0x6731b40, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::AtlasPopulationMode get_atlasPopulationMode();

  /// @brief Method get_atlasRenderMode, addr 0x67323b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();

  /// @brief Method get_atlasTexture, addr 0x67322a8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_atlasTexture();

  /// @brief Method get_atlasTextureCount, addr 0x673234c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_atlasTextureCount();

  /// @brief Method get_atlasTextures, addr 0x673233c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> get_atlasTextures();

  /// @brief Method get_atlasWidth, addr 0x6732388, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasWidth();

  /// @brief Method get_characterLookupTable, addr 0x6732284, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* get_characterLookupTable();

  /// @brief Method get_characterTable, addr 0x6732274, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* get_characterTable();

  /// @brief Method get_clearDynamicDataOnBuild, addr 0x6732378, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDynamicDataOnBuild();

  /// @brief Method get_creationSettings, addr 0x6731b14, size 0x10, virtual false, abstract: false, final false
  inline ::TMPro::FontAssetCreationSettings get_creationSettings();

  /// @brief Method get_fallbackFontAssetTable, addr 0x67323f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* get_fallbackFontAssetTable();

  /// @brief Method get_familyNameHashCode, addr 0x6731b50, size 0x70, virtual false, abstract: false, final false
  inline int32_t get_familyNameHashCode();

  /// @brief Method get_fontFeatureTable, addr 0x67323e8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_FontFeatureTable* get_fontFeatureTable();

  /// @brief Method get_fontInfo, addr 0x6732418, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::FaceInfo_Legacy* get_fontInfo();

  /// @brief Method get_fontWeightTable, addr 0x6732408, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> get_fontWeightTable();

  /// @brief Method get_freeGlyphRects, addr 0x67323d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();

  /// @brief Method get_getFontFeatures, addr 0x6732368, size 0x8, virtual false, abstract: false, final false
  inline bool get_getFontFeatures();

  /// @brief Method get_glyphLookupTable, addr 0x6731c50, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();

  /// @brief Method get_glyphTable, addr 0x6731c40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable();

  /// @brief Method get_isMultiAtlasTexturesEnabled, addr 0x6732358, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMultiAtlasTexturesEnabled();

  /// @brief Method get_sourceFontFile, addr 0x6731b30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_sourceFontFile();

  /// @brief Method get_styleNameHashCode, addr 0x6731bc8, size 0x70, virtual false, abstract: false, final false
  inline int32_t get_styleNameHashCode();

  /// @brief Method get_usedGlyphRects, addr 0x67323c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();

  static inline void setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

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

  static inline void setStaticF_k_UpdateLigatureSubstitutionRecordsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_CallbackInstances(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* value);

  static inline void setStaticF_s_DefaultMaterialSuffix(::StringW value);

  /// @brief Method set_atlasHeight, addr 0x67323a0, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasHeight(int32_t value);

  /// @brief Method set_atlasPadding, addr 0x67323b0, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPadding(int32_t value);

  /// @brief Method set_atlasPopulationMode, addr 0x6731b48, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPopulationMode(::TMPro::AtlasPopulationMode value);

  /// @brief Method set_atlasRenderMode, addr 0x67323c0, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  /// @brief Method set_atlasTextures, addr 0x6732344, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value);

  /// @brief Method set_atlasWidth, addr 0x6732390, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasWidth(int32_t value);

  /// @brief Method set_characterTable, addr 0x673227c, size 0x8, virtual false, abstract: false, final false
  inline void set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value);

  /// @brief Method set_clearDynamicDataOnBuild, addr 0x6732380, size 0x8, virtual false, abstract: false, final false
  inline void set_clearDynamicDataOnBuild(bool value);

  /// @brief Method set_creationSettings, addr 0x6731b24, size 0xc, virtual false, abstract: false, final false
  inline void set_creationSettings(::TMPro::FontAssetCreationSettings value);

  /// @brief Method set_fallbackFontAssetTable, addr 0x6732400, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method set_familyNameHashCode, addr 0x6731bc0, size 0x8, virtual false, abstract: false, final false
  inline void set_familyNameHashCode(int32_t value);

  /// @brief Method set_fontFeatureTable, addr 0x67323f0, size 0x8, virtual false, abstract: false, final false
  inline void set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* value);

  /// @brief Method set_fontWeightTable, addr 0x6732410, size 0x8, virtual false, abstract: false, final false
  inline void set_fontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value);

  /// @brief Method set_freeGlyphRects, addr 0x67323e0, size 0x8, virtual false, abstract: false, final false
  inline void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method set_getFontFeatures, addr 0x6732370, size 0x8, virtual false, abstract: false, final false
  inline void set_getFontFeatures(bool value);

  /// @brief Method set_glyphTable, addr 0x6731c48, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  /// @brief Method set_isMultiAtlasTexturesEnabled, addr 0x6732360, size 0x8, virtual false, abstract: false, final false
  inline void set_isMultiAtlasTexturesEnabled(bool value);

  /// @brief Method set_sourceFontFile, addr 0x6731b38, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceFontFile(::UnityEngine::Font* value);

  /// @brief Method set_styleNameHashCode, addr 0x6731c38, size 0x8, virtual false, abstract: false, final false
  inline void set_styleNameHashCode(int32_t value);

  /// @brief Method set_usedGlyphRects, addr 0x67323d0, size 0x8, virtual false, abstract: false, final false
  inline void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontAsset(TMP_FontAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontAsset(TMP_FontAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15870 };

  /// @brief Field m_SourceFontFileGUID, offset: 0x98, size: 0x8, def value: None
  ::StringW ___m_SourceFontFileGUID;

  /// @brief Field m_CreationSettings, offset: 0xa0, size: 0x60, def value: None
  ::TMPro::FontAssetCreationSettings ___m_CreationSettings;

  /// @brief Field m_SourceFontFile, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> ___m_SourceFontFile;

  /// @brief Field m_SourceFontFilePath, offset: 0x108, size: 0x8, def value: None
  ::StringW ___m_SourceFontFilePath;

  /// @brief Field m_AtlasPopulationMode, offset: 0x110, size: 0x4, def value: None
  ::TMPro::AtlasPopulationMode ___m_AtlasPopulationMode;

  /// @brief Field InternalDynamicOS, offset: 0x114, size: 0x1, def value: None
  bool ___InternalDynamicOS;

  /// @brief Field m_FamilyNameHashCode, offset: 0x118, size: 0x4, def value: None
  int32_t ___m_FamilyNameHashCode;

  /// @brief Field m_StyleNameHashCode, offset: 0x11c, size: 0x4, def value: None
  int32_t ___m_StyleNameHashCode;

  /// @brief Field m_GlyphTable, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphTable;

  /// @brief Field m_GlyphLookupDictionary, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* ___m_GlyphLookupDictionary;

  /// @brief Field m_CharacterTable, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* ___m_CharacterTable;

  /// @brief Field m_CharacterLookupDictionary, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* ___m_CharacterLookupDictionary;

  /// @brief Field m_AtlasTexture, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_AtlasTexture;

  /// @brief Field m_AtlasTextures, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___m_AtlasTextures;

  /// @brief Field m_AtlasTextureIndex, offset: 0x150, size: 0x4, def value: None
  int32_t ___m_AtlasTextureIndex;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset: 0x154, size: 0x1, def value: None
  bool ___m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_GetFontFeatures, offset: 0x155, size: 0x1, def value: None
  bool ___m_GetFontFeatures;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0x156, size: 0x1, def value: None
  bool ___m_ClearDynamicDataOnBuild;

  /// @brief Field m_AtlasWidth, offset: 0x158, size: 0x4, def value: None
  int32_t ___m_AtlasWidth;

  /// @brief Field m_AtlasHeight, offset: 0x15c, size: 0x4, def value: None
  int32_t ___m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset: 0x160, size: 0x4, def value: None
  int32_t ___m_AtlasPadding;

  /// @brief Field m_AtlasRenderMode, offset: 0x164, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode ___m_AtlasRenderMode;

  /// @brief Field m_UsedGlyphRects, offset: 0x168, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_UsedGlyphRects;

  /// @brief Field m_FreeGlyphRects, offset: 0x170, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_FreeGlyphRects;

  /// @brief Field m_FontFeatureTable, offset: 0x178, size: 0x8, def value: None
  ::TMPro::TMP_FontFeatureTable* ___m_FontFeatureTable;

  /// @brief Field m_ShouldReimportFontFeatures, offset: 0x180, size: 0x1, def value: None
  bool ___m_ShouldReimportFontFeatures;

  /// @brief Field m_FallbackFontAssetTable, offset: 0x188, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ___m_FallbackFontAssetTable;

  /// @brief Field m_FontWeightTable, offset: 0x190, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> ___m_FontWeightTable;

  /// @brief Field fontWeights, offset: 0x198, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> ___fontWeights;

  /// @brief Field normalStyle, offset: 0x1a0, size: 0x4, def value: None
  float_t ___normalStyle;

  /// @brief Field normalSpacingOffset, offset: 0x1a4, size: 0x4, def value: None
  float_t ___normalSpacingOffset;

  /// @brief Field boldStyle, offset: 0x1a8, size: 0x4, def value: None
  float_t ___boldStyle;

  /// @brief Field boldSpacing, offset: 0x1ac, size: 0x4, def value: None
  float_t ___boldSpacing;

  /// @brief Field italicStyle, offset: 0x1b0, size: 0x1, def value: None
  uint8_t ___italicStyle;

  /// @brief Field tabSize, offset: 0x1b1, size: 0x1, def value: None
  uint8_t ___tabSize;

  /// @brief Field IsFontAssetLookupTablesDirty, offset: 0x1b2, size: 0x1, def value: None
  bool ___IsFontAssetLookupTablesDirty;

  /// @brief Field m_fontInfo, offset: 0x1b8, size: 0x8, def value: None
  ::TMPro::FaceInfo_Legacy* ___m_fontInfo;

  /// @brief Field m_glyphInfoList, offset: 0x1c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* ___m_glyphInfoList;

  /// @brief Field m_KerningTable, offset: 0x1c8, size: 0x8, def value: None
  ::TMPro::KerningTable* ___m_KerningTable;

  /// @brief Field fallbackFontAssets, offset: 0x1d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ___fallbackFontAssets;

  /// @brief Field atlas, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___atlas;

  /// @brief Field m_GlyphsToRender, offset: 0x1e0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsToRender;

  /// @brief Field m_GlyphsRendered, offset: 0x1e8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsRendered;

  /// @brief Field m_GlyphIndexList, offset: 0x1f0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset: 0x1f8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphsToAdd, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset: 0x208, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_GlyphsToAddLookup;

  /// @brief Field m_CharactersToAdd, offset: 0x210, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* ___m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset: 0x218, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_CharactersToAddLookup;

  /// @brief Field s_MissingCharacterList, offset: 0x220, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___s_MissingCharacterList;

  /// @brief Field m_MissingUnicodesFromFontFile, offset: 0x228, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_MissingUnicodesFromFontFile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_SourceFontFileGUID) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CreationSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_SourceFontFile) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_SourceFontFilePath) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasPopulationMode) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___InternalDynamicOS) == 0x114, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FamilyNameHashCode) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_StyleNameHashCode) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphTable) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphLookupDictionary) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharacterTable) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharacterLookupDictionary) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasTexture) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasTextures) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasTextureIndex) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_IsMultiAtlasTexturesEnabled) == 0x154, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GetFontFeatures) == 0x155, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_ClearDynamicDataOnBuild) == 0x156, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasWidth) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasHeight) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasPadding) == 0x160, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasRenderMode) == 0x164, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_UsedGlyphRects) == 0x168, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FreeGlyphRects) == 0x170, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FontFeatureTable) == 0x178, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_ShouldReimportFontFeatures) == 0x180, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FallbackFontAssetTable) == 0x188, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FontWeightTable) == 0x190, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___fontWeights) == 0x198, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___normalStyle) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___normalSpacingOffset) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___boldStyle) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___boldSpacing) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___italicStyle) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___tabSize) == 0x1b1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___IsFontAssetLookupTablesDirty) == 0x1b2, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_fontInfo) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_glyphInfoList) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_KerningTable) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___fallbackFontAssets) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___atlas) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsToRender) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsRendered) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphIndexList) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphIndexListNewlyAdded) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsToAdd) == 0x200, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsToAddLookup) == 0x208, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharactersToAdd) == 0x210, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharactersToAddLookup) == 0x218, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___s_MissingCharacterList) == 0x220, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_MissingUnicodesFromFontFile) == 0x228, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontAsset, 0x230>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_FontAsset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAsset*, "TMPro", "TMP_FontAsset");
NEED_NO_BOX(::TMPro::TMP_FontAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAsset___c*, "TMPro", "TMP_FontAsset/<>c");
