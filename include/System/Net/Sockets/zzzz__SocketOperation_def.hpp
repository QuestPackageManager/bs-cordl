#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketOperation)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOperation;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketOperation);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.SocketOperation
struct CORDL_TYPE SocketOperation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SocketOperation_Unwrapped
  enum struct __SocketOperation_Unwrapped : int32_t {
    __E_Accept = static_cast<int32_t>(0x0),
    __E_Connect = static_cast<int32_t>(0x1),
    __E_Receive = static_cast<int32_t>(0x2),
    __E_ReceiveFrom = static_cast<int32_t>(0x3),
    __E_Send = static_cast<int32_t>(0x4),
    __E_SendTo = static_cast<int32_t>(0x5),
    __E_RecvJustCallback = static_cast<int32_t>(0x6),
    __E_SendJustCallback = static_cast<int32_t>(0x7),
    __E_Disconnect = static_cast<int32_t>(0x8),
    __E_AcceptReceive = static_cast<int32_t>(0x9),
    __E_ReceiveGeneric = static_cast<int32_t>(0xa),
    __E_SendGeneric = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SocketOperation_Unwrapped() const noexcept {
    return static_cast<__SocketOperation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketOperation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SocketOperation(int32_t value__) noexcept;

  /// @brief Field Accept value: I32(0)
  static ::System::Net::Sockets::SocketOperation const Accept;

  /// @brief Field AcceptReceive value: I32(9)
  static ::System::Net::Sockets::SocketOperation const AcceptReceive;

  /// @brief Field Connect value: I32(1)
  static ::System::Net::Sockets::SocketOperation const Connect;

  /// @brief Field Disconnect value: I32(8)
  static ::System::Net::Sockets::SocketOperation const Disconnect;

  /// @brief Field Receive value: I32(2)
  static ::System::Net::Sockets::SocketOperation const Receive;

  /// @brief Field ReceiveFrom value: I32(3)
  static ::System::Net::Sockets::SocketOperation const ReceiveFrom;

  /// @brief Field ReceiveGeneric value: I32(10)
  static ::System::Net::Sockets::SocketOperation const ReceiveGeneric;

  /// @brief Field RecvJustCallback value: I32(6)
  static ::System::Net::Sockets::SocketOperation const RecvJustCallback;

  /// @brief Field Send value: I32(4)
  static ::System::Net::Sockets::SocketOperation const Send;

  /// @brief Field SendGeneric value: I32(11)
  static ::System::Net::Sockets::SocketOperation const SendGeneric;

  /// @brief Field SendJustCallback value: I32(7)
  static ::System::Net::Sockets::SocketOperation const SendJustCallback;

  /// @brief Field SendTo value: I32(5)
  static ::System::Net::Sockets::SocketOperation const SendTo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11758 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketOperation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketOperation, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOperation, "System.Net.Sockets", "SocketOperation");
