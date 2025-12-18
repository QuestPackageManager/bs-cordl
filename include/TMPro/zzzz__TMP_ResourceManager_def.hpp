#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ResourceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
struct TMP_ResourceManager_FontAssetRef;
}
namespace TMPro {
class TMP_Settings;
}
// Forward declare root types
namespace TMPro {
class TMP_ResourceManager;
}
namespace TMPro {
struct TMP_ResourceManager_FontAssetRef;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_ResourceManager);
MARK_VAL_T(::TMPro::TMP_ResourceManager_FontAssetRef);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_ResourceManager/FontAssetRef
struct CORDL_TYPE TMP_ResourceManager_FontAssetRef {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x67e2ce8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, ::TMPro::TMP_FontAsset* fontAsset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ResourceManager_FontAssetRef();

  // Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None }]
  constexpr TMP_ResourceManager_FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, int64_t familyNameAndStyleHashCode,
                                             ::UnityW<::TMPro::TMP_FontAsset> fontAsset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field nameHashCode, offset: 0x0, size: 0x4, def value: None
  int32_t nameHashCode;

  /// @brief Field familyNameHashCode, offset: 0x4, size: 0x4, def value: None
  int32_t familyNameHashCode;

  /// @brief Field styleNameHashCode, offset: 0x8, size: 0x4, def value: None
  int32_t styleNameHashCode;

  /// @brief Field familyNameAndStyleHashCode, offset: 0x10, size: 0x8, def value: None
  int64_t familyNameAndStyleHashCode;

  /// @brief Field fontAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_ResourceManager_FontAssetRef, nameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ResourceManager_FontAssetRef, familyNameHashCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ResourceManager_FontAssetRef, styleNameHashCode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ResourceManager_FontAssetRef, familyNameAndStyleHashCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ResourceManager_FontAssetRef, fontAsset) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ResourceManager_FontAssetRef, 0x20>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_ResourceManager
class CORDL_TYPE TMP_ResourceManager : public ::System::Object {
public:
  // Declarations
  using FontAssetRef = ::TMPro::TMP_ResourceManager_FontAssetRef;

  /// @brief Field k_RegularStyleHashCode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_RegularStyleHashCode, put = setStaticF_k_RegularStyleHashCode)) int32_t k_RegularStyleHashCode;

  /// @brief Field s_FontAssetFamilyNameAndStyleReferenceLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup,
                      put = setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>*
      s_FontAssetFamilyNameAndStyleReferenceLookup;

  /// @brief Field s_FontAssetNameReferenceLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetNameReferenceLookup,
                      put = setStaticF_s_FontAssetNameReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* s_FontAssetNameReferenceLookup;

  /// @brief Field s_FontAssetReferences, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetReferences,
                      put = setStaticF_s_FontAssetReferences)) ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>* s_FontAssetReferences;

  /// @brief Field s_FontAssetRemovalList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetRemovalList, put = setStaticF_s_FontAssetRemovalList)) ::System::Collections::Generic::List_1<int32_t>* s_FontAssetRemovalList;

  /// @brief Field s_TextSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TextSettings, put = setStaticF_s_TextSettings)) ::UnityW<::TMPro::TMP_Settings> s_TextSettings;

  /// @brief Method AddFontAsset, addr 0x67e2708, size 0x5e0, virtual false, abstract: false, final false
  static inline void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method ClearFontAssetGlyphCache, addr 0x67e2fe0, size 0x50, virtual false, abstract: false, final false
  static inline void ClearFontAssetGlyphCache();

  /// @brief Method GetTextSettings, addr 0x67e25f0, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> GetTextSettings();

  static inline ::TMPro::TMP_ResourceManager* New_ctor();

  /// @brief Method RebuildFontAssetCache, addr 0x67e3030, size 0x4ec, virtual false, abstract: false, final false
  static inline void RebuildFontAssetCache();

  /// @brief Method RemoveFontAsset, addr 0x67e2d08, size 0x17c, virtual false, abstract: false, final false
  static inline void RemoveFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method TryGetFontAssetByFamilyName, addr 0x67e2f20, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryGetFontAssetByFamilyName(int32_t familyNameHashCode, int32_t styleNameHashCode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method TryGetFontAssetByName, addr 0x67e2e84, size 0x9c, virtual false, abstract: false, final false
  static inline bool TryGetFontAssetByName(int32_t nameHashcode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method .ctor, addr 0x67e351c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_k_RegularStyleHashCode();

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_s_FontAssetNameReferenceLookup();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>* getStaticF_s_FontAssetReferences();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_FontAssetRemovalList();

  static inline ::UnityW<::TMPro::TMP_Settings> getStaticF_s_TextSettings();

  static inline void setStaticF_k_RegularStyleHashCode(int32_t value);

  static inline void setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>* value);

  static inline void setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_s_TextSettings(::UnityW<::TMPro::TMP_Settings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ResourceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ResourceManager(TMP_ResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ResourceManager(TMP_ResourceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ResourceManager, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ResourceManager*, "TMPro", "TMP_ResourceManager");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ResourceManager_FontAssetRef, "TMPro", "TMP_ResourceManager/FontAssetRef");
