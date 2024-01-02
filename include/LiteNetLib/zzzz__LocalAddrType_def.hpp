#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalAddrType)
// Forward declare root types
namespace LiteNetLib {
struct LocalAddrType;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::LocalAddrType);
// Type: LiteNetLib::LocalAddrType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14182))
// CS Name: ::LiteNetLib::LocalAddrType
struct CORDL_TYPE LocalAddrType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LocalAddrType_Unwrapped
  enum struct __LocalAddrType_Unwrapped : int32_t {
    __E_IPv4 = static_cast<int32_t>(0x1),
    __E_IPv6 = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LocalAddrType_Unwrapped() const noexcept {
    return static_cast<__LocalAddrType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LocalAddrType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalAddrType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field IPv4 value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::LocalAddrType const IPv4;

  /// @brief Field IPv6 value: static_cast<int32_t>(0x2)
  static ::LiteNetLib::LocalAddrType const IPv6;

  /// @brief Field All value: static_cast<int32_t>(0x3)
  static ::LiteNetLib::LocalAddrType const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::LocalAddrType, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::LocalAddrType, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::LocalAddrType, "LiteNetLib", "LocalAddrType");
