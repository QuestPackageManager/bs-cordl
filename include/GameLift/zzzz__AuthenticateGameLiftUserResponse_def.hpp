#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticateGameLiftUserResponse)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
namespace GameLift {
class IGameLiftServerToClientMessage;
}
namespace GameLift {
class IGameLiftMessage;
}
namespace GameLift {
struct __AuthenticateGameLiftUserResponse__Result;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
// Forward declare root types
namespace GameLift {
struct __AuthenticateGameLiftUserResponse__Result;
}
namespace GameLift {
class AuthenticateGameLiftUserResponse;
}
// Write type traits
MARK_VAL_T(::GameLift::__AuthenticateGameLiftUserResponse__Result);
MARK_REF_PTR_T(::GameLift::AuthenticateGameLiftUserResponse);
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12926))
// CS Name: ::AuthenticateGameLiftUserResponse::Result
struct CORDL_TYPE __AuthenticateGameLiftUserResponse__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AuthenticateGameLiftUserResponse__Result_Unwrapped
  enum struct ____AuthenticateGameLiftUserResponse__Result_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
    __E_UnknownError = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AuthenticateGameLiftUserResponse__Result_Unwrapped() const noexcept {
    return static_cast<____AuthenticateGameLiftUserResponse__Result_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AuthenticateGameLiftUserResponse__Result(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AuthenticateGameLiftUserResponse__Result();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::GameLift::__AuthenticateGameLiftUserResponse__Result const Success;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GameLift::__AuthenticateGameLiftUserResponse__Result const Failed;

  /// @brief Field UnknownError value: static_cast<int32_t>(0x2)
  static ::GameLift::__AuthenticateGameLiftUserResponse__Result const UnknownError;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameLift::__AuthenticateGameLiftUserResponse__Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameLift::__AuthenticateGameLiftUserResponse__Result, value__) == 0x0, "Offset mismatch!");

} // namespace GameLift
// Type: GameLift::AuthenticateGameLiftUserResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(12926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12927))
// CS Name: ::GameLift::AuthenticateGameLiftUserResponse*
class CORDL_TYPE AuthenticateGameLiftUserResponse : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
  using Result = ::GameLift::__AuthenticateGameLiftUserResponse__Result;

  /// @brief Field result, offset 0x18, size 0x4
  __declspec(property(get = __get_result, put = __set_result))::GameLift::__AuthenticateGameLiftUserResponse__Result result;

  __declspec(property(get = get_resultCode)) uint8_t resultCode;

  __declspec(property(get = get_resultCodeString))::StringW resultCodeString;

  __declspec(property(get = get_isAuthenticated)) bool isAuthenticated;

  /// @brief Convert operator to "::GameLift::IGameLiftServerToClientMessage"
  constexpr operator ::GameLift::IGameLiftServerToClientMessage*() noexcept;

  /// @brief Convert operator to "::GameLift::IGameLiftMessage"
  constexpr operator ::GameLift::IGameLiftMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedAuthenticateResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept;

  constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result& __get_result();

  constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result const& __get_result() const;

  constexpr void __set_result(::GameLift::__AuthenticateGameLiftUserResponse__Result value);

  /// @brief Method get_pool addr 0xdd7f84 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserResponse*>* get_pool();

  /// @brief Method get_resultCode addr 0xdd7fc4 size 0x8 virtual true final false
  inline uint8_t get_resultCode();

  /// @brief Method get_resultCodeString addr 0xdd7fcc size 0x68 virtual true final false
  inline ::StringW get_resultCodeString();

  /// @brief Method get_isAuthenticated addr 0xdd8034 size 0x10 virtual true final true
  inline bool get_isAuthenticated();

  /// @brief Method Init addr 0xdd8044 size 0x8 virtual false final false
  inline ::GameLift::AuthenticateGameLiftUserResponse* Init(::GameLift::__AuthenticateGameLiftUserResponse__Result result);

  /// @brief Method Serialize addr 0xdd804c size 0x38 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdd8084 size 0x40 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xdd80c4 size 0x54 virtual true final false
  inline void Release();

  static inline ::GameLift::AuthenticateGameLiftUserResponse* New_ctor();

  /// @brief Method .ctor addr 0xdd8118 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticateGameLiftUserResponse(AuthenticateGameLiftUserResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticateGameLiftUserResponse(AuthenticateGameLiftUserResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticateGameLiftUserResponse();

public:
  /// @brief Field result, offset: 0x18, size: 0x4, def value: None
  ::GameLift::__AuthenticateGameLiftUserResponse__Result ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameLift::AuthenticateGameLiftUserResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::GameLift::AuthenticateGameLiftUserResponse, ___result) == 0x18, "Offset mismatch!");

} // namespace GameLift
DEFINE_IL2CPP_ARG_TYPE(::GameLift::__AuthenticateGameLiftUserResponse__Result, "GameLift", "AuthenticateGameLiftUserResponse/Result");
NEED_NO_BOX(::GameLift::AuthenticateGameLiftUserResponse);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserResponse*, "GameLift", "AuthenticateGameLiftUserResponse");
