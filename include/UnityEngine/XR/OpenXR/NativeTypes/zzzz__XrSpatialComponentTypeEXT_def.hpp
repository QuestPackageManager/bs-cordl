#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentTypeEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentTypeEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentTypeEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentTypeEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentTypeEXT
struct CORDL_TYPE XrSpatialComponentTypeEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialComponentTypeEXT_Unwrapped
  enum struct __XrSpatialComponentTypeEXT_Unwrapped : int32_t {
    __E_Bounded2D = static_cast<int32_t>(0x1),
    __E_Bounded3D = static_cast<int32_t>(0x2),
    __E_Parent = static_cast<int32_t>(0x3),
    __E_Mesh3D = static_cast<int32_t>(0x4),
    __E_PlaneAlignment = static_cast<int32_t>(0x3ba61888),
    __E_Mesh2D = static_cast<int32_t>(0x3ba61889),
    __E_Polygon2D = static_cast<int32_t>(0x3ba6188a),
    __E_PlaneSemanticLabel = static_cast<int32_t>(0x3ba6188b),
    __E_Marker = static_cast<int32_t>(0x3ba62058),
    __E_Anchor = static_cast<int32_t>(0x3ba66a90),
    __E_Persistence = static_cast<int32_t>(0x3ba66e78),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialComponentTypeEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialComponentTypeEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentTypeEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentTypeEXT(int32_t value__) noexcept;

  /// @brief Field Anchor value: I32(1000762000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Anchor;

  /// @brief Field Bounded2D value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Bounded2D;

  /// @brief Field Bounded3D value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Bounded3D;

  /// @brief Field Marker value: I32(1000743000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Marker;

  /// @brief Field Mesh2D value: I32(1000741001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Mesh2D;

  /// @brief Field Mesh3D value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Mesh3D;

  /// @brief Field Parent value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Parent;

  /// @brief Field Persistence value: I32(1000763000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Persistence;

  /// @brief Field PlaneAlignment value: I32(1000741000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const PlaneAlignment;

  /// @brief Field PlaneSemanticLabel value: I32(1000741003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const PlaneSemanticLabel;

  /// @brief Field Polygon2D value: I32(1000741002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT const Polygon2D;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17541 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
