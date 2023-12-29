#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseClientUnconnectedMessageHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftClientMessageHandler)
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__MessageOrigin;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftClientMessageHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameLiftClientMessageHandler);
// Type: ::GameLiftClientMessageHandler
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12951))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12660))
// CS Name: ::GameLiftClientMessageHandler*
class CORDL_TYPE GameLiftClientMessageHandler : public ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler {
public:
  // Declarations
  /// @brief Field _userId, offset 0xb8, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0xc0, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _playerSessionId, offset 0xc8, size 0x8
  __declspec(property(get = __get__playerSessionId, put = __set__playerSessionId))::StringW _playerSessionId;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr ::StringW& __get__playerSessionId();

  constexpr ::StringW const& __get__playerSessionId() const;

  constexpr void __set__playerSessionId(::StringW value);

  static inline ::GlobalNamespace::GameLiftClientMessageHandler* New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint,
                                                                          ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                          ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics);

  /// @brief Method .ctor addr 0xdb0c1c size 0x1c virtual false final false
  inline void _ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint, ::BGNet::Core::ITimeProvider* timeProvider,
                    ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics);

  /// @brief Method RegisterGameLiftMessages addr 0xdb0c38 size 0x424 virtual false final false
  inline void RegisterGameLiftMessages();

  /// @brief Method ShouldHandleMessage addr 0xdb105c size 0xb0 virtual true final false
  inline bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method GetMessageType addr 0xdb110c size 0x7c virtual true final false
  inline uint32_t GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method GetAuthenticationRequest addr 0xdb1188 size 0xb4 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* GetAuthenticationRequest();

  /// @brief Method AuthenticateWithGameLiftServer addr 0xdb123c size 0x10 virtual false final false
  inline ::System::Threading::Tasks::Task* AuthenticateWithGameLiftServer(::StringW userId, ::StringW userName, ::StringW playerSessionId);

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftClientMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftClientMessageHandler(GameLiftClientMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftClientMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftClientMessageHandler(GameLiftClientMessageHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftClientMessageHandler();

public:
  /// @brief Field _userId, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _playerSessionId, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____playerSessionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftClientMessageHandler, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftClientMessageHandler, ____userId) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftClientMessageHandler, ____userName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftClientMessageHandler, ____playerSessionId) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLiftClientMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftClientMessageHandler*, "", "GameLiftClientMessageHandler");
