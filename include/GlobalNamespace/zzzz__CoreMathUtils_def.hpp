#pragma once
// IWYU pragma private; include "GlobalNamespace\CoreMathUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoreMathUtils)
// Forward declare root types
namespace GlobalNamespace {
class CoreMathUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CoreMathUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoreMathUtils*, "", "CoreMathUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoreMathUtils
class CORDL_TYPE CoreMathUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateHalfJumpDurationInBeats, addr 0x36f895c, size 0x44, virtual false, abstract: false, final false
  static inline float_t CalculateHalfJumpDurationInBeats(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                         float_t noteJumpStartBeatOffset);

  static inline ::GlobalNamespace::CoreMathUtils* New_ctor();

  /// @brief Method .ctor, addr 0x36f89a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreMathUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreMathUtils(CoreMathUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreMathUtils(CoreMathUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23660 };

  /// @brief Field kHalfJumpDistanceEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kHalfJumpDistanceEpsilon{ static_cast<float_t>(0.001f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CoreMathUtils) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
