#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnconnectedMessageType)
// Forward declare root types
namespace LiteNetLib {
struct UnconnectedMessageType;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::UnconnectedMessageType);
// Type: LiteNetLib::UnconnectedMessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14143))
// CS Name: ::LiteNetLib::UnconnectedMessageType
struct CORDL_TYPE UnconnectedMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnconnectedMessageType_Unwrapped
  enum struct __UnconnectedMessageType_Unwrapped : int32_t {
    __E_BasicMessage = static_cast<int32_t>(0x0),
    __E_Broadcast = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnconnectedMessageType_Unwrapped() const noexcept {
    return static_cast<__UnconnectedMessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnconnectedMessageType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnconnectedMessageType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BasicMessage value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::UnconnectedMessageType const BasicMessage;

  /// @brief Field Broadcast value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::UnconnectedMessageType const Broadcast;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::UnconnectedMessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::UnconnectedMessageType, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::UnconnectedMessageType, "LiteNetLib", "UnconnectedMessageType");
