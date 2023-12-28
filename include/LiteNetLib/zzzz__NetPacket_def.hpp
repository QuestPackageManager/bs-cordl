#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetPacket)
namespace System {
class Object;
}
namespace LiteNetLib {
struct PacketProperty;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetPacket);
// Type: LiteNetLib::NetPacket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14169))
// CS Name: ::LiteNetLib::NetPacket*
class CORDL_TYPE NetPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field RawData, offset 0x10, size 0x8
  __declspec(property(get = __get_RawData, put = __set_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  /// @brief Field Size, offset 0x18, size 0x4
  __declspec(property(get = __get_Size, put = __set_Size)) int32_t Size;

  /// @brief Field UserData, offset 0x20, size 0x8
  __declspec(property(get = __get_UserData, put = __set_UserData))::System::Object* UserData;

  /// @brief Field LastProperty, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LastProperty, put = setStaticF_LastProperty)) int32_t LastProperty;

  __declspec(property(get = get_Property, put = set_Property))::LiteNetLib::PacketProperty Property;

  __declspec(property(get = get_ConnectionNumber, put = set_ConnectionNumber)) uint8_t ConnectionNumber;

  __declspec(property(get = get_Sequence, put = set_Sequence)) uint16_t Sequence;

  __declspec(property(get = get_IsFragmented)) bool IsFragmented;

  __declspec(property(get = get_ChannelId, put = set_ChannelId)) uint8_t ChannelId;

  __declspec(property(get = get_FragmentId, put = set_FragmentId)) uint16_t FragmentId;

  __declspec(property(get = get_FragmentPart, put = set_FragmentPart)) uint16_t FragmentPart;

  __declspec(property(get = get_FragmentsTotal, put = set_FragmentsTotal)) uint16_t FragmentsTotal;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_RawData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_RawData() const;

  constexpr void __set_RawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_Size();

  constexpr int32_t const& __get_Size() const;

  constexpr void __set_Size(int32_t value);

  constexpr ::System::Object*& __get_UserData();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_UserData() const;

  constexpr void __set_UserData(::System::Object* value);

  static inline void setStaticF_LastProperty(int32_t value);

  static inline int32_t getStaticF_LastProperty();

  /// @brief Method get_Property addr 0x21ffbc4 size 0x2c virtual false final false
  inline ::LiteNetLib::PacketProperty get_Property();

  /// @brief Method set_Property addr 0x22017d8 size 0x34 virtual false final false
  inline void set_Property(::LiteNetLib::PacketProperty value);

  /// @brief Method get_ConnectionNumber addr 0x2202b64 size 0x2c virtual false final false
  inline uint8_t get_ConnectionNumber();

  /// @brief Method set_ConnectionNumber addr 0x21ff160 size 0x34 virtual false final false
  inline void set_ConnectionNumber(uint8_t value);

  /// @brief Method get_Sequence addr 0x2202b90 size 0x60 virtual false final false
  inline uint16_t get_Sequence();

  /// @brief Method set_Sequence addr 0x2202bf0 size 0x10 virtual false final false
  inline void set_Sequence(uint16_t value);

  /// @brief Method get_IsFragmented addr 0x2202c04 size 0x30 virtual false final false
  inline bool get_IsFragmented();

  /// @brief Method MarkFragmented addr 0x2202c34 size 0x30 virtual false final false
  inline void MarkFragmented();

  /// @brief Method get_ChannelId addr 0x2202c64 size 0x2c virtual false final false
  inline uint8_t get_ChannelId();

  /// @brief Method set_ChannelId addr 0x2202c90 size 0x2c virtual false final false
  inline void set_ChannelId(uint8_t value);

  /// @brief Method get_FragmentId addr 0x2202cbc size 0x60 virtual false final false
  inline uint16_t get_FragmentId();

  /// @brief Method set_FragmentId addr 0x2202d1c size 0x10 virtual false final false
  inline void set_FragmentId(uint16_t value);

  /// @brief Method get_FragmentPart addr 0x2202d2c size 0x60 virtual false final false
  inline uint16_t get_FragmentPart();

  /// @brief Method set_FragmentPart addr 0x2202d8c size 0x10 virtual false final false
  inline void set_FragmentPart(uint16_t value);

  /// @brief Method get_FragmentsTotal addr 0x2202d9c size 0x60 virtual false final false
  inline uint16_t get_FragmentsTotal();

  /// @brief Method set_FragmentsTotal addr 0x2202dfc size 0x10 virtual false final false
  inline void set_FragmentsTotal(uint16_t value);

  static inline ::LiteNetLib::NetPacket* New_ctor(int32_t size);

  /// @brief Method .ctor addr 0x2202e0c size 0x6c virtual false final false
  inline void _ctor(int32_t size);

  static inline ::LiteNetLib::NetPacket* New_ctor(::LiteNetLib::PacketProperty property, int32_t size);

  /// @brief Method .ctor addr 0x2202e78 size 0xcc virtual false final false
  inline void _ctor(::LiteNetLib::PacketProperty property, int32_t size);

  /// @brief Method GetHeaderSize addr 0x22017ac size 0x2c virtual false final false
  static inline int32_t GetHeaderSize(::LiteNetLib::PacketProperty property);

  /// @brief Method GetHeaderSize addr 0x21fc3cc size 0x88 virtual false final false
  inline int32_t GetHeaderSize();

  /// @brief Method FromBytes addr 0x21ffa98 size 0x12c virtual false final false
  inline bool FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t packetSize);

  // Ctor Parameters [CppParam { name: "", ty: "NetPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacket(NetPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacket(NetPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacket();

public:
  /// @brief Field RawData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___RawData;

  /// @brief Field Size, offset: 0x18, size: 0x4, def value: None
  int32_t ___Size;

  /// @brief Field UserData, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___UserData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPacket, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPacket*, "LiteNetLib", "NetPacket");
