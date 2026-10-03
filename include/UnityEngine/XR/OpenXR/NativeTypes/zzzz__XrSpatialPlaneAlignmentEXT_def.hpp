#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPlaneAlignmentEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPlaneAlignmentEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPlaneAlignmentEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPlaneAlignmentEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPlaneAlignmentEXT
struct CORDL_TYPE XrSpatialPlaneAlignmentEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialPlaneAlignmentEXT_Unwrapped
  enum struct __XrSpatialPlaneAlignmentEXT_Unwrapped : int32_t {
    __E_HorizontalUpward = static_cast<int32_t>(0x0),
    __E_HorizontalDownward = static_cast<int32_t>(0x1),
    __E_Vertical = static_cast<int32_t>(0x2),
    __E_Arbitrary = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialPlaneAlignmentEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialPlaneAlignmentEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPlaneAlignmentEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPlaneAlignmentEXT(int32_t value__) noexcept;

  /// @brief Field Arbitrary value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT const Arbitrary;

  /// @brief Field HorizontalDownward value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT const HorizontalDownward;

  /// @brief Field HorizontalUpward value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT const HorizontalUpward;

  /// @brief Field Vertical value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17589 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
