#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelTextSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
CORDL_MODULE_EXPORT(PanelTextSettings)
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelTextSettings);
// Dependencies UnityEngine.TextCore.Text.TextSettings
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelTextSettings
class CORDL_TYPE PanelTextSettings : public ::UnityEngine::TextCore::Text::TextSettings {
public:
  // Declarations
  /// @brief Field s_DefaultPanelTextSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultPanelTextSettings, put = setStaticF_s_DefaultPanelTextSettings)) ::UnityW<::UnityEngine::UIElements::PanelTextSettings> s_DefaultPanelTextSettings;

  /// @brief Method InitializeDefaultPanelTextSettingsIfNull, addr 0x6a6f650, size 0xb4, virtual false, abstract: false, final false
  static inline void InitializeDefaultPanelTextSettingsIfNull();

  static inline ::UnityEngine::UIElements::PanelTextSettings* New_ctor();

  /// @brief Method .ctor, addr 0x6a6f704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> getStaticF_s_DefaultPanelTextSettings();

  /// @brief Method get_defaultPanelTextSettings, addr 0x6a6f600, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> get_defaultPanelTextSettings();

  static inline void setStaticF_s_DefaultPanelTextSettings(::UnityW<::UnityEngine::UIElements::PanelTextSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelTextSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelTextSettings(PanelTextSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelTextSettings(PanelTextSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5090 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelTextSettings, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelTextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelTextSettings*, "UnityEngine.UIElements", "PanelTextSettings");
