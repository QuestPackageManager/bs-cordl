#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialMarkerAprilTagDictEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialMarkerAprilTagDictEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialMarkerAprilTagDictEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialMarkerAprilTagDictEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialMarkerAprilTagDictEXT
struct CORDL_TYPE XrSpatialMarkerAprilTagDictEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialMarkerAprilTagDictEXT_Unwrapped
  enum struct __XrSpatialMarkerAprilTagDictEXT_Unwrapped : int32_t {
    __E_Dict_16h5 = static_cast<int32_t>(0x1),
    __E_Dict_25h9 = static_cast<int32_t>(0x2),
    __E_Dict_36h10 = static_cast<int32_t>(0x3),
    __E_Dict_36h11 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialMarkerAprilTagDictEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialMarkerAprilTagDictEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialMarkerAprilTagDictEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialMarkerAprilTagDictEXT(int32_t value__) noexcept;

  /// @brief Field Dict_16h5 value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT const Dict_16h5;

  /// @brief Field Dict_25h9 value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT const Dict_25h9;

  /// @brief Field Dict_36h10 value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT const Dict_36h10;

  /// @brief Field Dict_36h11 value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT const Dict_36h11;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerAprilTagDictEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
