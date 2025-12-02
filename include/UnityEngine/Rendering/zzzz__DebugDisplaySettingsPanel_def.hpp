#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsPanel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class DisplayInfoAttribute;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanel;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplaySettingsPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsPanel);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsPanel
class CORDL_TYPE DebugDisplaySettingsPanel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags Flags;

  __declspec(property(get = get_Order)) int32_t Order;

  __declspec(property(get = get_PanelName)) ::StringW PanelName;

  __declspec(property(get = get_Widgets)) ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> Widgets;

  /// @brief Field m_DisplayInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayInfo, put = __cordl_internal_set_m_DisplayInfo)) ::UnityEngine::Rendering::DisplayInfoAttribute* m_DisplayInfo;

  /// @brief Field m_Widgets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Widgets, put = __cordl_internal_set_m_Widgets)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* m_Widgets;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsPanel*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*() noexcept;

  /// @brief Method AddWidget, addr 0x653c8ac, size 0x100, virtual false, abstract: false, final false
  inline void AddWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method Clear, addr 0x653c9ac, size 0x78, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x653ca24, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsPanel* New_ctor();

  constexpr ::UnityEngine::Rendering::DisplayInfoAttribute* const& __cordl_internal_get_m_DisplayInfo() const;

  constexpr ::UnityEngine::Rendering::DisplayInfoAttribute*& __cordl_internal_get_m_DisplayInfo();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* const& __cordl_internal_get_m_Widgets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>*& __cordl_internal_get_m_Widgets();

  constexpr void __cordl_internal_set_m_DisplayInfo(::UnityEngine::Rendering::DisplayInfoAttribute* value);

  constexpr void __cordl_internal_set_m_Widgets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* value);

  /// @brief Method .ctor, addr 0x653ca28, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Flags, addr 0x653c8a4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags();

  /// @brief Method get_Order, addr 0x653c838, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_Order();

  /// @brief Method get_PanelName, addr 0x653c810, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

  /// @brief Method get_Widgets, addr 0x653c850, size 0x54, virtual true, abstract: false, final true
  inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> get_Widgets();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsPanel* i___UnityEngine__Rendering__IDebugDisplaySettingsPanel() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* i___UnityEngine__Rendering__IDebugDisplaySettingsPanelDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsPanel(DebugDisplaySettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsPanel(DebugDisplaySettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11922 };

  /// @brief Field m_Widgets, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* ___m_Widgets;

  /// @brief Field m_DisplayInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DisplayInfoAttribute* ___m_DisplayInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsPanel, ___m_Widgets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsPanel, ___m_DisplayInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsPanel, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsPanel*, "UnityEngine.Rendering", "DebugDisplaySettingsPanel");
