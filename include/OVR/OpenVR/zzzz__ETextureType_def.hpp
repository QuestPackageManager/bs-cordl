#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETextureType)
// Forward declare root types
namespace OVR::OpenVR {
struct ETextureType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETextureType);
// Type: OVR.OpenVR::ETextureType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8581))
// CS Name: ::OVR.OpenVR::ETextureType
struct CORDL_TYPE ETextureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ETextureType_Unwrapped
  enum struct __ETextureType_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0xffffffff),
    __E_DirectX = static_cast<int32_t>(0x0),
    __E_OpenGL = static_cast<int32_t>(0x1),
    __E_Vulkan = static_cast<int32_t>(0x2),
    __E_IOSurface = static_cast<int32_t>(0x3),
    __E_DirectX12 = static_cast<int32_t>(0x4),
    __E_DXGISharedHandle = static_cast<int32_t>(0x5),
    __E_Metal = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ETextureType_Unwrapped() const noexcept {
    return static_cast<__ETextureType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ETextureType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ETextureType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0xffffffff)
  static ::OVR::OpenVR::ETextureType const Invalid;

  /// @brief Field DirectX value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::ETextureType const DirectX;

  /// @brief Field OpenGL value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::ETextureType const OpenGL;

  /// @brief Field Vulkan value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::ETextureType const Vulkan;

  /// @brief Field IOSurface value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::ETextureType const IOSurface;

  /// @brief Field DirectX12 value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::ETextureType const DirectX12;

  /// @brief Field DXGISharedHandle value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::ETextureType const DXGISharedHandle;

  /// @brief Field Metal value: static_cast<int32_t>(0x6)
  static ::OVR::OpenVR::ETextureType const Metal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETextureType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETextureType, "OVR.OpenVR", "ETextureType");
