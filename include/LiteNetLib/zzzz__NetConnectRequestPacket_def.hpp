#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectRequestPacket)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Net {
class SocketAddress;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib {
class NetPacket;
}
// Forward declare root types
namespace LiteNetLib {
class NetConnectRequestPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetConnectRequestPacket);
// Type: LiteNetLib::NetConnectRequestPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14170))
// CS Name: ::LiteNetLib::NetConnectRequestPacket*
class CORDL_TYPE NetConnectRequestPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionTime, offset 0x10, size 0x8
  __declspec(property(get = __get_ConnectionTime, put = __set_ConnectionTime)) int64_t ConnectionTime;

  /// @brief Field ConnectionNumber, offset 0x18, size 0x1
  __declspec(property(get = __get_ConnectionNumber, put = __set_ConnectionNumber)) uint8_t ConnectionNumber;

  /// @brief Field TargetAddress, offset 0x20, size 0x8
  __declspec(property(get = __get_TargetAddress, put = __set_TargetAddress))::ArrayW<uint8_t, ::Array<uint8_t>*> TargetAddress;

  /// @brief Field Data, offset 0x28, size 0x8
  __declspec(property(get = __get_Data, put = __set_Data))::LiteNetLib::Utils::NetDataReader* Data;

  constexpr int64_t& __get_ConnectionTime();

  constexpr int64_t const& __get_ConnectionTime() const;

  constexpr void __set_ConnectionTime(int64_t value);

  constexpr uint8_t& __get_ConnectionNumber();

  constexpr uint8_t const& __get_ConnectionNumber() const;

  constexpr void __set_ConnectionNumber(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_TargetAddress();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_TargetAddress() const;

  constexpr void __set_TargetAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::LiteNetLib::Utils::NetDataReader*& __get_Data();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& __get_Data() const;

  constexpr void __set_Data(::LiteNetLib::Utils::NetDataReader* value);

  static inline ::LiteNetLib::NetConnectRequestPacket* New_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> targetAddress,
                                                                ::LiteNetLib::Utils::NetDataReader* data);

  /// @brief Method .ctor, addr 0x220301c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> targetAddress, ::LiteNetLib::Utils::NetDataReader* data);

  /// @brief Method GetProtocolId, addr 0x21ffbf0, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetProtocolId(::LiteNetLib::NetPacket* packet);

  /// @brief Method FromData, addr 0x21ffcfc, size 0x1ac, virtual false, abstract: false, final false
  static inline ::LiteNetLib::NetConnectRequestPacket* FromData(::LiteNetLib::NetPacket* packet);

  /// @brief Method Make, addr 0x22030a0, size 0x144, virtual false, abstract: false, final false
  static inline ::LiteNetLib::NetPacket* Make(::LiteNetLib::Utils::NetDataWriter* connectData, ::System::Net::SocketAddress* addressBytes, int64_t connectId);

  // Ctor Parameters [CppParam { name: "", ty: "NetConnectRequestPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetConnectRequestPacket(NetConnectRequestPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetConnectRequestPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetConnectRequestPacket(NetConnectRequestPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetConnectRequestPacket();

public:
  /// @brief Field ConnectionTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___ConnectionTime;

  /// @brief Field ConnectionNumber, offset: 0x18, size: 0x1, def value: None
  uint8_t ___ConnectionNumber;

  /// @brief Field TargetAddress, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___TargetAddress;

  /// @brief Field Data, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ___Data;

  /// @brief Field HeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t HeaderSize{ static_cast<int32_t>(0xe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetConnectRequestPacket, 0x30>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___ConnectionTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___ConnectionNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___TargetAddress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetConnectRequestPacket, ___Data) == 0x28, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetConnectRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConnectRequestPacket*, "LiteNetLib", "NetConnectRequestPacket");
