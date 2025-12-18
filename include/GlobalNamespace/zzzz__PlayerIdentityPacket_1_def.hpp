#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerIdentityPacket_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerIdentityPacket_1)
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
struct PlayerStateHash;
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
template <typename TGameSpecificIdentityData> class PlayerIdentityPacket_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::PlayerIdentityPacket_1);
// Dependencies PlayerStateHash, System.Object
namespace GlobalNamespace {
// cpp template
template <typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: PlayerIdentityPacket`1<TGameSpecificIdentityData>
class CORDL_TYPE PlayerIdentityPacket_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameSpecificData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gameSpecificData, put = __cordl_internal_set_gameSpecificData)) TGameSpecificIdentityData gameSpecificData;

  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_playerState, put = __cordl_internal_set_playerState)) ::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Field publicEncryptionKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_publicEncryptionKey, put = __cordl_internal_set_publicEncryptionKey)) ::GlobalNamespace::ByteArrayNetSerializable* publicEncryptionKey;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::GlobalNamespace::ByteArrayNetSerializable* random;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* Init(::GlobalNamespace::PlayerStateHash states, ::ArrayW<uint8_t, ::Array<uint8_t>*> random,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, TGameSpecificIdentityData gameSpecificData);

  static inline ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr TGameSpecificIdentityData const& __cordl_internal_get_gameSpecificData() const;

  constexpr TGameSpecificIdentityData& __cordl_internal_get_gameSpecificData();

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get_playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get_playerState();

  constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& __cordl_internal_get_publicEncryptionKey() const;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_publicEncryptionKey();

  constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& __cordl_internal_get_random() const;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_gameSpecificData(TGameSpecificIdentityData value);

  constexpr void __cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr void __cordl_internal_set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr void __cordl_internal_set_random(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerIdentityPacket_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerIdentityPacket_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerIdentityPacket_1(PlayerIdentityPacket_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerIdentityPacket_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerIdentityPacket_1(PlayerIdentityPacket_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18094 };

  /// @brief Field playerState, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ___playerState;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___random;

  /// @brief Field publicEncryptionKey, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___publicEncryptionKey;

  /// @brief Field gameSpecificData, offset: 0x30, size: 0x8, def value: None
  TGameSpecificIdentityData ___gameSpecificData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::PlayerIdentityPacket_1, "", "PlayerIdentityPacket`1");
