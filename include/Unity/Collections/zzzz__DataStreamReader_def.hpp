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

  // Ctor Parameters [CppParam { name: "m_ReadByteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BitIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_BitBuffer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FailedReads", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataStreamReader_Context(int32_t m_ReadByteIndex, int32_t m_BitIndex, uint64_t m_BitBuffer, int32_t m_FailedReads) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15534 };

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

  /// @brief Method ByteSwap, addr 0x64a7194, size 0xc, virtual false, abstract: false, final false
  static inline int16_t ByteSwap(int16_t val);

  /// @brief Method ByteSwap, addr 0x64a71a0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ByteSwap(int32_t val);

  /// @brief Method CheckBits, addr 0x64a819c, size 0x84, virtual false, abstract: false, final false
  static inline void CheckBits(int32_t numBits);

  /// @brief Method CheckRead, addr 0x64a8198, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method FillBitBuffer, addr 0x64a7658, size 0x68, virtual false, abstract: false, final false
  inline void FillBitBuffer();

  /// @brief Method Flush, addr 0x64a72c8, size 0x14, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method GetBitsRead, addr 0x64a73ac, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetBitsRead();

  /// @brief Method GetBytesRead, addr 0x64a72bc, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetBytesRead();

  /// @brief Method Initialize, addr 0x64a7128, size 0x5c, virtual false, abstract: false, final false
  static inline void Initialize(::by_ref<::Unity::Collections::DataStreamReader> self, ::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method ReadByte, addr 0x64a73e4, size 0x20, virtual false, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadBytes, addr 0x64a72dc, size 0x5c, virtual false, abstract: false, final false
  inline void ReadBytes(::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method ReadBytes, addr 0x64a7338, size 0x74, virtual false, abstract: false, final false
  inline void ReadBytes(::System::Span_1<uint8_t> span);

  /// @brief Method ReadBytesInternal, addr 0x64a71d0, size 0xec, virtual false, abstract: false, final false
  inline void ReadBytesInternal(uint8_t* data, int32_t length);

  /// @brief Method ReadDouble, addr 0x64a7574, size 0x1c, virtual false, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadFixedString, addr 0x64a7cb8, size 0x5c, virtual false, abstract: false, final false
  inline uint16_t ReadFixedString(::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method ReadFixedString128, addr 0x64a7b30, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString128Bytes ReadFixedString128();

  /// @brief Method ReadFixedString32, addr 0x64a7a00, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString32Bytes ReadFixedString32();

  /// @brief Method ReadFixedString4096, addr 0x64a7c2c, size 0x8c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString4096Bytes ReadFixedString4096();

  /// @brief Method ReadFixedString512, addr 0x64a7ba8, size 0x84, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString512Bytes ReadFixedString512();

  /// @brief Method ReadFixedString64, addr 0x64a7ac0, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString64Bytes ReadFixedString64();

  /// @brief Method ReadFixedStringInternal, addr 0x64a7a64, size 0x5c, virtual false, abstract: false, final false
  inline uint16_t ReadFixedStringInternal(uint8_t* data, int32_t maxLength);

  /// @brief Method ReadFloat, addr 0x64a7554, size 0x20, virtual false, abstract: false, final false
  inline float_t ReadFloat();

  /// @brief Method ReadInt, addr 0x64a7444, size 0x20, virtual false, abstract: false, final false
  inline int32_t ReadInt();

  /// @brief Method ReadIntNetworkByteOrder, addr 0x64a750c, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadIntNetworkByteOrder();

  /// @brief Method ReadLong, addr 0x64a7484, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadLong();

  /// @brief Method ReadPackedDouble, addr 0x64a7878, size 0x8, virtual false, abstract: false, final false
  inline double_t ReadPackedDouble(::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedDoubleDelta, addr 0x64a7880, size 0xe0, virtual false, abstract: false, final false
  inline double_t ReadPackedDoubleDelta(double_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString128Delta, addr 0x64a7f48, size 0x84, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString128Bytes ReadPackedFixedString128Delta(::Unity::Collections::FixedString128Bytes baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString32Delta, addr 0x64a7d14, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString32Bytes ReadPackedFixedString32Delta(::Unity::Collections::FixedString32Bytes baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString4096Delta, addr 0x64a806c, size 0xa8, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString4096Bytes ReadPackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString512Delta, addr 0x64a7fcc, size 0xa0, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString512Bytes ReadPackedFixedString512Delta(::Unity::Collections::FixedString512Bytes baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedString64Delta, addr 0x64a7ecc, size 0x7c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString64Bytes ReadPackedFixedString64Delta(::Unity::Collections::FixedString64Bytes baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedStringDelta, addr 0x64a8114, size 0x84, virtual false, abstract: false, final false
  inline uint16_t ReadPackedFixedStringDelta(::Unity::Collections::NativeArray_1<uint8_t> data, ::Unity::Collections::NativeArray_1<uint8_t> baseData,
                                             ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFixedStringDeltaInternal, addr 0x64a7d84, size 0x148, virtual false, abstract: false, final false
  inline uint16_t ReadPackedFixedStringDeltaInternal(uint8_t* data, int32_t maxLength, uint8_t* baseData, uint16_t baseLength, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFloat, addr 0x64a77f0, size 0x8, virtual false, abstract: false, final false
  inline float_t ReadPackedFloat(::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedFloatDelta, addr 0x64a77f8, size 0x80, virtual false, abstract: false, final false
  inline float_t ReadPackedFloatDelta(float_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedInt, addr 0x64a77b0, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadPackedInt(::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedIntDelta, addr 0x64a7960, size 0x28, virtual false, abstract: false, final false
  inline int32_t ReadPackedIntDelta(int32_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedLong, addr 0x64a77d4, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadPackedLong(::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedLongDelta, addr 0x64a79b0, size 0x28, virtual false, abstract: false, final false
  inline int64_t ReadPackedLongDelta(int64_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedUInt, addr 0x64a7590, size 0xc, virtual false, abstract: false, final false
  inline uint32_t ReadPackedUInt(::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedUIntDelta, addr 0x64a7988, size 0x28, virtual false, abstract: false, final false
  inline uint32_t ReadPackedUIntDelta(uint32_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedUIntInternal, addr 0x64a759c, size 0xbc, virtual false, abstract: false, final false
  inline uint32_t ReadPackedUIntInternal(int32_t maxSymbolLength, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedULong, addr 0x64a7760, size 0x50, virtual false, abstract: false, final false
  inline uint64_t ReadPackedULong(::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadPackedULongDelta, addr 0x64a79d8, size 0x28, virtual false, abstract: false, final false
  inline uint64_t ReadPackedULongDelta(uint64_t baseline, ::by_ref<::Unity::Collections::StreamCompressionModel> model);

  /// @brief Method ReadRawBits, addr 0x64a7704, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t ReadRawBits(int32_t numbits);

  /// @brief Method ReadRawBitsInternal, addr 0x64a76c0, size 0x44, virtual false, abstract: false, final false
  inline uint32_t ReadRawBitsInternal(int32_t numbits);

  /// @brief Method ReadShort, addr 0x64a7404, size 0x20, virtual false, abstract: false, final false
  inline int16_t ReadShort();

  /// @brief Method ReadShortNetworkByteOrder, addr 0x64a74bc, size 0x28, virtual false, abstract: false, final false
  inline int16_t ReadShortNetworkByteOrder();

  /// @brief Method ReadUInt, addr 0x64a7464, size 0x20, virtual false, abstract: false, final false
  inline uint32_t ReadUInt();

  /// @brief Method ReadUIntNetworkByteOrder, addr 0x64a7530, size 0x24, virtual false, abstract: false, final false
  inline uint32_t ReadUIntNetworkByteOrder();

  /// @brief Method ReadULong, addr 0x64a74a0, size 0x1c, virtual false, abstract: false, final false
  inline uint64_t ReadULong();

  /// @brief Method ReadUShort, addr 0x64a7424, size 0x20, virtual false, abstract: false, final false
  inline uint16_t ReadUShort();

  /// @brief Method ReadUShortNetworkByteOrder, addr 0x64a74e4, size 0x28, virtual false, abstract: false, final false
  inline uint16_t ReadUShortNetworkByteOrder();

  /// @brief Method SeekSet, addr 0x64a73bc, size 0x28, virtual false, abstract: false, final false
  inline void SeekSet(int32_t pos);

  /// @brief Method .ctor, addr 0x64a70cc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t> array);

  /// @brief Method get_HasFailedReads, addr 0x64a71a8, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasFailedReads();

  /// @brief Method get_IsCreated, addr 0x64a71c0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsLittleEndian, addr 0x64a7184, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsLittleEndian();

  /// @brief Method get_Length, addr 0x64a71b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStreamReader();

  // Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_Context", ty: "::Unity::Collections::DataStreamReader_Context", modifiers:
  // "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataStreamReader(uint8_t* m_BufferPtr, ::Unity::Collections::DataStreamReader_Context m_Context, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15535 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

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
