#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TEXTURE_DEVICE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::TEXTURE_DEVICE);
// Type: LIV.SDK.Unity::TEXTURE_DEVICE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14978))
// CS Name: ::LIV.SDK.Unity::TEXTURE_DEVICE
struct CORDL_TYPE TEXTURE_DEVICE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __TEXTURE_DEVICE_Unwrapped
  enum struct __TEXTURE_DEVICE_Unwrapped : uint32_t {
    __E_UNDEFINED = static_cast<uint32_t>(0x3020100u),
    __E_RAW = static_cast<uint32_t>(0x4030201u),
    __E_DIRECTX = static_cast<uint32_t>(0x5040302u),
    __E_OPENGL = static_cast<uint32_t>(0x50403u),
    __E_VULKAN = static_cast<uint32_t>(0x1000504u),
    __E_METAL = static_cast<uint32_t>(0x2010005u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TEXTURE_DEVICE_Unwrapped() const noexcept {
    return static_cast<__TEXTURE_DEVICE_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TEXTURE_DEVICE(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TEXTURE_DEVICE();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UNDEFINED value: static_cast<uint32_t>(0x3020100u)
  static ::LIV::SDK::Unity::TEXTURE_DEVICE const UNDEFINED;

  /// @brief Field RAW value: static_cast<uint32_t>(0x4030201u)
  static ::LIV::SDK::Unity::TEXTURE_DEVICE const RAW;

  /// @brief Field DIRECTX value: static_cast<uint32_t>(0x5040302u)
  static ::LIV::SDK::Unity::TEXTURE_DEVICE const DIRECTX;

  /// @brief Field OPENGL value: static_cast<uint32_t>(0x50403u)
  static ::LIV::SDK::Unity::TEXTURE_DEVICE const OPENGL;

  /// @brief Field VULKAN value: static_cast<uint32_t>(0x1000504u)
  static ::LIV::SDK::Unity::TEXTURE_DEVICE const VULKAN;

  /// @brief Field METAL value: static_cast<uint32_t>(0x2010005u)
  static ::LIV::SDK::Unity::TEXTURE_DEVICE const METAL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::TEXTURE_DEVICE, 0x4>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::TEXTURE_DEVICE, value__) == 0x0, "Offset mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_DEVICE, "LIV.SDK.Unity", "TEXTURE_DEVICE");
