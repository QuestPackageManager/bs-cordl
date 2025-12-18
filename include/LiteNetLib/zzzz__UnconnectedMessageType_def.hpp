#pragma once
// IWYU pragma private; include "LiteNetLib/UnconnectedMessageType.hpp"
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
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.UnconnectedMessageType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnconnectedMessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnconnectedMessageType(int32_t value__) noexcept;

  /// @brief Field BasicMessage value: I32(0)
  static ::LiteNetLib::UnconnectedMessageType const BasicMessage;

  /// @brief Field Broadcast value: I32(1)
  static ::LiteNetLib::UnconnectedMessageType const Broadcast;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19798 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::UnconnectedMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::UnconnectedMessageType, 0x4>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::UnconnectedMessageType, "LiteNetLib", "UnconnectedMessageType");
