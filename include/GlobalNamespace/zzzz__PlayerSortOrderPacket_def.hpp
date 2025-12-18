#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSortOrderPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSortOrderPacket)
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
class PlayerSortOrderPacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSortOrderPacket);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSortOrderPacket
class CORDL_TYPE PlayerSortOrderPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field sortIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sortIndex, put = __cordl_internal_set_sortIndex)) int32_t sortIndex;

  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x3232274, size 0x50, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x323231c, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSortOrderPacket* Init(::StringW userId, int32_t sortIndex);

  static inline ::GlobalNamespace::PlayerSortOrderPacket* New_ctor();

  /// @brief Method Release, addr 0x32322c4, size 0x58, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x3232220, size 0x54, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int32_t const& __cordl_internal_get_sortIndex() const;

  constexpr int32_t& __cordl_internal_get_sortIndex();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_sortIndex(int32_t value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x3232328, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x32321dc, size 0x44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerSortOrderPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSortOrderPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSortOrderPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSortOrderPacket(PlayerSortOrderPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSortOrderPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSortOrderPacket(PlayerSortOrderPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18097 };

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field sortIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___sortIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSortOrderPacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSortOrderPacket, ___sortIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSortOrderPacket, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSortOrderPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSortOrderPacket*, "", "PlayerSortOrderPacket");
