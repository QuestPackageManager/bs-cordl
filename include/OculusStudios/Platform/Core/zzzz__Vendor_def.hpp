#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/Vendor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vendor)
// Forward declare root types
namespace OculusStudios::Platform::Core {
struct Vendor;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Core::Vendor);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.Vendor
struct CORDL_TYPE Vendor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __Vendor_Unwrapped
  enum struct __Vendor_Unwrapped : uint8_t {
    __E_Unknown = static_cast<uint8_t>(0x0u),
    __E_Valve = static_cast<uint8_t>(0x1u),
    __E_Meta = static_cast<uint8_t>(0x2u),
    __E_Sony = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Vendor_Unwrapped() const noexcept {
    return static_cast<__Vendor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vendor();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr Vendor(uint8_t value__) noexcept;

  /// @brief Field Meta value: U8(2)
  static ::OculusStudios::Platform::Core::Vendor const Meta;

  /// @brief Field Sony value: U8(3)
  static ::OculusStudios::Platform::Core::Vendor const Sony;

  /// @brief Field Unknown value: U8(0)
  static ::OculusStudios::Platform::Core::Vendor const Unknown;

  /// @brief Field Valve value: U8(1)
  static ::OculusStudios::Platform::Core::Vendor const Valve;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::Vendor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::Vendor, 0x1>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::Vendor, "OculusStudios.Platform.Core", "Vendor");
