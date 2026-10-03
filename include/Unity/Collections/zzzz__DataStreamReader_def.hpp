#pragma once
// IWYU pragma private; include "Unity/Collections/DataStreamReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataStreamReader)
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
struct DataStreamReader_Context;
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
struct DataStreamReader;
}
namespace Unity::Collections {
struct DataStreamReader_Context;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::DataStreamReader);
MARK_VAL_T(::Unity::Collections::DataStreamReader_Context);
DEFINE_IL2CPP_CLASS(::Unity::Collections::DataStreamReader, "Unity.Collections", "DataStreamReader");
DEFINE_IL2CPP_CLASS(::Unity::Collections::DataStreamReader_Context, "Unity.Collections", "DataStreamReader/Context");
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DataStreamReader/Context
struct CORDL_TYPE DataStreamReader_Context {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStreamReader_Context();

  // Ctor Parameters [CppParam { name: "m_ReadByteIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BitIndex", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_BitBuffer", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FailedReads", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr DataStreamReader_Context(int32_t m_ReadByteIndex, int32_t m_BitIndex, uint64_t m_BitBuffer, int32_t m_FailedReads) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_ReadByteIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_ReadByteIndex;

  /// @brief Field m_BitIndex, offset: 0x4, size: 0x4, def value: None
  int32_t m_BitIndex;

  /// @brief Field m_BitBuffer, offset: 0x8, size: 0x8, def value: None
  uint64_t m_BitBuffer;

  /// @brief Field m_FailedReads, offset: 0x10, size: 0x4, def value: None
  int32_t m_FailedReads;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_ReadByteIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_BitIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_BitBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_FailedReads) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::DataStreamReader_Context) == 0x18, "Size mismatch!");

} // namespace Unity::Collections
// [MovedFrom(true, "Unity.Networking.Transport", null, null)]
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.DataStreamReader::Context
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DataStreamReader
struct CORDL_TYPE DataStreamReader {
public:
  // Declarations
  using Context = ::Unity::Collections::DataStreamReader_Context;

  __declspec(property(get = get_HasFailedReads)) bool HasFailedReads;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method ByteSwap, addr 0x68d5478, size 0xc, virtual false, abstract: false, final false
  static inline int16_t ByteSwap(int16_t val);

  /// @brief Method ByteSwap, addr 0x68d5484, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ByteSwap(int32_t val);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckBits, addr 0x68d6490, size 0x84, virtual false, abstract: false, final false
  static inline void CheckBits(int32_t numBits);

  /// [IsReadOnly]
  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method CheckRead, addr 0x68d648c, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method FillBitBuffer, addr 0x68d593c, size 0x68, virtual false, abstract: false, final false
  inline void FillBitBuffer();

  /// @brief Method Flush, addr 0x68d55ac, size 0x14, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method GetBitsRead, addr 0x68d5690, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetBitsRead();

  /// @brief Method GetBytesRead, addr 0x68d55a0, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetBytesRead();

  /// @brief Method Initialize, addr 0x68d540c, size 0x5c, virtual false, abstract: false, final false
  static inline void Initialize(::by_ref<::Unity::Collections::DataStreamReader> self, ::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method ReadByte, addr 0x68d56c8, size 0x20, virtual false, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadBytes, addr 0x68d55c0, size 0x5c, virtual false, abstract: false, final false
  inline void ReadBytes(::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method ReadBytes, addr 0x68d561c, size 0x74, virtual false, abstract: false, final false
  inline void ReadBytes(::System::Span_1<uint8_t> span);

  /// @brief Method ReadBytesInternal, addr 0x68d54b4, size 0xec, virtual false, abstract: false, final false
  inline void ReadBytesInternal(uint8_t* data, int32_t length);

  /// @brief Method ReadDouble, addr 0x68d5858, size 0x1c, virtual false, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadFixedString, addr 0x68d5fac, size 0x5c, virtual false, abstract: false, final false
  inline uint16_t ReadFixedString(::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method ReadFixedString128, addr 0x68d5e24, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString128Bytes ReadFixedString128();

  /// @brief Method ReadFixedString32, addr 0x68d5cf4, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString32Bytes ReadFixedString32();

  /// @brief Method ReadFixedString4096, addr 0x68d5f20, size 0x8c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString4096Bytes ReadFixedString4096();

  /// @brief Method ReadFixedString512, addr 0x68d5e9c, size 0x84, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString512Bytes ReadFixedString512();

  /// @brief Method ReadFixedString64, addr 0x68d5db4, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString64Bytes ReadFixedString64();

  /// @brief Method ReadFixedStringInternal, addr 0x68d5d58, size 0x5c, virtual false, abstract: false, final false
  inline uint16_t ReadFixedStringInternal(uint8_t* data, int32_t maxLength);

  /// @brief Method ReadFloat, addr 0x68d5838, size 0x20, virtual false, abstract: false, final false
  inline float_t ReadFloat();

  /// @brief Method ReadInt, addr 0x68d5728, size 0x20, virtual false, abstract: false, final false
  inline int32_t ReadInt();

  /// @brief Method ReadIntNetworkByteOrder, addr 0x68d57f0, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadIntNetworkByteOrder();

  /// @brief Method ReadLong, addr 0x68d5768, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadLong();

  /// @brief Method ReadPackedDouble, addr 0x68d5b84, size 0x8, virtual false, abstract: false, final false
  inline double_t ReadPackedDouble(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedDoubleDelta, addr 0x68d5b8c, size 0xe0, virtual false, abstract: false, final false
  inline double_t ReadPackedDoubleDelta(double_t baseline, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString128Delta, addr 0x68d623c, size 0x84, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString128Bytes ReadPackedFixedString128Delta(::Unity::Collections::FixedString128Bytes baseline,
                                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString32Delta, addr 0x68d6008, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString32Bytes ReadPackedFixedString32Delta(::Unity::Collections::FixedString32Bytes baseline,
                                                                               /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString4096Delta, addr 0x68d6360, size 0xa8, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString4096Bytes ReadPackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes baseline,
                                                                                   /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString512Delta, addr 0x68d62c0, size 0xa0, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString512Bytes ReadPackedFixedString512Delta(::Unity::Collections::FixedString512Bytes baseline,
                                                                                 /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString64Delta, addr 0x68d61c0, size 0x7c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString64Bytes ReadPackedFixedString64Delta(::Unity::Collections::FixedString64Bytes baseline,
                                                                               /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedStringDelta, addr 0x68d6408, size 0x84, virtual false, abstract: false, final false
  inline uint16_t ReadPackedFixedStringDelta(::Unity::Collections::NativeArray_1<uint8_t> data, ::Unity::Collections::NativeArray_1<uint8_t> baseData,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedStringDeltaInternal, addr 0x68d6078, size 0x148, virtual false, abstract: false, final false
  inline uint16_t ReadPackedFixedStringDeltaInternal(uint8_t* data, int32_t maxLength, uint8_t* baseData, uint16_t baseLength,
                                                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFloat, addr 0x68d5afc, size 0x8, virtual false, abstract: false, final false
  inline float_t ReadPackedFloat(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFloatDelta, addr 0x68d5b04, size 0x80, virtual false, abstract: false, final false
  inline float_t ReadPackedFloatDelta(float_t baseline, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedInt, addr 0x68d5a88, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadPackedInt(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedIntDelta, addr 0x68d5c6c, size 0x28, virtual false, abstract: false, final false
  inline int32_t ReadPackedIntDelta(int32_t baseline, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedLong, addr 0x68d5aac, size 0x50, virtual false, abstract: false, final false
  inline int64_t ReadPackedLong(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedLongDelta, addr 0x68d5cbc, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadPackedLongDelta(int64_t baseline, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedUInt, addr 0x68d5874, size 0xc, virtual false, abstract: false, final false
  inline uint32_t ReadPackedUInt(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedUIntDelta, addr 0x68d5c94, size 0x28, virtual false, abstract: false, final false
  inline uint32_t ReadPackedUIntDelta(uint32_t baseline, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedUIntInternal, addr 0x68d5880, size 0xbc, virtual false, abstract: false, final false
  inline uint32_t ReadPackedUIntInternal(int32_t maxSymbolLength, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedULong, addr 0x68d5a44, size 0x44, virtual false, abstract: false, final false
  inline uint64_t ReadPackedULong(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedULongDelta, addr 0x68d5cd8, size 0x1c, virtual false, abstract: false, final false
  inline uint64_t ReadPackedULongDelta(uint64_t baseline, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadRawBits, addr 0x68d59e8, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t ReadRawBits(int32_t numbits);

  /// @brief Method ReadRawBitsInternal, addr 0x68d59a4, size 0x44, virtual false, abstract: false, final false
  inline uint32_t ReadRawBitsInternal(int32_t numbits);

  /// @brief Method ReadShort, addr 0x68d56e8, size 0x20, virtual false, abstract: false, final false
  inline int16_t ReadShort();

  /// @brief Method ReadShortNetworkByteOrder, addr 0x68d57a0, size 0x28, virtual false, abstract: false, final false
  inline int16_t ReadShortNetworkByteOrder();

  /// @brief Method ReadUInt, addr 0x68d5748, size 0x20, virtual false, abstract: false, final false
  inline uint32_t ReadUInt();

  /// @brief Method ReadUIntNetworkByteOrder, addr 0x68d5814, size 0x24, virtual false, abstract: false, final false
  inline uint32_t ReadUIntNetworkByteOrder();

  /// @brief Method ReadULong, addr 0x68d5784, size 0x1c, virtual false, abstract: false, final false
  inline uint64_t ReadULong();

  /// @brief Method ReadUShort, addr 0x68d5708, size 0x20, virtual false, abstract: false, final false
  inline uint16_t ReadUShort();

  /// @brief Method ReadUShortNetworkByteOrder, addr 0x68d57c8, size 0x28, virtual false, abstract: false, final false
  inline uint16_t ReadUShortNetworkByteOrder();

  /// @brief Method SeekSet, addr 0x68d56a0, size 0x28, virtual false, abstract: false, final false
  inline void SeekSet(int32_t pos);

  /// @brief Method .ctor, addr 0x68d53b0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t> array);

  /// [IsReadOnly]
  /// @brief Method get_HasFailedReads, addr 0x68d548c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasFailedReads();

  /// [IsReadOnly]
  /// @brief Method get_IsCreated, addr 0x68d54a4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsLittleEndian, addr 0x68d5468, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsLittleEndian();

  /// [IsReadOnly]
  /// @brief Method get_Length, addr 0x68d549c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStreamReader();

  // Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Context", ty:
  // "::Unity::Collections::DataStreamReader_Context", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr DataStreamReader(uint8_t* m_BufferPtr, ::Unity::Collections::DataStreamReader_Context m_Context, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15807 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field m_BufferPtr, offset: 0x0, size: 0x8, def value: None
  uint8_t* m_BufferPtr;

  /// @brief Field m_Context, offset: 0x8, size: 0x18, def value: None
  ::Unity::Collections::DataStreamReader_Context m_Context;

  /// @brief Field m_Length, offset: 0x20, size: 0x4, def value: None
  int32_t m_Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DataStreamReader, m_BufferPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader, m_Context) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader, m_Length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::DataStreamReader) == 0x28, "Size mismatch!");

} // namespace Unity::Collections
