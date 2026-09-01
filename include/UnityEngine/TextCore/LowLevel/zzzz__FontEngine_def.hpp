#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\LowLevel\FontEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__LigatureSubstitutionRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToBaseAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToMarkAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FontEngine)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontReference;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphLoadFlags;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPackingMode;
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
namespace UnityEngine::TextCore::LowLevel {
class FontEngine;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::LowLevel::FontEngine*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::LowLevel::FontEngine*, "UnityEngine.TextCore.LowLevel", "FontEngine");
// Dependencies System.Object, UnityEngine.TextCore.Glyph, UnityEngine.TextCore.GlyphRect, UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct,
// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord, UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord, UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord,
// UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: false
// CS Name: UnityEngine.TextCore.LowLevel.FontEngine
class CORDL_TYPE FontEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_FreeGlyphRects, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FreeGlyphRects, put = setStaticF_s_FreeGlyphRects)) ::ArrayW<::UnityEngine::TextCore::GlyphRect> s_FreeGlyphRects;

  /// @brief Field s_GlyphIndexes_MarshallingArray_A, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlyphIndexes_MarshallingArray_A, put = setStaticF_s_GlyphIndexes_MarshallingArray_A)) ::ArrayW<uint32_t> s_GlyphIndexes_MarshallingArray_A;

  /// @brief Field s_GlyphLookupDictionary, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlyphLookupDictionary,
                      put = setStaticF_s_GlyphLookupDictionary)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* s_GlyphLookupDictionary;

  /// @brief Field s_GlyphMarshallingStruct_IN, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlyphMarshallingStruct_IN, put = setStaticF_s_GlyphMarshallingStruct_IN)) ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>
      s_GlyphMarshallingStruct_IN;

  /// @brief Field s_GlyphMarshallingStruct_OUT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlyphMarshallingStruct_OUT, put = setStaticF_s_GlyphMarshallingStruct_OUT)) ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>
      s_GlyphMarshallingStruct_OUT;

  /// @brief Field s_Glyphs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Glyphs, put = setStaticF_s_Glyphs)) ::ArrayW<::UnityEngine::TextCore::Glyph*> s_Glyphs;

  /// @brief Field s_LigatureSubstitutionRecords_MarshallingArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LigatureSubstitutionRecords_MarshallingArray,
                      put = setStaticF_s_LigatureSubstitutionRecords_MarshallingArray)) ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>
      s_LigatureSubstitutionRecords_MarshallingArray;

  /// @brief Field s_MarkToBaseAdjustmentRecords_MarshallingArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray,
                      put = setStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray)) ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>
      s_MarkToBaseAdjustmentRecords_MarshallingArray;

  /// @brief Field s_MarkToMarkAdjustmentRecords_MarshallingArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray,
                      put = setStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray)) ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>
      s_MarkToMarkAdjustmentRecords_MarshallingArray;

  /// @brief Field s_PairAdjustmentRecords_MarshallingArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PairAdjustmentRecords_MarshallingArray,
                      put = setStaticF_s_PairAdjustmentRecords_MarshallingArray)) ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>
      s_PairAdjustmentRecords_MarshallingArray;

  /// @brief Field s_UsedGlyphRects, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UsedGlyphRects, put = setStaticF_s_UsedGlyphRects)) ::ArrayW<::UnityEngine::TextCore::GlyphRect> s_UsedGlyphRects;

  /// @brief Method GenericListToMarshallingArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GenericListToMarshallingArray(::by_ref<::System::Collections::Generic::List_1<T>*> srcList, ::by_ref<::ArrayW<T>> dstArray);

  /// @brief Method GetAllLigatureSubstitutionRecords, addr 0x6bbecac, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> GetAllLigatureSubstitutionRecords();

  /// @brief Method GetAllMarkToBaseAdjustmentRecords, addr 0x6bbf900, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> GetAllMarkToBaseAdjustmentRecords();

  /// @brief Method GetAllMarkToBaseAdjustmentRecords_Injected, addr 0x6bbfa3c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetAllMarkToBaseAdjustmentRecords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetAllMarkToMarkAdjustmentRecords, addr 0x6bbfe78, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> GetAllMarkToMarkAdjustmentRecords();

  /// @brief Method GetAllMarkToMarkAdjustmentRecords_Injected, addr 0x6bbffb4, size 0x3c, virtual false, abstract: false, final false
  static inline void GetAllMarkToMarkAdjustmentRecords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetAllPairAdjustmentRecords, addr 0x6bbf44c, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetAllPairAdjustmentRecords();

  /// @brief Method GetAllPairAdjustmentRecords_Injected, addr 0x6bbf588, size 0x3c, virtual false, abstract: false, final false
  static inline void GetAllPairAdjustmentRecords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetFaceInfo, addr 0x6bbd338, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::FaceInfo GetFaceInfo();

  /// @brief Method GetFaceInfo_Internal, addr 0x6bbd3dc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetFaceInfo_Internal(::by_ref<::UnityEngine::TextCore::FaceInfo> faceInfo);

  /// @brief Method GetFontFaces, addr 0x6bbd418, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetFontFaces();

  /// @brief Method GetFontFaces_Internal, addr 0x6bbd498, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetFontFaces_Internal();

  /// @brief Method GetGlyphIndex, addr 0x6bbd504, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method GetGlyphPairAdjustmentTable, addr 0x6bbf114, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetGlyphPairAdjustmentTable(::ArrayW<uint32_t> glyphIndexes);

  /// @brief Method GetLigatureSubstitutionRecords, addr 0x6bbecd4, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> GetLigatureSubstitutionRecords(uint32_t glyphIndex);

  /// @brief Method GetLigatureSubstitutionRecords, addr 0x6bbede0, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> GetLigatureSubstitutionRecords(::ArrayW<uint32_t> glyphIndexes);

  /// @brief Method GetLigatureSubstitutionRecords, addr 0x6bbef08, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> GetLigatureSubstitutionRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method GetLigatureSubstitutionRecordsFromMarshallingArray, addr 0x6bbf094, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLigatureSubstitutionRecordsFromMarshallingArray(::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>> ligatureSubstitutionRecords);

  /// @brief Method GetMarkToBaseAdjustmentRecords, addr 0x6bbfb08, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> GetMarkToBaseAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes);

  /// @brief Method GetMarkToBaseAdjustmentRecords, addr 0x6bbfa78, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> GetMarkToBaseAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method GetMarkToBaseAdjustmentRecordsFromMarshallingArray, addr 0x6bbfd30, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetMarkToBaseAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> adjustmentRecords);

  /// @brief Method GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected, addr 0x6bbfe3c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> adjustmentRecords);

  /// @brief Method GetMarkToMarkAdjustmentRecords, addr 0x6bc0074, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> GetMarkToMarkAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes);

  /// @brief Method GetMarkToMarkAdjustmentRecords, addr 0x6bbfff0, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> GetMarkToMarkAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method GetMarkToMarkAdjustmentRecordsFromMarshallingArray, addr 0x6bc0298, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetMarkToMarkAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> adjustmentRecords);

  /// @brief Method GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected, addr 0x6bc03a4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> adjustmentRecords);

  /// @brief Method GetPairAdjustmentRecords, addr 0x6bbf654, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetPairAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes);

  /// @brief Method GetPairAdjustmentRecords, addr 0x6bbf5c4, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetPairAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method GetPairAdjustmentRecordsFromMarshallingArray, addr 0x6bbf340, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetPairAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords);

  /// @brief Method GetPairAdjustmentRecordsFromMarshallingArray_Injected, addr 0x6bbf8c4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetPairAdjustmentRecordsFromMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphPairAdjustmentRecords);

  /// @brief Method GetVariantGlyphIndex, addr 0x6bbd4c0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetVariantGlyphIndex(uint32_t unicode, uint32_t variantSelectorUnicode);

  /// @brief Method GlyphIndexToMarshallingArray, addr 0x6bbed48, size 0x98, virtual false, abstract: false, final false
  static inline void GlyphIndexToMarshallingArray(uint32_t glyphIndex, ::by_ref<::ArrayW<uint32_t>> dstArray);

  /// @brief Method LoadFontFace, addr 0x6bbccb0, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW familyName, ::StringW styleName, float_t pointSize);

  /// @brief Method LoadFontFace, addr 0x6bbc5dc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW filePath);

  /// @brief Method LoadFontFace, addr 0x6bbc7c8, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW filePath, float_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace, addr 0x6bbca94, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::UnityEngine::Font* font, float_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_Internal, addr 0x6bbc634, size 0x158, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_Internal(::StringW filePath);

  /// @brief Method LoadFontFace_Internal_Injected, addr 0x6bbc78c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> filePath);

  /// @brief Method LoadFontFace_With_Size_And_FaceIndex_Internal, addr 0x6bbc8d0, size 0x170, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_With_Size_And_FaceIndex_Internal(::StringW filePath, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_With_Size_And_FaceIndex_Internal_Injected, addr 0x6bbca40, size 0x54, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_With_Size_And_FaceIndex_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> filePath, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal, addr 0x6bbcb9c, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(::UnityEngine::Font* font, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected, addr 0x6bbcc5c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected(::System::IntPtr font, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal, addr 0x6bbcdb8, size 0x1e8, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected, addr 0x6bbcfa0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> familyName,
                                                                                             ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> styleName, int32_t pointSize);

  /// @brief Method PopulateLigatureSubstitutionRecordMarshallingArray, addr 0x6bbef98, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t PopulateLigatureSubstitutionRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulateLigatureSubstitutionRecordMarshallingArray_Injected, addr 0x6bbf0d0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PopulateLigatureSubstitutionRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulateMarkToBaseAdjustmentRecordMarshallingArray, addr 0x6bbfc34, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t PopulateMarkToBaseAdjustmentRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected, addr 0x6bbfdf8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulateMarkToMarkAdjustmentRecordMarshallingArray, addr 0x6bc019c, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t PopulateMarkToMarkAdjustmentRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected, addr 0x6bc0360, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulatePairAdjustmentRecordMarshallingArray, addr 0x6bbf784, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t PopulatePairAdjustmentRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulatePairAdjustmentRecordMarshallingArray_Injected, addr 0x6bbf880, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PopulatePairAdjustmentRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulatePairAdjustmentRecordMarshallingArray_from_KernTable, addr 0x6bbf244, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected, addr 0x6bbf408, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes, ::by_ref<int32_t> recordCount);

  /// @brief Method ResetAtlasTexture, addr 0x6bc03e0, size 0xa8, virtual false, abstract: false, final false
  static inline void ResetAtlasTexture(::UnityEngine::Texture2D* texture);

  /// @brief Method ResetAtlasTexture_Injected, addr 0x6bc0488, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetAtlasTexture_Injected(::System::IntPtr texture);

  /// @brief Method SetMarshallingArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetMarshallingArraySize(::by_ref<::ArrayW<T>> marshallingArray, int32_t recordCount);

  /// @brief Method SetTextureUploadMode, addr 0x6bbd850, size 0x3c, virtual false, abstract: false, final false
  static inline void SetTextureUploadMode(bool shouldUploadImmediately);

  /// @brief Method TryAddGlyphToTexture, addr 0x6bbd88c, size 0x4f4, virtual false, abstract: false, final false
  static inline bool TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                          ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                          ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                          ::UnityEngine::Texture2D* texture, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryAddGlyphToTexture_Internal, addr 0x6bbdd80, size 0x244, virtual false, abstract: false, final false
  static inline bool TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                   ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ::by_ref<int32_t> freeGlyphRectCount,
                                                   ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ::by_ref<int32_t> usedGlyphRectCount,
                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                   ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph);

  /// @brief Method TryAddGlyphToTexture_Internal_Injected, addr 0x6bbdfc4, size 0x9c, virtual false, abstract: false, final false
  static inline bool TryAddGlyphToTexture_Internal_Injected(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                            ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> freeGlyphRects, ::by_ref<int32_t> freeGlyphRectCount,
                                                            ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> usedGlyphRects, ::by_ref<int32_t> usedGlyphRectCount,
                                                            ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::System::IntPtr texture,
                                                            ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph);

  /// @brief Method TryAddGlyphsToTexture, addr 0x6bbe060, size 0x858, virtual false, abstract: false, final false
  static inline bool TryAddGlyphsToTexture(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                           ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                           ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                           ::UnityEngine::Texture2D* texture, ::by_ref<::ArrayW<::UnityEngine::TextCore::Glyph*>> glyphs);

  /// @brief Method TryAddGlyphsToTexture_Internal, addr 0x6bbe8cc, size 0x338, virtual false, abstract: false, final false
  static inline bool TryAddGlyphsToTexture_Internal(::ArrayW<uint32_t> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                    ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ::by_ref<int32_t> freeGlyphRectCount,
                                                    ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ::by_ref<int32_t> usedGlyphRectCount,
                                                    ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                    ::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>> glyphs, ::by_ref<int32_t> glyphCount);

  /// @brief Method TryAddGlyphsToTexture_Internal_Injected, addr 0x6bbec04, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryAddGlyphsToTexture_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndex, int32_t padding,
                                                             ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> freeGlyphRects,
                                                             ::by_ref<int32_t> freeGlyphRectCount, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> usedGlyphRects,
                                                             ::by_ref<int32_t> usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::System::IntPtr texture,
                                                             ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> glyphs, ::by_ref<int32_t> glyphCount);

  /// @brief Method TryGetGlyphWithIndexValue, addr 0x6bbd6c8, size 0x134, virtual false, abstract: false, final false
  static inline bool TryGetGlyphWithIndexValue(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryGetGlyphWithIndexValue_Internal, addr 0x6bbd7fc, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                        ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct);

  /// @brief Method TryGetGlyphWithUnicodeValue, addr 0x6bbd540, size 0x134, virtual false, abstract: false, final false
  static inline bool TryGetGlyphWithUnicodeValue(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryGetGlyphWithUnicodeValue_Internal, addr 0x6bbd674, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                          ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct);

  /// @brief Method TryGetSystemFontReference, addr 0x6bbd088, size 0x70, virtual false, abstract: false, final false
  static inline bool TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference> fontRef);

  /// @brief Method TryGetSystemFontReference_Internal, addr 0x6bbd0f8, size 0x1ec, virtual false, abstract: false, final false
  static inline bool TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName, ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference> fontRef);

  /// @brief Method TryGetSystemFontReference_Internal_Injected, addr 0x6bbd2e4, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetSystemFontReference_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> familyName, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> styleName,
                                                                 ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference> fontRef);

  /// @brief Method UnloadFontFace, addr 0x6bbcff4, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnloadFontFace();

  /// @brief Method UnloadFontFace_Internal, addr 0x6bbd060, size 0x28, virtual false, abstract: false, final false
  static inline int32_t UnloadFontFace_Internal();

  static inline ::ArrayW<::UnityEngine::TextCore::GlyphRect> getStaticF_s_FreeGlyphRects();

  static inline ::ArrayW<uint32_t> getStaticF_s_GlyphIndexes_MarshallingArray_A();

  static inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* getStaticF_s_GlyphLookupDictionary();

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> getStaticF_s_GlyphMarshallingStruct_IN();

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> getStaticF_s_GlyphMarshallingStruct_OUT();

  static inline ::ArrayW<::UnityEngine::TextCore::Glyph*> getStaticF_s_Glyphs();

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> getStaticF_s_LigatureSubstitutionRecords_MarshallingArray();

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> getStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray();

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> getStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray();

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> getStaticF_s_PairAdjustmentRecords_MarshallingArray();

  static inline ::ArrayW<::UnityEngine::TextCore::GlyphRect> getStaticF_s_UsedGlyphRects();

  static inline void setStaticF_s_FreeGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect> value);

  static inline void setStaticF_s_GlyphIndexes_MarshallingArray_A(::ArrayW<uint32_t> value);

  static inline void setStaticF_s_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value);

  static inline void setStaticF_s_GlyphMarshallingStruct_IN(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value);

  static inline void setStaticF_s_GlyphMarshallingStruct_OUT(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value);

  static inline void setStaticF_s_Glyphs(::ArrayW<::UnityEngine::TextCore::Glyph*> value);

  static inline void setStaticF_s_LigatureSubstitutionRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> value);

  static inline void setStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> value);

  static inline void setStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> value);

  static inline void setStaticF_s_PairAdjustmentRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value);

  static inline void setStaticF_s_UsedGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontEngine(FontEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontEngine(FontEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::LowLevel::FontEngine) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
