#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
CORDL_MODULE_EXPORT(RuntimePanel)
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimePanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RuntimePanel);
// Type: UnityEngine.UIElements::RuntimePanel
// SizeInfo { instance_size: 480, native_size: -1, calculated_instance_size: 480, calculated_native_size: 480, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::RuntimePanel*
class CORDL_TYPE RuntimePanel : public ::UnityEngine::UIElements::BaseRuntimePanel {
public:
  // Declarations
  /// @brief Field m_PanelSettings, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelSettings, put = __cordl_internal_set_m_PanelSettings))::UnityW<::UnityEngine::UIElements::PanelSettings> m_PanelSettings;

  __declspec(property(get = get_panelSettings))::UnityW<::UnityEngine::UIElements::PanelSettings> panelSettings;

  /// @brief Field s_EventDispatcher, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EventDispatcher, put = setStaticF_s_EventDispatcher))::UnityEngine::UIElements::EventDispatcher* s_EventDispatcher;

  /// @brief Method Create, addr 0x356b468, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::RuntimePanel* Create(::UnityEngine::ScriptableObject* ownerObject);

  static inline ::UnityEngine::UIElements::RuntimePanel* New_ctor(::UnityEngine::ScriptableObject* ownerObject);

  /// @brief Method Update, addr 0x356b744, size 0x80, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PanelSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PanelSettings();

  constexpr void __cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  /// @brief Method .ctor, addr 0x356b4c8, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject);

  static inline ::UnityEngine::UIElements::EventDispatcher* getStaticF_s_EventDispatcher();

  /// @brief Method get_panelSettings, addr 0x356b460, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::PanelSettings> get_panelSettings();

  static inline void setStaticF_s_EventDispatcher(::UnityEngine::UIElements::EventDispatcher* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePanel(RuntimePanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePanel(RuntimePanel const&) = delete;

  /// @brief Field m_PanelSettings, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_PanelSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuntimePanel, 0x1e0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RuntimePanel, ___m_PanelSettings) == 0x1d8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimePanel*, "UnityEngine.UIElements", "RuntimePanel");
