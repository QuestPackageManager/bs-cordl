#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
struct __PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ServerStatusUpdatedDelegate;
}
namespace LiteNetLib::Utils {
class INetSerializable;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ServerStatusUpdatedDelegate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PartyMessageHandler__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate);
// Type: ::MessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12814))
// CS Name: ::PartyMessageHandler::MessageType
struct CORDL_TYPE __PartyMessageHandler__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PartyMessageHandler__MessageType_Unwrapped
  enum struct ____PartyMessageHandler__MessageType_Unwrapped : int32_t {
    __E_ConnectToMasterServer = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PartyMessageHandler__MessageType_Unwrapped() const noexcept {
    return static_cast<____PartyMessageHandler__MessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PartyMessageHandler__MessageType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__MessageType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ConnectToMasterServer value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PartyMessageHandler__MessageType const ConnectToMasterServer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__MessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyMessageHandler__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ServerStatusUpdatedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12815))
// CS Name: ::PartyMessageHandler::ServerStatusUpdatedDelegate*
class CORDL_TYPE __PartyMessageHandler__ServerStatusUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xe7c0cc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0xe7c190, size 0x50, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method BeginInvoke, addr 0xe7c1e0, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xe7c2a0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyMessageHandler__ServerStatusUpdatedDelegate(__PartyMessageHandler__ServerStatusUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyMessageHandler__ServerStatusUpdatedDelegate(__PartyMessageHandler__ServerStatusUpdatedDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__ServerStatusUpdatedDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToMasterServerDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12816))
// CS Name: ::PartyMessageHandler::ConnectToMasterServerDelegate*
class CORDL_TYPE __PartyMessageHandler__ConnectToMasterServerDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xe7c2ac, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0xe7c380, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW secret);

  /// @brief Method BeginInvoke, addr 0xe7c394, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW secret, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xe7c3b4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyMessageHandler__ConnectToMasterServerDelegate(__PartyMessageHandler__ConnectToMasterServerDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyMessageHandler__ConnectToMasterServerDelegate(__PartyMessageHandler__ConnectToMasterServerDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__ConnectToMasterServerDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToMasterServerMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12817))
// CS Name: ::PartyMessageHandler::ConnectToMasterServerMessage*
class CORDL_TYPE __PartyMessageHandler__ConnectToMasterServerMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field secret, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret))::StringW secret;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr void __cordl_internal_set_secret(::StringW value);

  /// @brief Method get_pool, addr 0xe7be08, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>* get_pool();

  /// @brief Method Init, addr 0xe7c030, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* Init(::StringW secret);

  /// @brief Method Serialize, addr 0xe7c3c0, size 0x24, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0xe7c3e4, size 0x28, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release, addr 0xe7c078, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  static inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* New_ctor();

  /// @brief Method .ctor, addr 0xe7c40c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyMessageHandler__ConnectToMasterServerMessage(__PartyMessageHandler__ConnectToMasterServerMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyMessageHandler__ConnectToMasterServerMessage(__PartyMessageHandler__ConnectToMasterServerMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__ConnectToMasterServerMessage();

public:
  /// @brief Field secret, offset: 0x10, size: 0x8, def value: None
  ::StringW ___secret;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage, ___secret) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PartyMessageHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12818))
// CS Name: ::PartyMessageHandler*
class CORDL_TYPE PartyMessageHandler : public ::System::Object {
public:
  // Declarations
  using ConnectToMasterServerMessage = ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage;

  using ConnectToMasterServerDelegate = ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate;

  using ServerStatusUpdatedDelegate = ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate;

  using MessageType = ::GlobalNamespace::__PartyMessageHandler__MessageType;

  /// @brief Field _serializer, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__serializer,
      put = __cordl_internal_set__serializer))::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>* _serializer;

  /// @brief Field _connectedPlayerManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field connectToMasterServerEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_connectToMasterServerEvent,
                      put = __cordl_internal_set_connectToMasterServerEvent))::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* connectToMasterServerEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__serializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
  __cordl_internal_get__serializer() const;

  constexpr void __cordl_internal_set__serializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*& __cordl_internal_get_connectToMasterServerEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*> const& __cordl_internal_get_connectToMasterServerEvent() const;

  constexpr void __cordl_internal_set_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* value);

  static inline ::GlobalNamespace::PartyMessageHandler* New_ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method .ctor, addr 0xe7bca0, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method Dispose, addr 0xe7be48, size 0x28, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method add_connectToMasterServerEvent, addr 0xe7be70, size 0x9c, virtual false, abstract: false, final false
  inline void add_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* value);

  /// @brief Method remove_connectToMasterServerEvent, addr 0xe7bf0c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* value);

  /// @brief Method ConnectToMasterServer, addr 0xe7bfa8, size 0x88, virtual false, abstract: false, final false
  inline void ConnectToMasterServer(::StringW secret);

  /// @brief Method HandleConnectToMasterServer, addr 0xe7c038, size 0x40, virtual false, abstract: false, final false
  inline void HandleConnectToMasterServer(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* packet);

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyMessageHandler(PartyMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyMessageHandler(PartyMessageHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler();

public:
  /// @brief Field _serializer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>* ____serializer;

  /// @brief Field _connectedPlayerManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field connectToMasterServerEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* ___connectToMasterServerEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ____serializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ____connectedPlayerManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ___connectToMasterServerEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__MessageType, "", "PartyMessageHandler/MessageType");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*, "", "PartyMessageHandler/ConnectToMasterServerMessage");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
