#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(D3D12TextureData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct D3D12TextureData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::D3D12TextureData_t);
// Type: OVR.OpenVR::D3D12TextureData_t
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::D3D12TextureData_t
struct CORDL_TYPE D3D12TextureData_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr D3D12TextureData_t();

  // Ctor Parameters [CppParam { name: "m_pResource", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pCommandQueue", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNodeMask", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr D3D12TextureData_t(void* m_pResource, void* m_pCommandQueue, uint32_t m_nNodeMask) noexcept;

  /// @brief Field m_pResource, offset: 0x0, size: 0x8, def value: None
  void* m_pResource;

  /// @brief Field m_pCommandQueue, offset: 0x8, size: 0x8, def value: None
  void* m_pCommandQueue;

  /// @brief Field m_nNodeMask, offset: 0x10, size: 0x4, def value: None
  uint32_t m_nNodeMask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::D3D12TextureData_t, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::D3D12TextureData_t, m_pResource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::D3D12TextureData_t, m_pCommandQueue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::D3D12TextureData_t, m_nNodeMask) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::D3D12TextureData_t, "OVR.OpenVR", "D3D12TextureData_t");
