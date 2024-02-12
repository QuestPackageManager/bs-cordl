#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberSwingRating)
// Forward declare root types
namespace GlobalNamespace {
class SaberSwingRating;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberSwingRating);
// Type: ::SaberSwingRating
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10647))
// CS Name: ::SaberSwingRating*
class CORDL_TYPE SaberSwingRating : public ::System::Object {
public:
  // Declarations
  /// @brief Method NormalRating, addr 0x12687e0, size 0x2c, virtual false, abstract: false, final false
  static inline float_t NormalRating(float_t normalDiff);

  /// @brief Method BeforeCutStepRating, addr 0x12687a4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t BeforeCutStepRating(float_t angleDiff, float_t normalDiff);

  /// @brief Method AfterCutStepRating, addr 0x126880c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t AfterCutStepRating(float_t angleDiff, float_t normalDiff);

  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberSwingRating(SaberSwingRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberSwingRating(SaberSwingRating const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberSwingRating();

public:
  /// @brief Field kMaxNormalAngleDiff offset 0xffffffff size 0x4
  static constexpr float_t kMaxNormalAngleDiff{ 90.0 };

  /// @brief Field kToleranceNormalAngleDiff offset 0xffffffff size 0x4
  static constexpr float_t kToleranceNormalAngleDiff{ 75.0 };

  /// @brief Field kMaxBeforeCutSwingDuration offset 0xffffffff size 0x4
  static constexpr float_t kMaxBeforeCutSwingDuration{ 0.4 };

  /// @brief Field kMaxAfterCutSwingDuration offset 0xffffffff size 0x4
  static constexpr float_t kMaxAfterCutSwingDuration{ 0.4 };

  /// @brief Field kBeforeCutAngleFor1Rating offset 0xffffffff size 0x4
  static constexpr float_t kBeforeCutAngleFor1Rating{ 100.0 };

  /// @brief Field kAfterCutAngleFor1Rating offset 0xffffffff size 0x4
  static constexpr float_t kAfterCutAngleFor1Rating{ 60.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberSwingRating, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberSwingRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSwingRating*, "", "SaberSwingRating");
