#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSwapchainUsageFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSwapchainUsageFlags)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSwapchainUsageFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSwapchainUsageFlags
struct CORDL_TYPE XrSwapchainUsageFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct __XrSwapchainUsageFlags_Unwrapped
  enum struct __XrSwapchainUsageFlags_Unwrapped : uint64_t {
    __E_XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT = static_cast<uint64_t>(0x1u),
    __E_XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT = static_cast<uint64_t>(0x2u),
    __E_XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT = static_cast<uint64_t>(0x4u),
    __E_XR_SWAPCHAIN_USAGE_TRANSFER_SRC_BIT = static_cast<uint64_t>(0x8u),
    __E_XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT = static_cast<uint64_t>(0x10u),
    __E_XR_SWAPCHAIN_USAGE_SAMPLED_BIT = static_cast<uint64_t>(0x20u),
    __E_XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT = static_cast<uint64_t>(0x40u),
    __E_XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_MND = static_cast<uint64_t>(0x80u),
    __E_XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_KHR = static_cast<uint64_t>(0x80u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSwapchainUsageFlags_Unwrapped() const noexcept {
    return static_cast<__XrSwapchainUsageFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSwapchainUsageFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr XrSwapchainUsageFlags(uint64_t value__) noexcept;

  /// @brief Field XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT value: U64(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT;

  /// @brief Field XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT value: U64(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;

  /// @brief Field XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_KHR value: U64(128)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_KHR;

  /// @brief Field XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_MND value: U64(128)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_MND;

  /// @brief Field XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT value: U64(64)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT;

  /// @brief Field XR_SWAPCHAIN_USAGE_SAMPLED_BIT value: U64(32)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_SAMPLED_BIT;

  /// @brief Field XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT value: U64(16)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT;

  /// @brief Field XR_SWAPCHAIN_USAGE_TRANSFER_SRC_BIT value: U64(8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_TRANSFER_SRC_BIT;

  /// @brief Field XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT value: U64(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags const XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18484 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags, 0x8>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags, "UnityEngine.XR.OpenXR.NativeTypes", "XrSwapchainUsageFlags");
