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
// CS Name: ::LiteNetLib.Utils::NetDataReader*
class CORDL_TYPE NetDataReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AvailableBytes)) int32_t AvailableBytes;

  __declspec(property(get = get_EndOfData)) bool EndOfData;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Position)) int32_t Position;

  __declspec(property(get = get_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_RawDataSize)) int32_t RawDataSize;

  __declspec(property(get = get_UserDataOffset)) int32_t UserDataOffset;

  __declspec(property(get = get_UserDataSize)) int32_t UserDataSize;

  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _dataSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__dataSize, put = __cordl_internal_set__dataSize)) int32_t _dataSize;

  /// @brief Field _offset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) int32_t _offset;

  /// @brief Field _position, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) int32_t _position;

  /// @brief Method Clear, addr 0x24e9708, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Get();

  /// @brief Method GetBool, addr 0x24f69e8, size 0x48, virtual false, abstract: false, final false
  inline bool GetBool();

  /// @brief Method GetBoolArray, addr 0x24f6004, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> GetBoolArray();

  /// @brief Method GetByte, addr 0x24f5ea8, size 0x40, virtual false, abstract: false, final false
  inline uint8_t GetByte();

  /// @brief Method GetByteArray, addr 0x24f5f28, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetByteArray();

  /// @brief Method GetBytes, addr 0x24f6f1c, size 0x48, virtual false, abstract: false, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t count);

  /// @brief Method GetBytes, addr 0x24f6ed4, size 0x48, virtual false, abstract: false, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t start, int32_t count);

  /// @brief Method GetBytesWithLength, addr 0x24f6ff4, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesWithLength();

  /// @brief Method GetChar, addr 0x24f6a30, size 0x74, virtual false, abstract: false, final false
  inline char16_t GetChar();

  /// @brief Method GetDouble, addr 0x24f6d5c, size 0x74, virtual false, abstract: false, final false
  inline double_t GetDouble();

  /// @brief Method GetDoubleArray, addr 0x24f66c8, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<double_t, ::Array<double_t>*> GetDoubleArray();

  /// @brief Method GetFloat, addr 0x24f6ce8, size 0x74, virtual false, abstract: false, final false
  inline float_t GetFloat();

  /// @brief Method GetFloatArray, addr 0x24f65f0, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetFloatArray();

  /// @brief Method GetInt, addr 0x24f5e34, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetInt();

  /// @brief Method GetIntArray, addr 0x24f6440, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIntArray();

  /// @brief Method GetLong, addr 0x24f6b8c, size 0x74, virtual false, abstract: false, final false
  inline int64_t GetLong();

  /// @brief Method GetLongArray, addr 0x24f6290, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<int64_t, ::Array<int64_t>*> GetLongArray();

  /// @brief Method GetNetEndPoint, addr 0x24f5cd8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* GetNetEndPoint();

  /// @brief Method GetRemainingBytes, addr 0x24f6e4c, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRemainingBytes();

  /// @brief Method GetRemainingBytesSegment, addr 0x24f6dd0, size 0x7c, virtual false, abstract: false, final false
  inline ::System::ArraySegment_1<uint8_t> GetRemainingBytesSegment();

  /// @brief Method GetSByte, addr 0x24f5ee8, size 0x40, virtual false, abstract: false, final false
  inline int8_t GetSByte();

  /// @brief Method GetSBytesWithLength, addr 0x24f6f64, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<int8_t, ::Array<int8_t>*> GetSBytesWithLength();

  /// @brief Method GetShort, addr 0x24f6b18, size 0x74, virtual false, abstract: false, final false
  inline int16_t GetShort();

  /// @brief Method GetShortArray, addr 0x24f61b8, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<int16_t, ::Array<int16_t>*> GetShortArray();

  /// @brief Method GetString, addr 0x24e56a8, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetString, addr 0x24f5d50, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW GetString(int32_t maxLength);

  /// @brief Method GetStringArray, addr 0x24f67a0, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringArray();

  /// @brief Method GetStringArray, addr 0x24f68c0, size 0x128, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringArray(int32_t maxStringLength);

  /// @brief Method GetUInt, addr 0x24f6c74, size 0x74, virtual false, abstract: false, final false
  inline uint32_t GetUInt();

  /// @brief Method GetUIntArray, addr 0x24f6518, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> GetUIntArray();

  /// @brief Method GetULong, addr 0x24f6c00, size 0x74, virtual false, abstract: false, final false
  inline uint64_t GetULong();

  /// @brief Method GetULongArray, addr 0x24f6368, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<uint64_t, ::Array<uint64_t>*> GetULongArray();

  /// @brief Method GetUShort, addr 0x24f6aa4, size 0x74, virtual false, abstract: false, final false
  inline uint16_t GetUShort();

  /// @brief Method GetUShortArray, addr 0x24f60e0, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> GetUShortArray();

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor();

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source);

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset);

  static inline ::LiteNetLib::Utils::NetDataReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset, int32_t maxSize);

  /// @brief Method PeekBool, addr 0x24f70ec, size 0x3c, virtual false, abstract: false, final false
  inline bool PeekBool();

  /// @brief Method PeekByte, addr 0x24f7084, size 0x34, virtual false, abstract: false, final false
  inline uint8_t PeekByte();

  /// @brief Method PeekChar, addr 0x24f7128, size 0x64, virtual false, abstract: false, final false
  inline char16_t PeekChar();

  /// @brief Method PeekDouble, addr 0x24f7448, size 0x64, virtual false, abstract: false, final false
  inline double_t PeekDouble();

  /// @brief Method PeekFloat, addr 0x24f73e4, size 0x64, virtual false, abstract: false, final false
  inline float_t PeekFloat();

  /// @brief Method PeekInt, addr 0x24f731c, size 0x64, virtual false, abstract: false, final false
  inline int32_t PeekInt();

  /// @brief Method PeekLong, addr 0x24f7254, size 0x64, virtual false, abstract: false, final false
  inline int64_t PeekLong();

  /// @brief Method PeekSByte, addr 0x24f70b8, size 0x34, virtual false, abstract: false, final false
  inline int8_t PeekSByte();

  /// @brief Method PeekShort, addr 0x24f71f0, size 0x64, virtual false, abstract: false, final false
  inline int16_t PeekShort();

  /// @brief Method PeekString, addr 0x24f75c8, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW PeekString();

  /// @brief Method PeekString, addr 0x24f74ac, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW PeekString(int32_t maxLength);

  /// @brief Method PeekUInt, addr 0x24f7380, size 0x64, virtual false, abstract: false, final false
  inline uint32_t PeekUInt();

  /// @brief Method PeekULong, addr 0x24f72b8, size 0x64, virtual false, abstract: false, final false
  inline uint64_t PeekULong();

  /// @brief Method PeekUShort, addr 0x24f718c, size 0x64, virtual false, abstract: false, final false
  inline uint16_t PeekUShort();

  /// @brief Method SetSource, addr 0x24f5bd8, size 0x2c, virtual false, abstract: false, final false
  inline void SetSource(::LiteNetLib::Utils::NetDataWriter* dataWriter);

  /// @brief Method SetSource, addr 0x24f5c04, size 0x28, virtual false, abstract: false, final false
  inline void SetSource(::ArrayW<uint8_t, ::Array<uint8_t>*> source);

  /// @brief Method SetSource, addr 0x24f5c2c, size 0x28, virtual false, abstract: false, final false
  inline void SetSource(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset);

  /// @brief Method SetSource, addr 0x24e8008, size 0x10, virtual false, abstract: false, final false
  inline void SetSource(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset, int32_t maxSize);

  /// @brief Method SkipBytes, addr 0x24f5bc8, size 0x10, virtual false, abstract: false, final false
  inline void SkipBytes(int32_t count);

  /// @brief Method TryGetBool, addr 0x24f770c, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetBool(ByRef<bool> result);

  /// @brief Method TryGetByte, addr 0x24f7694, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetByte(ByRef<uint8_t> result);

  /// @brief Method TryGetBytesWithLength, addr 0x24f7aa0, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetBytesWithLength(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> result);

  /// @brief Method TryGetChar, addr 0x24f7748, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetChar(ByRef<char16_t> result);

  /// @brief Method TryGetDouble, addr 0x24f7924, size 0x38, virtual false, abstract: false, final false
  inline bool TryGetDouble(ByRef<double_t> result);

  /// @brief Method TryGetFloat, addr 0x24f78ec, size 0x38, virtual false, abstract: false, final false
  inline bool TryGetFloat(ByRef<float_t> result);

  /// @brief Method TryGetInt, addr 0x24f77fc, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetInt(ByRef<int32_t> result);

  /// @brief Method TryGetLong, addr 0x24f7874, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetLong(ByRef<int64_t> result);

  /// @brief Method TryGetSByte, addr 0x24f76d0, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetSByte(ByRef<int8_t> result);

  /// @brief Method TryGetShort, addr 0x24f7784, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetShort(ByRef<int16_t> result);

  /// @brief Method TryGetString, addr 0x24f795c, size 0x64, virtual false, abstract: false, final false
  inline bool TryGetString(ByRef<::StringW> result);

  /// @brief Method TryGetStringArray, addr 0x24f79c0, size 0xe0, virtual false, abstract: false, final false
  inline bool TryGetStringArray(ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> result);

  /// @brief Method TryGetUInt, addr 0x24f7838, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetUInt(ByRef<uint32_t> result);

  /// @brief Method TryGetULong, addr 0x24f78b0, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetULong(ByRef<uint64_t> result);

  /// @brief Method TryGetUShort, addr 0x24f77c0, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetUShort(ByRef<uint16_t> result);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__dataSize() const;

  constexpr int32_t& __cordl_internal_get__dataSize();

  constexpr int32_t const& __cordl_internal_get__offset() const;

  constexpr int32_t& __cordl_internal_get__offset();

  constexpr int32_t const& __cordl_internal_get__position() const;

  constexpr int32_t& __cordl_internal_get__position();

  constexpr void __cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__dataSize(int32_t value);

  constexpr void __cordl_internal_set__offset(int32_t value);

  constexpr void __cordl_internal_set__position(int32_t value);

  /// @brief Method .ctor, addr 0x24e7ee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x24f5c54, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source);

  /// @brief Method .ctor, addr 0x24f5c94, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset);

  /// @brief Method .ctor, addr 0x24f02d0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t offset, int32_t maxSize);

  /// @brief Method get_AvailableBytes, addr 0x24f5bbc, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_AvailableBytes();

  /// @brief Method get_EndOfData, addr 0x24f5bac, size 0x10, virtual false, abstract: false, final false
  inline bool get_EndOfData();

  /// @brief Method get_IsNull, addr 0x24eb5c0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_Position, addr 0x24f5ba4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Position();

  /// @brief Method get_RawData, addr 0x24f5b80, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_RawDataSize, addr 0x24f5b88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RawDataSize();

  /// @brief Method get_UserDataOffset, addr 0x24f5b90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_UserDataOffset();

  /// @brief Method get_UserDataSize, addr 0x24f5b98, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_UserDataSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDataReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetDataReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDataReader(NetDataReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDataReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDataReader(NetDataReader const&) = delete;

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
