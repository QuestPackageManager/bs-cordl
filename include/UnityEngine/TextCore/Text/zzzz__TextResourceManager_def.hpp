#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextResourceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextResourceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct __TextResourceManager__FontAssetRef;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextResourceManager;
}
namespace UnityEngine::TextCore::Text {
struct __TextResourceManager__FontAssetRef;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextResourceManager);
MARK_VAL_T(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef);
// Type: ::FontAssetRef
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::TextResourceManager::FontAssetRef
struct CORDL_TYPE __TextResourceManager__FontAssetRef {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x34dbc54, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextResourceManager__FontAssetRef();

  // Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }]
  constexpr __TextResourceManager__FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, int64_t familyNameAndStyleHashCode,
                                                ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept;

  /// @brief Field nameHashCode, offset: 0x0, size: 0x4, def value: None
  int32_t nameHashCode;

  /// @brief Field familyNameHashCode, offset: 0x4, size: 0x4, def value: None
  int32_t familyNameHashCode;

  /// @brief Field styleNameHashCode, offset: 0x8, size: 0x4, def value: None
  int32_t styleNameHashCode;

  /// @brief Field familyNameAndStyleHashCode, offset: 0x10, size: 0x8, def value: None
  int64_t familyNameAndStyleHashCode;

  /// @brief Field fontAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, nameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, familyNameHashCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, styleNameHashCode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, familyNameAndStyleHashCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, fontAsset) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextResourceManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextResourceManager*
class CORDL_TYPE TextResourceManager : public ::System::Object {
public:
  // Declarations
  using FontAssetRef = ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef;

  /// @brief Field k_RegularStyleHashCode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_RegularStyleHashCode, put = setStaticF_k_RegularStyleHashCode)) int32_t k_RegularStyleHashCode;

  /// @brief Field s_FontAssetFamilyNameAndStyleReferenceLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup, put = setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup))::System::Collections::Generic::Dictionary_2<
      int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* s_FontAssetFamilyNameAndStyleReferenceLookup;

  /// @brief Field s_FontAssetNameReferenceLookup, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_FontAssetNameReferenceLookup,
      put = setStaticF_s_FontAssetNameReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* s_FontAssetNameReferenceLookup;

  /// @brief Field s_FontAssetReferences, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_FontAssetReferences,
               put = setStaticF_s_FontAssetReferences))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>* s_FontAssetReferences;

  /// @brief Field s_FontAssetRemovalList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FontAssetRemovalList, put = setStaticF_s_FontAssetRemovalList))::System::Collections::Generic::List_1<int32_t>* s_FontAssetRemovalList;

  /// @brief Method AddFontAsset, addr 0x34db708, size 0x4f4, virtual false, abstract: false, final false
  static inline void AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  static inline int32_t getStaticF_k_RegularStyleHashCode();

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_s_FontAssetNameReferenceLookup();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>* getStaticF_s_FontAssetReferences();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_FontAssetRemovalList();

  static inline void setStaticF_k_RegularStyleHashCode(int32_t value);

  static inline void setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  static inline void setStaticF_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>* value);

  static inline void setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextResourceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextResourceManager(TextResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextResourceManager(TextResourceManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextResourceManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextResourceManager*, "UnityEngine.TextCore.Text", "TextResourceManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, "UnityEngine.TextCore.Text", "TextResourceManager/FontAssetRef");
