#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsUI)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsUI___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering {
class DebugManager;
}
namespace UnityEngine::Rendering {
class IDebugData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplaySettingsUI;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsUI___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsUI);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsUI/<>c__DisplayClass3_0
class CORDL_TYPE DebugDisplaySettingsUI___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_debugManager, put = __cordl_internal_set_debugManager)) ::UnityEngine::Rendering::DebugManager* debugManager;

  /// @brief Field panels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_panels,
                      put = __cordl_internal_set_panels)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* panels;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0* New_ctor();

  /// @brief Method <RegisterDebug>b__0, addr 0x653d830, size 0x314, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__0(::UnityEngine::Rendering::IDebugDisplaySettingsData* data);

  constexpr ::UnityEngine::Rendering::DebugManager* const& __cordl_internal_get_debugManager() const;

  constexpr ::UnityEngine::Rendering::DebugManager*& __cordl_internal_get_debugManager();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* const& __cordl_internal_get_panels() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>*& __cordl_internal_get_panels();

  constexpr void __cordl_internal_set_debugManager(::UnityEngine::Rendering::DebugManager* value);

  constexpr void __cordl_internal_set_panels(::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* value);

  /// @brief Method .ctor, addr 0x653d454, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsUI___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsUI___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsUI___c__DisplayClass3_0(DebugDisplaySettingsUI___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsUI___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsUI___c__DisplayClass3_0(DebugDisplaySettingsUI___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11926 };

  /// @brief Field debugManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugManager* ___debugManager;

  /// @brief Field panels, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* ___panels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0, ___debugManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0, ___panels) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsUI
class CORDL_TYPE DebugDisplaySettingsUI : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0;

  /// @brief Field m_DisposablePanels, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisposablePanels,
                      put =
                          __cordl_internal_set_m_DisposablePanels)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* m_DisposablePanels;

  /// @brief Field m_Settings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::IDebugDisplaySettings* m_Settings;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugData"
  constexpr operator ::UnityEngine::Rendering::IDebugData*() noexcept;

  /// @brief Method GetReset, addr 0x653d7b0, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Action* GetReset();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsUI* New_ctor();

  /// @brief Method RegisterDebug, addr 0x653d14c, size 0x254, virtual false, abstract: false, final false
  inline void RegisterDebug(::UnityEngine::Rendering::IDebugDisplaySettings* settings);

  /// @brief Method Reset, addr 0x653cb94, size 0xf4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UnregisterDebug, addr 0x653cc88, size 0x4c4, virtual false, abstract: false, final false
  inline void UnregisterDebug();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* const& __cordl_internal_get_m_DisposablePanels() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>*& __cordl_internal_get_m_DisposablePanels();

  constexpr ::UnityEngine::Rendering::IDebugDisplaySettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::IDebugDisplaySettings*& __cordl_internal_get_m_Settings();

  constexpr void __cordl_internal_set_m_DisposablePanels(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::IDebugDisplaySettings* value);

  /// @brief Method .ctor, addr 0x653d82c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugData"
  constexpr ::UnityEngine::Rendering::IDebugData* i___UnityEngine__Rendering__IDebugData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsUI(DebugDisplaySettingsUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsUI(DebugDisplaySettingsUI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11927 };

  /// @brief Field m_DisposablePanels, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* ___m_DisposablePanels;

  /// @brief Field m_Settings, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::IDebugDisplaySettings* ___m_Settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsUI, ___m_DisposablePanels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsUI, ___m_Settings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsUI, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsUI*, "UnityEngine.Rendering", "DebugDisplaySettingsUI");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0*, "UnityEngine.Rendering", "DebugDisplaySettingsUI/<>c__DisplayClass3_0");
