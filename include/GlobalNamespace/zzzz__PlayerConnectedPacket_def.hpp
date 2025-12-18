#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerConnectedPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnectedPacket)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
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
// Forward declare root types
namespace GlobalNamespace {
class PlayerConnectedPacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerConnectedPacket);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerConnectedPacket
class CORDL_TYPE PlayerConnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field compatibilityVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_compatibilityVersion, put = __cordl_internal_set_compatibilityVersion)) ::StringW compatibilityVersion;

  /// @brief Field isConnectionOwner, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectionOwner, put = __cordl_internal_set_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Field remoteConnectionId, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_remoteConnectionId, put = __cordl_internal_set_remoteConnectionId)) uint8_t remoteConnectionId;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Field userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x3231ef8, size 0x78, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x3231fc8, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerConnectedPacket* Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner, ::StringW compatibilityVersion);

  static inline ::GlobalNamespace::PlayerConnectedPacket* New_ctor();

  /// @brief Method Release, addr 0x3231f70, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x3231e88, size 0x70, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_compatibilityVersion() const;

  constexpr ::StringW& __cordl_internal_get_compatibilityVersion();

  constexpr bool const& __cordl_internal_get_isConnectionOwner() const;

  constexpr bool& __cordl_internal_get_isConnectionOwner();

  constexpr uint8_t const& __cordl_internal_get_remoteConnectionId() const;

  constexpr uint8_t& __cordl_internal_get_remoteConnectionId();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_compatibilityVersion(::StringW value);

  constexpr void __cordl_internal_set_isConnectionOwner(bool value);

  constexpr void __cordl_internal_set_remoteConnectionId(uint8_t value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x3231fdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x3231e44, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerConnectedPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerConnectedPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerConnectedPacket(PlayerConnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerConnectedPacket(PlayerConnectedPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18093 };

  /// @brief Field remoteConnectionId, offset: 0x10, size: 0x1, def value: None
  uint8_t ___remoteConnectionId;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field isConnectionOwner, offset: 0x28, size: 0x1, def value: None
  bool ___isConnectionOwner;

  /// @brief Field compatibilityVersion, offset: 0x30, size: 0x8, def value: None
  ::StringW ___compatibilityVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerConnectedPacket, ___remoteConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerConnectedPacket, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerConnectedPacket, ___userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerConnectedPacket, ___isConnectionOwner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerConnectedPacket, ___compatibilityVersion) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerConnectedPacket, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerConnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerConnectedPacket*, "", "PlayerConnectedPacket");
