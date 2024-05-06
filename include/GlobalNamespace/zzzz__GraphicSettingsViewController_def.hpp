#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GraphicSettingsViewController)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingsViewController);
// Type: ::GraphicSettingsViewController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GraphicSettingsViewController*
class CORDL_TYPE GraphicSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _graphicSettingsHandler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicSettingsHandler,
                      put = __cordl_internal_set__graphicSettingsHandler))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicSettingsHandler;

  static inline ::GlobalNamespace::GraphicSettingsViewController* New_ctor();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicSettingsHandler() const;

  constexpr void __cordl_internal_set__graphicSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  /// @brief Method .ctor, addr 0x265f9bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicSettingsViewController(GraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicSettingsViewController(GraphicSettingsViewController const&) = delete;

  /// @brief Field _graphicSettingsHandler, offset: 0x70, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicSettingsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsViewController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsViewController, ____graphicSettingsHandler) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsViewController*, "", "GraphicSettingsViewController");
