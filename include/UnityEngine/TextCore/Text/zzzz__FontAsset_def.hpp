#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
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
namespace System::Collections {
class ICollection;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T> class WeakReference_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
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
class Shader;
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

  /// @brief Field <>9__190_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__190_0, put = setStaticF___9__190_0)) ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* __9__190_0;

  /// @brief Field <>9__191_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__191_0, put = setStaticF___9__191_0)) ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* __9__191_0;

  static inline ::UnityEngine::TextCore::Text::FontAsset___c* New_ctor();

  /// @brief Method <SortCharacterTable>b__190_0, addr 0x69c9900, size 0x14, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__190_0(::UnityEngine::TextCore::Text::Character* c);

  /// @brief Method <SortGlyphTable>b__191_0, addr 0x69c991c, size 0x14, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__191_0(::UnityEngine::TextCore::Glyph* c);

  /// @brief Method .ctor, addr 0x69c98fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::FontAsset___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* getStaticF___9__190_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* getStaticF___9__191_0();

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::FontAsset___c* value);

  static inline void setStaticF___9__190_0(::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* value);

  static inline void setStaticF___9__191_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAsset___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Dependencies System.IntPtr, Unity.Profiling.ProfilerMarker, UnityEngine.TextCore.FaceInfo, UnityEngine.TextCore.LowLevel.GlyphRenderMode, UnityEngine.TextCore.Text.AtlasPopulationMode,
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

  /// @brief Field IsEditorFont, offset 0xad, size 0x1
  __declspec(property(get = __cordl_internal_get_IsEditorFont, put = __cordl_internal_set_IsEditorFont)) bool IsEditorFont;

  /// @brief Field IsFontAssetLookupTablesDirty, offset 0x1a2, size 0x1
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

  __declspec(property(get = get_getFontFeatures, put = set_getFontFeatures)) bool getFontFeatures;

  __declspec(property(get = get_glyphLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* glyphLookupTable;

  __declspec(property(get = get_glyphTable, put = set_glyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* glyphTable;

  __declspec(property(get = get_isMultiAtlasTexturesEnabled, put = set_isMultiAtlasTexturesEnabled)) bool isMultiAtlasTexturesEnabled;

  __declspec(property(get = get_italicStyleSlant, put = set_italicStyleSlant)) uint8_t italicStyleSlant;

  /// @brief Field kFontAssetByInstanceId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kFontAssetByInstanceId,
                      put = setStaticF_kFontAssetByInstanceId)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* kFontAssetByInstanceId;

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

  /// @brief Field k_FontAssets_KerningUpdateQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FontAssets_KerningUpdateQueue,
                      put = setStaticF_k_FontAssets_KerningUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* k_FontAssets_KerningUpdateQueue;

  /// @brief Field k_FontAssets_KerningUpdateQueueLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FontAssets_KerningUpdateQueueLookup,
                      put = setStaticF_k_FontAssets_KerningUpdateQueueLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* k_FontAssets_KerningUpdateQueueLookup;

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

  /// @brief Field m_BoldStyleSpacing, offset 0x19c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BoldStyleSpacing, put = __cordl_internal_set_m_BoldStyleSpacing)) float_t m_BoldStyleSpacing;

  /// @brief Field m_BoldStyleWeight, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BoldStyleWeight, put = __cordl_internal_set_m_BoldStyleWeight)) float_t m_BoldStyleWeight;

  /// @brief Field m_CharacterLookupDictionary, offset 0x130, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CharacterLookupDictionary,
      put = __cordl_internal_set_m_CharacterLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* m_CharacterLookupDictionary;

  /// @brief Field m_CharacterTable, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterTable,
                      put = __cordl_internal_set_m_CharacterTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* m_CharacterTable;

  /// @brief Field m_CharactersToAdd, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAdd,
                      put = __cordl_internal_set_m_CharactersToAdd)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharactersToAddLookup,
                      put = __cordl_internal_set_m_CharactersToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_CharactersToAddLookup;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0x14e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDynamicDataOnBuild, put = __cordl_internal_set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_FaceInfo, offset 0xb0, size 0x60
  __declspec(property(get = __cordl_internal_get_m_FaceInfo, put = __cordl_internal_set_m_FaceInfo)) ::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_FallbackFontAssetTable, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackFontAssetTable,
                      put = __cordl_internal_set_m_FallbackFontAssetTable)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* m_FallbackFontAssetTable;

  /// @brief Field m_FamilyNameHashCode, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FamilyNameHashCode, put = __cordl_internal_set_m_FamilyNameHashCode)) int32_t m_FamilyNameHashCode;

  /// @brief Field m_FontFeatureTable, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontFeatureTable, put = __cordl_internal_set_m_FontFeatureTable)) ::UnityEngine::TextCore::Text::FontFeatureTable* m_FontFeatureTable;

  /// @brief Field m_FontWeightTable, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontWeightTable,
                      put = __cordl_internal_set_m_FontWeightTable)) ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>
      m_FontWeightTable;

  /// @brief Field m_FreeGlyphRects, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeGlyphRects,
                      put = __cordl_internal_set_m_FreeGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;

  /// @brief Field m_GetFontFeatures, offset 0x14d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GetFontFeatures, put = __cordl_internal_set_m_GetFontFeatures)) bool m_GetFontFeatures;

  /// @brief Field m_GlyphIndexList, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexList, put = __cordl_internal_set_m_GlyphIndexList)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexListNewlyAdded,
                      put = __cordl_internal_set_m_GlyphIndexListNewlyAdded)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphLookupDictionary, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphLookupDictionary,
                      put = __cordl_internal_set_m_GlyphLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;

  /// @brief Field m_GlyphTable, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphTable, put = __cordl_internal_set_m_GlyphTable)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable;

  /// @brief Field m_GlyphsRendered, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsRendered,
                      put = __cordl_internal_set_m_GlyphsRendered)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered;

  /// @brief Field m_GlyphsToAdd, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAdd, put = __cordl_internal_set_m_GlyphsToAdd)) ::System::Collections::Generic::List_1<uint32_t>* m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToAddLookup, put = __cordl_internal_set_m_GlyphsToAddLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_GlyphsToAddLookup;

  /// @brief Field m_GlyphsToRender, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphsToRender,
                      put = __cordl_internal_set_m_GlyphsToRender)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;

  /// @brief Field m_IsClone, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsClone, put = __cordl_internal_set_m_IsClone)) bool m_IsClone;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset 0x14c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMultiAtlasTexturesEnabled, put = __cordl_internal_set_m_IsMultiAtlasTexturesEnabled)) bool m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_ItalicStyleSlant, offset 0x1a0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ItalicStyleSlant, put = __cordl_internal_set_m_ItalicStyleSlant)) uint8_t m_ItalicStyleSlant;

  /// @brief Field m_MissingUnicodesFromFontFile, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MissingUnicodesFromFontFile,
                      put = __cordl_internal_set_m_MissingUnicodesFromFontFile)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_MissingUnicodesFromFontFile;

  /// @brief Field m_NativeFontAsset, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NativeFontAsset, put = __cordl_internal_set_m_NativeFontAsset)) ::System::IntPtr m_NativeFontAsset;

  /// @brief Field m_RegularStyleSpacing, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RegularStyleSpacing, put = __cordl_internal_set_m_RegularStyleSpacing)) float_t m_RegularStyleSpacing;

  /// @brief Field m_RegularStyleWeight, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RegularStyleWeight, put = __cordl_internal_set_m_RegularStyleWeight)) float_t m_RegularStyleWeight;

  /// @brief Field m_ShouldReimportFontFeatures, offset 0x178, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldReimportFontFeatures, put = __cordl_internal_set_m_ShouldReimportFontFeatures)) bool m_ShouldReimportFontFeatures;

  /// @brief Field m_SourceFontFile, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFile, put = __cordl_internal_set_m_SourceFontFile)) ::UnityW<::UnityEngine::Font> m_SourceFontFile;

  /// @brief Field m_SourceFontFileGUID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFileGUID, put = __cordl_internal_set_m_SourceFontFileGUID)) ::StringW m_SourceFontFileGUID;

  /// @brief Field m_SourceFontFilePath, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceFontFilePath, put = __cordl_internal_set_m_SourceFontFilePath)) ::StringW m_SourceFontFilePath;

  /// @brief Field m_StyleNameHashCode, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StyleNameHashCode, put = __cordl_internal_set_m_StyleNameHashCode)) int32_t m_StyleNameHashCode;

  /// @brief Field m_TabMultiple, offset 0x1a1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TabMultiple, put = __cordl_internal_set_m_TabMultiple)) uint8_t m_TabMultiple;

  /// @brief Field m_UsedGlyphRects, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsedGlyphRects,
                      put = __cordl_internal_set_m_UsedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;

  /// @brief Field m_VariantGlyphIndexes, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VariantGlyphIndexes,
                      put = __cordl_internal_set_m_VariantGlyphIndexes)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>* m_VariantGlyphIndexes;

  /// @brief Field m_fontAssetCreationEditorSettings, offset 0x40, size 0x58
  __declspec(property(get = __cordl_internal_get_m_fontAssetCreationEditorSettings,
                      put = __cordl_internal_set_m_fontAssetCreationEditorSettings)) ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings m_fontAssetCreationEditorSettings;

  __declspec(property(get = get_nativeFontAsset)) ::System::IntPtr nativeFontAsset;

  __declspec(property(get = get_regularStyleSpacing, put = set_regularStyleSpacing)) float_t regularStyleSpacing;

  __declspec(property(get = get_regularStyleWeight, put = set_regularStyleWeight)) float_t regularStyleWeight;

  /// @brief Field s_CallbackInstances, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallbackInstances,
                      put =
                          setStaticF_s_CallbackInstances)) ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>* s_CallbackInstances;

  /// @brief Field s_DefaultMaterialSuffix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultMaterialSuffix, put = setStaticF_s_DefaultMaterialSuffix)) ::StringW s_DefaultMaterialSuffix;

  /// @brief Field s_MissingCharacterList, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_s_MissingCharacterList, put = __cordl_internal_set_s_MissingCharacterList)) ::System::Collections::Generic::List_1<uint32_t>* s_MissingCharacterList;

  __declspec(property(get = get_sourceFontFile, put = set_sourceFontFile)) ::UnityW<::UnityEngine::Font> sourceFontFile;

  __declspec(property(get = get_styleNameHashCode, put = set_styleNameHashCode)) int32_t styleNameHashCode;

  __declspec(property(get = get_tabMultiple, put = set_tabMultiple)) uint8_t tabMultiple;

  __declspec(property(get = get_usedGlyphRects, put = set_usedGlyphRects)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects;

  /// @brief Field visitedFontAssets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_visitedFontAssets, put = setStaticF_visitedFontAssets)) ::System::Collections::Generic::HashSet_1<int32_t>* visitedFontAssets;

  /// @brief Method AddCharacterToLookupCache, addr 0x6999878, size 0xc, virtual false, abstract: false, final false
  inline void AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character);

  /// @brief Method AddCharacterToLookupCache, addr 0x6999884, size 0xc4, virtual false, abstract: false, final false
  inline void AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                        ::UnityEngine::TextCore::Text::TextFontWeight fontWeight);

  /// @brief Method AddLigatureSubstitutionRecords, addr 0x699f690, size 0x414, virtual false, abstract: false, final false
  inline void AddLigatureSubstitutionRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> records);

  /// @brief Method AddMarkToBaseAdjustmentRecords, addr 0x699f260, size 0x218, virtual false, abstract: false, final false
  inline void AddMarkToBaseAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> records);

  /// @brief Method AddMarkToMarkAdjustmentRecords, addr 0x699f478, size 0x218, virtual false, abstract: false, final false
  inline void AddMarkToMarkAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> records);

  /// @brief Method AddPairAdjustmentRecords, addr 0x699efe0, size 0x280, virtual false, abstract: false, final false
  inline void AddPairAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> records);

  /// @brief Method AddSynthesizedCharacter, addr 0x6998fa4, size 0x878, virtual false, abstract: false, final false
  inline void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately);

  /// @brief Method AddSynthesizedCharactersAndFaceMetrics, addr 0x6997a74, size 0x1d8, virtual false, abstract: false, final false
  inline void AddSynthesizedCharactersAndFaceMetrics();

  /// @brief Method ClearAtlasTextures, addr 0x699b7e4, size 0x1e8, virtual false, abstract: false, final false
  inline void ClearAtlasTextures(bool setAtlasSizeToZero);

  /// @brief Method ClearCharacterAndGlyphTables, addr 0x699b534, size 0x1bc, virtual false, abstract: false, final false
  inline void ClearCharacterAndGlyphTables();

  /// @brief Method ClearCharacterAndGlyphTablesInternal, addr 0x699bcc8, size 0x24, virtual false, abstract: false, final false
  inline void ClearCharacterAndGlyphTablesInternal();

  /// @brief Method ClearFallbackCharacterTable, addr 0x6998ac4, size 0x3c8, virtual false, abstract: false, final false
  inline void ClearFallbackCharacterTable();

  /// @brief Method ClearFontAssetData, addr 0x699b9e8, size 0x2e0, virtual false, abstract: false, final false
  inline void ClearFontAssetData(bool setAtlasSizeToZero);

  /// @brief Method ClearFontFeaturesTables, addr 0x699b6f0, size 0xf4, virtual false, abstract: false, final false
  inline void ClearFontFeaturesTables();

  /// @brief Method ContainsCharacterInLookupCache, addr 0x6999aa8, size 0xc4, virtual false, abstract: false, final false
  inline bool ContainsCharacterInLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight);

  /// @brief Method Create, addr 0x69a0280, size 0x2c8, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::TextCore::FaceInfo faceInfo, ::UnityEngine::Font* sourceFontFile, ::UnityEngine::Font* sourceFont_EditorRef, ::StringW sourceFontFilePath,
                                        int32_t fontInstanceID, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> fallbacks,
                                        ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> weightFallbacks, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> italicFallbacks);

  /// @brief Method CreateCharacterAndAddToCache, addr 0x699e598, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::Character* CreateCharacterAndAddToCache(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                ::UnityEngine::TextCore::Text::TextFontWeight fontWeight);

  /// @brief Method CreateCompositeKey, addr 0x699981c, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t CreateCompositeKey(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight);

  /// @brief Method CreateFontAsset, addr 0x6995e64, size 0x1c4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method CreateFontAsset, addr 0x6996298, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize, int32_t padding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode);

  /// @brief Method CreateFontAsset, addr 0x6996e48, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font);

  /// @brief Method CreateFontAsset, addr 0x699705c, size 0x358, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::Shader* shader, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                   bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x6996ec8, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x6996f90, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::Shader* shader, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                   bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset, addr 0x6996900, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight);

  /// @brief Method CreateFontAsset, addr 0x6996118, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                   ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAssetFromFamilyName, addr 0x6996560, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAssetFromFamilyName(::StringW familyName, ::UnityEngine::Shader* shader, int32_t pointSize);

  /// @brief Method CreateFontAssetInstance, addr 0x69969b8, size 0x490, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding,
                                                                                           ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                                           ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAssetInternal, addr 0x6996028, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAssetInternal(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method CreateFontAssetOSFallbackList, addr 0x6996398, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* CreateFontAssetOSFallbackList(::ArrayW<::StringW, ::Array<::StringW>*> fallbacksFamilyNames,
                                                                                                                                          ::UnityEngine::Shader* shader, int32_t pointSize);

  /// @brief Method CreateFontAssetWithOSFallbackList, addr 0x69966f4, size 0x20c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateFontAssetWithOSFallbackList(::ArrayW<::StringW, ::Array<::StringW>*> fallbacksFamilyNames, ::UnityEngine::Shader* shader,
                                                                                                     int32_t pointSize);

  /// @brief Method Create_Injected, addr 0x69a0dec, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::ByRef<::UnityEngine::TextCore::FaceInfo> faceInfo, ::System::IntPtr sourceFontFile, ::System::IntPtr sourceFont_EditorRef,
                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> sourceFontFilePath, int32_t fontInstanceID,
                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> fallbacks, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> weightFallbacks,
                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> italicFallbacks);

  /// @brief Method Destroy, addr 0x69979e0, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr ptr);

  /// @brief Method DestroyAtlasTextures, addr 0x69978fc, size 0xe4, virtual false, abstract: false, final false
  inline void DestroyAtlasTextures();

  /// @brief Method EnsureAdditionalCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void EnsureAdditionalCapacity(::System::Collections::Generic::Dictionary_2<TKey, TValue>* container, int32_t additionalCapacity);

  /// @brief Method EnsureAdditionalCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EnsureAdditionalCapacity(::System::Collections::Generic::List_1<T>* container, int32_t additionalCapacity);

  /// @brief Method Finalize, addr 0x69a0ebc, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCharacterInLookupCache, addr 0x6999948, size 0xb4, virtual false, abstract: false, final false
  inline bool GetCharacterInLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight,
                                        ::ByRef<::UnityEngine::TextCore::Text::Character*> character);

  /// @brief Method GetCharacters, addr 0x699aff8, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW GetCharacters(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetCharactersArray, addr 0x699b0f0, size 0xf4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCharactersArray(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetFallbacks, addr 0x699fbf0, size 0x3a0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> GetFallbacks();

  /// @brief Method GetFontAssetByID, addr 0x69973b4, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetFontAssetByID(int32_t id);

  /// @brief Method GetGlyphIndex, addr 0x699b1e4, size 0x14, virtual false, abstract: false, final false
  inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method GetGlyphIndex, addr 0x699b1f8, size 0x160, virtual false, abstract: false, final false
  inline uint32_t GetGlyphIndex(uint32_t unicode, ::ByRef<bool> success);

  /// @brief Method GetGlyphVariantIndex, addr 0x699b358, size 0xac, virtual false, abstract: false, final false
  inline uint32_t GetGlyphVariantIndex(uint32_t unicode, uint32_t variantSelectorUnicode);

  /// @brief Method GetWeightFallbacks, addr 0x699ff90, size 0x2f0, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*>, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*>> GetWeightFallbacks();

  /// @brief Method HasCharacter, addr 0x6999ee8, size 0x8, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacter, addr 0x6999e60, size 0x88, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t character);

  /// @brief Method HasCharacter, addr 0x6999ef0, size 0x370, virtual false, abstract: false, final false
  inline bool HasCharacter(uint32_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacterWithStyle_Internal, addr 0x699a8a4, size 0x4, virtual false, abstract: false, final false
  inline bool HasCharacterWithStyle_Internal(uint32_t character, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, bool searchFallbacks,
                                             bool tryAddCharacter);

  /// @brief Method HasCharacter_Internal, addr 0x699a650, size 0x254, virtual false, abstract: false, final false
  inline bool HasCharacter_Internal(uint32_t character, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, bool searchFallbacks,
                                    bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x699af24, size 0xd4, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text);

  /// @brief Method HasCharacters, addr 0x699aa70, size 0x4b4, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters, addr 0x699a8a8, size 0x1c8, virtual false, abstract: false, final false
  inline bool HasCharacters(::StringW text, ::ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters);

  /// @brief Method HasRecursion, addr 0x69a0988, size 0x9c, virtual false, abstract: false, final false
  inline bool HasRecursion(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method HasRecursionInternal, addr 0x69a0a24, size 0x330, virtual false, abstract: false, final false
  inline bool HasRecursionInternal(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method ImportFontFeatures, addr 0x69980e8, size 0x10c, virtual false, abstract: false, final false
  inline void ImportFontFeatures();

  /// @brief Method InitializeCharacterLookupDictionary, addr 0x6997eb4, size 0x234, virtual false, abstract: false, final false
  inline void InitializeCharacterLookupDictionary();

  /// @brief Method InitializeDictionaryLookupTables, addr 0x6997a1c, size 0x58, virtual false, abstract: false, final false
  inline void InitializeDictionaryLookupTables();

  /// @brief Method InitializeGlyphLookupDictionary, addr 0x6997c4c, size 0x268, virtual false, abstract: false, final false
  inline void InitializeGlyphLookupDictionary();

  /// @brief Method InitializeGlyphPairAdjustmentRecordsLookupDictionary, addr 0x6998550, size 0x1e4, virtual false, abstract: false, final false
  inline void InitializeGlyphPairAdjustmentRecordsLookupDictionary();

  /// @brief Method InitializeLigatureSubstitutionLookupDictionary, addr 0x69981f4, size 0x35c, virtual false, abstract: false, final false
  inline void InitializeLigatureSubstitutionLookupDictionary();

  /// @brief Method InitializeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InitializeList(::System::Collections::ICollection* source, ::ByRef<::System::Collections::Generic::List_1<T>*> list, int32_t defaultCapacity);

  /// @brief Method InitializeLookup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void InitializeLookup(::System::Collections::ICollection* source, ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, T>*> lookup, int32_t defaultCapacity);

  /// @brief Method InitializeMarkToBaseAdjustmentRecordsLookupDictionary, addr 0x6998734, size 0x1c8, virtual false, abstract: false, final false
  inline void InitializeMarkToBaseAdjustmentRecordsLookupDictionary();

  /// @brief Method InitializeMarkToMarkAdjustmentRecordsLookupDictionary, addr 0x69988fc, size 0x1c8, virtual false, abstract: false, final false
  inline void InitializeMarkToMarkAdjustmentRecordsLookupDictionary();

  /// @brief Method LoadFontFace, addr 0x6998e8c, size 0x118, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace();

  static inline ::UnityEngine::TextCore::Text::FontAsset* New_ctor();

  /// @brief Method OnDestroy, addr 0x6997798, size 0x164, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReadFontAssetDefinition, addr 0x699570c, size 0x554, virtual false, abstract: false, final false
  inline void ReadFontAssetDefinition();

  /// @brief Method RegisterAtlasTextureForApply, addr 0x699c28c, size 0x140, virtual false, abstract: false, final false
  static inline void RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture);

  /// @brief Method RegisterCallbackInstance, addr 0x699743c, size 0x35c, virtual false, abstract: false, final false
  inline void RegisterCallbackInstance(::UnityEngine::TextCore::Text::FontAsset* instance);

  /// @brief Method RegisterFontAssetForFontFeatureUpdate, addr 0x699bcec, size 0x148, virtual false, abstract: false, final false
  static inline void RegisterFontAssetForFontFeatureUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method RegisterFontAssetForKerningUpdate, addr 0x699be34, size 0x148, virtual false, abstract: false, final false
  static inline void RegisterFontAssetForKerningUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method RemoveCharacterInLookupCache, addr 0x69999fc, size 0xac, virtual false, abstract: false, final false
  inline void RemoveCharacterInLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight);

  /// @brief Method SetupNewAtlasTexture, addr 0x699ea70, size 0x240, virtual false, abstract: false, final false
  inline void SetupNewAtlasTexture();

  /// @brief Method SortAllTables, addr 0x6999e40, size 0x20, virtual false, abstract: false, final false
  inline void SortAllTables();

  /// @brief Method SortCharacterTable, addr 0x6999b6c, size 0x150, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortFontFeatureTable, addr 0x6999e0c, size 0x34, virtual false, abstract: false, final false
  inline void SortFontFeatureTable();

  /// @brief Method SortGlyphTable, addr 0x6999cbc, size 0x150, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method TryAddCharacterInternal, addr 0x699e584, size 0x14, virtual false, abstract: false, final false
  inline bool TryAddCharacterInternal(uint32_t unicode, ::ByRef<::UnityEngine::TextCore::Text::Character*> character);

  /// @brief Method TryAddCharacterInternal, addr 0x699a260, size 0x3f0, virtual false, abstract: false, final false
  inline bool TryAddCharacterInternal(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight,
                                      ::ByRef<::UnityEngine::TextCore::Text::Character*> character, bool populateLigatures);

  /// @brief Method TryAddCharacters, addr 0x699dd0c, size 0x1c, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x699dd28, size 0x198, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::StringW characters, ::ByRef<::StringW> missingCharacters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x699b9cc, size 0x1c, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures);

  /// @brief Method TryAddCharacters, addr 0x699c5a8, size 0x1240, virtual false, abstract: false, final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures);

  /// @brief Method TryAddGlyphInternal, addr 0x699dff0, size 0x1d4, virtual false, abstract: false, final false
  inline bool TryAddGlyphInternal(uint32_t glyphIndex, ::ByRef<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryAddGlyphToAtlas, addr 0x699e1c4, size 0x3c0, virtual false, abstract: false, final false
  inline bool TryAddGlyphToAtlas(uint32_t glyphIndex, ::ByRef<::UnityEngine::TextCore::Glyph*> glyph, bool populateLigatures);

  /// @brief Method TryAddGlyphToTexture, addr 0x699e728, size 0x348, virtual false, abstract: false, final false
  inline bool TryAddGlyphToTexture(uint32_t glyphIndex, ::ByRef<::UnityEngine::TextCore::Glyph*> glyph, bool populateLigatures);

  /// @brief Method TryAddGlyphVariantIndexInternal, addr 0x699dec0, size 0xa0, virtual false, abstract: false, final false
  inline bool TryAddGlyphVariantIndexInternal(uint32_t unicode, uint32_t nextCharacter, uint32_t variantGlyphIndex);

  /// @brief Method TryAddGlyphsToNewAtlasTexture, addr 0x699d7e8, size 0x4b4, virtual false, abstract: false, final false
  inline bool TryAddGlyphsToNewAtlasTexture();

  /// @brief Method TryGetGlyphVariantIndexInternal, addr 0x699df60, size 0x90, virtual false, abstract: false, final false
  inline bool TryGetGlyphVariantIndexInternal(uint32_t unicode, uint32_t nextCharacter, ::ByRef<uint32_t> variantGlyphIndex);

  /// @brief Method UpdateAtlasTexturesInQueue, addr 0x699c3cc, size 0x188, virtual false, abstract: false, final false
  static inline void UpdateAtlasTexturesInQueue();

  /// @brief Method UpdateDiacriticalMarkAdjustmentRecords, addr 0x699ee30, size 0x1b0, virtual false, abstract: false, final false
  inline void UpdateDiacriticalMarkAdjustmentRecords();

  /// @brief Method UpdateFaceInfo, addr 0x69a086c, size 0x94, virtual false, abstract: false, final false
  inline void UpdateFaceInfo();

  /// @brief Method UpdateFaceInfo, addr 0x69a0900, size 0x88, virtual false, abstract: false, final false
  static inline void UpdateFaceInfo(::System::IntPtr ptr, ::UnityEngine::TextCore::FaceInfo faceInfo);

  /// @brief Method UpdateFaceInfo_Injected, addr 0x69a0e78, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateFaceInfo_Injected(::System::IntPtr ptr, ::ByRef<::UnityEngine::TextCore::FaceInfo> faceInfo);

  /// @brief Method UpdateFallbacks, addr 0x69a0548, size 0x78, virtual false, abstract: false, final false
  inline void UpdateFallbacks();

  /// @brief Method UpdateFallbacks, addr 0x69a05c0, size 0xfc, virtual false, abstract: false, final false
  static inline void UpdateFallbacks(::System::IntPtr ptr, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> fallbacks);

  /// @brief Method UpdateFallbacks_Injected, addr 0x69a0d54, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateFallbacks_Injected(::System::IntPtr ptr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> fallbacks);

  /// @brief Method UpdateFontAssetData, addr 0x699b404, size 0x130, virtual false, abstract: false, final false
  inline void UpdateFontAssetData();

  /// @brief Method UpdateFontAssetsInUpdateQueue, addr 0x699c554, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateFontAssetsInUpdateQueue();

  /// @brief Method UpdateFontFeaturesForFontAssetsInQueue, addr 0x699bf7c, size 0x248, virtual false, abstract: false, final false
  static inline void UpdateFontFeaturesForFontAssetsInQueue();

  /// @brief Method UpdateFontFeaturesForNewlyAddedGlyphs, addr 0x699dc9c, size 0x70, virtual false, abstract: false, final false
  inline void UpdateFontFeaturesForNewlyAddedGlyphs();

  /// @brief Method UpdateGPOSFontFeaturesForNewlyAddedGlyphs, addr 0x699c1c4, size 0x68, virtual false, abstract: false, final false
  inline void UpdateGPOSFontFeaturesForNewlyAddedGlyphs();

  /// @brief Method UpdateGSUBFontFeaturesForNewGlyphIndex, addr 0x699ecb0, size 0x88, virtual false, abstract: false, final false
  inline void UpdateGSUBFontFeaturesForNewGlyphIndex(uint32_t glyphIndex);

  /// @brief Method UpdateGlyphAdjustmentRecords, addr 0x699edb4, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecords();

  /// @brief Method UpdateGlyphAdjustmentRecordsForNewGlyphs, addr 0x699c22c, size 0x60, virtual false, abstract: false, final false
  inline void UpdateGlyphAdjustmentRecordsForNewGlyphs();

  /// @brief Method UpdateLigatureSubstitutionRecords, addr 0x699ed38, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateLigatureSubstitutionRecords();

  /// @brief Method UpdateWeightFallbacks, addr 0x69a06bc, size 0x80, virtual false, abstract: false, final false
  inline void UpdateWeightFallbacks();

  /// @brief Method UpdateWeightFallbacks, addr 0x69a073c, size 0x130, virtual false, abstract: false, final false
  static inline void UpdateWeightFallbacks(::System::IntPtr ptr, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> regularFallbacks,
                                           ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> italicFallbacks);

  /// @brief Method UpdateWeightFallbacks_Injected, addr 0x69a0d98, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateWeightFallbacks_Injected(::System::IntPtr ptr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> regularFallbacks,
                                                    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> italicFallbacks);

  constexpr bool const& __cordl_internal_get_InternalDynamicOS() const;

  constexpr bool& __cordl_internal_get_InternalDynamicOS();

  constexpr bool const& __cordl_internal_get_IsEditorFont() const;

  constexpr bool& __cordl_internal_get_IsEditorFont();

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

  constexpr bool const& __cordl_internal_get_m_IsClone() const;

  constexpr bool& __cordl_internal_get_m_IsClone();

  constexpr bool const& __cordl_internal_get_m_IsMultiAtlasTexturesEnabled() const;

  constexpr bool& __cordl_internal_get_m_IsMultiAtlasTexturesEnabled();

  constexpr uint8_t const& __cordl_internal_get_m_ItalicStyleSlant() const;

  constexpr uint8_t& __cordl_internal_get_m_ItalicStyleSlant();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get_m_MissingUnicodesFromFontFile() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_MissingUnicodesFromFontFile();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_NativeFontAsset() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_NativeFontAsset();

  constexpr float_t const& __cordl_internal_get_m_RegularStyleSpacing() const;

  constexpr float_t& __cordl_internal_get_m_RegularStyleSpacing();

  constexpr float_t const& __cordl_internal_get_m_RegularStyleWeight() const;

  constexpr float_t& __cordl_internal_get_m_RegularStyleWeight();

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

  constexpr uint8_t const& __cordl_internal_get_m_TabMultiple() const;

  constexpr uint8_t& __cordl_internal_get_m_TabMultiple();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& __cordl_internal_get_m_UsedGlyphRects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __cordl_internal_get_m_UsedGlyphRects();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>* const& __cordl_internal_get_m_VariantGlyphIndexes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>*& __cordl_internal_get_m_VariantGlyphIndexes();

  constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings const& __cordl_internal_get_m_fontAssetCreationEditorSettings() const;

  constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings& __cordl_internal_get_m_fontAssetCreationEditorSettings();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_s_MissingCharacterList() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_s_MissingCharacterList();

  constexpr void __cordl_internal_set_InternalDynamicOS(bool value);

  constexpr void __cordl_internal_set_IsEditorFont(bool value);

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

  constexpr void __cordl_internal_set_m_GetFontFeatures(bool value);

  constexpr void __cordl_internal_set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr void __cordl_internal_set_m_IsClone(bool value);

  constexpr void __cordl_internal_set_m_IsMultiAtlasTexturesEnabled(bool value);

  constexpr void __cordl_internal_set_m_ItalicStyleSlant(uint8_t value);

  constexpr void __cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_NativeFontAsset(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_RegularStyleSpacing(float_t value);

  constexpr void __cordl_internal_set_m_RegularStyleWeight(float_t value);

  constexpr void __cordl_internal_set_m_ShouldReimportFontFeatures(bool value);

  constexpr void __cordl_internal_set_m_SourceFontFile(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_m_SourceFontFileGUID(::StringW value);

  constexpr void __cordl_internal_set_m_SourceFontFilePath(::StringW value);

  constexpr void __cordl_internal_set_m_StyleNameHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_TabMultiple(uint8_t value);

  constexpr void __cordl_internal_set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr void __cordl_internal_set_m_VariantGlyphIndexes(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>* value);

  constexpr void __cordl_internal_set_m_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value);

  constexpr void __cordl_internal_set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x69a0f50, size 0x310, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_kFontAssetByInstanceId();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_AddSynthesizedCharactersMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ClearFontAssetDataMarker();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_k_FontAssets_FontFeaturesUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_k_FontAssets_KerningUpdateQueue();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_KerningUpdateQueueLookup();

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

  static inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>* getStaticF_s_CallbackInstances();

  static inline ::StringW getStaticF_s_DefaultMaterialSuffix();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_visitedFontAssets();

  /// @brief Method get_atlasHeight, addr 0x6995d84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasHeight();

  /// @brief Method get_atlasPadding, addr 0x6995d94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasPadding();

  /// @brief Method get_atlasPopulationMode, addr 0x699564c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::AtlasPopulationMode get_atlasPopulationMode();

  /// @brief Method get_atlasRenderMode, addr 0x6995da4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();

  /// @brief Method get_atlasTexture, addr 0x6995c94, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_atlasTexture();

  /// @brief Method get_atlasTextureCount, addr 0x6995d38, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_atlasTextureCount();

  /// @brief Method get_atlasTextures, addr 0x6995d28, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> get_atlasTextures();

  /// @brief Method get_atlasWidth, addr 0x6995d74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasWidth();

  /// @brief Method get_boldStyleSpacing, addr 0x6995e34, size 0x8, virtual false, abstract: false, final false
  inline float_t get_boldStyleSpacing();

  /// @brief Method get_boldStyleWeight, addr 0x6995e24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_boldStyleWeight();

  /// @brief Method get_characterLookupTable, addr 0x6995c70, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* get_characterLookupTable();

  /// @brief Method get_characterTable, addr 0x6995c60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* get_characterTable();

  /// @brief Method get_clearDynamicDataOnBuild, addr 0x6995d64, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDynamicDataOnBuild();

  /// @brief Method get_faceInfo, addr 0x699565c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method get_fallbackFontAssetTable, addr 0x6995de4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* get_fallbackFontAssetTable();

  /// @brief Method get_familyNameHashCode, addr 0x6995678, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_familyNameHashCode();

  /// @brief Method get_fontAssetCreationEditorSettings, addr 0x6995620, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings get_fontAssetCreationEditorSettings();

  /// @brief Method get_fontFeatureTable, addr 0x6995dd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::FontFeatureTable* get_fontFeatureTable();

  /// @brief Method get_fontWeightTable, addr 0x6995df4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> get_fontWeightTable();

  /// @brief Method get_freeGlyphRects, addr 0x6995dc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();

  /// @brief Method get_getFontFeatures, addr 0x6995d54, size 0x8, virtual false, abstract: false, final false
  inline bool get_getFontFeatures();

  /// @brief Method get_glyphLookupTable, addr 0x69956e8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();

  /// @brief Method get_glyphTable, addr 0x69956d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable();

  /// @brief Method get_isMultiAtlasTexturesEnabled, addr 0x6995d44, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMultiAtlasTexturesEnabled();

  /// @brief Method get_italicStyleSlant, addr 0x6995e44, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_italicStyleSlant();

  /// @brief Method get_nativeFontAsset, addr 0x699faa4, size 0x14c, virtual false, abstract: false, final false
  inline ::System::IntPtr get_nativeFontAsset();

  /// @brief Method get_regularStyleSpacing, addr 0x6995e14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_regularStyleSpacing();

  /// @brief Method get_regularStyleWeight, addr 0x6995e04, size 0x8, virtual false, abstract: false, final false
  inline float_t get_regularStyleWeight();

  /// @brief Method get_sourceFontFile, addr 0x699563c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_sourceFontFile();

  /// @brief Method get_styleNameHashCode, addr 0x69956a8, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_styleNameHashCode();

  /// @brief Method get_tabMultiple, addr 0x6995e54, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_tabMultiple();

  /// @brief Method get_usedGlyphRects, addr 0x6995db4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();

  static inline void setStaticF_kFontAssetByInstanceId(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  static inline void setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value);

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_FontAssets_KerningUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  static inline void setStaticF_k_FontAssets_KerningUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

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

  static inline void setStaticF_s_CallbackInstances(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>* value);

  static inline void setStaticF_s_DefaultMaterialSuffix(::StringW value);

  static inline void setStaticF_visitedFontAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method set_atlasHeight, addr 0x6995d8c, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasHeight(int32_t value);

  /// @brief Method set_atlasPadding, addr 0x6995d9c, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPadding(int32_t value);

  /// @brief Method set_atlasPopulationMode, addr 0x6995654, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value);

  /// @brief Method set_atlasRenderMode, addr 0x6995dac, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  /// @brief Method set_atlasTextures, addr 0x6995d30, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value);

  /// @brief Method set_atlasWidth, addr 0x6995d7c, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasWidth(int32_t value);

  /// @brief Method set_boldStyleSpacing, addr 0x6995e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_boldStyleSpacing(float_t value);

  /// @brief Method set_boldStyleWeight, addr 0x6995e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_boldStyleWeight(float_t value);

  /// @brief Method set_characterTable, addr 0x6995c68, size 0x8, virtual false, abstract: false, final false
  inline void set_characterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  /// @brief Method set_clearDynamicDataOnBuild, addr 0x6995d6c, size 0x8, virtual false, abstract: false, final false
  inline void set_clearDynamicDataOnBuild(bool value);

  /// @brief Method set_faceInfo, addr 0x699566c, size 0xc, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method set_fallbackFontAssetTable, addr 0x6995dec, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  /// @brief Method set_familyNameHashCode, addr 0x69956a0, size 0x8, virtual false, abstract: false, final false
  inline void set_familyNameHashCode(int32_t value);

  /// @brief Method set_fontAssetCreationEditorSettings, addr 0x6995630, size 0xc, virtual false, abstract: false, final false
  inline void set_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value);

  /// @brief Method set_fontFeatureTable, addr 0x6995ddc, size 0x8, virtual false, abstract: false, final false
  inline void set_fontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value);

  /// @brief Method set_fontWeightTable, addr 0x6995dfc, size 0x8, virtual false, abstract: false, final false
  inline void set_fontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value);

  /// @brief Method set_freeGlyphRects, addr 0x6995dcc, size 0x8, virtual false, abstract: false, final false
  inline void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method set_getFontFeatures, addr 0x6995d5c, size 0x8, virtual false, abstract: false, final false
  inline void set_getFontFeatures(bool value);

  /// @brief Method set_glyphTable, addr 0x69956e0, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  /// @brief Method set_isMultiAtlasTexturesEnabled, addr 0x6995d4c, size 0x8, virtual false, abstract: false, final false
  inline void set_isMultiAtlasTexturesEnabled(bool value);

  /// @brief Method set_italicStyleSlant, addr 0x6995e4c, size 0x8, virtual false, abstract: false, final false
  inline void set_italicStyleSlant(uint8_t value);

  /// @brief Method set_regularStyleSpacing, addr 0x6995e1c, size 0x8, virtual false, abstract: false, final false
  inline void set_regularStyleSpacing(float_t value);

  /// @brief Method set_regularStyleWeight, addr 0x6995e0c, size 0x8, virtual false, abstract: false, final false
  inline void set_regularStyleWeight(float_t value);

  /// @brief Method set_sourceFontFile, addr 0x6995644, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceFontFile(::UnityEngine::Font* value);

  /// @brief Method set_styleNameHashCode, addr 0x69956d0, size 0x8, virtual false, abstract: false, final false
  inline void set_styleNameHashCode(int32_t value);

  /// @brief Method set_tabMultiple, addr 0x6995e5c, size 0x8, virtual false, abstract: false, final false
  inline void set_tabMultiple(uint8_t value);

  /// @brief Method set_usedGlyphRects, addr 0x6995dbc, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17182 };

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

  /// @brief Field IsEditorFont, offset: 0xad, size: 0x1, def value: None
  bool ___IsEditorFont;

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

  /// @brief Field m_GetFontFeatures, offset: 0x14d, size: 0x1, def value: None
  bool ___m_GetFontFeatures;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0x14e, size: 0x1, def value: None
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

  /// @brief Field m_ShouldReimportFontFeatures, offset: 0x178, size: 0x1, def value: None
  bool ___m_ShouldReimportFontFeatures;

  /// @brief Field m_FallbackFontAssetTable, offset: 0x180, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* ___m_FallbackFontAssetTable;

  /// @brief Field m_FontWeightTable, offset: 0x188, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> ___m_FontWeightTable;

  /// @brief Field m_RegularStyleWeight, offset: 0x190, size: 0x4, def value: None
  float_t ___m_RegularStyleWeight;

  /// @brief Field m_RegularStyleSpacing, offset: 0x194, size: 0x4, def value: None
  float_t ___m_RegularStyleSpacing;

  /// @brief Field m_BoldStyleWeight, offset: 0x198, size: 0x4, def value: None
  float_t ___m_BoldStyleWeight;

  /// @brief Field m_BoldStyleSpacing, offset: 0x19c, size: 0x4, def value: None
  float_t ___m_BoldStyleSpacing;

  /// @brief Field m_ItalicStyleSlant, offset: 0x1a0, size: 0x1, def value: None
  uint8_t ___m_ItalicStyleSlant;

  /// @brief Field m_TabMultiple, offset: 0x1a1, size: 0x1, def value: None
  uint8_t ___m_TabMultiple;

  /// @brief Field IsFontAssetLookupTablesDirty, offset: 0x1a2, size: 0x1, def value: None
  bool ___IsFontAssetLookupTablesDirty;

  /// @brief Field m_NativeFontAsset, offset: 0x1a8, size: 0x8, def value: None
  ::System::IntPtr ___m_NativeFontAsset;

  /// @brief Field m_GlyphsToRender, offset: 0x1b0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsToRender;

  /// @brief Field m_GlyphsRendered, offset: 0x1b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsRendered;

  /// @brief Field m_GlyphIndexList, offset: 0x1c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset: 0x1c8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphsToAdd, offset: 0x1d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset: 0x1d8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_GlyphsToAddLookup;

  /// @brief Field m_CharactersToAdd, offset: 0x1e0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* ___m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset: 0x1e8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_CharactersToAddLookup;

  /// @brief Field s_MissingCharacterList, offset: 0x1f0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___s_MissingCharacterList;

  /// @brief Field m_MissingUnicodesFromFontFile, offset: 0x1f8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_MissingUnicodesFromFontFile;

  /// @brief Field m_VariantGlyphIndexes, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>* ___m_VariantGlyphIndexes;

  /// @brief Field m_IsClone, offset: 0x208, size: 0x1, def value: None
  bool ___m_IsClone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_SourceFontFileGUID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_fontAssetCreationEditorSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_SourceFontFile) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_SourceFontFilePath) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasPopulationMode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___InternalDynamicOS) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___IsEditorFont) == 0xad, "Offset mismatch!");

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

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GetFontFeatures) == 0x14d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_ClearDynamicDataOnBuild) == 0x14e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasWidth) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasHeight) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasPadding) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_AtlasRenderMode) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_UsedGlyphRects) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FreeGlyphRects) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FontFeatureTable) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_ShouldReimportFontFeatures) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FallbackFontAssetTable) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_FontWeightTable) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_RegularStyleWeight) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_RegularStyleSpacing) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_BoldStyleWeight) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_BoldStyleSpacing) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_ItalicStyleSlant) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_TabMultiple) == 0x1a1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___IsFontAssetLookupTablesDirty) == 0x1a2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_NativeFontAsset) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsToRender) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsRendered) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphIndexList) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphIndexListNewlyAdded) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsToAdd) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_GlyphsToAddLookup) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_CharactersToAdd) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_CharactersToAddLookup) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___s_MissingCharacterList) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_MissingUnicodesFromFontFile) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_VariantGlyphIndexes) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAsset, ___m_IsClone) == 0x208, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAsset, 0x210>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAsset*, "UnityEngine.TextCore.Text", "FontAsset");
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAsset___c*, "UnityEngine.TextCore.Text", "FontAsset/<>c");
