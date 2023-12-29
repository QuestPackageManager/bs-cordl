#pragma once
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
// Type: System.Net.Sockets::SocketOperation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8197))
// CS Name: ::System.Net.Sockets::SocketOperation
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SocketOperation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketOperation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Accept value: static_cast<int32_t>(0x0)
  static ::System::Net::Sockets::SocketOperation const Accept;

  /// @brief Field Connect value: static_cast<int32_t>(0x1)
  static ::System::Net::Sockets::SocketOperation const Connect;

  /// @brief Field Receive value: static_cast<int32_t>(0x2)
  static ::System::Net::Sockets::SocketOperation const Receive;

  /// @brief Field ReceiveFrom value: static_cast<int32_t>(0x3)
  static ::System::Net::Sockets::SocketOperation const ReceiveFrom;

  /// @brief Field Send value: static_cast<int32_t>(0x4)
  static ::System::Net::Sockets::SocketOperation const Send;

  /// @brief Field SendTo value: static_cast<int32_t>(0x5)
  static ::System::Net::Sockets::SocketOperation const SendTo;

  /// @brief Field RecvJustCallback value: static_cast<int32_t>(0x6)
  static ::System::Net::Sockets::SocketOperation const RecvJustCallback;

  /// @brief Field SendJustCallback value: static_cast<int32_t>(0x7)
  static ::System::Net::Sockets::SocketOperation const SendJustCallback;

  /// @brief Field Disconnect value: static_cast<int32_t>(0x8)
  static ::System::Net::Sockets::SocketOperation const Disconnect;

  /// @brief Field AcceptReceive value: static_cast<int32_t>(0x9)
  static ::System::Net::Sockets::SocketOperation const AcceptReceive;

  /// @brief Field ReceiveGeneric value: static_cast<int32_t>(0xa)
  static ::System::Net::Sockets::SocketOperation const ReceiveGeneric;

  /// @brief Field SendGeneric value: static_cast<int32_t>(0xb)
  static ::System::Net::Sockets::SocketOperation const SendGeneric;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketOperation, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketOperation, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOperation, "System.Net.Sockets", "SocketOperation");
