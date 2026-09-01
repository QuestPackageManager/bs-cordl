#pragma once
// IWYU pragma private; include "UnityEngine\LightProbeProxyVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(LightProbeProxyVolume)
// Forward declare root types
namespace UnityEngine {
class LightProbeProxyVolume;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightProbeProxyVolume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbeProxyVolume*, "UnityEngine", "LightProbeProxyVolume");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightProbeProxyVolume
class CORDL_TYPE LightProbeProxyVolume : public ::UnityEngine::Behaviour {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeProxyVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightProbeProxyVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightProbeProxyVolume(LightProbeProxyVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightProbeProxyVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightProbeProxyVolume(LightProbeProxyVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightProbeProxyVolume) == 0x18, "Size mismatch!");

} // namespace UnityEngine
