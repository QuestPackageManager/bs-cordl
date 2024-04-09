#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InputFieldSettingsController_def.hpp"
CORDL_MODULE_EXPORT(UrlInputFieldSettingsController)
namespace HMUI {
class InputFieldView;
}
// Forward declare root types
namespace GlobalNamespace {
class UrlInputFieldSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UrlInputFieldSettingsController);
// Type: ::UrlInputFieldSettingsController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UrlInputFieldSettingsController*
class CORDL_TYPE UrlInputFieldSettingsController : public ::GlobalNamespace::InputFieldSettingsController {
public:
  // Declarations
  /// @brief Method HandleInputFieldDidChange, addr 0x25333e8, size 0x90, virtual true, abstract: false, final false
  inline void HandleInputFieldDidChange(::HMUI::InputFieldView* inputFieldView);

  static inline ::GlobalNamespace::UrlInputFieldSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x2533478, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UrlInputFieldSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UrlInputFieldSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UrlInputFieldSettingsController(UrlInputFieldSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UrlInputFieldSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UrlInputFieldSettingsController(UrlInputFieldSettingsController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UrlInputFieldSettingsController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UrlInputFieldSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UrlInputFieldSettingsController*, "", "UrlInputFieldSettingsController");
