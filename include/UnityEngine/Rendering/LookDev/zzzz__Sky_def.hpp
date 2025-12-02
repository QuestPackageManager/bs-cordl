#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LookDev/Sky.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Sky)
namespace UnityEngine {
class Cubemap;
}
// Forward declare root types
namespace UnityEngine::Rendering::LookDev {
struct Sky;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LookDev::Sky);
// Dependencies
namespace UnityEngine::Rendering::LookDev {
// Is value type: true
// CS Name: UnityEngine.Rendering.LookDev.Sky
struct CORDL_TYPE Sky {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sky();

  // Ctor Parameters [CppParam { name: "cubemap", ty: "::UnityW<::UnityEngine::Cubemap>", modifiers: "", def_value: None }, CppParam { name: "longitudeOffset", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "exposure", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Sky(::UnityW<::UnityEngine::Cubemap> cubemap, float_t longitudeOffset, float_t exposure) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12476 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field cubemap, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Cubemap> cubemap;

  /// @brief Field longitudeOffset, offset: 0x8, size: 0x4, def value: None
  float_t longitudeOffset;

  /// @brief Field exposure, offset: 0xc, size: 0x4, def value: None
  float_t exposure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LookDev::Sky, cubemap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LookDev::Sky, longitudeOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LookDev::Sky, exposure) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LookDev::Sky, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::LookDev
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LookDev::Sky, "UnityEngine.Rendering.LookDev", "Sky");
