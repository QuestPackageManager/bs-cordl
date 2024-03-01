#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteAsset)
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
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
namespace UnityEngine::TextCore::Text {
class SpriteGlyph;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
class __SpriteAsset____c;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class __SpriteAsset____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::SpriteAsset);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::__SpriteAsset____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::SpriteAsset::<>c*
class CORDL_TYPE __SpriteAsset____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::TextCore::Text::__SpriteAsset____c* __9;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0))::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* __9__37_0;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0))::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* __9__38_0;

  static inline ::UnityEngine::TextCore::Text::__SpriteAsset____c* New_ctor();

  /// @brief Method <SortCharacterTable>b__38_0, addr 0x2e4e9c8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__38_0(::UnityEngine::TextCore::Text::SpriteCharacter* c);

  /// @brief Method <SortGlyphTable>b__37_0, addr 0x2e4e9b0, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__37_0(::UnityEngine::TextCore::Text::SpriteGlyph* item);

  /// @brief Method .ctor, addr 0x2e4e9a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::__SpriteAsset____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* getStaticF___9__37_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* getStaticF___9__38_0();

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::__SpriteAsset____c* value);

  static inline void setStaticF___9__37_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* value);

  static inline void setStaticF___9__38_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpriteAsset____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SpriteAsset____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpriteAsset____c(__SpriteAsset____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpriteAsset____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpriteAsset____c(__SpriteAsset____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__SpriteAsset____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::SpriteAsset
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 217, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::SpriteAsset*
class CORDL_TYPE SpriteAsset : public ::UnityEngine::TextCore::Text::TextAsset {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::__SpriteAsset____c;

  __declspec(property(get = get_faceInfo, put = set_faceInfo))::UnityEngine::TextCore::FaceInfo faceInfo;

  /// @brief Field fallbackSpriteAssets, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackSpriteAssets,
                      put = __cordl_internal_set_fallbackSpriteAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* fallbackSpriteAssets;

  /// @brief Field k_searchedSpriteAssets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_searchedSpriteAssets, put = setStaticF_k_searchedSpriteAssets))::System::Collections::Generic::HashSet_1<int32_t>* k_searchedSpriteAssets;

  /// @brief Field m_FaceInfo, offset 0x48, size 0x60
  __declspec(property(get = __cordl_internal_get_m_FaceInfo, put = __cordl_internal_set_m_FaceInfo))::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_GlyphIndexLookup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphIndexLookup, put = __cordl_internal_set_m_GlyphIndexLookup))::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* m_GlyphIndexLookup;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsSpriteAssetLookupTablesDirty, put = __cordl_internal_set_m_IsSpriteAssetLookupTablesDirty)) bool m_IsSpriteAssetLookupTablesDirty;

  /// @brief Field m_NameLookup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NameLookup, put = __cordl_internal_set_m_NameLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_NameLookup;

  /// @brief Field m_SpriteAtlasTexture, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteAtlasTexture, put = __cordl_internal_set_m_SpriteAtlasTexture))::UnityW<::UnityEngine::Texture> m_SpriteAtlasTexture;

  /// @brief Field m_SpriteCharacterLookup, offset 0xb8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_SpriteCharacterLookup,
               put = __cordl_internal_set_m_SpriteCharacterLookup))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* m_SpriteCharacterLookup;

  /// @brief Field m_SpriteCharacterTable, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteCharacterTable,
                      put = __cordl_internal_set_m_SpriteCharacterTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* m_SpriteCharacterTable;

  /// @brief Field m_SpriteGlyphLookup, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteGlyphLookup,
                      put = __cordl_internal_set_m_SpriteGlyphLookup))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* m_SpriteGlyphLookup;

  /// @brief Field m_SpriteGlyphTable, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteGlyphTable,
                      put = __cordl_internal_set_m_SpriteGlyphTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* m_SpriteGlyphTable;

  __declspec(property(get = get_spriteCharacterLookupTable,
                      put = set_spriteCharacterLookupTable))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* spriteCharacterLookupTable;

  __declspec(property(get = get_spriteCharacterTable, put = set_spriteCharacterTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* spriteCharacterTable;

  __declspec(property(get = get_spriteGlyphTable, put = set_spriteGlyphTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* spriteGlyphTable;

  __declspec(property(get = get_spriteSheet, put = set_spriteSheet))::UnityW<::UnityEngine::Texture> spriteSheet;

  /// @brief Method Awake, addr 0x2e4db04, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetSpriteIndexFromHashcode, addr 0x2e4db08, size 0x88, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromHashcode(int32_t hashCode);

  /// @brief Method GetSpriteIndexFromName, addr 0x2e4dc24, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromName(::StringW name);

  /// @brief Method GetSpriteIndexFromUnicode, addr 0x2e4db90, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromUnicode(uint32_t unicode);

  static inline ::UnityEngine::TextCore::Text::SpriteAsset* New_ctor();

  /// @brief Method SearchForSpriteByHashCode, addr 0x2e4e078, size 0x32c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> SearchForSpriteByHashCode(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks,
                                                                                               ByRef<int32_t> spriteIndex, ::UnityEngine::TextCore::Text::TextSettings* textSettings);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x2e4e544, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> SearchForSpriteByHashCodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks,
                                                                                                       ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x2e4e3a4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>
  SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* spriteAssets, int32_t hashCode, bool searchFallbacks,
                                    ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicode, addr 0x2e4dc60, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> SearchForSpriteByUnicode(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                                              ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x2e4dfc8, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> SearchForSpriteByUnicodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                                                      ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x2e4de28, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>
  SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* spriteAssets, uint32_t unicode, bool includeFallbacks,
                                   ByRef<int32_t> spriteIndex);

  /// @brief Method SortCharacterTable, addr 0x2e4e72c, size 0x13c, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortGlyphAndCharacterTables, addr 0x2e4e868, size 0x18, virtual false, abstract: false, final false
  inline void SortGlyphAndCharacterTables();

  /// @brief Method SortGlyphTable, addr 0x2e4e5f4, size 0x138, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method UpdateLookupTables, addr 0x2e4d5e4, size 0x4dc, virtual false, abstract: false, final false
  inline void UpdateLookupTables();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*& __cordl_internal_get_fallbackSpriteAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*> const& __cordl_internal_get_fallbackSpriteAssets() const;

  constexpr ::UnityEngine::TextCore::FaceInfo const& __cordl_internal_get_m_FaceInfo() const;

  constexpr ::UnityEngine::TextCore::FaceInfo& __cordl_internal_get_m_FaceInfo();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*& __cordl_internal_get_m_GlyphIndexLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*> const& __cordl_internal_get_m_GlyphIndexLookup() const;

  constexpr bool const& __cordl_internal_get_m_IsSpriteAssetLookupTablesDirty() const;

  constexpr bool& __cordl_internal_get_m_IsSpriteAssetLookupTablesDirty();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_NameLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get_m_NameLookup() const;

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_m_SpriteAtlasTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_m_SpriteAtlasTexture();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*& __cordl_internal_get_m_SpriteCharacterLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*> const&
  __cordl_internal_get_m_SpriteCharacterLookup() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*& __cordl_internal_get_m_SpriteCharacterTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*> const& __cordl_internal_get_m_SpriteCharacterTable() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>*& __cordl_internal_get_m_SpriteGlyphLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>*> const&
  __cordl_internal_get_m_SpriteGlyphLookup() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*& __cordl_internal_get_m_SpriteGlyphTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*> const& __cordl_internal_get_m_SpriteGlyphTable() const;

  constexpr void __cordl_internal_set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value);

  constexpr void __cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr void __cordl_internal_set_m_GlyphIndexLookup(::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_IsSpriteAssetLookupTablesDirty(bool value);

  constexpr void __cordl_internal_set_m_NameLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_SpriteAtlasTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_m_SpriteCharacterLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  constexpr void __cordl_internal_set_m_SpriteCharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  constexpr void __cordl_internal_set_m_SpriteGlyphLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* value);

  constexpr void __cordl_internal_set_m_SpriteGlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* value);

  /// @brief Method .ctor, addr 0x2e4e880, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_searchedSpriteAssets();

  /// @brief Method get_faceInfo, addr 0x2e4d57c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method get_spriteCharacterLookupTable, addr 0x2e4dac8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* get_spriteCharacterLookupTable();

  /// @brief Method get_spriteCharacterTable, addr 0x2e4d5c0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* get_spriteCharacterTable();

  /// @brief Method get_spriteGlyphTable, addr 0x2e4daf4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* get_spriteGlyphTable();

  /// @brief Method get_spriteSheet, addr 0x2e4d5b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_spriteSheet();

  static inline void setStaticF_k_searchedSpriteAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method set_faceInfo, addr 0x2e4d598, size 0x18, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method set_spriteCharacterLookupTable, addr 0x2e4daec, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  /// @brief Method set_spriteCharacterTable, addr 0x2e4dac0, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  /// @brief Method set_spriteGlyphTable, addr 0x2e4dafc, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteGlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* value);

  /// @brief Method set_spriteSheet, addr 0x2e4d5b8, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteSheet(::UnityEngine::Texture* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAsset(SpriteAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAsset(SpriteAsset const&) = delete;

  /// @brief Field m_NameLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_NameLookup;

  /// @brief Field m_GlyphIndexLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* ___m_GlyphIndexLookup;

  /// @brief Field m_FaceInfo, offset: 0x48, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field m_SpriteAtlasTexture, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___m_SpriteAtlasTexture;

  /// @brief Field m_SpriteCharacterTable, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* ___m_SpriteCharacterTable;

  /// @brief Field m_SpriteCharacterLookup, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* ___m_SpriteCharacterLookup;

  /// @brief Field m_SpriteGlyphTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* ___m_SpriteGlyphTable;

  /// @brief Field m_SpriteGlyphLookup, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* ___m_SpriteGlyphLookup;

  /// @brief Field fallbackSpriteAssets, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* ___fallbackSpriteAssets;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset: 0xd8, size: 0x1, def value: None
  bool ___m_IsSpriteAssetLookupTablesDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::SpriteAsset, 0xe0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_NameLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_GlyphIndexLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_FaceInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_SpriteAtlasTexture) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_SpriteCharacterTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_SpriteCharacterLookup) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_SpriteGlyphTable) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_SpriteGlyphLookup) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___fallbackSpriteAssets) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteAsset, ___m_IsSpriteAssetLookupTablesDirty) == 0xd8, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::SpriteAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::SpriteAsset*, "UnityEngine.TextCore.Text", "SpriteAsset");
NEED_NO_BOX(::UnityEngine::TextCore::Text::__SpriteAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__SpriteAsset____c*, "UnityEngine.TextCore.Text", "SpriteAsset/<>c");
