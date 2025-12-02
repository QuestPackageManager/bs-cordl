#pragma once
// IWYU pragma private; include "Meta/XR/Util/Feature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Feature)
// Forward declare root types
namespace Meta::XR::Util {
struct Feature;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Util::Feature);
// Dependencies
namespace Meta::XR::Util {
// Is value type: true
// CS Name: Meta.XR.Util.Feature
struct CORDL_TYPE Feature {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Feature_Unwrapped
  enum struct __Feature_Unwrapped : int32_t {
    __E_Anchors = static_cast<int32_t>(0x0),
    __E_BodyTracking = static_cast<int32_t>(0x1),
    __E_EyeTracking = static_cast<int32_t>(0x2),
    __E_FaceTracking = static_cast<int32_t>(0x3),
    __E_Hands = static_cast<int32_t>(0x4),
    __E_Interaction = static_cast<int32_t>(0x5),
    __E_Passthrough = static_cast<int32_t>(0x6),
    __E_Scene = static_cast<int32_t>(0x7),
    __E_TrackedKeyboard = static_cast<int32_t>(0x8),
    __E_VirtualKeyboard = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Feature_Unwrapped() const noexcept {
    return static_cast<__Feature_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Feature();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Feature(int32_t value__) noexcept;

  /// @brief Field Anchors value: I32(0)
  static ::Meta::XR::Util::Feature const Anchors;

  /// @brief Field BodyTracking value: I32(1)
  static ::Meta::XR::Util::Feature const BodyTracking;

  /// @brief Field EyeTracking value: I32(2)
  static ::Meta::XR::Util::Feature const EyeTracking;

  /// @brief Field FaceTracking value: I32(3)
  static ::Meta::XR::Util::Feature const FaceTracking;

  /// @brief Field Hands value: I32(4)
  static ::Meta::XR::Util::Feature const Hands;

  /// @brief Field Interaction value: I32(5)
  static ::Meta::XR::Util::Feature const Interaction;

  /// @brief Field Passthrough value: I32(6)
  static ::Meta::XR::Util::Feature const Passthrough;

  /// @brief Field Scene value: I32(7)
  static ::Meta::XR::Util::Feature const Scene;

  /// @brief Field TrackedKeyboard value: I32(8)
  static ::Meta::XR::Util::Feature const TrackedKeyboard;

  /// @brief Field VirtualKeyboard value: I32(9)
  static ::Meta::XR::Util::Feature const VirtualKeyboard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8548 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Util::Feature, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::Util::Feature, 0x4>, "Size mismatch!");

} // namespace Meta::XR::Util
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Util::Feature, "Meta.XR.Util", "Feature");
