#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SpaceFillingCurves.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceFillingCurves)
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class SpaceFillingCurves;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SpaceFillingCurves);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.SpaceFillingCurves
class CORDL_TYPE SpaceFillingCurves : public ::System::Object {
public:
  // Declarations
  /// @brief Method Compact1By1, addr 0x669e3fc, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t Compact1By1(uint32_t x);

  /// @brief Method DecodeMorton2D, addr 0x669e498, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 DecodeMorton2D(uint32_t code);

  /// @brief Method EncodeMorton2D, addr 0x669e424, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t EncodeMorton2D(::Unity::Mathematics::uint2 coord);

  /// @brief Method Part1By1, addr 0x669e3d8, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t Part1By1(uint32_t x);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceFillingCurves();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceFillingCurves", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceFillingCurves(SpaceFillingCurves&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceFillingCurves", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceFillingCurves(SpaceFillingCurves const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SpaceFillingCurves, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SpaceFillingCurves);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SpaceFillingCurves*, "UnityEngine.Rendering.Universal", "SpaceFillingCurves");
