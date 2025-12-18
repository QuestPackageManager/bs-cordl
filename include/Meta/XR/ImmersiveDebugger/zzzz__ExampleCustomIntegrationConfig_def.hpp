#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/ExampleCustomIntegrationConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfigBase_def.hpp"
CORDL_MODULE_EXPORT(ExampleCustomIntegrationConfig)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class ExampleCustomIntegrationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig);
// Dependencies Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.ExampleCustomIntegrationConfig
class CORDL_TYPE ExampleCustomIntegrationConfig : public ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase {
public:
  // Declarations
  /// @brief Method GetCamera, addr 0x5895030, size 0x70, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> GetCamera();

  static inline ::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig* New_ctor();

  /// @brief Method .ctor, addr 0x58950a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExampleCustomIntegrationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExampleCustomIntegrationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExampleCustomIntegrationConfig(ExampleCustomIntegrationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExampleCustomIntegrationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExampleCustomIntegrationConfig(ExampleCustomIntegrationConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18309 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::ExampleCustomIntegrationConfig*, "Meta.XR.ImmersiveDebugger", "ExampleCustomIntegrationConfig");
