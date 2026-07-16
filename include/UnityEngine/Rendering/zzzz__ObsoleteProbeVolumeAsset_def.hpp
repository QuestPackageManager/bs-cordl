#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObsoleteProbeVolumeAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ObsoleteProbeVolumeAsset)
// Forward declare root types
namespace UnityEngine::Rendering {
class ObsoleteProbeVolumeAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*, "UnityEngine.Rendering", "ObsoleteProbeVolumeAsset");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ObsoleteProbeVolumeAsset
class CORDL_TYPE ObsoleteProbeVolumeAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset* New_ctor();

  /// @brief Method .ctor, addr 0x678c4b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObsoleteProbeVolumeAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObsoleteProbeVolumeAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObsoleteProbeVolumeAsset(ObsoleteProbeVolumeAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObsoleteProbeVolumeAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObsoleteProbeVolumeAsset(ObsoleteProbeVolumeAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12100 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ObsoleteProbeVolumeAsset) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
