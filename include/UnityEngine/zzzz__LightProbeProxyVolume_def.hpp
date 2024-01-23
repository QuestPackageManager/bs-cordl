#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(LightProbeProxyVolume)
// Forward declare root types
namespace UnityEngine {
class LightProbeProxyVolume;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightProbeProxyVolume);
// Type: UnityEngine::LightProbeProxyVolume
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10187))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10124))
// CS Name: ::UnityEngine::LightProbeProxyVolume*
class CORDL_TYPE LightProbeProxyVolume : public ::UnityEngine::Behaviour {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "LightProbeProxyVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightProbeProxyVolume(LightProbeProxyVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightProbeProxyVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightProbeProxyVolume(LightProbeProxyVolume const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeProxyVolume();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightProbeProxyVolume, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightProbeProxyVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbeProxyVolume*, "UnityEngine", "LightProbeProxyVolume");
