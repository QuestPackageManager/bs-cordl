#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NatAddressType)
// Forward declare root types
namespace LiteNetLib {
struct NatAddressType;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::NatAddressType);
// Type: LiteNetLib::NatAddressType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// CS Name: ::LiteNetLib::NatAddressType
struct CORDL_TYPE NatAddressType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NatAddressType_Unwrapped
  enum struct __NatAddressType_Unwrapped : int32_t {
    __E_Internal = static_cast<int32_t>(0x0),
    __E_External = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NatAddressType_Unwrapped() const noexcept {
    return static_cast<__NatAddressType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NatAddressType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NatAddressType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field External value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::NatAddressType const External;

  /// @brief Field Internal value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::NatAddressType const Internal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NatAddressType, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NatAddressType, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatAddressType, "LiteNetLib", "NatAddressType");
