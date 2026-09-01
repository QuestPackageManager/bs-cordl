#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeTouchupVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_def.hpp"
CORDL_MODULE_EXPORT(ProbeTouchupVolume)
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeTouchupVolume;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeTouchupVolume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeTouchupVolume*, "UnityEngine.Rendering", "ProbeTouchupVolume");
// Dependencies UnityEngine.Rendering.ProbeAdjustmentVolume
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeTouchupVolume
class CORDL_TYPE ProbeTouchupVolume : public ::UnityEngine::Rendering::ProbeAdjustmentVolume {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ProbeTouchupVolume* New_ctor();

  /// @brief Method .ctor, addr 0x676fe3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeTouchupVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeTouchupVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeTouchupVolume(ProbeTouchupVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeTouchupVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeTouchupVolume(ProbeTouchupVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ProbeTouchupVolume) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::Rendering
