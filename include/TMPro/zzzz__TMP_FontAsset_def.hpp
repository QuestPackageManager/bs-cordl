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
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
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
struct GlyphRenderMode;
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

  /// @brief Field <>9__124_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__124_0, put = setStaticF___9__124_0)) ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* __9__124_0;

  /// @brief Field <>9__125_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__125_0, put = setStaticF___9__125_0)) ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* __9__125_0;

  static inline ::TMPro::TMP_FontAsset___c* New_ctor();

  /// @brief Method <SortCharacterTable>b__124_0, addr 0x47d42a0, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__124_0(::TMPro::TMP_Character* c);

  /// @brief Method <SortGlyphTable>b__125_0, addr 0x47d42b8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__125_0(::UnityEngine::TextCore::Glyph* c);

  /// @brief Method .ctor, addr 0x47d4298, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_FontAsset___c* getStaticF___9();

  static inline ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* getStaticF___9__124_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* getStaticF___9__125_0();

  static inline void setStaticF___9(::TMPro::TMP_FontAsset___c* value);

  static inline void setStaticF___9__124_0(::System::Func_2<::TMPro::TMP_Character*, uint32_t>* value);

  static inline void setStaticF___9__125_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontAsset___c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.AtlasPopulationMode, TMPro.FontAssetCreationSettings, TMPro.TMP_Asset, Unity.Profiling.ProfilerMarker, UnityEngine.TextCore.FaceInfo,
// UnityEngine.TextCore.LowLevel.GlyphRenderMode
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_FontAsset
class CORDL_TYPE TMP_FontAsset : public ::TMPro::TMP_Asset {
public:
  // Declarations
  using __c = ::TMPro::TMP_FontAsset___c;

  /// @brief Field FallbackSearchQueryLookup, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_FallbackSearchQueryLookup,
                      put = __cordl_internal_set_FallbackSearchQueryLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* FallbackSearchQueryLookup;

  /// @brief Field IsFontAssetLookupTablesDirty, offset 0x1ba, size 0x1
  __declspec(property(get = __cordl_internal_get_IsFontAssetLookupTablesDirty, put = __cordl_internal_set_IsFontAssetLookupTablesDirty)) bool IsFontAssetLookupTablesDirty;

  /// @brief Field atlas, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_atlas, put = __cordl_internal_set_atlas)) ::UnityW<::UnityEngine::Texture2D> atlas;

  __declspec(property(get = get_atlasHeight, put = set_atlasHeight)) int32_t atlasHeight;

  __declspec(property(get = get_atlasPadding, put = set_atlasPadding)) int32_t atlasPadding;

  __declspec(property(get = get_atlasPopulationMode, put = set_atlasPopulationMode)) ::TMPro::AtlasPopulationMode atlasPopulationMode;

  __declspec(property(get = get_atlasRenderMode, put = set_atlasRenderMode)) ::UnityEngine::TextCore::LowLevel::GlyphRenderMode atlasRenderMode;

  __declspec(property(get = get_atlasTexture)) ::UnityW<::UnityEngine::Texture2D> atlasTexture;

  __declspec(property(get = get_atlasTextureCount)) int32_t atlasTextureCount;

  __declspec(property(get = get_atlasTextures, put = set_atlasTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> atlasTextures;

  __declspec(property(get = get_atlasWidth, put = set_atlasWidth)) int32_t atlasWidth;

  /// @brief Field boldSpacing, offset 0x1b4, size 0x4
  __declspec(property(get = __cordl_internal_get_boldSpacing, put = __cordl_internal_set_boldSpacing)) float_t boldSpacing;

  /// @brief Field boldStyle, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_boldStyle, put = __cordl_internal_set_boldStyle)) float_t boldStyle;

  __declspec(property(get = get_characterLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* characterLookupTable;

  __declspec(property(get = get_characterTable, put = set_characterTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* characterTable;

  __declspec(property(get = get_clearDynamicDataOnBuild, put = set_clearDynamicDataOnBuild)) bool clearDynamicDataOnBuild;

  __declspec(property(get = get_creationSettings, put = set_creationSettings)) ::TMPro::FontAssetCreationSettings creationSettings;

  __declspec(property(get = get_faceInfo, put = set_faceInfo)) ::UnityEngine::TextCore::FaceInfo faceInfo;

  __declspec(property(get = get_fallbackFontAssetTable, put = set_fallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fallbackFontAssetTable;

  /// @brief Field fallbackFontAssets, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackFontAssets,
                      put = __cordl_internal_set_fallbackFontAssets)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fallbackFontAssets;

  __declspec(property(get = get_fontFeatureTable, put = set_fontFeatureTable)) ::TMPro::TMP_FontFeatureTable* fontFeatureTable;

  __declspec(property(get = get_fontInfo)) ::TMPro::FaceInfo_Legacy* fontInfo;

  __declspec(property(get = get_fontWeightTable, put = set_fontWeightTable)) ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> fontWeightTable;

  /// @brief Field fontWeights, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_fontWeights, put = __cordl_internal_set_fontWeights)) ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> fontWeights;

  __declspec(property(get = get_freeGlyphRects, put = set_freeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects;

  __declspec(property(get = get_glyphLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* glyphLookupTable;

  __declspec(property(get = get_glyphTable, put = set_glyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* glyphTable;

  __declspec(property(get = get_isMultiAtlasTexturesEnabled, put = set_isMultiAtlasTexturesEnabled)) bool isMultiAtlasTexturesEnabled;

  /// @brief Field italicStyle, offset 0x1b8, size 0x1
  __declspec(property(get = __cordl_internal_get_italicStyle, put = __cordl_internal_set_italicStyle)) uint8_t italicStyle;

  /// @brief Field k_AddSynthesizedCharactersMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AddSynthesizedCharactersMarker, put = setStaticF_k_AddSynthesizedCharactersMarker)) ::Unity::Profiling::ProfilerMarker k_AddSynthesizedCharactersMarker;

  /// @brief Field k_ClearFontAssetDataMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ClearFontAssetDataMarker, put = setStaticF_k_ClearFontAssetDataMarker)) ::Unity::Profiling::ProfilerMarker k_ClearFontAssetDataMarker;

  /// @brief Field k_FontAssets_AtlasTexturesUpdateQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FontAssets_AtlasTexturesUpdateQueue,
                      put = setStaticF_k_FontAssets_AtlasTexturesUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* k_FontAssets_AtlasTexturesUpdateQueue;

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

  /// @brief Field k_UpdateFontAssetDataMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateFontAssetDataMarker, put = setStaticF_k_UpdateFontAssetDataMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateFontAssetDataMarker;

  /// @brief Field k_UpdateGlyphAdjustmentRecordsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateGlyphAdjustmentRecordsMarker,
                      put = setStaticF_k_UpdateGlyphAdjustmentRecordsMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

  /// @brief Field m_AtlasHeight, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasHeight, put = __cordl_internal_set_m_AtlasHeight)) int32_t m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasPadding, put = __cordl_internal_set_m_AtlasPadding)) int32_t m_AtlasPadding;

  /// @brief Field m_AtlasPopulationMode, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasPopulationMode, put = __cordl_internal_set_m_AtlasPopulationMode)) ::TMPro::AtlasPopulationMode m_AtlasPopulationMode;

  /// @brief Field m_AtlasRenderMode, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasRenderMode, put = __cordl_internal_set_m_AtlasRenderMode)) ::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;

  /// @brief Field m_AtlasTexture, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTexture, put = __cordl_internal_set_m_AtlasTexture)) ::UnityW<::UnityEngine::Texture2D> m_AtlasTexture;

  /// @brief Field m_AtlasTextureIndex, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasTextureIndex, put = __cordl_internal_set_m_AtlasTextureIndex)) int32_t m_AtlasTextureIndex;

  /// @brief Field m_AtlasTextures, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTextures,
                      put = __cordl_internal_set_m_AtlasTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      m_AtlasTextures;

  /// @brief Field m_AtlasWidth, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasWidth, put = __cordl_internal_set_m_AtlasWidth)) int32_t m_AtlasWidth;

  /// @brief Field m_CharacterLookupDictionary, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterLookupDictionary,
                      put = __cordl_internal_set_m_CharacterLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* m_CharacterLookupDictionary;

  /// @brief Field m_CharacterTable, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterTable, put = __cordl_internal_set_m_CharacterTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharacterTable;

  /// @brief Field m_CharactersToAdd, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAdd, put = __cordl_internal_set_m_CharactersToAdd)) ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAddLookup,
                      put = __cordl_internal_set_m_CharactersToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_CharactersToAddLookup;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0xe5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDynamicDataOnBuild, put = __cordl_internal_set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_CreationSettings, offset 0x140, size 0x58
  __declspec(property(get = __cordl_internal_get_m_CreationSettings, put = __cordl_internal_set_m_CreationSettings)) ::TMPro::FontAssetCreationSettings m_CreationSettings;

  /// @brief Field m_FaceInfo, offset 0x50, size 0x60
  __declspec(property(get = __cordl_internal_get_m_FaceInfo, put = __cordl_internal_set_m_FaceInfo)) ::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_FallbackFontAssetTable, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackFontAssetTable,
                      put = __cordl_internal_set_m_FallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* m_FallbackFontAssetTable;

  /// @brief Field m_FontFeatureTable, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontFeatureTable, put = __cordl_internal_set_m_FontFeatureTable)) ::TMPro::TMP_FontFeatureTable* m_FontFeatureTable;

  /// @brief Field m_FontWeightTable, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontWeightTable, put = __cordl_internal_set_m_FontWeightTable)) ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>
      m_FontWeightTable;

  /// @brief Field m_FreeGlyphRects, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeGlyphRects,
                      put = __cordl_internal_set_m_FreeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;

  /// @brief Field m_GlyphIndexList, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexList, put = __cordl_internal_set_m_GlyphIndexList)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexListNewlyAdded,
                      put = __cordl_internal_set_m_GlyphIndexListNewlyAdded)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphLookupDictionary, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphLookupDictionary,
                      put = __cordl_internal_set_m_GlyphLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;

  /// @brief Field m_GlyphTable, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphTable, put = __cordl_internal_set_m_GlyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable;

  /// @brief Field m_GlyphsRendered, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsRendered,
                      put = __cordl_internal_set_m_GlyphsRendered)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered;

  /// @brief Field m_GlyphsToAdd, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAdd, put = __cordl_internal_set_m_GlyphsToAdd)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAddLookup, put = __cordl_internal_set_m_GlyphsToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_GlyphsToAddLookup;

  /// @brief Field m_GlyphsToRender, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToRender,
                      put = __cordl_internal_set_m_GlyphsToRender)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset 0xe4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMultiAtlasTexturesEnabled, put = __cordl_internal_set_m_IsMultiAtlasTexturesEnabled)) bool m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_KerningTable, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KerningTable, put = __cordl_internal_set_m_KerningTable)) ::TMPro::KerningTable* m_KerningTable;

  /// @brief Field m_MissingUnicodesFromFontFile, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MissingUnicodesFromFontFile,
                      put = __cordl_internal_set_m_MissingUnicodesFromFontFile)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_MissingUnicodesFromFontFile;

  /// @brief Field m_SourceFontFile, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFile, put = __cordl_internal_set_m_SourceFontFile)) ::UnityW<::UnityEngine::Font> m_SourceFontFile;

  /// @brief Field m_SourceFontFileGUID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFileGUID, put = __cordl_internal_set_m_SourceFontFileGUID)) ::StringW m_SourceFontFileGUID;

  /// @brief Field m_UsedGlyphRects, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsedGlyphRects,
                      put = __cordl_internal_set_m_UsedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;

  /// @brief Field m_Version, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::StringW m_Version;

  /// @brief Field m_fontInfo, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontInfo, put = __cordl_internal_set_m_fontInfo)) ::TMPro::FaceInfo_Legacy* m_fontInfo;

  /// @brief Field m_glyphInfoList, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_glyphInfoList, put = __cordl_internal_set_m_glyphInfoList)) ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* m_glyphInfoList;

  /// @brief Field normalSpacingOffset, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_normalSpacingOffset, put = __cordl_internal_set_normalSpacingOffset)) float_t normalSpacingOffset;

  /// @brief Field normalStyle, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_normalStyle, put = __cordl_internal_set_normalStyle)) float_t normalStyle;

  /// @brief Field s_DefaultMaterialSuffix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultMaterialSuffix, put = setStaticF_s_DefaultMaterialSuffix)) ::StringW s_DefaultMaterialSuffix;

  /// @brief Field s_MissingCharacterList, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_s_MissingCharacterList, put = __cordl_internal_set_s_MissingCharacterList)) ::System::Collections::Generic::List_1<uint32_t>* s_MissingCharacterList;

  __declspec(property(get = get_sourceFontFile, put = set_sourceFontFile)) ::UnityW<::UnityEngine::Font> sourceFontFile;

  /// @brief Field tabSize, offset 0x1b9, size 0x1
  __declspec(property(get = __cordl_internal_get_tabSize, put = __cordl_internal_set_tabSize)) uint8_t tabSize;

  __declspec(property(get = get_usedGlyphRects, put = set_usedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects;

  __declspec(property(get = get_version, put = set_version)) ::StringW version;

  /// @brief Method AddCharacterToLookupCache, addr 0x47ce250, size 0xb8, virtual false, abstract: false, final false
  inline void AddCharacterToLookupCache(uint32_t unicode, ::TMPro::TMP_Character* character);

  /// @brief Method AddSynthesizedCharacter, addr 0x47ce038, size 0x218, virtual false, abstract: false, final false
  inline void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately);

  /// @brief Method AddSynthesizedCharactersAndFaceMetrics, addr 0x47cd388, size 0x30c, virtual false, abstract: false, final false
  inline void AddSynthesizedCharactersAndFaceMetrics();

  /// @brief Method Awake, addr 0x47cc760, size 0x88, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearAtlasTextures, addr 0x47d375c, size 0x310, virtual false, abstract: false, final false
  inline void ClearAtlasTextures(bool setAtlasSizeToZero);

  /// @brief Method ClearFontAssetData, addr 0x47d351c, size 0x30, virtual false, abstract: false, final false
  inline void ClearFontAssetData(bool setAtlasSizeToZero);

  /// @brief Method ClearFontAssetDataInternal, addr 0x47d3a6c, size 0x1c, virtual false, abstract: false, final false
  inline void ClearFontAssetDataInternal();

  /// @brief Method ClearFontAssetTables, addr 0x47d354c, size 0x210, virtual false, abstract: false, final false
  inline void ClearFontAssetTables();

  /// @brief Method CopyListDataToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ::ByRef<::ArrayW<T, ::Array<T>*>> dstArray);

  /// @brief Method CreateFontAsset, addr 0x47cc1e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::UnityEngine::Font* font);

  /// @brief Method CreateFontAsset, addr 0x47cc260, size 0x500, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                 ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                 ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method GetCharacters, addr 0x47cffa8, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetCharacters(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetCharactersArray, addr 0x47d00b4, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCharactersArray(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetGlyphIndex, addr 0x47d0198, size 0x118, virtual false, abstract: false, final false
  inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method HasCharacter, addr 0x47ce7fc, size 0x4d4, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacter, addr 0x47ce79c, size 0x60, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t character);

  /// @brief Method HasCharacter_Internal, addr 0x47cf538, size 0x21c, virtual false, abstract: false, final false
  inline bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x47cfee4, size 0xc4, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text);

  /// @brief Method HasCharacters, addr 0x47cf8f4, size 0x5f0, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x47cf754, size 0x1a0, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters);

  /// @brief Method InitializeCharacterLookupDictionary, addr 0x47cd91c, size 0x21c, virtual false, abstract: false, final false
  inline void InitializeCharacterLookupDictionary();

  /// @brief Method InitializeDictionaryLookupTables, addr 0x47cd368, size 0x20, virtual false, abstract: false, final false
  inline void InitializeDictionaryLookupTables();

  /// @brief Method InitializeGlyphLookupDictionary, addr 0x47cd694, size 0x288, virtual false, abstract: false, final false
  inline void InitializeGlyphLookupDictionary();

  /// @brief Method InitializeGlyphPaidAdjustmentRecordsLookupDictionary, addr 0x47cdb38, size 0x1c4, virtual false, abstract: false, final false
  inline void InitializeGlyphPaidAdjustmentRecordsLookupDictionary();

  static inline ::TMPro::TMP_FontAsset* New_ctor();

  /// @brief Method ReadFontAssetDefinition, addr 0x47cbde4, size 0x238, virtual false, abstract: false, final false
  inline void ReadFontAssetDefinition();

  /// @brief Method RegisterFontAssetForAtlasTextureUpdate, addr 0x47d0858, size 0x130, virtual false, abstract: false, final false
  static inline void RegisterFontAssetForAtlasTextureUpdate(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method RegisterFontAssetForFontFeatureUpdate, addr 0x47d02b0, size 0x130, virtual false, abstract: false, final false
  static inline void RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method SetupNewAtlasTexture, addr 0x47d2780, size 0x210, virtual false, abstract: false, final false
  inline void SetupNewAtlasTexture();

  /// @brief Method SortAllTables, addr 0x47ce774, size 0x28, virtual false, abstract: false, final false
  inline void SortAllTables();

  /// @brief Method SortCharacterTable, addr 0x47ce308, size 0x134, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortFontFeatureTable, addr 0x47ce570, size 0x18, virtual false, abstract: false, final false
  inline void SortFontFeatureTable();

  /// @brief Method SortGlyphTable, addr 0x47ce43c, size 0x134, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method TryAddCharacterInternal, addr 0x47cecd0, size 0x868, virtual false, abstract: false, final false
  inline bool TryAddCharacterInternal(uint32_t unicode, ::ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method TryAddCharacters, addr 0x47d1b84, size 0x20, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x47d1ba4, size 0xbdc, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, ::ByRef<::StringW> missingCharacters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x47d0af4, size 0x20, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x47d0b14, size 0xbf8, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures);

  /// @brief Method TryAddGlyphsToAtlasTextures, addr 0x47d0af0, size 0x4, virtual false, abstract: false, final false
  inline void TryAddGlyphsToAtlasTextures();

  /// @brief Method TryAddGlyphsToNewAtlasTexture, addr 0x47d170c, size 0x478, virtual false, abstract: false, final false
  inline bool TryAddGlyphsToNewAtlasTexture();

  /// @brief Method TryGetCharacter_and_QueueRenderToTexture, addr 0x47d2990, size 0x5ac, virtual false, abstract: false, final false
  inline bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ::ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method UpdateAtlasTexture, addr 0x47d2f3c, size 0x178, virtual false, abstract: false, final false
  inline void UpdateAtlasTexture();

  /// @brief Method UpdateAtlasTexturesForFontAssetsInQueue, addr 0x47d0988, size 0x168, virtual false, abstract: false, final false
  static inline void UpdateAtlasTexturesForFontAssetsInQueue();

  /// @brief Method UpdateFontAssetData, addr 0x47d3a88, size 0x124, virtual false, abstract: false, final false
  inline void UpdateFontAssetData();

  /// @brief Method UpdateFontFeaturesForFontAssetsInQueue, addr 0x47d03e0, size 0x16c, virtual false, abstract: false, final false
  static inline void UpdateFontFeaturesForFontAssetsInQueue();

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x47d054c, size 0x30c, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords();

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x47d3230, size 0x2e4, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes);

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x47d3514, size 0x4, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x47d3518, size 0x4, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* newGlyphIndexes, ::System::Collections::Generic::List_1<uint32_t>* allGlyphIndexes);

  /// @brief Method UpgradeFontAsset, addr 0x47cc7e8, size 0xb80, virtual false, abstract: false, final false
  inline void UpgradeFontAsset();

  /// @brief Method UpgradeGlyphAdjustmentTableToFontFeatureTable, addr 0x47cdcfc, size 0x314, virtual false, abstract: false, final false
  inline void UpgradeGlyphAdjustmentTableToFontFeatureTable();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_FallbackSearchQueryLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_FallbackSearchQueryLookup();

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

  constexpr ::UnityEngine::TextCore::FaceInfo const& __cordl_internal_get_m_FaceInfo() const;

  constexpr ::UnityEngine::TextCore::FaceInfo& __cordl_internal_get_m_FaceInfo();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& __cordl_internal_get_m_FallbackFontAssetTable() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get_m_FallbackFontAssetTable();

  constexpr ::TMPro::TMP_FontFeatureTable* const& __cordl_internal_get_m_FontFeatureTable() const;

  constexpr ::TMPro::TMP_FontFeatureTable*& __cordl_internal_get_m_FontFeatureTable();

  constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> const& __cordl_internal_get_m_FontWeightTable() const;

  constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>& __cordl_internal_get_m_FontWeightTable();

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

  constexpr ::TMPro::KerningTable* const& __cordl_internal_get_m_KerningTable() const;

  constexpr ::TMPro::KerningTable*& __cordl_internal_get_m_KerningTable();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_MissingUnicodesFromFontFile() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_MissingUnicodesFromFontFile();

  constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_m_SourceFontFile() const;

  constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_m_SourceFontFile();

  constexpr ::StringW const& __cordl_internal_get_m_SourceFontFileGUID() const;

  constexpr ::StringW& __cordl_internal_get_m_SourceFontFileGUID();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& __cordl_internal_get_m_UsedGlyphRects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __cordl_internal_get_m_UsedGlyphRects();

  constexpr ::StringW const& __cordl_internal_get_m_Version() const;

  constexpr ::StringW& __cordl_internal_get_m_Version();

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

  constexpr void __cordl_internal_set_FallbackSearchQueryLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

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

  constexpr void __cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr void __cordl_internal_set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FontFeatureTable(::TMPro::TMP_FontFeatureTable* value);

  constexpr void __cordl_internal_set_m_FontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value);

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

  constexpr void __cordl_internal_set_m_KerningTable(::TMPro::KerningTable* value);

  constexpr void __cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_SourceFontFile(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_m_SourceFontFileGUID(::StringW value);

  constexpr void __cordl_internal_set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr void __cordl_internal_set_m_Version(::StringW value);

  constexpr void __cordl_internal_set_m_fontInfo(::TMPro::FaceInfo_Legacy* value);

  constexpr void __cordl_internal_set_m_glyphInfoList(::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* value);

  constexpr void __cordl_internal_set_normalSpacingOffset(float_t value);

  constexpr void __cordl_internal_set_normalStyle(float_t value);

  constexpr void __cordl_internal_set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_tabSize(uint8_t value);

  /// @brief Method .ctor, addr 0x47d3c10, size 0x2dc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_AddSynthesizedCharactersMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ClearFontAssetDataMarker();

  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup();

  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_k_FontAssets_FontFeaturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_k_GlyphIndexArray();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ReadFontAssetDefinitionMarker();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_SearchedFontAssetLookup();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddCharacterMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddCharactersMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateFontAssetDataMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateGlyphAdjustmentRecordsMarker();

  static inline ::StringW getStaticF_s_DefaultMaterialSuffix();

  /// @brief Method get_atlasHeight, addr 0x47cc15c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasHeight();

  /// @brief Method get_atlasPadding, addr 0x47cc16c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasPadding();

  /// @brief Method get_atlasPopulationMode, addr 0x47cbd78, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::AtlasPopulationMode get_atlasPopulationMode();

  /// @brief Method get_atlasRenderMode, addr 0x47cc17c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();

  /// @brief Method get_atlasTexture, addr 0x47cc050, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_atlasTexture();

  /// @brief Method get_atlasTextureCount, addr 0x47cc0f0, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_atlasTextureCount();

  /// @brief Method get_atlasTextures, addr 0x47cc0e0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> get_atlasTextures();

  /// @brief Method get_atlasWidth, addr 0x47cc14c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasWidth();

  /// @brief Method get_characterLookupTable, addr 0x47cc02c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* get_characterLookupTable();

  /// @brief Method get_characterTable, addr 0x47cc01c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* get_characterTable();

  /// @brief Method get_clearDynamicDataOnBuild, addr 0x47cc110, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDynamicDataOnBuild();

  /// @brief Method get_creationSettings, addr 0x47cc1ac, size 0x10, virtual false, abstract: false, final false
  inline ::TMPro::FontAssetCreationSettings get_creationSettings();

  /// @brief Method get_faceInfo, addr 0x47cbd88, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method get_fallbackFontAssetTable, addr 0x47cc19c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* get_fallbackFontAssetTable();

  /// @brief Method get_fontFeatureTable, addr 0x47cc18c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_FontFeatureTable* get_fontFeatureTable();

  /// @brief Method get_fontInfo, addr 0x47cc144, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::FaceInfo_Legacy* get_fontInfo();

  /// @brief Method get_fontWeightTable, addr 0x47cc1d4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> get_fontWeightTable();

  /// @brief Method get_freeGlyphRects, addr 0x47cc134, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();

  /// @brief Method get_glyphLookupTable, addr 0x47cbdc0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();

  /// @brief Method get_glyphTable, addr 0x47cbdb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable();

  /// @brief Method get_isMultiAtlasTexturesEnabled, addr 0x47cc0fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMultiAtlasTexturesEnabled();

  /// @brief Method get_sourceFontFile, addr 0x47cbd68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_sourceFontFile();

  /// @brief Method get_usedGlyphRects, addr 0x47cc124, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();

  /// @brief Method get_version, addr 0x47cbd58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  static inline void setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_DefaultMaterialSuffix(::StringW value);

  /// @brief Method set_atlasHeight, addr 0x47cc164, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasHeight(int32_t value);

  /// @brief Method set_atlasPadding, addr 0x47cc174, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPadding(int32_t value);

  /// @brief Method set_atlasPopulationMode, addr 0x47cbd80, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPopulationMode(::TMPro::AtlasPopulationMode value);

  /// @brief Method set_atlasRenderMode, addr 0x47cc184, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  /// @brief Method set_atlasTextures, addr 0x47cc0e8, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value);

  /// @brief Method set_atlasWidth, addr 0x47cc154, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasWidth(int32_t value);

  /// @brief Method set_characterTable, addr 0x47cc024, size 0x8, virtual false, abstract: false, final false
  inline void set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value);

  /// @brief Method set_clearDynamicDataOnBuild, addr 0x47cc118, size 0xc, virtual false, abstract: false, final false
  inline void set_clearDynamicDataOnBuild(bool value);

  /// @brief Method set_creationSettings, addr 0x47cc1bc, size 0x18, virtual false, abstract: false, final false
  inline void set_creationSettings(::TMPro::FontAssetCreationSettings value);

  /// @brief Method set_faceInfo, addr 0x47cbd98, size 0x18, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method set_fallbackFontAssetTable, addr 0x47cc1a4, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method set_fontFeatureTable, addr 0x47cc194, size 0x8, virtual false, abstract: false, final false
  inline void set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* value);

  /// @brief Method set_fontWeightTable, addr 0x47cc1dc, size 0x8, virtual false, abstract: false, final false
  inline void set_fontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value);

  /// @brief Method set_freeGlyphRects, addr 0x47cc13c, size 0x8, virtual false, abstract: false, final false
  inline void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method set_glyphTable, addr 0x47cbdb8, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  /// @brief Method set_isMultiAtlasTexturesEnabled, addr 0x47cc104, size 0xc, virtual false, abstract: false, final false
  inline void set_isMultiAtlasTexturesEnabled(bool value);

  /// @brief Method set_sourceFontFile, addr 0x47cbd70, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceFontFile(::UnityEngine::Font* value);

  /// @brief Method set_usedGlyphRects, addr 0x47cc12c, size 0x8, virtual false, abstract: false, final false
  inline void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method set_version, addr 0x47cbd60, size 0x8, virtual false, abstract: false, final false
  inline void set_version(::StringW value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14478 };

  /// @brief Field m_Version, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Version;

  /// @brief Field m_SourceFontFileGUID, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_SourceFontFileGUID;

  /// @brief Field m_SourceFontFile, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> ___m_SourceFontFile;

  /// @brief Field m_AtlasPopulationMode, offset: 0x48, size: 0x4, def value: None
  ::TMPro::AtlasPopulationMode ___m_AtlasPopulationMode;

  /// @brief Field m_FaceInfo, offset: 0x50, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field m_GlyphTable, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphTable;

  /// @brief Field m_GlyphLookupDictionary, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* ___m_GlyphLookupDictionary;

  /// @brief Field m_CharacterTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* ___m_CharacterTable;

  /// @brief Field m_CharacterLookupDictionary, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* ___m_CharacterLookupDictionary;

  /// @brief Field m_AtlasTexture, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_AtlasTexture;

  /// @brief Field m_AtlasTextures, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___m_AtlasTextures;

  /// @brief Field m_AtlasTextureIndex, offset: 0xe0, size: 0x4, def value: None
  int32_t ___m_AtlasTextureIndex;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset: 0xe4, size: 0x1, def value: None
  bool ___m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0xe5, size: 0x1, def value: None
  bool ___m_ClearDynamicDataOnBuild;

  /// @brief Field m_UsedGlyphRects, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_UsedGlyphRects;

  /// @brief Field m_FreeGlyphRects, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_FreeGlyphRects;

  /// @brief Field m_fontInfo, offset: 0xf8, size: 0x8, def value: None
  ::TMPro::FaceInfo_Legacy* ___m_fontInfo;

  /// @brief Field atlas, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___atlas;

  /// @brief Field m_AtlasWidth, offset: 0x108, size: 0x4, def value: None
  int32_t ___m_AtlasWidth;

  /// @brief Field m_AtlasHeight, offset: 0x10c, size: 0x4, def value: None
  int32_t ___m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset: 0x110, size: 0x4, def value: None
  int32_t ___m_AtlasPadding;

  /// @brief Field m_AtlasRenderMode, offset: 0x114, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode ___m_AtlasRenderMode;

  /// @brief Field m_glyphInfoList, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* ___m_glyphInfoList;

  /// @brief Field m_KerningTable, offset: 0x120, size: 0x8, def value: None
  ::TMPro::KerningTable* ___m_KerningTable;

  /// @brief Field m_FontFeatureTable, offset: 0x128, size: 0x8, def value: None
  ::TMPro::TMP_FontFeatureTable* ___m_FontFeatureTable;

  /// @brief Field fallbackFontAssets, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ___fallbackFontAssets;

  /// @brief Field m_FallbackFontAssetTable, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* ___m_FallbackFontAssetTable;

  /// @brief Field m_CreationSettings, offset: 0x140, size: 0x58, def value: None
  ::TMPro::FontAssetCreationSettings ___m_CreationSettings;

  /// @brief Field m_FontWeightTable, offset: 0x198, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> ___m_FontWeightTable;

  /// @brief Field fontWeights, offset: 0x1a0, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> ___fontWeights;

  /// @brief Field normalStyle, offset: 0x1a8, size: 0x4, def value: None
  float_t ___normalStyle;

  /// @brief Field normalSpacingOffset, offset: 0x1ac, size: 0x4, def value: None
  float_t ___normalSpacingOffset;

  /// @brief Field boldStyle, offset: 0x1b0, size: 0x4, def value: None
  float_t ___boldStyle;

  /// @brief Field boldSpacing, offset: 0x1b4, size: 0x4, def value: None
  float_t ___boldSpacing;

  /// @brief Field italicStyle, offset: 0x1b8, size: 0x1, def value: None
  uint8_t ___italicStyle;

  /// @brief Field tabSize, offset: 0x1b9, size: 0x1, def value: None
  uint8_t ___tabSize;

  /// @brief Field IsFontAssetLookupTablesDirty, offset: 0x1ba, size: 0x1, def value: None
  bool ___IsFontAssetLookupTablesDirty;

  /// @brief Field FallbackSearchQueryLookup, offset: 0x1c0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___FallbackSearchQueryLookup;

  /// @brief Field m_GlyphsToRender, offset: 0x1c8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsToRender;

  /// @brief Field m_GlyphsRendered, offset: 0x1d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsRendered;

  /// @brief Field m_GlyphIndexList, offset: 0x1d8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset: 0x1e0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphsToAdd, offset: 0x1e8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset: 0x1f0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_GlyphsToAddLookup;

  /// @brief Field m_CharactersToAdd, offset: 0x1f8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* ___m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_CharactersToAddLookup;

  /// @brief Field s_MissingCharacterList, offset: 0x208, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___s_MissingCharacterList;

  /// @brief Field m_MissingUnicodesFromFontFile, offset: 0x210, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_MissingUnicodesFromFontFile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_Version) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_SourceFontFileGUID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_SourceFontFile) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasPopulationMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FaceInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphLookupDictionary) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharacterTable) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharacterLookupDictionary) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasTexture) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasTextures) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasTextureIndex) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_IsMultiAtlasTexturesEnabled) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_ClearDynamicDataOnBuild) == 0xe5, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_UsedGlyphRects) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FreeGlyphRects) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_fontInfo) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___atlas) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasWidth) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasHeight) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasPadding) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_AtlasRenderMode) == 0x114, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_glyphInfoList) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_KerningTable) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FontFeatureTable) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___fallbackFontAssets) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FallbackFontAssetTable) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CreationSettings) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_FontWeightTable) == 0x198, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___fontWeights) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___normalStyle) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___normalSpacingOffset) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___boldStyle) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___boldSpacing) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___italicStyle) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___tabSize) == 0x1b9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___IsFontAssetLookupTablesDirty) == 0x1ba, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___FallbackSearchQueryLookup) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsToRender) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsRendered) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphIndexList) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphIndexListNewlyAdded) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsToAdd) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_GlyphsToAddLookup) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharactersToAdd) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_CharactersToAddLookup) == 0x200, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___s_MissingCharacterList) == 0x208, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontAsset, ___m_MissingUnicodesFromFontFile) == 0x210, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontAsset, 0x218>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_FontAsset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAsset*, "TMPro", "TMP_FontAsset");
NEED_NO_BOX(::TMPro::TMP_FontAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAsset___c*, "TMPro", "TMP_FontAsset/<>c");
