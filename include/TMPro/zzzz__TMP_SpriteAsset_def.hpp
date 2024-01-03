#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteAsset)
namespace TMPro {
class TMP_SpriteGlyph;
}
namespace TMPro {
class TMP_SpriteCharacter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace TMPro {
class __TMP_SpriteAsset____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class __TMP_SpriteAsset____c;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SpriteAsset);
MARK_REF_PTR_T(::TMPro::__TMP_SpriteAsset____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12420))
// CS Name: ::TMP_SpriteAsset::<>c*
class CORDL_TYPE __TMP_SpriteAsset____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::TMPro::__TMP_SpriteAsset____c* __9;

  /// @brief Field <>9__40_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__40_0, put = setStaticF___9__40_0))::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* __9__40_0;

  /// @brief Field <>9__41_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__41_0, put = setStaticF___9__41_0))::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* __9__41_0;

  static inline void setStaticF___9(::TMPro::__TMP_SpriteAsset____c* value);

  static inline ::TMPro::__TMP_SpriteAsset____c* getStaticF___9();

  static inline void setStaticF___9__40_0(::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* value);

  static inline ::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* getStaticF___9__40_0();

  static inline void setStaticF___9__41_0(::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* value);

  static inline ::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* getStaticF___9__41_0();

  static inline ::TMPro::__TMP_SpriteAsset____c* New_ctor();

  /// @brief Method .ctor, addr 0x2c44800, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SortGlyphTable>b__40_0, addr 0x2c44808, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphTable_b__40_0(::TMPro::TMP_SpriteGlyph* item);

  /// @brief Method <SortCharacterTable>b__41_0, addr 0x2c44820, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortCharacterTable_b__41_0(::TMPro::TMP_SpriteCharacter* c);

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_SpriteAsset____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_SpriteAsset____c(__TMP_SpriteAsset____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_SpriteAsset____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_SpriteAsset____c(__TMP_SpriteAsset____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_SpriteAsset____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_SpriteAsset____c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_SpriteAsset
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 225, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15526)), TypeDefinitionIndex(TypeDefinitionIndex(12327))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12421))
// CS Name: ::TMPro::TMP_SpriteAsset*
class CORDL_TYPE TMP_SpriteAsset : public ::TMPro::TMP_Asset {
public:
  // Declarations
  using __c = ::TMPro::__TMP_SpriteAsset____c;

  /// @brief Field m_NameLookup, offset 0x30, size 0x8
  __declspec(property(get = __get_m_NameLookup, put = __set_m_NameLookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_NameLookup;

  /// @brief Field m_GlyphIndexLookup, offset 0x38, size 0x8
  __declspec(property(get = __get_m_GlyphIndexLookup, put = __set_m_GlyphIndexLookup))::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* m_GlyphIndexLookup;

  /// @brief Field m_Version, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Version, put = __set_m_Version))::StringW m_Version;

  /// @brief Field m_FaceInfo, offset 0x48, size 0x60
  __declspec(property(get = __get_m_FaceInfo, put = __set_m_FaceInfo))::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field spriteSheet, offset 0xa8, size 0x8
  __declspec(property(get = __get_spriteSheet, put = __set_spriteSheet))::UnityEngine::Texture* spriteSheet;

  /// @brief Field m_SpriteCharacterTable, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_SpriteCharacterTable, put = __set_m_SpriteCharacterTable))::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterTable;

  /// @brief Field m_SpriteCharacterLookup, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_SpriteCharacterLookup,
                      put = __set_m_SpriteCharacterLookup))::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterLookup;

  /// @brief Field m_SpriteGlyphTable, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_SpriteGlyphTable, put = __set_m_SpriteGlyphTable))::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphTable;

  /// @brief Field m_SpriteGlyphLookup, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_SpriteGlyphLookup, put = __set_m_SpriteGlyphLookup))::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphLookup;

  /// @brief Field spriteInfoList, offset 0xd0, size 0x8
  __declspec(property(get = __get_spriteInfoList, put = __set_spriteInfoList))::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* spriteInfoList;

  /// @brief Field fallbackSpriteAssets, offset 0xd8, size 0x8
  __declspec(property(get = __get_fallbackSpriteAssets, put = __set_fallbackSpriteAssets))::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* fallbackSpriteAssets;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset 0xe0, size 0x1
  __declspec(property(get = __get_m_IsSpriteAssetLookupTablesDirty, put = __set_m_IsSpriteAssetLookupTablesDirty)) bool m_IsSpriteAssetLookupTablesDirty;

  /// @brief Field k_searchedSpriteAssets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_searchedSpriteAssets, put = setStaticF_k_searchedSpriteAssets))::System::Collections::Generic::HashSet_1<int32_t>* k_searchedSpriteAssets;

  __declspec(property(get = get_version, put = set_version))::StringW version;

  __declspec(property(get = get_faceInfo, put = set_faceInfo))::UnityEngine::TextCore::FaceInfo faceInfo;

  __declspec(property(get = get_spriteCharacterTable, put = set_spriteCharacterTable))::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* spriteCharacterTable;

  __declspec(property(get = get_spriteCharacterLookupTable,
                      put = set_spriteCharacterLookupTable))::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* spriteCharacterLookupTable;

  __declspec(property(get = get_spriteGlyphTable, put = set_spriteGlyphTable))::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* spriteGlyphTable;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __get_m_NameLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __get_m_NameLookup() const;

  constexpr void __set_m_NameLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*& __get_m_GlyphIndexLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*> const& __get_m_GlyphIndexLookup() const;

  constexpr void __set_m_GlyphIndexLookup(::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* value);

  constexpr ::StringW& __get_m_Version();

  constexpr ::StringW const& __get_m_Version() const;

  constexpr void __set_m_Version(::StringW value);

  constexpr ::UnityEngine::TextCore::FaceInfo& __get_m_FaceInfo();

  constexpr ::UnityEngine::TextCore::FaceInfo const& __get_m_FaceInfo() const;

  constexpr void __set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr ::UnityEngine::Texture*& __get_spriteSheet();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> const& __get_spriteSheet() const;

  constexpr void __set_spriteSheet(::UnityEngine::Texture* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*& __get_m_SpriteCharacterTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*> const& __get_m_SpriteCharacterTable() const;

  constexpr void __set_m_SpriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*& __get_m_SpriteCharacterLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*> const& __get_m_SpriteCharacterLookup() const;

  constexpr void __set_m_SpriteCharacterLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*& __get_m_SpriteGlyphTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*> const& __get_m_SpriteGlyphTable() const;

  constexpr void __set_m_SpriteGlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>*& __get_m_SpriteGlyphLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>*> const& __get_m_SpriteGlyphLookup() const;

  constexpr void __set_m_SpriteGlyphLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>*& __get_spriteInfoList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>*> const& __get_spriteInfoList() const;

  constexpr void __set_spriteInfoList(::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>*& __get_fallbackSpriteAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>*> const& __get_fallbackSpriteAssets() const;

  constexpr void __set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* value);

  constexpr bool& __get_m_IsSpriteAssetLookupTablesDirty();

  constexpr bool const& __get_m_IsSpriteAssetLookupTablesDirty() const;

  constexpr void __set_m_IsSpriteAssetLookupTablesDirty(bool value);

  static inline void setStaticF_k_searchedSpriteAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_searchedSpriteAssets();

  /// @brief Method get_version, addr 0x2c42b80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  /// @brief Method set_version, addr 0x2c42b88, size 0x8, virtual false, abstract: false, final false
  inline void set_version(::StringW value);

  /// @brief Method get_faceInfo, addr 0x2c42b90, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method set_faceInfo, addr 0x2c42ba0, size 0x18, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method get_spriteCharacterTable, addr 0x2c42b0c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* get_spriteCharacterTable();

  /// @brief Method set_spriteCharacterTable, addr 0x2c430dc, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* value);

  /// @brief Method get_spriteCharacterLookupTable, addr 0x2c430e4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* get_spriteCharacterLookupTable();

  /// @brief Method set_spriteCharacterLookupTable, addr 0x2c43108, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* value);

  /// @brief Method get_spriteGlyphTable, addr 0x2c43110, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* get_spriteGlyphTable();

  /// @brief Method set_spriteGlyphTable, addr 0x2c43118, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteGlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* value);

  /// @brief Method Awake, addr 0x2c43120, size 0x88, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetDefaultSpriteMaterial, addr 0x2c436e4, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Material* GetDefaultSpriteMaterial();

  /// @brief Method UpdateLookupTables, addr 0x2c42bb8, size 0x524, virtual false, abstract: false, final false
  inline void UpdateLookupTables();

  /// @brief Method GetSpriteIndexFromHashcode, addr 0x2c437cc, size 0x88, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromHashcode(int32_t hashCode);

  /// @brief Method GetSpriteIndexFromUnicode, addr 0x2c43854, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromUnicode(uint32_t unicode);

  /// @brief Method GetSpriteIndexFromName, addr 0x2c438e8, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetSpriteIndexFromName(::StringW name);

  /// @brief Method SearchForSpriteByUnicode, addr 0x2c439c8, size 0x228, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicode(::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x2c43bf0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* spriteAssets, uint32_t unicode, bool includeFallbacks,
                                                                           ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByUnicodeInternal, addr 0x2c43d90, size 0xb0, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCode, addr 0x2c43e40, size 0x320, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCode(::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks, ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x2c44160, size 0x1a0, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* spriteAssets, int32_t hashCode, bool searchFallbacks,
                                                                            ByRef<int32_t> spriteIndex);

  /// @brief Method SearchForSpriteByHashCodeInternal, addr 0x2c44300, size 0xb0, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks, ByRef<int32_t> spriteIndex);

  /// @brief Method SortGlyphTable, addr 0x2c443b0, size 0x138, virtual false, abstract: false, final false
  inline void SortGlyphTable();

  /// @brief Method SortCharacterTable, addr 0x2c444e8, size 0x13c, virtual false, abstract: false, final false
  inline void SortCharacterTable();

  /// @brief Method SortGlyphAndCharacterTables, addr 0x2c44624, size 0x18, virtual false, abstract: false, final false
  inline void SortGlyphAndCharacterTables();

  /// @brief Method UpgradeSpriteAsset, addr 0x2c431a8, size 0x53c, virtual false, abstract: false, final false
  inline void UpgradeSpriteAsset();

  static inline ::TMPro::TMP_SpriteAsset* New_ctor();

  /// @brief Method .ctor, addr 0x2c446dc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteAsset(TMP_SpriteAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteAsset(TMP_SpriteAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteAsset();

public:
  /// @brief Field m_NameLookup, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_NameLookup;

  /// @brief Field m_GlyphIndexLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* ___m_GlyphIndexLookup;

  /// @brief Field m_Version, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_Version;

  /// @brief Field m_FaceInfo, offset: 0x48, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field spriteSheet, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Texture* ___spriteSheet;

  /// @brief Field m_SpriteCharacterTable, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* ___m_SpriteCharacterTable;

  /// @brief Field m_SpriteCharacterLookup, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* ___m_SpriteCharacterLookup;

  /// @brief Field m_SpriteGlyphTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* ___m_SpriteGlyphTable;

  /// @brief Field m_SpriteGlyphLookup, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* ___m_SpriteGlyphLookup;

  /// @brief Field spriteInfoList, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* ___spriteInfoList;

  /// @brief Field fallbackSpriteAssets, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* ___fallbackSpriteAssets;

  /// @brief Field m_IsSpriteAssetLookupTablesDirty, offset: 0xe0, size: 0x1, def value: None
  bool ___m_IsSpriteAssetLookupTablesDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteAsset, 0xe8>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_NameLookup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_GlyphIndexLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_Version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_FaceInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___spriteSheet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteCharacterTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteCharacterLookup) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteGlyphTable) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_SpriteGlyphLookup) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___spriteInfoList) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___fallbackSpriteAssets) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAsset, ___m_IsSpriteAssetLookupTablesDirty) == 0xe0, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SpriteAsset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAsset*, "TMPro", "TMP_SpriteAsset");
NEED_NO_BOX(::TMPro::__TMP_SpriteAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_SpriteAsset____c*, "TMPro", "TMP_SpriteAsset/<>c");
