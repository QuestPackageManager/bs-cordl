#pragma once
// IWYU pragma private; include "TMPro/TMP_SpriteAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteAsset)
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
class TMP_SpriteAsset___c;
}
namespace TMPro {
class TMP_SpriteCharacter;
}
namespace TMPro {
class TMP_SpriteGlyph;
}
namespace TMPro {
class TMP_Sprite;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_SpriteAsset___c;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SpriteAsset);
MARK_REF_PTR_T(::TMPro::TMP_SpriteAsset___c);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_SpriteAsset/<>c
class CORDL_TYPE TMP_SpriteAsset___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::TMPro::TMP_SpriteAsset___c* __9;

  /// @brief Field <>9__32_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__32_0, put = setStaticF___9__32_0)) ::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* __9__32_0;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0)) ::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* __9__33_0;

  static inline ::TMPro::TMP_SpriteAsset___c* New_ctor();

  /// @brief Method <SortCharacterTable>b__33_0, addr 0x6782048, size 0x14, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__33_0(::TMPro::TMP_SpriteCharacter* c);

  /// @brief Method <SortGlyphTable>b__32_0, addr 0x6782034, size 0x14, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__32_0(::TMPro::TMP_SpriteGlyph* item);

  /// @brief Method .ctor, addr 0x6782030, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_SpriteAsset___c* getStaticF___9();

  static inline ::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* getStaticF___9__32_0();

  static inline ::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* getStaticF___9__33_0();

  static inline void setStaticF___9(::TMPro::TMP_SpriteAsset___c* value);

  static inline void setStaticF___9__32_0(::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteAsset___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteAsset___c(TMP_SpriteAsset___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteAsset___c(TMP_SpriteAsset___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteAsset___c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.TMP_Asset
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_SpriteAsset
class CORDL_TYPE TMP_SpriteAsset : public ::TMPro::TMP_Asset {
public:
  // Declarations
  using __c = ::TMPro::TMP_SpriteAsset___c;

  /// @brief Field fallbackSpriteAssets, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackSpriteAssets,
                      put = __cordl_internal_set_fallbackSpriteAssets)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* fallbackSpriteAssets;

  /// @brief Field k_searchedSpriteAssets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_searchedSpriteAssets, put = setStaticF_k_searchedSpriteAssets)) ::System::Collections::Generic::HashSet_1<int32_t>* k_searchedSpriteAssets;

  /// @brief Field m_GlyphIndexLookup, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexLookup,
                      put = __cordl_internal_set_m_GlyphIndexLookup)) ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* m_GlyphIndexLookup;

  /// @brief Field m_GlyphTable, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphTable, put = __cordl_internal_set_m_GlyphTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* m_GlyphTable;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsSpriteAssetLookupTablesDirty, put = __cordl_internal_set_m_IsSpriteAssetLookupTablesDirty)) bool m_IsSpriteAssetLookupTablesDirty;

  /// @brief Field m_NameLookup, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NameLookup, put = __cordl_internal_set_m_NameLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_NameLookup;

  /// @brief Field m_SpriteCharacterLookup, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteCharacterLookup,
                      put = __cordl_internal_set_m_SpriteCharacterLookup)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterLookup;

  /// @brief Field m_SpriteCharacterTable, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteCharacterTable,
                      put = __cordl_internal_set_m_SpriteCharacterTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterTable;

  /// @brief Field m_SpriteGlyphLookup, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteGlyphLookup,
                      put = __cordl_internal_set_m_SpriteGlyphLookup)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphLookup;

  __declspec(property(get = get_spriteCharacterLookupTable,
                      put = set_spriteCharacterLookupTable)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* spriteCharacterLookupTable;

  __declspec(property(get = get_spriteCharacterTable, put = set_spriteCharacterTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* spriteCharacterTable;

  __declspec(property(get = get_spriteGlyphTable, put = set_spriteGlyphTable)) ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* spriteGlyphTable;

  /// @brief Field spriteInfoList, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_spriteInfoList, put = __cordl_internal_set_spriteInfoList)) ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* spriteInfoList;

  /// @brief Field spriteSheet, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_spriteSheet, put = __cordl_internal_set_spriteSheet)) ::UnityW<::UnityEngine::Texture> spriteSheet;

  /// @brief Method Awake, addr 0x6780960, size 0x8c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetDefaultSpriteMaterial, addr 0x6780e60, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetDefaultSpriteMaterial();

  /// @brief Method GetSpriteIndexFromHashcode, addr 0x6780f40, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromHashcode(int32_t hashCode);

  /// @brief Method GetSpriteIndexFromName, addr 0x6781064, size 0xac, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromName(::StringW name);

  /// @brief Method GetSpriteIndexFromUnicode, addr 0x6780fcc, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromUnicode(uint32_t unicode);

  static inline ::TMPro::TMP_SpriteAsset* New_ctor();

  /// @brief Method SearchForSpriteByHashCode, addr 0x6781610, size 0x3a8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> SearchForSpriteByHashCode(::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks, ::ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x6781b80, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> SearchForSpriteByHashCodeInternal(::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks, ::ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x67819b8, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* spriteAssets, int32_t hashCode,
                                                                                     bool searchFallbacks, ::ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicode, addr 0x6781110, size 0x27c, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> SearchForSpriteByUnicode(::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, ::ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x678154c, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> SearchForSpriteByUnicodeInternal(::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, ::ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x678138c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SpriteAsset> SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* spriteAssets, uint32_t unicode,
                                                                                    bool includeFallbacks, ::ByRef<int32_t> spriteIndex);

  /// @brief Method SortCharacterTable, addr 0x6781d90, size 0x150, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortGlyphAndCharacterTables, addr 0x6781ee0, size 0x18, virtual false, abstract: false, final false
  inline void SortGlyphAndCharacterTables();

  /// @brief Method SortGlyphTable, addr 0x6781c44, size 0x14c, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method UpdateLookupTables, addr 0x6780270, size 0x6ac, virtual false, abstract: false, final false
  inline void UpdateLookupTables();

  /// @brief Method UpgradeSpriteAsset, addr 0x67809ec, size 0x474, virtual false, abstract: false, final false
  inline void UpgradeSpriteAsset();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* const& __cordl_internal_get_fallbackSpriteAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*& __cordl_internal_get_fallbackSpriteAssets();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* const& __cordl_internal_get_m_GlyphIndexLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*& __cordl_internal_get_m_GlyphIndexLookup();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* const& __cordl_internal_get_m_GlyphTable() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*& __cordl_internal_get_m_GlyphTable();

  constexpr bool const& __cordl_internal_get_m_IsSpriteAssetLookupTablesDirty() const;

  constexpr bool& __cordl_internal_get_m_IsSpriteAssetLookupTablesDirty();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_m_NameLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_NameLookup();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* const& __cordl_internal_get_m_SpriteCharacterLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*& __cordl_internal_get_m_SpriteCharacterLookup();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* const& __cordl_internal_get_m_SpriteCharacterTable() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*& __cordl_internal_get_m_SpriteCharacterTable();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* const& __cordl_internal_get_m_SpriteGlyphLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>*& __cordl_internal_get_m_SpriteGlyphLookup();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* const& __cordl_internal_get_spriteInfoList() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>*& __cordl_internal_get_spriteInfoList();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_spriteSheet() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_spriteSheet();

  constexpr void __cordl_internal_set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* value);

  constexpr void __cordl_internal_set_m_GlyphIndexLookup(::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* value);

  constexpr void __cordl_internal_set_m_IsSpriteAssetLookupTablesDirty(bool value);

  constexpr void __cordl_internal_set_m_NameLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_SpriteCharacterLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* value);

  constexpr void __cordl_internal_set_m_SpriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* value);

  constexpr void __cordl_internal_set_m_SpriteGlyphLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* value);

  constexpr void __cordl_internal_set_spriteInfoList(::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* value);

  constexpr void __cordl_internal_set_spriteSheet(::UnityW<::UnityEngine::Texture> value);

  /// @brief Method .ctor, addr 0x6781f18, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_searchedSpriteAssets();

  /// @brief Method get_spriteCharacterLookupTable, addr 0x6780924, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* get_spriteCharacterLookupTable();

  /// @brief Method get_spriteCharacterTable, addr 0x6780204, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* get_spriteCharacterTable();

  /// @brief Method get_spriteGlyphTable, addr 0x6780950, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* get_spriteGlyphTable();

  static inline void setStaticF_k_searchedSpriteAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method set_spriteCharacterLookupTable, addr 0x6780948, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* value);

  /// @brief Method set_spriteCharacterTable, addr 0x678091c, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* value);

  /// @brief Method set_spriteGlyphTable, addr 0x6780958, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteGlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteAsset(TMP_SpriteAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteAsset(TMP_SpriteAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15936 };

  /// @brief Field m_NameLookup, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_NameLookup;

  /// @brief Field m_GlyphIndexLookup, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* ___m_GlyphIndexLookup;

  /// @brief Field spriteSheet, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___spriteSheet;

  /// @brief Field m_SpriteCharacterTable, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* ___m_SpriteCharacterTable;

  /// @brief Field m_SpriteCharacterLookup, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* ___m_SpriteCharacterLookup;

  /// @brief Field m_GlyphTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* ___m_GlyphTable;

  /// @brief Field m_SpriteGlyphLookup, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* ___m_SpriteGlyphLookup;

  /// @brief Field spriteInfoList, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* ___spriteInfoList;

  /// @brief Field fallbackSpriteAssets, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* ___fallbackSpriteAssets;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset: 0xe0, size: 0x1, def value: None
  bool ___m_IsSpriteAssetLookupTablesDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_NameLookup) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_GlyphIndexLookup) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___spriteSheet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteCharacterTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteCharacterLookup) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_GlyphTable) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteGlyphLookup) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___spriteInfoList) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___fallbackSpriteAssets) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_IsSpriteAssetLookupTablesDirty) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteAsset, 0xe8>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SpriteAsset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAsset*, "TMPro", "TMP_SpriteAsset");
NEED_NO_BOX(::TMPro::TMP_SpriteAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAsset___c*, "TMPro", "TMP_SpriteAsset/<>c");
