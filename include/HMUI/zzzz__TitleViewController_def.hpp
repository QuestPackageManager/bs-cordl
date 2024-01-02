#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TitleViewController)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class TitleViewController;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TitleViewController);
// Type: HMUI::TitleViewController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13597))
// CS Name: ::HMUI::TitleViewController*
class CORDL_TYPE TitleViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _text, offset 0x70, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  /// @brief Method SetText, addr 0x212ce5c, size 0x24, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  static inline ::HMUI::TitleViewController* New_ctor();

  /// @brief Method .ctor, addr 0x212ce80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TitleViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TitleViewController(TitleViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TitleViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TitleViewController(TitleViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TitleViewController();

public:
  /// @brief Field _text, offset: 0x70, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TitleViewController, 0x78>, "Size mismatch!");

static_assert(offsetof(::HMUI::TitleViewController, ____text) == 0x70, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TitleViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TitleViewController*, "HMUI", "TitleViewController");
