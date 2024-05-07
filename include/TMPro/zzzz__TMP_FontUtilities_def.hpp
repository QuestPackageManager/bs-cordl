#pragma once
// IWYU pragma private; include "TMPro/TMP_FontUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_FontUtilities;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontUtilities);
// Type: TMPro::TMP_FontUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_FontUtilities*
class CORDL_TYPE TMP_FontUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_searchedFontAssets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_searchedFontAssets, put = setStaticF_k_searchedFontAssets))::System::Collections::Generic::List_1<int32_t>* k_searchedFontAssets;

  /// @brief Method SearchForCharacter, addr 0x3345310, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> SearchForCharacter(::TMPro::TMP_FontAsset* font, uint32_t unicode, ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method SearchForCharacter, addr 0x3345684, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> SearchForCharacter(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fonts, uint32_t unicode,
                                                                    ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method SearchForCharacterInternal, addr 0x33453f4, size 0x290, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> SearchForCharacterInternal(::TMPro::TMP_FontAsset* font, uint32_t unicode, ByRef<::TMPro::TMP_Character*> character);

  /// @brief Method SearchForCharacterInternal, addr 0x3345688, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_FontAsset> SearchForCharacterInternal(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fonts, uint32_t unicode,
                                                                            ByRef<::TMPro::TMP_Character*> character);

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_k_searchedFontAssets();

  static inline void setStaticF_k_searchedFontAssets(::System::Collections::Generic::List_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontUtilities(TMP_FontUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontUtilities(TMP_FontUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontUtilities, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_FontUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontUtilities*, "TMPro", "TMP_FontUtilities");
