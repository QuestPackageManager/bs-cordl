#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseMultipartMessage)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedMultipartMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseMultipartMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseMultipartMessage);
// Type: BGNet.Core.Messages::BaseMultipartMessage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12953))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12952))
// CS Name: ::BGNet.Core.Messages::BaseMultipartMessage*
class CORDL_TYPE BaseMultipartMessage : public ::BGNet::Core::Messages::BaseReliableRequest {
public:
  // Declarations
  /// @brief Field <multipartMessageId>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__multipartMessageId_k__BackingField, put = __set__multipartMessageId_k__BackingField)) uint32_t _multipartMessageId_k__BackingField;

  /// @brief Field <offset>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__offset_k__BackingField, put = __set__offset_k__BackingField)) int32_t _offset_k__BackingField;

  /// @brief Field <length>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__length_k__BackingField, put = __set__length_k__BackingField)) int32_t _length_k__BackingField;

  /// @brief Field <totalLength>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__totalLength_k__BackingField, put = __set__totalLength_k__BackingField)) int32_t _totalLength_k__BackingField;

  /// @brief Field _data, offset 0x28, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  __declspec(property(get = get_multipartMessageId, put = set_multipartMessageId)) uint32_t multipartMessageId;

  __declspec(property(get = get_offset, put = set_offset)) int32_t offset;

  __declspec(property(get = get_length, put = set_length)) int32_t length;

  __declspec(property(get = get_totalLength, put = set_totalLength)) int32_t totalLength;

  __declspec(property(get = get_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMultipartMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMultipartMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr uint32_t& __get__multipartMessageId_k__BackingField();

  constexpr uint32_t const& __get__multipartMessageId_k__BackingField() const;

  constexpr void __set__multipartMessageId_k__BackingField(uint32_t value);

  constexpr int32_t& __get__offset_k__BackingField();

  constexpr int32_t const& __get__offset_k__BackingField() const;

  constexpr void __set__offset_k__BackingField(int32_t value);

  constexpr int32_t& __get__length_k__BackingField();

  constexpr int32_t const& __get__length_k__BackingField() const;

  constexpr void __set__length_k__BackingField(int32_t value);

  constexpr int32_t& __get__totalLength_k__BackingField();

  constexpr int32_t const& __get__totalLength_k__BackingField() const;

  constexpr void __set__totalLength_k__BackingField(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_multipartMessageId addr 0xdde3e8 size 0x8 virtual true final true
  inline uint32_t get_multipartMessageId();

  /// @brief Method set_multipartMessageId addr 0xdde3f0 size 0x8 virtual false final false
  inline void set_multipartMessageId(uint32_t value);

  /// @brief Method get_offset addr 0xdde3f8 size 0x8 virtual true final true
  inline int32_t get_offset();

  /// @brief Method set_offset addr 0xdde400 size 0x8 virtual false final false
  inline void set_offset(int32_t value);

  /// @brief Method get_length addr 0xdde408 size 0x8 virtual true final true
  inline int32_t get_length();

  /// @brief Method set_length addr 0xdde410 size 0x8 virtual false final false
  inline void set_length(int32_t value);

  /// @brief Method get_totalLength addr 0xdde418 size 0x8 virtual true final true
  inline int32_t get_totalLength();

  /// @brief Method set_totalLength addr 0xdde420 size 0x8 virtual false final false
  inline void set_totalLength(int32_t value);

  /// @brief Method get_data addr 0xdde428 size 0x8 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method Init addr 0xdde430 size 0x58 virtual false final false
  inline ::BGNet::Core::Messages::BaseMultipartMessage* Init(uint32_t multipartMessageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length, int32_t totalLength);

  /// @brief Method Serialize addr 0xdde488 size 0x88 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdde534 size 0x134 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::BGNet::Core::Messages::BaseMultipartMessage* New_ctor();

  /// @brief Method .ctor addr 0xdde690 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseMultipartMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseMultipartMessage(BaseMultipartMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseMultipartMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseMultipartMessage(BaseMultipartMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseMultipartMessage();

public:
  /// @brief Field <multipartMessageId>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t ____multipartMessageId_k__BackingField;

  /// @brief Field <offset>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____offset_k__BackingField;

  /// @brief Field <length>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____length_k__BackingField;

  /// @brief Field <totalLength>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____totalLength_k__BackingField;

  /// @brief Field _data, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  /// @brief Field kDataChunkSize offset 0xffffffff size 0x4
  static constexpr int32_t kDataChunkSize{ static_cast<int32_t>(0x180) };

  /// @brief Field kMaximumDataSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaximumDataSize{ static_cast<int32_t>(0x7fff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseMultipartMessage, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseMultipartMessage, ____multipartMessageId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseMultipartMessage, ____offset_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseMultipartMessage, ____length_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseMultipartMessage, ____totalLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseMultipartMessage, ____data) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseMultipartMessage*, "BGNet.Core.Messages", "BaseMultipartMessage");
