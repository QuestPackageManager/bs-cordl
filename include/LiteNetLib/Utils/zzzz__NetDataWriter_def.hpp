#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\NetDataWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDataWriter)
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Array;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Write type traits
MARK_REF_T(::LiteNetLib::Utils::NetDataWriter*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::Utils::NetDataWriter*, "LiteNetLib.Utils", "NetDataWriter");
// Dependencies System.Object
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.NetDataWriter
class CORDL_TYPE NetDataWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Data)) ::ArrayW<uint8_t> Data;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field _autoResize, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__autoResize, put = __cordl_internal_set__autoResize)) bool _autoResize;

  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<uint8_t> _data;

  /// @brief Field _position, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) int32_t _position;

  /// @brief Method CopyData, addr 0x58ab78c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> CopyData();

  /// @brief Method FromBytes, addr 0x58ab3f8, size 0xb0, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t> bytes, bool copy);

  /// @brief Method FromBytes, addr 0x58ab51c, size 0x90, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length);

  /// @brief Method FromString, addr 0x58a3520, size 0x74, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NetDataWriter* FromString(::StringW value);

  static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor();

  static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor(bool autoResize);

  static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor(bool autoResize, int32_t initialSize);

  /// @brief Method Put, addr 0x58ab4a8, size 0x74, virtual false, abstract: false, final false
  inline void Put(::ArrayW<uint8_t> data);

  /// @brief Method Put, addr 0x58ab5ac, size 0x6c, virtual false, abstract: false, final false
  inline void Put(::ArrayW<uint8_t> data, int32_t offset, int32_t length);

  /// @brief Method Put, addr 0x58ac150, size 0x4c, virtual false, abstract: false, final false
  inline void Put(::System::Net::IPEndPoint* endPoint);

  /// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Put(T obj);

  /// @brief Method Put, addr 0x58ab618, size 0xc4, virtual false, abstract: false, final false
  inline void Put(::StringW value);

  /// @brief Method Put, addr 0x58ac078, size 0xd8, virtual false, abstract: false, final false
  inline void Put(::StringW value, int32_t maxLength);

  /// @brief Method Put, addr 0x58abdec, size 0x6c, virtual false, abstract: false, final false
  inline void Put(bool value);

  /// @brief Method Put, addr 0x58ab9f4, size 0x50, virtual false, abstract: false, final false
  inline void Put(char16_t value);

  /// @brief Method Put, addr 0x58ab864, size 0x50, virtual false, abstract: false, final false
  inline void Put(double_t value);

  /// @brief Method Put, addr 0x58ab814, size 0x50, virtual false, abstract: false, final false
  inline void Put(float_t value);

  /// @brief Method Put, addr 0x58aba94, size 0x50, virtual false, abstract: false, final false
  inline void Put(int16_t value);

  /// @brief Method Put, addr 0x58ab954, size 0x50, virtual false, abstract: false, final false
  inline void Put(int32_t value);

  /// @brief Method Put, addr 0x58ab8b4, size 0x50, virtual false, abstract: false, final false
  inline void Put(int64_t value);

  /// @brief Method Put, addr 0x58abae4, size 0x68, virtual false, abstract: false, final false
  inline void Put(int8_t value);

  /// @brief Method Put, addr 0x58aba44, size 0x50, virtual false, abstract: false, final false
  inline void Put(uint16_t value);

  /// @brief Method Put, addr 0x58ab9a4, size 0x50, virtual false, abstract: false, final false
  inline void Put(uint32_t value);

  /// @brief Method Put, addr 0x58ab904, size 0x50, virtual false, abstract: false, final false
  inline void Put(uint64_t value);

  /// @brief Method Put, addr 0x58abb4c, size 0x68, virtual false, abstract: false, final false
  inline void Put(uint8_t value);

  /// @brief Method PutArray, addr 0x58abe58, size 0xac, virtual false, abstract: false, final false
  inline void PutArray(::System::Array* arr, int32_t sz);

  /// @brief Method PutArray, addr 0x58abf54, size 0x88, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<::StringW> value);

  /// @brief Method PutArray, addr 0x58abfdc, size 0x9c, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<::StringW> value, int32_t maxLength);

  /// @brief Method PutArray, addr 0x58abf4c, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<bool> value);

  /// @brief Method PutArray, addr 0x58abf14, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<double_t> value);

  /// @brief Method PutArray, addr 0x58abf0c, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<float_t> value);

  /// @brief Method PutArray, addr 0x58abf44, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<int16_t> value);

  /// @brief Method PutArray, addr 0x58abf2c, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<int32_t> value);

  /// @brief Method PutArray, addr 0x58abf1c, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<int64_t> value);

  /// @brief Method PutArray, addr 0x58abf3c, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<uint16_t> value);

  /// @brief Method PutArray, addr 0x58abf34, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<uint32_t> value);

  /// @brief Method PutArray, addr 0x58abf24, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<uint64_t> value);

  /// @brief Method PutArray, addr 0x58abf04, size 0x8, virtual false, abstract: false, final false
  inline void PutArray(::ArrayW<uint8_t> value);

  /// @brief Method PutBytesWithLength, addr 0x58abd5c, size 0x90, virtual false, abstract: false, final false
  inline void PutBytesWithLength(::ArrayW<uint8_t> data);

  /// @brief Method PutBytesWithLength, addr 0x58abcd0, size 0x8c, virtual false, abstract: false, final false
  inline void PutBytesWithLength(::ArrayW<uint8_t> data, int32_t offset, int32_t length);

  /// @brief Method PutSBytesWithLength, addr 0x58abc40, size 0x90, virtual false, abstract: false, final false
  inline void PutSBytesWithLength(::ArrayW<int8_t> data);

  /// @brief Method PutSBytesWithLength, addr 0x58abbb4, size 0x8c, virtual false, abstract: false, final false
  inline void PutSBytesWithLength(::ArrayW<int8_t> data, int32_t offset, int32_t length);

  /// @brief Method Reset, addr 0x58ab784, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x58ab76c, size 0x18, virtual false, abstract: false, final false
  inline void Reset(int32_t size);

  /// @brief Method ResizeIfNeed, addr 0x58ab6dc, size 0x90, virtual false, abstract: false, final false
  inline void ResizeIfNeed(int32_t newSize);

  constexpr bool const& __cordl_internal_get__autoResize() const;

  constexpr bool& __cordl_internal_get__autoResize();

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__position() const;

  constexpr int32_t& __cordl_internal_get__position();

  constexpr void __cordl_internal_set__autoResize(bool value);

  constexpr void __cordl_internal_set__data(::ArrayW<uint8_t> value);

  constexpr void __cordl_internal_set__position(int32_t value);

  /// @brief Method .ctor, addr 0x589c3a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x58ab3f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool autoResize);

  /// @brief Method .ctor, addr 0x58ab384, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(bool autoResize, int32_t initialSize);

  /// @brief Method get_Capacity, addr 0x58ab36c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Data, addr 0x58ab804, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> get_Data();

  /// @brief Method get_Length, addr 0x58ab80c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDataWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDataWriter(NetDataWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDataWriter(NetDataWriter const&) = delete;

  /// @brief Field InitialSize offset 0xffffffff size 0x4
  static constexpr int32_t InitialSize{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20094 };

  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t> ____data;

  /// @brief Field _position, offset: 0x18, size: 0x4, def value: None
  int32_t ____position;

  /// @brief Field _autoResize, offset: 0x1c, size: 0x1, def value: None
  bool ____autoResize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Utils::NetDataWriter, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataWriter, ____position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataWriter, ____autoResize) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::LiteNetLib::Utils::NetDataWriter) == 0x20, "Size mismatch!");

} // namespace LiteNetLib::Utils
