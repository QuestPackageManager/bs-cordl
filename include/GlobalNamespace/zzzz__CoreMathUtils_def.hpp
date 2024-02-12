#pragma once
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
// Type: ::CoreMathUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16429))
// CS Name: ::CoreMathUtils*
class CORDL_TYPE CoreMathUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateHalfJumpDurationInBeats, addr 0x125b848, size 0x40, virtual false, abstract: false, final false
  static inline float_t CalculateHalfJumpDurationInBeats(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                         float_t noteJumpStartBeatOffset);

  /// @brief Method __CalculateHalfJumpDurationInBeatsV2, addr 0x125b888, size 0x34, virtual false, abstract: false, final false
  static inline float_t __CalculateHalfJumpDurationInBeatsV2(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                             float_t noteJumpStartBeatOffset);

  /// @brief Method __CalculateHalfJumpDurationInBeatsV1, addr 0x125b8bc, size 0x48, virtual false, abstract: false, final false
  static inline int32_t __CalculateHalfJumpDurationInBeatsV1(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration,
                                                             float_t minHalfJumpDistance);

  static inline ::GlobalNamespace::CoreMathUtils* New_ctor();

  /// @brief Method .ctor, addr 0x125b904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreMathUtils(CoreMathUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreMathUtils(CoreMathUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreMathUtils();

public:
  /// @brief Field kHalfJumpDistanceEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kHalfJumpDistanceEpsilon{ 0.001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoreMathUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoreMathUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreMathUtils*, "", "CoreMathUtils");
