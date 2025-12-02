#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSwapchainUsageFlags.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSwapchainUsageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XrSwapchainUsageFlags(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XrSwapchainUsageFlags() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT{ static_cast<uint64_t>(
    0x1u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT{
  static_cast<uint64_t>(0x2u)
};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT{ static_cast<uint64_t>(
    0x4u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_TRANSFER_SRC_BIT{ static_cast<uint64_t>(0x8u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT{ static_cast<uint64_t>(
    0x10u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_SAMPLED_BIT{ static_cast<uint64_t>(0x20u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT{ static_cast<uint64_t>(
    0x40u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_MND{ static_cast<uint64_t>(
    0x80u) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainUsageFlags::XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_KHR{ static_cast<uint64_t>(
    0x80u) };
