#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsCommon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsCommon)
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsCommon_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class DebugUI_Foldout;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsCommon;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsCommon_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon_SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon/SettingsPanel/<>c__DisplayClass3_0
class CORDL_TYPE SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field foldout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_foldout, put = __cordl_internal_set_foldout)) ::UnityEngine::Rendering::DebugUI_Foldout* foldout;

  static inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0* New_ctor();

  constexpr ::UnityEngine::Rendering::DebugUI_Foldout* const& __cordl_internal_get_foldout() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Foldout*& __cordl_internal_get_foldout();

  constexpr void __cordl_internal_set_foldout(::UnityEngine::Rendering::DebugUI_Foldout* value);

  /// @brief Method <.ctor>b__0, addr 0x668769c, size 0xf8, virtual false, abstract: false, final false
  inline void __ctor_b__0();

  /// @brief Method .ctor, addr 0x6687698, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0(SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0(SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12575 };

  /// @brief Field foldout, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Foldout* ___foldout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0, ___foldout) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsCommon_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0;

  __declspec(property(get = get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags Flags;

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon_SettingsPanel* New_ctor();

  /// @brief Method .ctor, addr 0x6687374, size 0x318, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Flags, addr 0x6687690, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsCommon_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsCommon_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsCommon_SettingsPanel(DebugDisplaySettingsCommon_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsCommon_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsCommon_SettingsPanel(DebugDisplaySettingsCommon_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12576 };

  /// @brief Field k_GoToSectionString offset 0xffffffff size 0x8
  static constexpr ::ConstString k_GoToSectionString{ u"Go to Section..." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon_SettingsPanel, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon
class CORDL_TYPE DebugDisplaySettingsCommon : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon_SettingsPanel;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x6687320, size 0x54, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* New_ctor();

  /// @brief Method .ctor, addr 0x668768c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x6687318, size 0x8, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsCommon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsCommon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsCommon(DebugDisplaySettingsCommon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsCommon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsCommon(DebugDisplaySettingsCommon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon_SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsCommon___c__DisplayClass3_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsCommon/SettingsPanel/<>c__DisplayClass3_0");
