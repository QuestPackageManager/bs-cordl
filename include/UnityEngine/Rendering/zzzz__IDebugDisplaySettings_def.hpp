#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugDisplaySettings)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugDisplaySettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDebugDisplaySettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDebugDisplaySettings
class CORDL_TYPE IDebugDisplaySettings {
public:
  // Declarations
  /// @brief Method Add, addr 0x654eb30, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsData* Add(::UnityEngine::Rendering::IDebugDisplaySettingsData* newData);

  /// @brief Method ForEach, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ForEach(::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* onExecute);

  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettings(IDebugDisplaySettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12013 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDebugDisplaySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDebugDisplaySettings*, "UnityEngine.Rendering", "IDebugDisplaySettings");
