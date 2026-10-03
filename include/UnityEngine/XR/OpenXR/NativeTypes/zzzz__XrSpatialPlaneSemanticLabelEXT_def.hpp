#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPlaneSemanticLabelEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPlaneSemanticLabelEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPlaneSemanticLabelEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPlaneSemanticLabelEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPlaneSemanticLabelEXT
struct CORDL_TYPE XrSpatialPlaneSemanticLabelEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialPlaneSemanticLabelEXT_Unwrapped
  enum struct __XrSpatialPlaneSemanticLabelEXT_Unwrapped : int32_t {
    __E_Uncategorized = static_cast<int32_t>(0x1),
    __E_Floor = static_cast<int32_t>(0x2),
    __E_Wall = static_cast<int32_t>(0x3),
    __E_Ceiling = static_cast<int32_t>(0x4),
    __E_Table = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialPlaneSemanticLabelEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialPlaneSemanticLabelEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPlaneSemanticLabelEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPlaneSemanticLabelEXT(int32_t value__) noexcept;

  /// @brief Field Ceiling value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT const Ceiling;

  /// @brief Field Floor value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT const Floor;

  /// @brief Field Table value: I32(5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT const Table;

  /// @brief Field Uncategorized value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT const Uncategorized;

  /// @brief Field Wall value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT const Wall;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17590 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
