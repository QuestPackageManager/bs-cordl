#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DriverDirectMode_FrameTiming)
// Forward declare root types
namespace OVR::OpenVR {
struct DriverDirectMode_FrameTiming;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::DriverDirectMode_FrameTiming);
// Type: OVR.OpenVR::DriverDirectMode_FrameTiming
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8701))
// CS Name: ::OVR.OpenVR::DriverDirectMode_FrameTiming
struct CORDL_TYPE DriverDirectMode_FrameTiming {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr DriverDirectMode_FrameTiming(uint32_t m_nSize, uint32_t m_nNumFramePresents, uint32_t m_nNumMisPresented, uint32_t m_nNumDroppedFrames, uint32_t m_nReprojectionFlags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DriverDirectMode_FrameTiming();

  /// @brief Field m_nSize, offset: 0x0, size: 0x4, def value: None
  uint32_t m_nSize;

  /// @brief Field m_nNumFramePresents, offset: 0x4, size: 0x4, def value: None
  uint32_t m_nNumFramePresents;

  /// @brief Field m_nNumMisPresented, offset: 0x8, size: 0x4, def value: None
  uint32_t m_nNumMisPresented;

  /// @brief Field m_nNumDroppedFrames, offset: 0xc, size: 0x4, def value: None
  uint32_t m_nNumDroppedFrames;

  /// @brief Field m_nReprojectionFlags, offset: 0x10, size: 0x4, def value: None
  uint32_t m_nReprojectionFlags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::DriverDirectMode_FrameTiming, 0x14>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::DriverDirectMode_FrameTiming, "OVR.OpenVR", "DriverDirectMode_FrameTiming");
