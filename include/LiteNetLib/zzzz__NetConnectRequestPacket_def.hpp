#pragma once
// IWYU pragma private; include "LiteNetLib/NetConnectRequestPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectRequestPacket)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class NetPacket;
}
namespace System::Net {
class SocketAddress;
}
// Forward declare root types
namespace LiteNetLib {
class NetConnectRequestPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetConnectRequestPacket);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetConnectRequestPacket
class CORDL_TYPE NetConnectRequestPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionNumber, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_ConnectionNumber, put = __cordl_internal_set_ConnectionNumber)) uint8_t ConnectionNumber;

  /// @brief Field ConnectionTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionTime, put = __cordl_internal_set_ConnectionTime)) int64_t ConnectionTime;

  /// @brief Field Data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::LiteNetLib::Utils::NetDataReader* Data;

  /// @brief Field TargetAddress, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetAddress, put = __cordl_internal_set_TargetAddress)) ::ArrayW<uint8_t, ::Array<uint8_t>*> TargetAddress;

  /// @brief Method FromData, addr 0x3ab32b4, size 0x170, virtual false, abstract: false, final false
  static inline ::LiteNetLib::NetConnectRequestPacket* FromData(::LiteNetLib::NetPacket* packet);

  /// @brief Method GetProtocolId, addr 0x3ab31f0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetProtocolId(::LiteNetLib::NetPacket* packet);

  /// @brief Method Make, addr 0x3ab63e4, size 0x144, virtual false, abstract: false, final false
  static inline ::LiteNetLib::NetPacket* Make(::LiteNetLib::Utils::NetDataWriter* connectData, ::System::Net::SocketAddress* addressBytes, int64_t connectId);

  static inline ::LiteNetLib::NetConnectRequestPacket* New_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> targetAddress,
                                                                ::LiteNetLib::Utils::NetDataReader* data);

  constexpr uint8_t const& __cordl_internal_get_ConnectionNumber() const;

  constexpr uint8_t& __cordl_internal_get_ConnectionNumber();

  constexpr int64_t const& __cordl_internal_get_ConnectionTime() const;

  constexpr int64_t& __cordl_internal_get_ConnectionTime();

  constexpr ::LiteNetLib::Utils::NetDataReader* const& __cordl_internal_get_Data() const;

  constexpr ::LiteNetLib::Utils::NetDataReader*& __cordl_internal_get_Data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_TargetAddress() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_TargetAddress();

  constexpr void __cordl_internal_set_ConnectionNumber(uint8_t value);

  constexpr void __cordl_internal_set_ConnectionTime(int64_t value);

  constexpr void __cordl_internal_set_Data(::LiteNetLib::Utils::NetDataReader* value);

  constexpr void __cordl_internal_set_TargetAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3ab6360, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> targetAddress, ::LiteNetLib::Utils::NetDataReader* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetConnectRequestPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetConnectRequestPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetConnectRequestPacket(NetConnectRequestPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetConnectRequestPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetConnectRequestPacket(NetConnectRequestPacket const&) = delete;

  /// @brief Field HeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t HeaderSize{ static_cast<int32_t>(0xe) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16556 };

  /// @brief Field ConnectionTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___ConnectionTime;

  /// @brief Field ConnectionNumber, offset: 0x18, size: 0x1, def value: None
  uint8_t ___ConnectionNumber;

  /// @brief Field TargetAddress, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___TargetAddress;

  /// @brief Field Data, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___ConnectionTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___ConnectionNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___TargetAddress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___Data) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetConnectRequestPacket, 0x30>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetConnectRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConnectRequestPacket*, "LiteNetLib", "NetConnectRequestPacket");
