#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETextureType.hpp"
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
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.ETextureType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ETextureType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ETextureType(int32_t value__) noexcept;

  /// @brief Field DXGISharedHandle value: I32(5)
  static ::OVR::OpenVR::ETextureType const DXGISharedHandle;

  /// @brief Field DirectX value: I32(0)
  static ::OVR::OpenVR::ETextureType const DirectX;

  /// @brief Field DirectX12 value: I32(4)
  static ::OVR::OpenVR::ETextureType const DirectX12;

  /// @brief Field IOSurface value: I32(3)
  static ::OVR::OpenVR::ETextureType const IOSurface;

  /// @brief Field Invalid value: I32(-1)
  static ::OVR::OpenVR::ETextureType const Invalid;

  /// @brief Field Metal value: I32(6)
  static ::OVR::OpenVR::ETextureType const Metal;

  /// @brief Field OpenGL value: I32(1)
  static ::OVR::OpenVR::ETextureType const OpenGL;

  /// @brief Field Vulkan value: I32(2)
  static ::OVR::OpenVR::ETextureType const Vulkan;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::ETextureType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETextureType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETextureType, "OVR.OpenVR", "ETextureType");
