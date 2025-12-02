#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrStructureType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrStructureType)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
struct CORDL_TYPE XrStructureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __XrStructureType_Unwrapped
  enum struct __XrStructureType_Unwrapped : uint32_t {
    __E_XR_TYPE_UNKNOWN = static_cast<uint32_t>(0x0u),
    __E_XR_TYPE_SWAPCHAIN_CREATE_INFO = static_cast<uint32_t>(0x9u),
    __E_XR_TYPE_COMPOSITION_LAYER_PROJECTION = static_cast<uint32_t>(0x23u),
    __E_XR_TYPE_COMPOSITION_LAYER_QUAD = static_cast<uint32_t>(0x24u),
    __E_XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW = static_cast<uint32_t>(0x30u),
    __E_XR_TYPE_COMPOSITION_LAYER_CUBE_KHR = static_cast<uint32_t>(0x3b9ae170u),
    __E_XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR = static_cast<uint32_t>(0x3b9b0c68u),
    __E_XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR = static_cast<uint32_t>(0x3b9b1050u),
    __E_XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR = static_cast<uint32_t>(0x3b9c2d78u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrStructureType_Unwrapped() const noexcept {
    return static_cast<__XrStructureType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrStructureType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr XrStructureType(uint32_t value__) noexcept;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_CUBE_KHR value: U32(1000006000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_CUBE_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR value: U32(1000017000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR value: U32(1000091000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR value: U32(1000018000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_PROJECTION value: U32(35)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_PROJECTION;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW value: U32(48)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_QUAD value: U32(36)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_QUAD;

  /// @brief Field XR_TYPE_SWAPCHAIN_CREATE_INFO value: U32(9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_SWAPCHAIN_CREATE_INFO;

  /// @brief Field XR_TYPE_UNKNOWN value: U32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_UNKNOWN;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18483 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, "UnityEngine.XR.OpenXR.NativeTypes", "XrStructureType");
