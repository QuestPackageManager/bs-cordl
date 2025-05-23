#pragma once
// IWYU pragma private; include "LiteNetLib/DeliveryMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeliveryMethod)
// Forward declare root types
namespace LiteNetLib {
struct DeliveryMethod;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::DeliveryMethod);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.DeliveryMethod
struct CORDL_TYPE DeliveryMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __DeliveryMethod_Unwrapped
  enum struct __DeliveryMethod_Unwrapped : uint8_t {
    __E_Unreliable = static_cast<uint8_t>(0x4u),
    __E_ReliableUnordered = static_cast<uint8_t>(0x0u),
    __E_Sequenced = static_cast<uint8_t>(0x1u),
    __E_ReliableOrdered = static_cast<uint8_t>(0x2u),
    __E_ReliableSequenced = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DeliveryMethod_Unwrapped() const noexcept {
    return static_cast<__DeliveryMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeliveryMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr DeliveryMethod(uint8_t value__) noexcept;

  /// @brief Field ReliableOrdered value: U8(2)
  static ::LiteNetLib::DeliveryMethod const ReliableOrdered;

  /// @brief Field ReliableSequenced value: U8(3)
  static ::LiteNetLib::DeliveryMethod const ReliableSequenced;

  /// @brief Field ReliableUnordered value: U8(0)
  static ::LiteNetLib::DeliveryMethod const ReliableUnordered;

  /// @brief Field Sequenced value: U8(1)
  static ::LiteNetLib::DeliveryMethod const Sequenced;

  /// @brief Field Unreliable value: U8(4)
  static ::LiteNetLib::DeliveryMethod const Unreliable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16541 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::DeliveryMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::DeliveryMethod, 0x1>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DeliveryMethod, "LiteNetLib", "DeliveryMethod");
