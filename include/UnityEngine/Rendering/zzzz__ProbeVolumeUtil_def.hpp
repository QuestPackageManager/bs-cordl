#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeUtil)
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeUtil;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeVolumeUtil*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeVolumeUtil*, "UnityEngine.Rendering", "ProbeVolumeUtil");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeUtil
class CORDL_TYPE ProbeVolumeUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method BrickSize, addr 0x6bb442c, size 0x44, virtual false, abstract: false, final false
  static inline float_t BrickSize(float_t minBrickSize, int32_t subdivisionLevel);

  /// @brief Method CellSize, addr 0x6bb43fc, size 0x30, virtual false, abstract: false, final false
  static inline int32_t CellSize(int32_t subdivisionLevel);

  /// @brief Method MaxBrickSize, addr 0x6bb4470, size 0x48, virtual false, abstract: false, final false
  static inline float_t MaxBrickSize(float_t minBrickSize, int32_t maxSubDivision);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeUtil", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeUtil(ProbeVolumeUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeUtil", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeUtil(ProbeVolumeUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ProbeVolumeUtil) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
