#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfigBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomIntegrationConfigBase)
namespace Meta::XR::ImmersiveDebugger {
class ICustomIntegrationConfig;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfigBase;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase
class CORDL_TYPE CustomIntegrationConfigBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig"
  constexpr operator ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*() noexcept;

  /// @brief Method Awake, addr 0x58a99b0, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCamera, addr 0x58a99b8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> GetCamera();

  static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase* New_ctor();

  /// @brief Method OnDestroy, addr 0x58a99b4, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method .ctor, addr 0x58a99c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig"
  constexpr ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* i___Meta__XR__ImmersiveDebugger__ICustomIntegrationConfig() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomIntegrationConfigBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfigBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomIntegrationConfigBase(CustomIntegrationConfigBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfigBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomIntegrationConfigBase(CustomIntegrationConfigBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfigBase*, "Meta.XR.ImmersiveDebugger", "CustomIntegrationConfigBase");
