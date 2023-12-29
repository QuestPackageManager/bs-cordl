#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandshakeMessageType)
// Forward declare root types
namespace BGNet::Core::Messages {
struct HandshakeMessageType;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::Messages::HandshakeMessageType);
// Type: BGNet.Core.Messages::HandshakeMessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12965))
// CS Name: ::BGNet.Core.Messages::HandshakeMessageType
struct CORDL_TYPE HandshakeMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HandshakeMessageType_Unwrapped
  enum struct __HandshakeMessageType_Unwrapped : int32_t {
    __E_ClientHelloRequest = static_cast<int32_t>(0x0),
    __E_HelloVerifyRequest = static_cast<int32_t>(0x1),
    __E_ClientHelloWithCookieRequest = static_cast<int32_t>(0x2),
    __E_ServerHelloRequest = static_cast<int32_t>(0x3),
    __E_ServerCertificateRequest = static_cast<int32_t>(0x4),
    __E_ClientKeyExchangeRequest = static_cast<int32_t>(0x6),
    __E_ChangeCipherSpecRequest = static_cast<int32_t>(0x7),
    __E_MessageReceivedAcknowledge = static_cast<int32_t>(0x8),
    __E_MultipartMessage = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HandshakeMessageType_Unwrapped() const noexcept {
    return static_cast<__HandshakeMessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HandshakeMessageType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HandshakeMessageType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ClientHelloRequest value: static_cast<int32_t>(0x0)
  static ::BGNet::Core::Messages::HandshakeMessageType const ClientHelloRequest;

  /// @brief Field HelloVerifyRequest value: static_cast<int32_t>(0x1)
  static ::BGNet::Core::Messages::HandshakeMessageType const HelloVerifyRequest;

  /// @brief Field ClientHelloWithCookieRequest value: static_cast<int32_t>(0x2)
  static ::BGNet::Core::Messages::HandshakeMessageType const ClientHelloWithCookieRequest;

  /// @brief Field ServerHelloRequest value: static_cast<int32_t>(0x3)
  static ::BGNet::Core::Messages::HandshakeMessageType const ServerHelloRequest;

  /// @brief Field ServerCertificateRequest value: static_cast<int32_t>(0x4)
  static ::BGNet::Core::Messages::HandshakeMessageType const ServerCertificateRequest;

  /// @brief Field ClientKeyExchangeRequest value: static_cast<int32_t>(0x6)
  static ::BGNet::Core::Messages::HandshakeMessageType const ClientKeyExchangeRequest;

  /// @brief Field ChangeCipherSpecRequest value: static_cast<int32_t>(0x7)
  static ::BGNet::Core::Messages::HandshakeMessageType const ChangeCipherSpecRequest;

  /// @brief Field MessageReceivedAcknowledge value: static_cast<int32_t>(0x8)
  static ::BGNet::Core::Messages::HandshakeMessageType const MessageReceivedAcknowledge;

  /// @brief Field MultipartMessage value: static_cast<int32_t>(0x9)
  static ::BGNet::Core::Messages::HandshakeMessageType const MultipartMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::HandshakeMessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::HandshakeMessageType, value__) == 0x0, "Offset mismatch!");

} // namespace BGNet::Core::Messages
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMessageType, "BGNet.Core.Messages", "HandshakeMessageType");
