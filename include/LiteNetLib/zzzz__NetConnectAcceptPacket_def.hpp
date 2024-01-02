#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectAcceptPacket)
namespace LiteNetLib {
class NetPacket;
}
// Forward declare root types
namespace LiteNetLib {
class NetConnectAcceptPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetConnectAcceptPacket);
// Type: LiteNetLib::NetConnectAcceptPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14171))
// CS Name: ::LiteNetLib::NetConnectAcceptPacket*
class CORDL_TYPE NetConnectAcceptPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionId, offset 0x10, size 0x8
  __declspec(property(get = __get_ConnectionId, put = __set_ConnectionId)) int64_t ConnectionId;

  /// @brief Field ConnectionNumber, offset 0x18, size 0x1
  __declspec(property(get = __get_ConnectionNumber, put = __set_ConnectionNumber)) uint8_t ConnectionNumber;

  /// @brief Field IsReusedPeer, offset 0x19, size 0x1
  __declspec(property(get = __get_IsReusedPeer, put = __set_IsReusedPeer)) bool IsReusedPeer;

  constexpr int64_t& __get_ConnectionId();

  constexpr int64_t const& __get_ConnectionId() const;

  constexpr void __set_ConnectionId(int64_t value);

  constexpr uint8_t& __get_ConnectionNumber();

  constexpr uint8_t const& __get_ConnectionNumber() const;

  constexpr void __set_ConnectionNumber(uint8_t value);

  constexpr bool& __get_IsReusedPeer();

  constexpr bool const& __get_IsReusedPeer() const;

  constexpr void __set_IsReusedPeer(bool value);

  static inline ::LiteNetLib::NetConnectAcceptPacket* New_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer);

  /// @brief Method .ctor, addr 0x22031e8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer);

  /// @brief Method FromData, addr 0x21fff70, size 0x108, virtual false, abstract: false, final false
  static inline ::LiteNetLib::NetConnectAcceptPacket* FromData(::LiteNetLib::NetPacket* packet);

  /// @brief Method Make, addr 0x2203228, size 0xbc, virtual false, abstract: false, final false
  static inline ::LiteNetLib::NetPacket* Make(int64_t connectId, uint8_t connectNum, bool reusedPeer);

  // Ctor Parameters [CppParam { name: "", ty: "NetConnectAcceptPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetConnectAcceptPacket(NetConnectAcceptPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetConnectAcceptPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetConnectAcceptPacket(NetConnectAcceptPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetConnectAcceptPacket();

public:
  /// @brief Field ConnectionId, offset: 0x10, size: 0x8, def value: None
  int64_t ___ConnectionId;

  /// @brief Field ConnectionNumber, offset: 0x18, size: 0x1, def value: None
  uint8_t ___ConnectionNumber;

  /// @brief Field IsReusedPeer, offset: 0x19, size: 0x1, def value: None
  bool ___IsReusedPeer;

  /// @brief Field Size offset 0xffffffff size 0x4
  static constexpr int32_t Size{ static_cast<int32_t>(0xb) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetConnectAcceptPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectAcceptPacket, ___ConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectAcceptPacket, ___ConnectionNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectAcceptPacket, ___IsReusedPeer) == 0x19, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetConnectAcceptPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConnectAcceptPacket*, "LiteNetLib", "NetConnectAcceptPacket");
