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
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
namespace UnityEngine::TextCore::Text {
class SpriteGlyph;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine::TextCore::Text {
class __SpriteAsset____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13692))
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

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::__SpriteAsset____c* value);

  static inline ::UnityEngine::TextCore::Text::__SpriteAsset____c* getStaticF___9();

  static inline void setStaticF___9__37_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* value);

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* getStaticF___9__37_0();

  static inline void setStaticF___9__38_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* value);

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* getStaticF___9__38_0();

  static inline ::UnityEngine::TextCore::Text::__SpriteAsset____c* New_ctor();

  /// @brief Method .ctor, addr 0x2d427d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SortGlyphTable>b__37_0, addr 0x2d427e0, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__37_0(::UnityEngine::TextCore::Text::SpriteGlyph* item);

  /// @brief Method <SortCharacterTable>b__38_0, addr 0x2d427f8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__38_0(::UnityEngine::TextCore::Text::SpriteCharacter* c);

  // Ctor Parameters [CppParam { name: "", ty: "__SpriteAsset____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpriteAsset____c(__SpriteAsset____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpriteAsset____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpriteAsset____c(__SpriteAsset____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpriteAsset____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__SpriteAsset____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::SpriteAsset
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 217, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15526)), TypeDefinitionIndex(TypeDefinitionIndex(13724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13693))
// CS Name: ::UnityEngine.TextCore.Text::SpriteAsset*
class CORDL_TYPE SpriteAsset : public ::UnityEngine::TextCore::Text::TextAsset {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::__SpriteAsset____c;

  /// @brief Field m_NameLookup, offset 0x38, size 0x8
  __declspec(property(get = __get_m_NameLookup, put = __set_m_NameLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_NameLookup;

  /// @brief Field m_GlyphIndexLookup, offset 0x40, size 0x8
  __declspec(property(get = __get_m_GlyphIndexLookup, put = __set_m_GlyphIndexLookup))::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* m_GlyphIndexLookup;

  /// @brief Field m_FaceInfo, offset 0x48, size 0x60
  __declspec(property(get = __get_m_FaceInfo, put = __set_m_FaceInfo))::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_SpriteAtlasTexture, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_SpriteAtlasTexture, put = __set_m_SpriteAtlasTexture))::UnityEngine::Texture* m_SpriteAtlasTexture;

  /// @brief Field m_SpriteCharacterTable, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_SpriteCharacterTable,
                      put = __set_m_SpriteCharacterTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* m_SpriteCharacterTable;

  /// @brief Field m_SpriteCharacterLookup, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_SpriteCharacterLookup,
                      put = __set_m_SpriteCharacterLookup))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* m_SpriteCharacterLookup;

  /// @brief Field m_SpriteGlyphTable, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_SpriteGlyphTable, put = __set_m_SpriteGlyphTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* m_SpriteGlyphTable;

  /// @brief Field m_SpriteGlyphLookup, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_SpriteGlyphLookup,
                      put = __set_m_SpriteGlyphLookup))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* m_SpriteGlyphLookup;

  /// @brief Field fallbackSpriteAssets, offset 0xd0, size 0x8
  __declspec(property(get = __get_fallbackSpriteAssets, put = __set_fallbackSpriteAssets))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* fallbackSpriteAssets;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset 0xd8, size 0x1
  __declspec(property(get = __get_m_IsSpriteAssetLookupTablesDirty, put = __set_m_IsSpriteAssetLookupTablesDirty)) bool m_IsSpriteAssetLookupTablesDirty;

  /// @brief Field k_searchedSpriteAssets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_searchedSpriteAssets, put = setStaticF_k_searchedSpriteAssets))::System::Collections::Generic::HashSet_1<int32_t>* k_searchedSpriteAssets;

  __declspec(property(get = get_faceInfo, put = set_faceInfo))::UnityEngine::TextCore::FaceInfo faceInfo;

  __declspec(property(get = get_spriteSheet, put = set_spriteSheet))::UnityEngine::Texture* spriteSheet;

  __declspec(property(get = get_spriteCharacterTable, put = set_spriteCharacterTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* spriteCharacterTable;

  __declspec(property(get = get_spriteCharacterLookupTable,
                      put = set_spriteCharacterLookupTable))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* spriteCharacterLookupTable;

  __declspec(property(get = get_spriteGlyphTable, put = set_spriteGlyphTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* spriteGlyphTable;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __get_m_NameLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __get_m_NameLookup() const;

  constexpr void __set_m_NameLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*& __get_m_GlyphIndexLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*> const& __get_m_GlyphIndexLookup() const;

  constexpr void __set_m_GlyphIndexLookup(::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* value);

  constexpr ::UnityEngine::TextCore::FaceInfo& __get_m_FaceInfo();

  constexpr ::UnityEngine::TextCore::FaceInfo const& __get_m_FaceInfo() const;

  constexpr void __set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr ::UnityEngine::Texture*& __get_m_SpriteAtlasTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> const& __get_m_SpriteAtlasTexture() const;

  constexpr void __set_m_SpriteAtlasTexture(::UnityEngine::Texture* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*& __get_m_SpriteCharacterTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*> const& __get_m_SpriteCharacterTable() const;

  constexpr void __set_m_SpriteCharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*& __get_m_SpriteCharacterLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*> const& __get_m_SpriteCharacterLookup() const;

  constexpr void __set_m_SpriteCharacterLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*& __get_m_SpriteGlyphTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*> const& __get_m_SpriteGlyphTable() const;

  constexpr void __set_m_SpriteGlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>*& __get_m_SpriteGlyphLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>*> const& __get_m_SpriteGlyphLookup() const;

  constexpr void __set_m_SpriteGlyphLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*& __get_fallbackSpriteAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*> const& __get_fallbackSpriteAssets() const;

  constexpr void __set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* value);

  constexpr bool& __get_m_IsSpriteAssetLookupTablesDirty();

  constexpr bool const& __get_m_IsSpriteAssetLookupTablesDirty() const;

  constexpr void __set_m_IsSpriteAssetLookupTablesDirty(bool value);

  static inline void setStaticF_k_searchedSpriteAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_searchedSpriteAssets();

  /// @brief Method get_faceInfo, addr 0x2d413ac, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method set_faceInfo, addr 0x2d413c8, size 0x18, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method get_spriteSheet, addr 0x2d413e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture* get_spriteSheet();

  /// @brief Method set_spriteSheet, addr 0x2d413e8, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteSheet(::UnityEngine::Texture* value);

  /// @brief Method get_spriteCharacterTable, addr 0x2d413f0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* get_spriteCharacterTable();

  /// @brief Method set_spriteCharacterTable, addr 0x2d418f0, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  /// @brief Method get_spriteCharacterLookupTable, addr 0x2d418f8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* get_spriteCharacterLookupTable();

  /// @brief Method set_spriteCharacterLookupTable, addr 0x2d4191c, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* value);

  /// @brief Method get_spriteGlyphTable, addr 0x2d41924, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* get_spriteGlyphTable();

  /// @brief Method set_spriteGlyphTable, addr 0x2d4192c, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteGlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* value);

  /// @brief Method Awake, addr 0x2d41934, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method UpdateLookupTables, addr 0x2d41414, size 0x4dc, virtual false, abstract: false, final false
  inline void UpdateLookupTables();

  /// @brief Method GetSpriteIndexFromHashcode, addr 0x2d41938, size 0x88, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromHashcode(int32_t hashCode);

  /// @brief Method GetSpriteIndexFromUnicode, addr 0x2d419c0, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromUnicode(uint32_t unicode);

  /// @brief Method GetSpriteIndexFromName, addr 0x2d41a54, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromName(::StringW name);

  /// @brief Method SearchForSpriteByUnicode, addr 0x2d41a90, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByUnicode(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                                     ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x2d41c58, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* spriteAssets,
                                                                                             uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x2d41df8, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByUnicodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                                             ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCode, addr 0x2d41ea8, size 0x32c, virtual false, abstract: false, final false
  /// @param textSettings: ::UnityEngine::TextCore::Text::TextSettings* (default: nullptr)
  static inline ::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByHashCode(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks,
                                                                                      ByRef<int32_t> spriteIndex, ::UnityEngine::TextCore::Text::TextSettings* textSettings = nullptr);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x2d421d4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* spriteAssets,
                                                                                              int32_t hashCode, bool searchFallbacks, ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x2d42374, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByHashCodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks,
                                                                                              ByRef<int32_t> spriteIndex);

  /// @brief Method SortGlyphTable, addr 0x2d42424, size 0x138, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method SortCharacterTable, addr 0x2d4255c, size 0x13c, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortGlyphAndCharacterTables, addr 0x2d42698, size 0x18, virtual false, abstract: false, final false
  inline void SortGlyphAndCharacterTables();

  static inline ::UnityEngine::TextCore::Text::SpriteAsset* New_ctor();

  /// @brief Method .ctor, addr 0x2d426b0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAsset(SpriteAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAsset(SpriteAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAsset();

public:
  /// @brief Field m_NameLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_NameLookup;

  /// @brief Field m_GlyphIndexLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* ___m_GlyphIndexLookup;

  /// @brief Field m_FaceInfo, offset: 0x48, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field m_SpriteAtlasTexture, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Texture* ___m_SpriteAtlasTexture;

  /// @brief Field m_SpriteCharacterTable, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* ___m_SpriteCharacterTable;

  /// @brief Field m_SpriteCharacterLookup, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* ___m_SpriteCharacterLookup;

  /// @brief Field m_SpriteGlyphTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* ___m_SpriteGlyphTable;

  /// @brief Field m_SpriteGlyphLookup, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* ___m_SpriteGlyphLookup;

  /// @brief Field fallbackSpriteAssets, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* ___fallbackSpriteAssets;

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
