#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheetColor)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetColor);
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetColor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleSheetColor*
class CORDL_TYPE StyleSheetColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_NameToColor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NameToColor, put = setStaticF_s_NameToColor)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>* s_NameToColor;

  /// @brief Method HexToColor32, addr 0x4973b1c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 HexToColor32(uint32_t color);

  /// @brief Method TryGetColor, addr 0x49701f4, size 0xd8, virtual false, abstract: false, final false
  static inline bool TryGetColor(::StringW name, ByRef<::UnityEngine::Color> color);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>* getStaticF_s_NameToColor();

  static inline void setStaticF_s_NameToColor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetColor(StyleSheetColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetColor(StyleSheetColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetColor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetColor*, "UnityEngine.UIElements.StyleSheets", "StyleSheetColor");
