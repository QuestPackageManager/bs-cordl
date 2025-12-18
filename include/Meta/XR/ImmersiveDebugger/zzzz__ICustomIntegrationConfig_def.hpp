#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/ICustomIntegrationConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomIntegrationConfig)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class ICustomIntegrationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig);
// Dependencies
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.ICustomIntegrationConfig
class CORDL_TYPE ICustomIntegrationConfig {
public:
  // Declarations
  /// @brief Method GetCamera, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> GetCamera();

  // Ctor Parameters [CppParam { name: "", ty: "ICustomIntegrationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomIntegrationConfig(ICustomIntegrationConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*, "Meta.XR.ImmersiveDebugger", "ICustomIntegrationConfig");
