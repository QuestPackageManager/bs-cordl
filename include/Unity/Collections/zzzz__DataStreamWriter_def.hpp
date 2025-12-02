#pragma once
// IWYU pragma private; include "Unity/Collections/DataStreamWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataStreamWriter)
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct DataStreamWriter_StreamData;
}
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes;
}
namespace Unity::Collections {
struct FixedString4096Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
struct StreamCompressionModel;
}
// Forward declare root types
namespace Unity::Collections {
struct DataStreamWriter;
}
namespace Unity::Collections {
struct DataStreamWriter_StreamData;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::DataStreamWriter);
MARK_VAL_T(::Unity::Collections::DataStreamWriter_StreamData);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DataStreamWriter/StreamData
struct CORDL_TYPE DataStreamWriter_StreamData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStreamWriter_StreamData();

  // Ctor Parameters [CppParam { name: "buffer", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bitBuffer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "bitIndex", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "failedWrites", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataStreamWriter_StreamData(uint8_t* buffer, int32_t length, int32_t capacity, uint64_t bitBuffer, int32_t bitIndex, int32_t failedWrites) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15522 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
  uint8_t* buffer;

  /// @brief Field length, offset: 0x8, size: 0x4, def value: None
  int32_t length;

  /// @brief Field capacity, offset: 0xc, size: 0x4, def value: None
  int32_t capacity;

  /// @brief Field bitBuffer, offset: 0x10, size: 0x8, def value: None
  uint64_t bitBuffer;

  /// @brief Field bitIndex, offset: 0x18, size: 0x4, def value: None
  int32_t bitIndex;

  /// @brief Field failedWrites, offset: 0x1c, size: 0x4, def value: None
  int32_t failedWrites;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DataStreamWriter_StreamData, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamWriter_StreamData, length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamWriter_StreamData, capacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamWriter_StreamData, bitBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamWriter_StreamData, bitIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamWriter_StreamData, failedWrites) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::DataStreamWriter_StreamData, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, Unity.Collections.DataStreamWriter::StreamData
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DataStreamWriter
struct CORDL_TYPE DataStreamWriter {
public:
  // Declarations
  using StreamData = ::Unity::Collections::DataStreamWriter_StreamData;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_HasFailedWrites)) bool HasFailedWrites;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_LengthInBits)) int32_t LengthInBits;

  /// @brief Method AsNativeArray, addr 0x628fa20, size 0x58, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> AsNativeArray();

  /// @brief Method ByteSwap, addr 0x628fac8, size 0xc, virtual false, abstract: false, final false
  static inline int16_t ByteSwap(int16_t val);

  /// @brief Method ByteSwap, addr 0x628fad4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ByteSwap(int32_t val);

  /// @brief Method CheckAllocator, addr 0x6290508, size 0x58, virtual false, abstract: false, final false
  static inline void CheckAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CheckBits, addr 0x6290560, size 0x11c, virtual false, abstract: false, final false
  static inline void CheckBits(uint32_t value, int32_t numBits);

  /// @brief Method CheckRead, addr 0x6290500, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckWrite, addr 0x6290504, size 0x4, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// @brief Method Clear, addr 0x62904f4, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Flush, addr 0x628fb90, size 0x4c, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushBits, addr 0x628ff1c, size 0x48, virtual false, abstract: false, final false
  inline void FlushBits();

  /// @brief Method Initialize, addr 0x628f8d8, size 0x60, virtual false, abstract: false, final false
  static inline void Initialize(::ByRef<::Unity::Collections::DataStreamWriter> self, ::Unity::Collections::NativeArray_1<uint8_t> data);

  /// @brief Method SyncBitData, addr 0x628fb04, size 0x40, virtual false, abstract: false, final false
  inline void SyncBitData();

  /// @brief Method WriteByte, addr 0x628fc9c, size 0x20, virtual false, abstract: false, final false
  inline bool WriteByte(uint8_t value);

  /// @brief Method WriteBytes, addr 0x628fd18, size 0x74, virtual false, abstract: false, final false
  inline bool WriteBytes(::System::Span_1<uint8_t> value);

  /// @brief Method WriteBytes, addr 0x628fcbc, size 0x5c, virtual false, abstract: false, final false
  inline bool WriteBytes(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method WriteBytesInternal, addr 0x628fbdc, size 0xc0, virtual false, abstract: false, final false
  inline bool WriteBytesInternal(uint8_t* data, int32_t bytes);

  /// @brief Method WriteDouble, addr 0x628fefc, size 0x20, virtual false, abstract: false, final false
  inline bool WriteDouble(double_t value);

  /// @brief Method WriteFixedString128, addr 0x629030c, size 0xc, virtual false, abstract: false, final false
  inline bool WriteFixedString128(::Unity::Collections::FixedString128Bytes str);

  /// @brief Method WriteFixedString32, addr 0x62902f4, size 0xc, virtual false, abstract: false, final false
  inline bool WriteFixedString32(::Unity::Collections::FixedString32Bytes str);

  /// @brief Method WriteFixedString4096, addr 0x6290324, size 0xc, virtual false, abstract: false, final false
  inline bool WriteFixedString4096(::Unity::Collections::FixedString4096Bytes str);

  /// @brief Method WriteFixedString512, addr 0x6290318, size 0xc, virtual false, abstract: false, final false
  inline bool WriteFixedString512(::Unity::Collections::FixedString512Bytes str);

  /// @brief Method WriteFixedString64, addr 0x6290300, size 0xc, virtual false, abstract: false, final false
  inline bool WriteFixedString64(::Unity::Collections::FixedString64Bytes str);

  /// @brief Method WriteFloat, addr 0x628fedc, size 0x20, virtual false, abstract: false, final false
  inline bool WriteFloat(float_t value);

  /// @brief Method WriteInt, addr 0x628fdcc, size 0x20, virtual false, abstract: false, final false
  inline bool WriteInt(int32_t value);

  /// @brief Method WriteIntNetworkByteOrder, addr 0x628fe94, size 0x24, virtual false, abstract: false, final false
  inline bool WriteIntNetworkByteOrder(int32_t value);

  /// @brief Method WriteLong, addr 0x628fe0c, size 0x1c, virtual false, abstract: false, final false
  inline bool WriteLong(int64_t value);

  /// @brief Method WritePackedDouble, addr 0x62901d0, size 0x8, virtual false, abstract: false, final false
  inline bool WritePackedDouble(double_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedDoubleDelta, addr 0x62901d8, size 0xcc, virtual false, abstract: false, final false
  inline bool WritePackedDoubleDelta(double_t value, double_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFixedString128Delta, addr 0x62904b8, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedFixedString128Delta(::Unity::Collections::FixedString128Bytes str, ::Unity::Collections::FixedString128Bytes baseline,
                                             ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFixedString32Delta, addr 0x6290330, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedFixedString32Delta(::Unity::Collections::FixedString32Bytes str, ::Unity::Collections::FixedString32Bytes baseline,
                                            ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFixedString4096Delta, addr 0x62904e0, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes str, ::Unity::Collections::FixedString4096Bytes baseline,
                                              ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFixedString512Delta, addr 0x62904cc, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedFixedString512Delta(::Unity::Collections::FixedString512Bytes str, ::Unity::Collections::FixedString512Bytes baseline,
                                             ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFixedString64Delta, addr 0x62904a4, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedFixedString64Delta(::Unity::Collections::FixedString64Bytes str, ::Unity::Collections::FixedString64Bytes baseline,
                                            ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFixedStringDelta, addr 0x6290344, size 0x160, virtual false, abstract: false, final false
  inline bool WritePackedFixedStringDelta(uint8_t* data, uint32_t length, uint8_t* baseData, uint32_t baseLength, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFloat, addr 0x6290140, size 0x8, virtual false, abstract: false, final false
  inline bool WritePackedFloat(float_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedFloatDelta, addr 0x6290148, size 0x88, virtual false, abstract: false, final false
  inline bool WritePackedFloatDelta(float_t value, float_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedInt, addr 0x6290128, size 0xc, virtual false, abstract: false, final false
  inline bool WritePackedInt(int32_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedIntDelta, addr 0x62902b8, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedIntDelta(int32_t value, int32_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedLong, addr 0x6290134, size 0xc, virtual false, abstract: false, final false
  inline bool WritePackedLong(int64_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedLongDelta, addr 0x62902cc, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedLongDelta(int64_t value, int64_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedUInt, addr 0x628ffec, size 0xf4, virtual false, abstract: false, final false
  inline bool WritePackedUInt(uint32_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedUIntDelta, addr 0x62902a4, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedUIntDelta(uint32_t value, uint32_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedULong, addr 0x62900e0, size 0x48, virtual false, abstract: false, final false
  inline bool WritePackedULong(uint64_t value, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WritePackedULongDelta, addr 0x62902e0, size 0x14, virtual false, abstract: false, final false
  inline bool WritePackedULongDelta(uint64_t value, uint64_t baseline, ::ByRef<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method WriteRawBits, addr 0x628ff88, size 0x64, virtual false, abstract: false, final false
  inline bool WriteRawBits(uint32_t value, int32_t numbits);

  /// @brief Method WriteRawBitsInternal, addr 0x628ff64, size 0x24, virtual false, abstract: false, final false
  inline void WriteRawBitsInternal(uint32_t value, int32_t numbits);

  /// @brief Method WriteShort, addr 0x628fd8c, size 0x20, virtual false, abstract: false, final false
  inline bool WriteShort(int16_t value);

  /// @brief Method WriteShortNetworkByteOrder, addr 0x628fe44, size 0x28, virtual false, abstract: false, final false
  inline bool WriteShortNetworkByteOrder(int16_t value);

  /// @brief Method WriteUInt, addr 0x628fdec, size 0x20, virtual false, abstract: false, final false
  inline bool WriteUInt(uint32_t value);

  /// @brief Method WriteUIntNetworkByteOrder, addr 0x628feb8, size 0x24, virtual false, abstract: false, final false
  inline bool WriteUIntNetworkByteOrder(uint32_t value);

  /// @brief Method WriteULong, addr 0x628fe28, size 0x1c, virtual false, abstract: false, final false
  inline bool WriteULong(uint64_t value);

  /// @brief Method WriteUShort, addr 0x628fdac, size 0x20, virtual false, abstract: false, final false
  inline bool WriteUShort(uint16_t value);

  /// @brief Method WriteUShortNetworkByteOrder, addr 0x628fe6c, size 0x28, virtual false, abstract: false, final false
  inline bool WriteUShortNetworkByteOrder(uint16_t value);

  /// @brief Method .ctor, addr 0x628f938, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t> data);

  /// @brief Method .ctor, addr 0x628f998, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(uint8_t* data, int32_t length);

  /// @brief Method .ctor, addr 0x628f830, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Capacity, addr 0x628fafc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_HasFailedWrites, addr 0x628faec, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasFailedWrites();

  /// @brief Method get_IsCreated, addr 0x628fadc, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsLittleEndian, addr 0x628e79c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsLittleEndian();

  /// @brief Method get_Length, addr 0x628fa78, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_LengthInBits, addr 0x628fb44, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_LengthInBits();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStreamWriter();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::DataStreamWriter_StreamData", modifiers: "", def_value: None }, CppParam { name: "m_SendHandleData", ty: "::System::IntPtr",
  // modifiers: "", def_value: None }]
  constexpr DataStreamWriter(::Unity::Collections::DataStreamWriter_StreamData m_Data, ::System::IntPtr m_SendHandleData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15523 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_Data, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::DataStreamWriter_StreamData m_Data;

  /// @brief Field m_SendHandleData, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr m_SendHandleData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DataStreamWriter, m_Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamWriter, m_SendHandleData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::DataStreamWriter, 0x28>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::DataStreamWriter, "Unity.Collections", "DataStreamWriter");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::DataStreamWriter_StreamData, "Unity.Collections", "DataStreamWriter/StreamData");
