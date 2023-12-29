#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftMessageType)
// Forward declare root types
namespace GameLift {
struct GameLiftMessageType;
}
// Write type traits
MARK_VAL_T(::GameLift::GameLiftMessageType);
// Type: GameLift::GameLiftMessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12921))
// CS Name: ::GameLift::GameLiftMessageType
struct CORDL_TYPE GameLiftMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameLiftMessageType_Unwrapped
  enum struct __GameLiftMessageType_Unwrapped : int32_t {
    __E_AuthenticateUserRequest = static_cast<int32_t>(0x0),
    __E_AuthenticateUserResponse = static_cast<int32_t>(0x1),
    __E_MessageReceivedAcknowledge = static_cast<int32_t>(0x2),
    __E_MultipartMessage = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameLiftMessageType_Unwrapped() const noexcept {
    return static_cast<__GameLiftMessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameLiftMessageType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftMessageType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AuthenticateUserRequest value: static_cast<int32_t>(0x0)
  static ::GameLift::GameLiftMessageType const AuthenticateUserRequest;

  /// @brief Field AuthenticateUserResponse value: static_cast<int32_t>(0x1)
  static ::GameLift::GameLiftMessageType const AuthenticateUserResponse;

  /// @brief Field MessageReceivedAcknowledge value: static_cast<int32_t>(0x2)
  static ::GameLift::GameLiftMessageType const MessageReceivedAcknowledge;

  /// @brief Field MultipartMessage value: static_cast<int32_t>(0x3)
  static ::GameLift::GameLiftMessageType const MultipartMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameLift::GameLiftMessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameLift::GameLiftMessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GameLift
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMessageType, "GameLift", "GameLiftMessageType");
