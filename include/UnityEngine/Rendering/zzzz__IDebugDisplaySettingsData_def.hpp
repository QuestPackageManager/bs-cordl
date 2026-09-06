#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettingsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugDisplaySettingsData)
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::IDebugDisplaySettingsData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IDebugDisplaySettingsData*, "UnityEngine.Rendering", "IDebugDisplaySettingsData");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDebugDisplaySettingsData
class CORDL_TYPE IDebugDisplaySettingsData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsData(IDebugDisplaySettingsDataconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
