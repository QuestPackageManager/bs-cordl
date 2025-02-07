#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputFeatureType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFeatureType)
// Forward declare root types
namespace UnityEngine::XR {
struct InputFeatureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputFeatureType);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.InputFeatureType
struct CORDL_TYPE InputFeatureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __InputFeatureType_Unwrapped
  enum struct __InputFeatureType_Unwrapped : uint32_t {
    __E_Custom = static_cast<uint32_t>(0x0u),
    __E_Binary = static_cast<uint32_t>(0x1u),
    __E_DiscreteStates = static_cast<uint32_t>(0x2u),
    __E_Axis1D = static_cast<uint32_t>(0x3u),
    __E_Axis2D = static_cast<uint32_t>(0x4u),
    __E_Axis3D = static_cast<uint32_t>(0x5u),
    __E_Rotation = static_cast<uint32_t>(0x6u),
    __E_Hand = static_cast<uint32_t>(0x7u),
    __E_Bone = static_cast<uint32_t>(0x8u),
    __E_Eyes = static_cast<uint32_t>(0x9u),
    __E_kUnityXRInputFeatureTypeInvalid = static_cast<uint32_t>(0xffffffffu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputFeatureType_Unwrapped() const noexcept {
    return static_cast<__InputFeatureType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFeatureType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputFeatureType(uint32_t value__) noexcept;

  /// @brief Field Axis1D value: U32(3)
  static ::UnityEngine::XR::InputFeatureType const Axis1D;

  /// @brief Field Axis2D value: U32(4)
  static ::UnityEngine::XR::InputFeatureType const Axis2D;

  /// @brief Field Axis3D value: U32(5)
  static ::UnityEngine::XR::InputFeatureType const Axis3D;

  /// @brief Field Binary value: U32(1)
  static ::UnityEngine::XR::InputFeatureType const Binary;

  /// @brief Field Bone value: U32(8)
  static ::UnityEngine::XR::InputFeatureType const Bone;

  /// @brief Field Custom value: U32(0)
  static ::UnityEngine::XR::InputFeatureType const Custom;

  /// @brief Field DiscreteStates value: U32(2)
  static ::UnityEngine::XR::InputFeatureType const DiscreteStates;

  /// @brief Field Eyes value: U32(9)
  static ::UnityEngine::XR::InputFeatureType const Eyes;

  /// @brief Field Hand value: U32(7)
  static ::UnityEngine::XR::InputFeatureType const Hand;

  /// @brief Field Rotation value: U32(6)
  static ::UnityEngine::XR::InputFeatureType const Rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18268 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kUnityXRInputFeatureTypeInvalid value: U32(4294967295)
  static ::UnityEngine::XR::InputFeatureType const kUnityXRInputFeatureTypeInvalid;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::InputFeatureType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputFeatureType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputFeatureType, "UnityEngine.XR", "InputFeatureType");
