#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyMessageHandler)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
class PartyMessageHandler_ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class PartyMessageHandler_ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
struct PartyMessageHandler_MessageType;
}
namespace GlobalNamespace {
class PartyMessageHandler_ServerStatusUpdatedDelegate;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct PartyMessageHandler_MessageType;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace GlobalNamespace {
class PartyMessageHandler_ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class PartyMessageHandler_ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
class PartyMessageHandler_ServerStatusUpdatedDelegate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PartyMessageHandler_MessageType);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PartyMessageHandler/MessageType
struct CORDL_TYPE PartyMessageHandler_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PartyMessageHandler_MessageType_Unwrapped
  enum struct __PartyMessageHandler_MessageType_Unwrapped : int32_t {
    __E_ConnectToMasterServer = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PartyMessageHandler_MessageType_Unwrapped() const noexcept {
    return static_cast<__PartyMessageHandler_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PartyMessageHandler_MessageType(int32_t value__) noexcept;

  /// @brief Field ConnectToMasterServer value: I32(0)
  static ::GlobalNamespace::PartyMessageHandler_MessageType const ConnectToMasterServer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyMessageHandler_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler_MessageType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyMessageHandler/ServerStatusUpdatedDelegate
class CORDL_TYPE PartyMessageHandler_ServerStatusUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x22e1674, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22e1734, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x22e1624, size 0x50, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  static inline ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x22e1598, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler_ServerStatusUpdatedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler_ServerStatusUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyMessageHandler_ServerStatusUpdatedDelegate(PartyMessageHandler_ServerStatusUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler_ServerStatusUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyMessageHandler_ServerStatusUpdatedDelegate(PartyMessageHandler_ServerStatusUpdatedDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyMessageHandler/ConnectToMasterServerDelegate
class CORDL_TYPE PartyMessageHandler_ConnectToMasterServerDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x22e17f0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW secret, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22e1810, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x22e17dc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW secret);

  static inline ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x22e1740, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler_ConnectToMasterServerDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler_ConnectToMasterServerDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyMessageHandler_ConnectToMasterServerDelegate(PartyMessageHandler_ConnectToMasterServerDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler_ConnectToMasterServerDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyMessageHandler_ConnectToMasterServerDelegate(PartyMessageHandler_ConnectToMasterServerDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyMessageHandler/ConnectToMasterServerMessage
class CORDL_TYPE PartyMessageHandler_ConnectToMasterServerMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field secret, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret)) ::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22e1840, size 0x28, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22e14fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* Init(::StringW secret);

  static inline ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* New_ctor();

  /// @brief Method Release, addr 0x22e1544, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22e181c, size 0x24, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_secret(::StringW value);

  /// @brief Method .ctor, addr 0x22e1868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22e12d4, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler_ConnectToMasterServerMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler_ConnectToMasterServerMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyMessageHandler_ConnectToMasterServerMessage(PartyMessageHandler_ConnectToMasterServerMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler_ConnectToMasterServerMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyMessageHandler_ConnectToMasterServerMessage(PartyMessageHandler_ConnectToMasterServerMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14929 };

  /// @brief Field secret, offset: 0x10, size: 0x8, def value: None
  ::StringW ___secret;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage, ___secret) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyMessageHandler
class CORDL_TYPE PartyMessageHandler : public ::System::Object {
public:
  // Declarations
  using ConnectToMasterServerDelegate = ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate;

  using ConnectToMasterServerMessage = ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage;

  using MessageType = ::GlobalNamespace::PartyMessageHandler_MessageType;

  using ServerStatusUpdatedDelegate = ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate;

  /// @brief Field _connectedPlayerManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field _serializer, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__serializer,
      put = __cordl_internal_set__serializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IConnectedPlayer*>* _serializer;

  /// @brief Field connectToMasterServerEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_connectToMasterServerEvent,
                      put = __cordl_internal_set_connectToMasterServerEvent)) ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* connectToMasterServerEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConnectToMasterServer, addr 0x22e1474, size 0x88, virtual false, abstract: false, final false
  inline void ConnectToMasterServer(::StringW secret);

  /// @brief Method Dispose, addr 0x22e1314, size 0x28, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleConnectToMasterServer, addr 0x22e1504, size 0x40, virtual false, abstract: false, final false
  inline void HandleConnectToMasterServer(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* packet);

  static inline ::GlobalNamespace::PartyMessageHandler* New_ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  constexpr ::GlobalNamespace::ConnectedPlayerManager* const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get__serializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__serializer();

  constexpr ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* const& __cordl_internal_get_connectToMasterServerEvent() const;

  constexpr ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*& __cordl_internal_get_connectToMasterServerEvent();

  constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__serializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* value);

  /// @brief Method .ctor, addr 0x22e1168, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method add_connectToMasterServerEvent, addr 0x22e133c, size 0x9c, virtual false, abstract: false, final false
  inline void add_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_connectToMasterServerEvent, addr 0x22e13d8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyMessageHandler(PartyMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyMessageHandler(PartyMessageHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14930 };

  /// @brief Field _serializer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IConnectedPlayer*>* ____serializer;

  /// @brief Field _connectedPlayerManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field connectToMasterServerEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* ___connectToMasterServerEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ____serializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ____connectedPlayerManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ___connectToMasterServerEvent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler_MessageType, "", "PartyMessageHandler/MessageType");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*, "", "PartyMessageHandler/ConnectToMasterServerMessage");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
