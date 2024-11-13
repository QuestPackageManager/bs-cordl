#pragma once
// IWYU pragma private; include "HMUI/TextPageScrollView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextPageScrollView)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class TextPageScrollView;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextPageScrollView);
// Type: HMUI::TextPageScrollView
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::TextPageScrollView*
class CORDL_TYPE TextPageScrollView : public ::HMUI::ScrollView {
public:
  // Declarations
  /// @brief Field _text, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Method AddText, addr 0x39ac0fc, size 0x64, virtual false, abstract: false, final false
  inline void AddText(::StringW text);

  static inline ::HMUI::TextPageScrollView* New_ctor();

  /// @brief Method SetText, addr 0x39ac07c, size 0x30, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  /// @brief Method UpdateMeshes, addr 0x39ac0ac, size 0x50, virtual false, abstract: false, final false
  inline void UpdateMeshes();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x39ac160, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextPageScrollView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextPageScrollView(TextPageScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextPageScrollView(TextPageScrollView const&) = delete;

  /// @brief Field _text, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16082 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextPageScrollView, 0xb0>, "Size mismatch!");

static_assert(offsetof(::HMUI::TextPageScrollView, ____text) == 0xa8, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextPageScrollView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextPageScrollView*, "HMUI", "TextPageScrollView");
