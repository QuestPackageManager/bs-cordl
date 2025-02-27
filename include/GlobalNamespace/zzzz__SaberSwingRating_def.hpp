#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberSwingRating.hpp"
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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberSwingRating
class CORDL_TYPE SaberSwingRating : public ::System::Object {
public:
  // Declarations
  /// @brief Method AfterCutStepRating, addr 0x26b6860, size 0x3c, virtual false, abstract: false, final false
  static inline float_t AfterCutStepRating(float_t angleDiff, float_t normalDiff);

  /// @brief Method BeforeCutStepRating, addr 0x26b67f8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t BeforeCutStepRating(float_t angleDiff, float_t normalDiff);

  /// @brief Method NormalRating, addr 0x26b6834, size 0x2c, virtual false, abstract: false, final false
  static inline float_t NormalRating(float_t normalDiff);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberSwingRating();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberSwingRating(SaberSwingRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberSwingRating(SaberSwingRating const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12858 };

  /// @brief Field kAfterCutAngleFor1Rating offset 0xffffffff size 0x4
  static constexpr float_t kAfterCutAngleFor1Rating{ static_cast<float_t>(60.0f) };

  /// @brief Field kBeforeCutAngleFor1Rating offset 0xffffffff size 0x4
  static constexpr float_t kBeforeCutAngleFor1Rating{ static_cast<float_t>(100.0f) };

  /// @brief Field kMaxAfterCutSwingDuration offset 0xffffffff size 0x4
  static constexpr float_t kMaxAfterCutSwingDuration{ static_cast<float_t>(0.4f) };

  /// @brief Field kMaxBeforeCutSwingDuration offset 0xffffffff size 0x4
  static constexpr float_t kMaxBeforeCutSwingDuration{ static_cast<float_t>(0.4f) };

  /// @brief Field kMaxNormalAngleDiff offset 0xffffffff size 0x4
  static constexpr float_t kMaxNormalAngleDiff{ static_cast<float_t>(90.0f) };

  /// @brief Field kToleranceNormalAngleDiff offset 0xffffffff size 0x4
  static constexpr float_t kToleranceNormalAngleDiff{ static_cast<float_t>(75.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberSwingRating, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberSwingRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSwingRating*, "", "SaberSwingRating");
