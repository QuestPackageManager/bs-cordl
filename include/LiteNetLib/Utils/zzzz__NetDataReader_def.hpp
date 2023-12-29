#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDataReader)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NetDataReader);
// Type: LiteNetLib.Utils::NetDataReader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14532))
// CS Name: ::LiteNetLib.Utils::NetDataReader*
class CORDL_TYPE NetDataReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _position, offset 0x18, size 0x4
  __declspec(property(get = __get__position, put = __set__position)) int32_t _position;

  /// @brief Field _dataSize, offset 0x1c, size 0x4
  __declspec(property(get = __get__dataSize, put = __set__dataSize)) int32_t _dataSize;

  /// @brief Field _offset, offset 0x20, size 0x4
  __declspec(property(get = __get__offset, put = __set__offset)) int32_t _offset;

  __declspec(property(get = get_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_RawDataSize)) int32_t RawDataSize;

  __declspec(property(get = get_UserDataOffset)) int32_t UserDataOffset;

  __declspec(property(get = get_UserDataSize)) int32_t UserDataSize;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Position)) int32_t Position;

  __declspec(property(get = get_EndOfData)) bool EndOfData;

  __declspec(property(get = get_AvailableBytes)) int32_t AvailableBytes;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__position();

  constexpr int32_t const& __get__position() const;

  constexpr void __set__position(int32_t value);

  constexpr int32_t& __get__dataSize();

  constexpr int32_t const& __get__dataSize() const;

  constexpr void __set__dataSize(int32_t value);

  constexpr int32_t& __get__offset();

  constexpr int32_t const& __get__offset() const;

  constexpr void __set__offset(int32_t value);

  /// @brief Method get_RawData addr 0x20a6abc size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_RawDataSize addr 0x20a6ac4 size 0x8 virtual false final false
  inline int32_t get_RawDataSize();

  /// @brief Method get_UserDataOffset addr 0x20a6acc size 0x8 virtual false final false
  inline int32_t get_UserDataOffset();

  /// @brief Method get_UserDataSize addr 0x20a6ad4 size 0xc virtual false final false
  inline int32_t get_UserDataSize();

  /// @brief Method get_IsNull addr 0x209c4fc size 0x10 virtual false final false
  inline bool get_IsNull();

  /// @brief Method get_Position addr 0x20a6ae0 size 0x8 virtual false final false
  inline int32_t get_Position();

  /// @brief Method get_EndOfData addr 0x20a6ae8 size 0x10 virtual false final false
  inline bool get_EndOfData();

  /// @brief Method get_AvailableBytes addr 0x20a6af8 size 0xc virtual false final false
  inline int32_t get_AvailableBytes();

  /// @brief Method SkipBytes addr 0x20a6b04 size 0x10 virtual false final false
  inline void SkipBytes(int32_t count);

  /// @brief Method SetSource addr 0x20a6b14 size 0x2c virtual false final false
  inline void SetSource(::LiteNetLib::Utils::NetDataWriter* dataWriter);

  /// @brief Method SetSource addr 0x20a6b40 size 0x28 virtual false final false
  inline void SetSource(::ArrayW<uint8_t, ::Array<uint8_t>*> source);

  /// @brief Method SetSource addr 0x20a6b68 size 0x28 virtual false final false
  inline void SetSource(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset);

  /// @brief Method SetSource addr 0x2098f44 size 0x10 virtual false final false
  inline void SetSource(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset, int32_t maxSize);

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor();

  /// @brief Method .ctor addr 0x2098e24 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source);

  /// @brief Method .ctor addr 0x20a6b90 size 0x40 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source);

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset);

  /// @brief Method .ctor addr 0x20a6bd0 size 0x44 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset);

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset, int32_t maxSize);

  /// @brief Method .ctor addr 0x20a120c size 0x40 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset, int32_t maxSize);

  /// @brief Method GetNetEndPoint addr 0x20a6c14 size 0x78 virtual false final false
  inline ::System::Net::IPEndPoint* GetNetEndPoint();

  /// @brief Method GetByte addr 0x20a6de4 size 0x40 virtual false final false
  inline uint8_t GetByte();

  /// @brief Method GetSByte addr 0x20a6e24 size 0x40 virtual false final false
  inline int8_t GetSByte();

  /// @brief Method GetBoolArray addr 0x20a6e64 size 0xdc virtual false final false
  inline ::ArrayW<bool, ::Array<bool>*> GetBoolArray();

  /// @brief Method GetUShortArray addr 0x20a6f40 size 0xd8 virtual false final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> GetUShortArray();

  /// @brief Method GetShortArray addr 0x20a7018 size 0xd8 virtual false final false
  inline ::ArrayW<int16_t, ::Array<int16_t>*> GetShortArray();

  /// @brief Method GetLongArray addr 0x20a70f0 size 0xd8 virtual false final false
  inline ::ArrayW<int64_t, ::Array<int64_t>*> GetLongArray();

  /// @brief Method GetULongArray addr 0x20a71c8 size 0xd8 virtual false final false
  inline ::ArrayW<uint64_t, ::Array<uint64_t>*> GetULongArray();

  /// @brief Method GetIntArray addr 0x20a72a0 size 0xd8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIntArray();

  /// @brief Method GetUIntArray addr 0x20a7378 size 0xd8 virtual false final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> GetUIntArray();

  /// @brief Method GetFloatArray addr 0x20a7450 size 0xd8 virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray();

  /// @brief Method GetDoubleArray addr 0x20a7528 size 0xd8 virtual false final false
  inline ::ArrayW<double_t, ::Array<double_t>*> GetDoubleArray();

  /// @brief Method GetStringArray addr 0x20a7600 size 0x120 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringArray();

  /// @brief Method GetStringArray addr 0x20a7720 size 0x128 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringArray(int32_t maxStringLength);

  /// @brief Method GetBool addr 0x20a7848 size 0x48 virtual false final false
  inline bool GetBool();

  /// @brief Method GetChar addr 0x20a7890 size 0x74 virtual false final false
  inline char16_t GetChar();

  /// @brief Method GetUShort addr 0x20a7904 size 0x74 virtual false final false
  inline uint16_t GetUShort();

  /// @brief Method GetShort addr 0x20a7978 size 0x74 virtual false final false
  inline int16_t GetShort();

  /// @brief Method GetLong addr 0x20a79ec size 0x74 virtual false final false
  inline int64_t GetLong();

  /// @brief Method GetULong addr 0x20a7a60 size 0x74 virtual false final false
  inline uint64_t GetULong();

  /// @brief Method GetInt addr 0x20a6d70 size 0x74 virtual false final false
  inline int32_t GetInt();

  /// @brief Method GetUInt addr 0x20a7ad4 size 0x74 virtual false final false
  inline uint32_t GetUInt();

  /// @brief Method GetFloat addr 0x20a7b48 size 0x74 virtual false final false
  inline float_t GetFloat();

  /// @brief Method GetDouble addr 0x20a7bbc size 0x74 virtual false final false
  inline double_t GetDouble();

  /// @brief Method GetString addr 0x20a6c8c size 0xe4 virtual false final false
  inline ::StringW GetString(int32_t maxLength);

  /// @brief Method GetString addr 0x20965e4 size 0x9c virtual false final false
  inline ::StringW GetString();

  /// @brief Method GetRemainingBytesSegment addr 0x20a7c30 size 0x7c virtual false final false
  inline ::System::ArraySegment_1<uint8_t> GetRemainingBytesSegment();

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T Get();

  /// @brief Method GetRemainingBytes addr 0x20a7cac size 0x88 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRemainingBytes();

  /// @brief Method GetBytes addr 0x20a7d34 size 0x48 virtual false final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t start, int32_t count);

  /// @brief Method GetBytes addr 0x20a7d7c size 0x48 virtual false final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t count);

  /// @brief Method GetSBytesWithLength addr 0x20a7dc4 size 0x90 virtual false final false
  inline ::ArrayW<int8_t, ::Array<int8_t>*> GetSBytesWithLength();

  /// @brief Method GetBytesWithLength addr 0x20a7e54 size 0x90 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesWithLength();

  /// @brief Method PeekByte addr 0x20a7ee4 size 0x34 virtual false final false
  inline uint8_t PeekByte();

  /// @brief Method PeekSByte addr 0x20a7f18 size 0x34 virtual false final false
  inline int8_t PeekSByte();

  /// @brief Method PeekBool addr 0x20a7f4c size 0x3c virtual false final false
  inline bool PeekBool();

  /// @brief Method PeekChar addr 0x20a7f88 size 0x64 virtual false final false
  inline char16_t PeekChar();

  /// @brief Method PeekUShort addr 0x20a7fec size 0x64 virtual false final false
  inline uint16_t PeekUShort();

  /// @brief Method PeekShort addr 0x20a8050 size 0x64 virtual false final false
  inline int16_t PeekShort();

  /// @brief Method PeekLong addr 0x20a80b4 size 0x64 virtual false final false
  inline int64_t PeekLong();

  /// @brief Method PeekULong addr 0x20a8118 size 0x64 virtual false final false
  inline uint64_t PeekULong();

  /// @brief Method PeekInt addr 0x20a817c size 0x64 virtual false final false
  inline int32_t PeekInt();

  /// @brief Method PeekUInt addr 0x20a81e0 size 0x64 virtual false final false
  inline uint32_t PeekUInt();

  /// @brief Method PeekFloat addr 0x20a8244 size 0x64 virtual false final false
  inline float_t PeekFloat();

  /// @brief Method PeekDouble addr 0x20a82a8 size 0x64 virtual false final false
  inline double_t PeekDouble();

  /// @brief Method PeekString addr 0x20a830c size 0x11c virtual false final false
  inline ::StringW PeekString(int32_t maxLength);

  /// @brief Method PeekString addr 0x20a8428 size 0xcc virtual false final false
  inline ::StringW PeekString();

  /// @brief Method TryGetByte addr 0x20a84f4 size 0x3c virtual false final false
  inline bool TryGetByte(ByRef<uint8_t> result);

  /// @brief Method TryGetSByte addr 0x20a8530 size 0x3c virtual false final false
  inline bool TryGetSByte(ByRef<int8_t> result);

  /// @brief Method TryGetBool addr 0x20a856c size 0x3c virtual false final false
  inline bool TryGetBool(ByRef<bool> result);

  /// @brief Method TryGetChar addr 0x20a85a8 size 0x3c virtual false final false
  inline bool TryGetChar(ByRef<char16_t> result);

  /// @brief Method TryGetShort addr 0x20a85e4 size 0x3c virtual false final false
  inline bool TryGetShort(ByRef<int16_t> result);

  /// @brief Method TryGetUShort addr 0x20a8620 size 0x3c virtual false final false
  inline bool TryGetUShort(ByRef<uint16_t> result);

  /// @brief Method TryGetInt addr 0x20a865c size 0x3c virtual false final false
  inline bool TryGetInt(ByRef<int32_t> result);

  /// @brief Method TryGetUInt addr 0x20a8698 size 0x3c virtual false final false
  inline bool TryGetUInt(ByRef<uint32_t> result);

  /// @brief Method TryGetLong addr 0x20a86d4 size 0x3c virtual false final false
  inline bool TryGetLong(ByRef<int64_t> result);

  /// @brief Method TryGetULong addr 0x20a8710 size 0x3c virtual false final false
  inline bool TryGetULong(ByRef<uint64_t> result);

  /// @brief Method TryGetFloat addr 0x20a874c size 0x38 virtual false final false
  inline bool TryGetFloat(ByRef<float_t> result);

  /// @brief Method TryGetDouble addr 0x20a8784 size 0x38 virtual false final false
  inline bool TryGetDouble(ByRef<double_t> result);

  /// @brief Method TryGetString addr 0x20a87bc size 0x64 virtual false final false
  inline bool TryGetString(ByRef<::StringW> result);

  /// @brief Method TryGetStringArray addr 0x20a8820 size 0xe0 virtual false final false
  inline bool TryGetStringArray(ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> result);

  /// @brief Method TryGetBytesWithLength addr 0x20a8900 size 0x68 virtual false final false
  inline bool TryGetBytesWithLength(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> result);

  /// @brief Method Clear addr 0x209a644 size 0x8 virtual false final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "NetDataReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDataReader(NetDataReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDataReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDataReader(NetDataReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDataReader();

public:
  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  /// @brief Field _position, offset: 0x18, size: 0x4, def value: None
  int32_t ____position;

  /// @brief Field _dataSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ____dataSize;

  /// @brief Field _offset, offset: 0x20, size: 0x4, def value: None
  int32_t ____offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetDataReader, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataReader, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataReader, ____position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataReader, ____dataSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataReader, ____offset) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NetDataReader);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetDataReader*, "LiteNetLib.Utils", "NetDataReader");
