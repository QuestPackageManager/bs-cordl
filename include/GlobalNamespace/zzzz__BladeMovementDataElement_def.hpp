#pragma once
// IWYU pragma private; include "GlobalNamespace/BladeMovementDataElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BladeMovementDataElement)
// Forward declare root types
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BladeMovementDataElement);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BladeMovementDataElement
struct CORDL_TYPE BladeMovementDataElement {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BladeMovementDataElement();

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "segmentAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "topPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "segmentNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr BladeMovementDataElement(float_t time, float_t segmentAngle, ::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, ::UnityEngine::Vector3 segmentNormal) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16983 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field segmentAngle, offset: 0x4, size: 0x4, def value: None
  float_t segmentAngle;

  /// @brief Field topPos, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 topPos;

  /// @brief Field bottomPos, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomPos;

  /// @brief Field segmentNormal, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 segmentNormal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BladeMovementDataElement, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BladeMovementDataElement, segmentAngle) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BladeMovementDataElement, topPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BladeMovementDataElement, bottomPos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BladeMovementDataElement, segmentNormal) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BladeMovementDataElement, 0x2c>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BladeMovementDataElement, "", "BladeMovementDataElement");
