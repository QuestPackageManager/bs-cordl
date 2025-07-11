#pragma once
// IWYU pragma private; include "LiteNetLib/NetPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetPacket)
namespace LiteNetLib {
struct PacketProperty;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetPacket);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetPacket
class CORDL_TYPE NetPacket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChannelId, put = set_ChannelId)) uint8_t ChannelId;

  __declspec(property(get = get_ConnectionNumber, put = set_ConnectionNumber)) uint8_t ConnectionNumber;

  __declspec(property(get = get_FragmentId, put = set_FragmentId)) uint16_t FragmentId;

  __declspec(property(get = get_FragmentPart, put = set_FragmentPart)) uint16_t FragmentPart;

  __declspec(property(get = get_FragmentsTotal, put = set_FragmentsTotal)) uint16_t FragmentsTotal;

  __declspec(property(get = get_IsFragmented)) bool IsFragmented;

  /// @brief Field LastProperty, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LastProperty, put = setStaticF_LastProperty)) int32_t LastProperty;

  __declspec(property(get = get_Property, put = set_Property)) ::LiteNetLib::PacketProperty Property;

  /// @brief Field RawData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_RawData, put = __cordl_internal_set_RawData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_Sequence, put = set_Sequence)) uint16_t Sequence;

  /// @brief Field Size, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  /// @brief Field UserData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_UserData, put = __cordl_internal_set_UserData)) ::System::Object* UserData;

  /// @brief Method FromBytes, addr 0x3ab3098, size 0x12c, virtual false, abstract: false, final false
  inline bool FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t packetSize);

  /// @brief Method GetHeaderSize, addr 0x3aafa50, size 0x88, virtual false, abstract: false, final false
  inline int32_t GetHeaderSize();

  /// @brief Method GetHeaderSize, addr 0x3ab4c68, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t GetHeaderSize(::LiteNetLib::PacketProperty property);

  /// @brief Method MarkFragmented, addr 0x3ab6068, size 0x30, virtual false, abstract: false, final false
  inline void MarkFragmented();

  static inline ::LiteNetLib::NetPacket* New_ctor(::LiteNetLib::PacketProperty property, int32_t size);

  static inline ::LiteNetLib::NetPacket* New_ctor(int32_t size);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_RawData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_RawData();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr ::System::Object* const& __cordl_internal_get_UserData() const;

  constexpr ::System::Object*& __cordl_internal_get_UserData();

  constexpr void __cordl_internal_set_RawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  constexpr void __cordl_internal_set_UserData(::System::Object* value);

  /// @brief Method .ctor, addr 0x3ab61bc, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::PacketProperty property, int32_t size);

  /// @brief Method .ctor, addr 0x3ab6150, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  static inline int32_t getStaticF_LastProperty();

  /// @brief Method get_ChannelId, addr 0x3ab6098, size 0x2c, virtual false, abstract: false, final false
  inline uint8_t get_ChannelId();

  /// @brief Method get_ConnectionNumber, addr 0x3ab5fec, size 0x2c, virtual false, abstract: false, final false
  inline uint8_t get_ConnectionNumber();

  /// @brief Method get_FragmentId, addr 0x3ab60f0, size 0x10, virtual false, abstract: false, final false
  inline uint16_t get_FragmentId();

  /// @brief Method get_FragmentPart, addr 0x3ab6110, size 0x10, virtual false, abstract: false, final false
  inline uint16_t get_FragmentPart();

  /// @brief Method get_FragmentsTotal, addr 0x3ab6130, size 0x10, virtual false, abstract: false, final false
  inline uint16_t get_FragmentsTotal();

  /// @brief Method get_IsFragmented, addr 0x3ab603c, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsFragmented();

  /// @brief Method get_Property, addr 0x3ab31c4, size 0x2c, virtual false, abstract: false, final false
  inline ::LiteNetLib::PacketProperty get_Property();

  /// @brief Method get_Sequence, addr 0x3ab6018, size 0x10, virtual false, abstract: false, final false
  inline uint16_t get_Sequence();

  static inline void setStaticF_LastProperty(int32_t value);

  /// @brief Method set_ChannelId, addr 0x3ab60c4, size 0x2c, virtual false, abstract: false, final false
  inline void set_ChannelId(uint8_t value);

  /// @brief Method set_ConnectionNumber, addr 0x3ab278c, size 0x34, virtual false, abstract: false, final false
  inline void set_ConnectionNumber(uint8_t value);

  /// @brief Method set_FragmentId, addr 0x3ab6100, size 0x10, virtual false, abstract: false, final false
  inline void set_FragmentId(uint16_t value);

  /// @brief Method set_FragmentPart, addr 0x3ab6120, size 0x10, virtual false, abstract: false, final false
  inline void set_FragmentPart(uint16_t value);

  /// @brief Method set_FragmentsTotal, addr 0x3ab6140, size 0x10, virtual false, abstract: false, final false
  inline void set_FragmentsTotal(uint16_t value);

  /// @brief Method set_Property, addr 0x3ab4c94, size 0x34, virtual false, abstract: false, final false
  inline void set_Property(::LiteNetLib::PacketProperty value);

  /// @brief Method set_Sequence, addr 0x3ab6028, size 0x10, virtual false, abstract: false, final false
  inline void set_Sequence(uint16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacket(NetPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacket(NetPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16555 };

  /// @brief Field RawData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___RawData;

  /// @brief Field Size, offset: 0x18, size: 0x4, def value: None
  int32_t ___Size;

  /// @brief Field UserData, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___UserData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetPacket, ___RawData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacket, ___Size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacket, ___UserData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPacket, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPacket*, "LiteNetLib", "NetPacket");
