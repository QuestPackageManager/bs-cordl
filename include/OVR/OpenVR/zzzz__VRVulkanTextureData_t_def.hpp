#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRVulkanTextureData_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRVulkanTextureData_t)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRVulkanTextureData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRVulkanTextureData_t);
// Type: OVR.OpenVR::VRVulkanTextureData_t
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::VRVulkanTextureData_t
struct CORDL_TYPE VRVulkanTextureData_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRVulkanTextureData_t();

  // Ctor Parameters [CppParam { name: "m_nImage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_pDevice", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam {
  // name: "m_pPhysicalDevice", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pInstance", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name:
  // "m_pQueue", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_nQueueFamilyIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nWidth", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFormat", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_nSampleCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VRVulkanTextureData_t(uint64_t m_nImage, ::System::IntPtr m_pDevice, ::System::IntPtr m_pPhysicalDevice, ::System::IntPtr m_pInstance, ::System::IntPtr m_pQueue,
                                  uint32_t m_nQueueFamilyIndex, uint32_t m_nWidth, uint32_t m_nHeight, uint32_t m_nFormat, uint32_t m_nSampleCount) noexcept;

  /// @brief Field m_nImage, offset: 0x0, size: 0x8, def value: None
  uint64_t m_nImage;

  /// @brief Field m_pDevice, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_pDevice;

  /// @brief Field m_pPhysicalDevice, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr m_pPhysicalDevice;

  /// @brief Field m_pInstance, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr m_pInstance;

  /// @brief Field m_pQueue, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr m_pQueue;

  /// @brief Field m_nQueueFamilyIndex, offset: 0x28, size: 0x4, def value: None
  uint32_t m_nQueueFamilyIndex;

  /// @brief Field m_nWidth, offset: 0x2c, size: 0x4, def value: None
  uint32_t m_nWidth;

  /// @brief Field m_nHeight, offset: 0x30, size: 0x4, def value: None
  uint32_t m_nHeight;

  /// @brief Field m_nFormat, offset: 0x34, size: 0x4, def value: None
  uint32_t m_nFormat;

  /// @brief Field m_nSampleCount, offset: 0x38, size: 0x4, def value: None
  uint32_t m_nSampleCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRVulkanTextureData_t, 0x40>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_nImage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_pDevice) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_pPhysicalDevice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_pInstance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_pQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_nQueueFamilyIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_nWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_nHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_nFormat) == 0x34, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRVulkanTextureData_t, m_nSampleCount) == 0x38, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRVulkanTextureData_t, "OVR.OpenVR", "VRVulkanTextureData_t");
