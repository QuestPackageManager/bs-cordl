#pragma once
// IWYU pragma private; include "TMPro/TMP_FontAssetUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontAssetUtilities)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct FontWeight;
}
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_SpriteCharacter;
}
// Forward declare root types
namespace TMPro {
class TMP_FontAssetUtilities;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontAssetUtilities);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_FontAssetUtilities
class CORDL_TYPE TMP_FontAssetUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_IsFontEngineInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_k_IsFontEngineInitialized, put = setStaticF_k_IsFontEngineInitialized)) bool k_IsFontEngineInitialized;

  /// @brief Field k_SearchedAssets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SearchedAssets, put = setStaticF_k_SearchedAssets)) ::System::Collections::Generic::HashSet_1<int32_t>* k_SearchedAssets;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::TMPro::TMP_FontAssetUtilities* s_Instance;

  /// @brief Method GetCharacterFromFontAsset, addr 0x47d597c, size 0x154, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Character* GetCharacterFromFontAsset(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle,
                                                                  ::TMPro::FontWeight fontWeight, ::ByRef<bool> isAlternativeTypeface);

  /// @brief Method GetCharacterFromFontAsset_Internal, addr 0x47d5ad0, size 0x3c4, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle,
                                                                           ::TMPro::FontWeight fontWeight, ::ByRef<bool> isAlternativeTypeface);

  /// @brief Method GetCharacterFromFontAssets, addr 0x47d5e94, size 0x25c, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Character* GetCharacterFromFontAssets(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset,
                                                                   ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets, bool includeFallbacks,
                                                                   ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::ByRef<bool> isAlternativeTypeface);

  /// @brief Method GetSpriteCharacterFromSpriteAsset, addr 0x47d60f0, size 0x308, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks);

  /// @brief Method GetSpriteCharacterFromSpriteAsset_Internal, addr 0x47d63f8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks);

  static inline ::TMPro::TMP_FontAssetUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x47d591c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_k_IsFontEngineInitialized();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_SearchedAssets();

  static inline ::TMPro::TMP_FontAssetUtilities* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x47d5924, size 0x58, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_FontAssetUtilities* get_instance();

  static inline void setStaticF_k_IsFontEngineInitialized(bool value);

  static inline void setStaticF_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_s_Instance(::TMPro::TMP_FontAssetUtilities* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontAssetUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontAssetUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontAssetUtilities(TMP_FontAssetUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontAssetUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontAssetUtilities(TMP_FontAssetUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontAssetUtilities, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_FontAssetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAssetUtilities*, "TMPro", "TMP_FontAssetUtilities");
