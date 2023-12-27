#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotificationBitmap_t)
// Forward declare root types
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::NotificationBitmap_t);
// Type: OVR.OpenVR::NotificationBitmap_t
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8718))
// CS Name: ::OVR.OpenVR::NotificationBitmap_t
struct CORDL_TYPE NotificationBitmap_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_pImageData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_nWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nBytesPerPixel", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NotificationBitmap_t(void* m_pImageData, int32_t m_nWidth, int32_t m_nHeight, int32_t m_nBytesPerPixel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NotificationBitmap_t();

  /// @brief Field m_pImageData, offset: 0x0, size: 0x8, def value: None
  void* m_pImageData;

  /// @brief Field m_nWidth, offset: 0x8, size: 0x4, def value: None
  int32_t m_nWidth;

  /// @brief Field m_nHeight, offset: 0xc, size: 0x4, def value: None
  int32_t m_nHeight;

  /// @brief Field m_nBytesPerPixel, offset: 0x10, size: 0x4, def value: None
  int32_t m_nBytesPerPixel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::NotificationBitmap_t, 0x18>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::NotificationBitmap_t, "OVR.OpenVR", "NotificationBitmap_t");
