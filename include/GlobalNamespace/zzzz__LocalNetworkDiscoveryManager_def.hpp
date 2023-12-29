#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalNetworkDiscoveryManager)
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__PeerUpdatedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__BroadcastPacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteResponsePacket;
}
namespace GlobalNamespace {
struct __LocalNetworkDiscoveryManager__PacketType;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteRespondedDelegate;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteRequestPacket;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinRequestedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinRespondedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinRequestPacket;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteRequestedDelegate;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System::Net {
class IPAddress;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinResponsePacket;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LocalNetworkDiscoveryManager__PacketType;
}
namespace GlobalNamespace {
class LocalNetworkDiscoveryManager;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__BroadcastPacket;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteRequestPacket;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteRequestedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteRespondedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__InviteResponsePacket;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinRequestPacket;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinRequestedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinRespondedDelegate;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__JoinResponsePacket;
}
namespace GlobalNamespace {
class __LocalNetworkDiscoveryManager__PeerUpdatedDelegate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType);
MARK_REF_PTR_T(::GlobalNamespace::LocalNetworkDiscoveryManager);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket);
MARK_REF_PTR_T(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate);
// Type: ::PacketType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4544))
// CS Name: ::LocalNetworkDiscoveryManager::PacketType
struct CORDL_TYPE __LocalNetworkDiscoveryManager__PacketType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____LocalNetworkDiscoveryManager__PacketType_Unwrapped
  enum struct ____LocalNetworkDiscoveryManager__PacketType_Unwrapped : uint8_t {
    __E_Broadcast = static_cast<uint8_t>(0x0u),
    __E_JoinRequest = static_cast<uint8_t>(0x1u),
    __E_JoinResponse = static_cast<uint8_t>(0x2u),
    __E_InviteRequest = static_cast<uint8_t>(0x3u),
    __E_InviteResponse = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LocalNetworkDiscoveryManager__PacketType_Unwrapped() const noexcept {
    return static_cast<____LocalNetworkDiscoveryManager__PacketType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __LocalNetworkDiscoveryManager__PacketType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__PacketType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Broadcast value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType const Broadcast;

  /// @brief Field JoinRequest value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType const JoinRequest;

  /// @brief Field JoinResponse value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType const JoinResponse;

  /// @brief Field InviteRequest value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType const InviteRequest;

  /// @brief Field InviteResponse value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType const InviteResponse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BroadcastPacket
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4545))
// CS Name: ::LocalNetworkDiscoveryManager::BroadcastPacket*
class CORDL_TYPE __LocalNetworkDiscoveryManager__BroadcastPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) uint32_t version;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x20, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Field currentPartySize, offset 0x28, size 0x4
  __declspec(property(get = __get_currentPartySize, put = __set_currentPartySize)) int32_t currentPartySize;

  /// @brief Field isPartyOwner, offset 0x2c, size 0x1
  __declspec(property(get = __get_isPartyOwner, put = __set_isPartyOwner)) bool isPartyOwner;

  /// @brief Field selectionMask, offset 0x30, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x48, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr uint32_t& __get_version();

  constexpr uint32_t const& __get_version() const;

  constexpr void __set_version(uint32_t value);

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  constexpr int32_t& __get_currentPartySize();

  constexpr int32_t const& __get_currentPartySize() const;

  constexpr void __set_currentPartySize(int32_t value);

  constexpr bool& __get_isPartyOwner();

  constexpr bool const& __get_isPartyOwner() const;

  constexpr void __set_isPartyOwner(bool value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method Serialize addr 0x2217dc0 size 0x98 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x2217e58 size 0xd4 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* New_ctor();

  /// @brief Method .ctor addr 0x2217b3c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__BroadcastPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__BroadcastPacket(__LocalNetworkDiscoveryManager__BroadcastPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__BroadcastPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__BroadcastPacket(__LocalNetworkDiscoveryManager__BroadcastPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__BroadcastPacket();

public:
  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  uint32_t ___version;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field currentPartySize, offset: 0x28, size: 0x4, def value: None
  int32_t ___currentPartySize;

  /// @brief Field isPartyOwner, offset: 0x2c, size: 0x1, def value: None
  bool ___isPartyOwner;

  /// @brief Field selectionMask, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___currentPartySize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___isPartyOwner) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___selectionMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket, ___configuration) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::JoinRequestPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4546))
// CS Name: ::LocalNetworkDiscoveryManager::JoinRequestPacket*
class CORDL_TYPE __LocalNetworkDiscoveryManager__JoinRequestPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x18, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  /// @brief Method Serialize addr 0x2217f2c size 0x40 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x2217f6c size 0x44 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket* New_ctor();

  /// @brief Method .ctor addr 0x2217504 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinRequestPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__JoinRequestPacket(__LocalNetworkDiscoveryManager__JoinRequestPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinRequestPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__JoinRequestPacket(__LocalNetworkDiscoveryManager__JoinRequestPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__JoinRequestPacket();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket, ___userName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::JoinResponsePacket
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4547))
// CS Name: ::LocalNetworkDiscoveryManager::JoinResponsePacket*
class CORDL_TYPE __LocalNetworkDiscoveryManager__JoinResponsePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field secret, offset 0x18, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::StringW secret;

  /// @brief Field multiplayerPort, offset 0x20, size 0x4
  __declspec(property(get = __get_multiplayerPort, put = __set_multiplayerPort)) int32_t multiplayerPort;

  /// @brief Field blocked, offset 0x24, size 0x1
  __declspec(property(get = __get_blocked, put = __set_blocked)) bool blocked;

  /// @brief Field isPartyOwner, offset 0x25, size 0x1
  __declspec(property(get = __get_isPartyOwner, put = __set_isPartyOwner)) bool isPartyOwner;

  /// @brief Field selectionMask, offset 0x28, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x40, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_secret();

  constexpr ::StringW const& __get_secret() const;

  constexpr void __set_secret(::StringW value);

  constexpr int32_t& __get_multiplayerPort();

  constexpr int32_t const& __get_multiplayerPort() const;

  constexpr void __set_multiplayerPort(int32_t value);

  constexpr bool& __get_blocked();

  constexpr bool const& __get_blocked() const;

  constexpr void __set_blocked(bool value);

  constexpr bool& __get_isPartyOwner();

  constexpr bool const& __get_isPartyOwner() const;

  constexpr void __set_isPartyOwner(bool value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method Serialize addr 0x2217fb0 size 0x94 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x2218044 size 0xd8 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket* New_ctor();

  /// @brief Method .ctor addr 0x221765c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinResponsePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__JoinResponsePacket(__LocalNetworkDiscoveryManager__JoinResponsePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinResponsePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__JoinResponsePacket(__LocalNetworkDiscoveryManager__JoinResponsePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__JoinResponsePacket();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field secret, offset: 0x18, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field multiplayerPort, offset: 0x20, size: 0x4, def value: None
  int32_t ___multiplayerPort;

  /// @brief Field blocked, offset: 0x24, size: 0x1, def value: None
  bool ___blocked;

  /// @brief Field isPartyOwner, offset: 0x25, size: 0x1, def value: None
  bool ___isPartyOwner;

  /// @brief Field selectionMask, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___secret) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___multiplayerPort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___blocked) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___isPartyOwner) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___selectionMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket, ___configuration) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InviteRequestPacket
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(12687)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4548))
// CS Name: ::LocalNetworkDiscoveryManager::InviteRequestPacket*
class CORDL_TYPE __LocalNetworkDiscoveryManager__InviteRequestPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x18, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Field secret, offset 0x20, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::StringW secret;

  /// @brief Field multiplayerPort, offset 0x28, size 0x4
  __declspec(property(get = __get_multiplayerPort, put = __set_multiplayerPort)) int32_t multiplayerPort;

  /// @brief Field isPartyOwner, offset 0x2c, size 0x1
  __declspec(property(get = __get_isPartyOwner, put = __set_isPartyOwner)) bool isPartyOwner;

  /// @brief Field selectionMask, offset 0x30, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x48, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  constexpr ::StringW& __get_secret();

  constexpr ::StringW const& __get_secret() const;

  constexpr void __set_secret(::StringW value);

  constexpr int32_t& __get_multiplayerPort();

  constexpr int32_t const& __get_multiplayerPort() const;

  constexpr void __set_multiplayerPort(int32_t value);

  constexpr bool& __get_isPartyOwner();

  constexpr bool const& __get_isPartyOwner() const;

  constexpr void __set_isPartyOwner(bool value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method Serialize addr 0x221811c size 0x94 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x22181b0 size 0xd4 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket* New_ctor();

  /// @brief Method .ctor addr 0x22177ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteRequestPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__InviteRequestPacket(__LocalNetworkDiscoveryManager__InviteRequestPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteRequestPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__InviteRequestPacket(__LocalNetworkDiscoveryManager__InviteRequestPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__InviteRequestPacket();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field secret, offset: 0x20, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field multiplayerPort, offset: 0x28, size: 0x4, def value: None
  int32_t ___multiplayerPort;

  /// @brief Field isPartyOwner, offset: 0x2c, size: 0x1, def value: None
  bool ___isPartyOwner;

  /// @brief Field selectionMask, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___secret) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___multiplayerPort) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___isPartyOwner) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___selectionMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket, ___configuration) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InviteResponsePacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4549))
// CS Name: ::LocalNetworkDiscoveryManager::InviteResponsePacket*
class CORDL_TYPE __LocalNetworkDiscoveryManager__InviteResponsePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field accepted, offset 0x18, size 0x1
  __declspec(property(get = __get_accepted, put = __set_accepted)) bool accepted;

  /// @brief Field blocked, offset 0x19, size 0x1
  __declspec(property(get = __get_blocked, put = __set_blocked)) bool blocked;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr bool& __get_accepted();

  constexpr bool const& __get_accepted() const;

  constexpr void __set_accepted(bool value);

  constexpr bool& __get_blocked();

  constexpr bool const& __get_blocked() const;

  constexpr void __set_blocked(bool value);

  /// @brief Method Serialize addr 0x2218284 size 0x50 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x22182d4 size 0x5c virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket* New_ctor();

  /// @brief Method .ctor addr 0x22178c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteResponsePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__InviteResponsePacket(__LocalNetworkDiscoveryManager__InviteResponsePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteResponsePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__InviteResponsePacket(__LocalNetworkDiscoveryManager__InviteResponsePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__InviteResponsePacket();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field accepted, offset: 0x18, size: 0x1, def value: None
  bool ___accepted;

  /// @brief Field blocked, offset: 0x19, size: 0x1, def value: None
  bool ___blocked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket, ___accepted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket, ___blocked) == 0x19, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PeerUpdatedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4550))
// CS Name: ::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*
class CORDL_TYPE __LocalNetworkDiscoveryManager__PeerUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2218330 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2218408 size 0x58 virtual true final false
  inline void Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, int32_t currentPartySize, bool isPartyOwner,
                     ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method BeginInvoke addr 0x2218460 size 0x134 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, int32_t currentPartySize, bool isPartyOwner,
                                             ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2218594 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__PeerUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__PeerUpdatedDelegate(__LocalNetworkDiscoveryManager__PeerUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__PeerUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__PeerUpdatedDelegate(__LocalNetworkDiscoveryManager__PeerUpdatedDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__PeerUpdatedDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::JoinRequestedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4551))
// CS Name: ::LocalNetworkDiscoveryManager::JoinRequestedDelegate*
class CORDL_TYPE __LocalNetworkDiscoveryManager__JoinRequestedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x22185a0 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2218678 size 0x14 virtual true final false
  inline void Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName);

  /// @brief Method BeginInvoke addr 0x221868c size 0x2c virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x22186b8 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinRequestedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__JoinRequestedDelegate(__LocalNetworkDiscoveryManager__JoinRequestedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinRequestedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__JoinRequestedDelegate(__LocalNetworkDiscoveryManager__JoinRequestedDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__JoinRequestedDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::JoinRespondedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4552))
// CS Name: ::LocalNetworkDiscoveryManager::JoinRespondedDelegate*
class CORDL_TYPE __LocalNetworkDiscoveryManager__JoinRespondedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x22186c4 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x221879c size 0x5c virtual true final false
  inline void Invoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                     ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method BeginInvoke addr 0x22187f8 size 0x148 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                             ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2218940 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinRespondedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__JoinRespondedDelegate(__LocalNetworkDiscoveryManager__JoinRespondedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__JoinRespondedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__JoinRespondedDelegate(__LocalNetworkDiscoveryManager__JoinRespondedDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__JoinRespondedDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InviteRequestedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4553))
// CS Name: ::LocalNetworkDiscoveryManager::InviteRequestedDelegate*
class CORDL_TYPE __LocalNetworkDiscoveryManager__InviteRequestedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x221894c size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2218a24 size 0x5c virtual true final false
  inline void Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner,
                     ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method BeginInvoke addr 0x2218a80 size 0x138 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner,
                                             ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2218bb8 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteRequestedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__InviteRequestedDelegate(__LocalNetworkDiscoveryManager__InviteRequestedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteRequestedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__InviteRequestedDelegate(__LocalNetworkDiscoveryManager__InviteRequestedDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__InviteRequestedDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InviteRespondedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4554))
// CS Name: ::LocalNetworkDiscoveryManager::InviteRespondedDelegate*
class CORDL_TYPE __LocalNetworkDiscoveryManager__InviteRespondedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2218bc4 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2218c9c size 0x1c virtual true final false
  inline void Invoke(::StringW userId, bool accepted, bool blocked);

  /// @brief Method BeginInvoke addr 0x2218cb8 size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userId, bool accepted, bool blocked, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2218d6c size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteRespondedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalNetworkDiscoveryManager__InviteRespondedDelegate(__LocalNetworkDiscoveryManager__InviteRespondedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalNetworkDiscoveryManager__InviteRespondedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalNetworkDiscoveryManager__InviteRespondedDelegate(__LocalNetworkDiscoveryManager__InviteRespondedDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalNetworkDiscoveryManager__InviteRespondedDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalNetworkDiscoveryManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4555))
// CS Name: ::LocalNetworkDiscoveryManager*
class CORDL_TYPE LocalNetworkDiscoveryManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InviteRespondedDelegate = ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate;

  using InviteRequestedDelegate = ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate;

  using JoinRespondedDelegate = ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate;

  using JoinRequestedDelegate = ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate;

  using PeerUpdatedDelegate = ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate;

  using InviteResponsePacket = ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket;

  using InviteRequestPacket = ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket;

  using JoinResponsePacket = ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket;

  using JoinRequestPacket = ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket;

  using BroadcastPacket = ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket;

  using PacketType = ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType;

  /// @brief Field peerUpdatedEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_peerUpdatedEvent, put = __set_peerUpdatedEvent))::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* peerUpdatedEvent;

  /// @brief Field joinRequestedEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_joinRequestedEvent, put = __set_joinRequestedEvent))::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* joinRequestedEvent;

  /// @brief Field joinRespondedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_joinRespondedEvent, put = __set_joinRespondedEvent))::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* joinRespondedEvent;

  /// @brief Field inviteRequestedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_inviteRequestedEvent, put = __set_inviteRequestedEvent))::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* inviteRequestedEvent;

  /// @brief Field inviteRespondedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_inviteRespondedEvent, put = __set_inviteRespondedEvent))::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* inviteRespondedEvent;

  /// @brief Field _netManager, offset 0x40, size 0x8
  __declspec(property(get = __get__netManager, put = __set__netManager))::LiteNetLib::NetManager* _netManager;

  /// @brief Field _packetSerializer, offset 0x48, size 0x8
  __declspec(property(
      get = __get__packetSerializer,
      put = __set__packetSerializer))::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>* _packetSerializer;

  /// @brief Field _netDataWriter, offset 0x50, size 0x8
  __declspec(property(get = __get__netDataWriter, put = __set__netDataWriter))::LiteNetLib::Utils::NetDataWriter* _netDataWriter;

  /// @brief Field _broadcastPacket, offset 0x58, size 0x8
  __declspec(property(get = __get__broadcastPacket, put = __set__broadcastPacket))::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* _broadcastPacket;

  /// @brief Field _discoveryPort, offset 0x60, size 0x4
  __declspec(property(get = __get__discoveryPort, put = __set__discoveryPort)) int32_t _discoveryPort;

  /// @brief Field _initialized, offset 0x64, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _enableBroadcasting, offset 0x65, size 0x1
  __declspec(property(get = __get__enableBroadcasting, put = __set__enableBroadcasting)) bool _enableBroadcasting;

  /// @brief Field _lastBroadcastTime, offset 0x68, size 0x4
  __declspec(property(get = __get__lastBroadcastTime, put = __set__lastBroadcastTime)) float_t _lastBroadcastTime;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isPartyOwner, put = set_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_currentPartySize, put = set_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_configuration, put = set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_selectionMask, put = set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_enableBroadcasting, put = set_enableBroadcasting)) bool enableBroadcasting;

  /// @brief Convert operator to "::LiteNetLib::INetEventListener"
  constexpr operator ::LiteNetLib::INetEventListener*() noexcept;

  constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*& __get_peerUpdatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*> const& __get_peerUpdatedEvent() const;

  constexpr void __set_peerUpdatedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* value);

  constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*& __get_joinRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*> const& __get_joinRequestedEvent() const;

  constexpr void __set_joinRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* value);

  constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*& __get_joinRespondedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*> const& __get_joinRespondedEvent() const;

  constexpr void __set_joinRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* value);

  constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*& __get_inviteRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*> const& __get_inviteRequestedEvent() const;

  constexpr void __set_inviteRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* value);

  constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*& __get_inviteRespondedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*> const& __get_inviteRespondedEvent() const;

  constexpr void __set_inviteRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* value);

  constexpr ::LiteNetLib::NetManager*& __get__netManager();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& __get__netManager() const;

  constexpr void __set__netManager(::LiteNetLib::NetManager* value);

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>*& __get__packetSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>*> const&
  __get__packetSerializer() const;

  constexpr void __set__packetSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__netDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__netDataWriter() const;

  constexpr void __set__netDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*& __get__broadcastPacket();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*> const& __get__broadcastPacket() const;

  constexpr void __set__broadcastPacket(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* value);

  constexpr int32_t& __get__discoveryPort();

  constexpr int32_t const& __get__discoveryPort() const;

  constexpr void __set__discoveryPort(int32_t value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr bool& __get__enableBroadcasting();

  constexpr bool const& __get__enableBroadcasting() const;

  constexpr void __set__enableBroadcasting(bool value);

  constexpr float_t& __get__lastBroadcastTime();

  constexpr float_t const& __get__lastBroadcastTime() const;

  constexpr void __set__lastBroadcastTime(float_t value);

  /// @brief Method add_peerUpdatedEvent addr 0x221678c size 0x9c virtual false final false
  inline void add_peerUpdatedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* value);

  /// @brief Method remove_peerUpdatedEvent addr 0x2216828 size 0x9c virtual false final false
  inline void remove_peerUpdatedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* value);

  /// @brief Method add_joinRequestedEvent addr 0x22168c4 size 0x9c virtual false final false
  inline void add_joinRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* value);

  /// @brief Method remove_joinRequestedEvent addr 0x2216960 size 0x9c virtual false final false
  inline void remove_joinRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* value);

  /// @brief Method add_joinRespondedEvent addr 0x22169fc size 0x9c virtual false final false
  inline void add_joinRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* value);

  /// @brief Method remove_joinRespondedEvent addr 0x2216a98 size 0x9c virtual false final false
  inline void remove_joinRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* value);

  /// @brief Method add_inviteRequestedEvent addr 0x2216b34 size 0x9c virtual false final false
  inline void add_inviteRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* value);

  /// @brief Method remove_inviteRequestedEvent addr 0x2216bd0 size 0x9c virtual false final false
  inline void remove_inviteRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* value);

  /// @brief Method add_inviteRespondedEvent addr 0x2216c6c size 0x9c virtual false final false
  inline void add_inviteRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* value);

  /// @brief Method remove_inviteRespondedEvent addr 0x2216d08 size 0x9c virtual false final false
  inline void remove_inviteRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* value);

  /// @brief Method get_userId addr 0x2216da4 size 0x1c virtual false final false
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x2216dc0 size 0x1c virtual false final false
  inline ::StringW get_userName();

  /// @brief Method get_isPartyOwner addr 0x2216ddc size 0x1c virtual false final false
  inline bool get_isPartyOwner();

  /// @brief Method set_isPartyOwner addr 0x2216df8 size 0x34 virtual false final false
  inline void set_isPartyOwner(bool value);

  /// @brief Method get_currentPartySize addr 0x2216e2c size 0x1c virtual false final false
  inline int32_t get_currentPartySize();

  /// @brief Method set_currentPartySize addr 0x2216e48 size 0x30 virtual false final false
  inline void set_currentPartySize(int32_t value);

  /// @brief Method get_configuration addr 0x2216e78 size 0x28 virtual false final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method set_configuration addr 0x2216ea0 size 0x70 virtual false final false
  inline void set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method get_selectionMask addr 0x2216f10 size 0x28 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method set_selectionMask addr 0x2216f38 size 0x94 virtual false final false
  inline void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method get_enableBroadcasting addr 0x2216fcc size 0x8 virtual false final false
  inline bool get_enableBroadcasting();

  /// @brief Method set_enableBroadcasting addr 0x2216fd4 size 0xc virtual false final false
  inline void set_enableBroadcasting(bool value);

  /// @brief Method Init addr 0x2216fe0 size 0x358 virtual false final false
  inline void Init(int32_t discoveryPort, ::StringW initUserId, ::StringW initUserName);

  /// @brief Method OnEnable addr 0x2217338 size 0x14 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x221734c size 0x14 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x2217360 size 0xb8 virtual false final false
  inline void Update();

  /// @brief Method SendJoinRequest addr 0x2217418 size 0xec virtual false final false
  inline void SendJoinRequest(::System::Net::IPAddress* ip);

  /// @brief Method SendJoinResponse addr 0x221750c size 0x150 virtual false final false
  inline void SendJoinResponse(::System::Net::IPAddress* ip, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method SendInviteRequest addr 0x2217664 size 0x148 virtual false final false
  inline void SendInviteRequest(::System::Net::IPAddress* ip, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method SendInviteResponse addr 0x22177b4 size 0x10c virtual false final false
  inline void SendInviteResponse(::System::Net::IPAddress* ip, bool accepted, bool blocked);

  /// @brief Method WritePacket addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::LiteNetLib::Utils::NetDataWriter* WritePacket(T packet);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected addr 0x22178c8 size 0x9c virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                       ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest addr 0x2217964 size 0x18 virtual true final true
  inline void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkError addr 0x221797c size 0xcc virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketErrorCode);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate addr 0x2217a48 size 0x4 virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerConnected addr 0x2217a4c size 0x4 virtual true final true
  inline void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected addr 0x2217a50 size 0x4 virtual true final true
  inline void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive addr 0x2217a54 size 0x4 virtual true final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  static inline ::GlobalNamespace::LocalNetworkDiscoveryManager* New_ctor();

  /// @brief Method .ctor addr 0x2217a58 size 0xe4 virtual false final false
  inline void _ctor();

  /// @brief Method <Init>b__55_0 addr 0x2217b44 size 0xd0 virtual false final false
  inline void _Init_b__55_0(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* packet, ::System::Net::IPEndPoint* endPoint);

  /// @brief Method <Init>b__55_1 addr 0x2217c14 size 0x40 virtual false final false
  inline void _Init_b__55_1(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket* packet, ::System::Net::IPEndPoint* endPoint);

  /// @brief Method <Init>b__55_2 addr 0x2217c54 size 0x94 virtual false final false
  inline void _Init_b__55_2(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket* packet, ::System::Net::IPEndPoint* endPoint);

  /// @brief Method <Init>b__55_3 addr 0x2217ce8 size 0x9c virtual false final false
  inline void _Init_b__55_3(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket* packet, ::System::Net::IPEndPoint* endPoint);

  /// @brief Method <Init>b__55_4 addr 0x2217d84 size 0x3c virtual false final false
  inline void _Init_b__55_4(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket* packet, ::System::Net::IPEndPoint* endPoint);

  // Ctor Parameters [CppParam { name: "", ty: "LocalNetworkDiscoveryManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalNetworkDiscoveryManager(LocalNetworkDiscoveryManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalNetworkDiscoveryManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalNetworkDiscoveryManager(LocalNetworkDiscoveryManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalNetworkDiscoveryManager();

public:
  /// @brief Field peerUpdatedEvent, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* ___peerUpdatedEvent;

  /// @brief Field joinRequestedEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* ___joinRequestedEvent;

  /// @brief Field joinRespondedEvent, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* ___joinRespondedEvent;

  /// @brief Field inviteRequestedEvent, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* ___inviteRequestedEvent;

  /// @brief Field inviteRespondedEvent, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* ___inviteRespondedEvent;

  /// @brief Field _netManager, offset: 0x40, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ____netManager;

  /// @brief Field _packetSerializer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>* ____packetSerializer;

  /// @brief Field _netDataWriter, offset: 0x50, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____netDataWriter;

  /// @brief Field _broadcastPacket, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* ____broadcastPacket;

  /// @brief Field _discoveryPort, offset: 0x60, size: 0x4, def value: None
  int32_t ____discoveryPort;

  /// @brief Field _initialized, offset: 0x64, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _enableBroadcasting, offset: 0x65, size: 0x1, def value: None
  bool ____enableBroadcasting;

  /// @brief Field _lastBroadcastTime, offset: 0x68, size: 0x4, def value: None
  float_t ____lastBroadcastTime;

  /// @brief Field kBroadcastInterval offset 0xffffffff size 0x4
  static constexpr float_t kBroadcastInterval{ 5.0 };

  /// @brief Field kSignature offset 0xffffffff size 0x4
  static constexpr uint32_t kSignature{ static_cast<uint32_t>(0xa754b3f0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalNetworkDiscoveryManager, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ___peerUpdatedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ___joinRequestedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ___joinRespondedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ___inviteRequestedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ___inviteRespondedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____netManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____packetSerializer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____netDataWriter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____broadcastPacket) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____discoveryPort) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____initialized) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____enableBroadcasting) == 0x65, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkDiscoveryManager, ____lastBroadcastTime) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, "", "LocalNetworkDiscoveryManager/PacketType");
NEED_NO_BOX(::GlobalNamespace::LocalNetworkDiscoveryManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkDiscoveryManager*, "", "LocalNetworkDiscoveryManager");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*, "", "LocalNetworkDiscoveryManager/BroadcastPacket");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*, "", "LocalNetworkDiscoveryManager/InviteRequestPacket");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*, "", "LocalNetworkDiscoveryManager/InviteRequestedDelegate");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*, "", "LocalNetworkDiscoveryManager/InviteRespondedDelegate");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*, "", "LocalNetworkDiscoveryManager/InviteResponsePacket");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*, "", "LocalNetworkDiscoveryManager/JoinRequestPacket");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*, "", "LocalNetworkDiscoveryManager/JoinRequestedDelegate");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*, "", "LocalNetworkDiscoveryManager/JoinRespondedDelegate");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*, "", "LocalNetworkDiscoveryManager/JoinResponsePacket");
NEED_NO_BOX(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*, "", "LocalNetworkDiscoveryManager/PeerUpdatedDelegate");
