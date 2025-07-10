#pragma once
// IWYU pragma private; include "GlobalNamespace/CoreMathUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreMathUtils)
// Forward declare root types
namespace GlobalNamespace {
class CoreMathUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoreMathUtils);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoreMathUtils
class CORDL_TYPE CoreMathUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateHalfJumpDurationInBeats, addr 0x26a2314, size 0x40, virtual false, abstract: false, final false
  static inline float_t CalculateHalfJumpDurationInBeats(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                         float_t noteJumpStartBeatOffset);

  static inline ::GlobalNamespace::CoreMathUtils* New_ctor();

  /// @brief Method __CalculateHalfJumpDurationInBeatsV1, addr 0x26a2388, size 0x48, virtual false, abstract: false, final false
  static inline int32_t __CalculateHalfJumpDurationInBeatsV1(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                             float_t minHalfJumpDistance);

  /// @brief Method __CalculateHalfJumpDurationInBeatsV2, addr 0x26a2354, size 0x34, virtual false, abstract: false, final false
  static inline float_t __CalculateHalfJumpDurationInBeatsV2(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                             float_t noteJumpStartBeatOffset);

  /// @brief Method .ctor, addr 0x26a23d0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19200 };

  /// @brief Field kHalfJumpDistanceEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kHalfJumpDistanceEpsilon{ static_cast<float_t>(0.001f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoreMathUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoreMathUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreMathUtils*, "", "CoreMathUtils");
