#pragma once
// IWYU pragma private; include "Unity/Collections/StreamCompressionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamCompressionModel)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
class StreamCompressionModel_SharedStaticCompressionModel;
}
namespace Unity::Collections {
struct StreamCompressionModel__bucketOffsets_e__FixedBuffer;
}
namespace Unity::Collections {
struct StreamCompressionModel__bucketSizes_e__FixedBuffer;
}
namespace Unity::Collections {
struct StreamCompressionModel__decodeTable_e__FixedBuffer;
}
namespace Unity::Collections {
struct StreamCompressionModel__encodeTable_e__FixedBuffer;
}
// Forward declare root types
namespace Unity::Collections {
class StreamCompressionModel_SharedStaticCompressionModel;
}
namespace Unity::Collections {
struct StreamCompressionModel;
}
namespace Unity::Collections {
struct StreamCompressionModel__bucketOffsets_e__FixedBuffer;
}
namespace Unity::Collections {
struct StreamCompressionModel__bucketSizes_e__FixedBuffer;
}
namespace Unity::Collections {
struct StreamCompressionModel__decodeTable_e__FixedBuffer;
}
namespace Unity::Collections {
struct StreamCompressionModel__encodeTable_e__FixedBuffer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel);
MARK_VAL_T(::Unity::Collections::StreamCompressionModel);
MARK_VAL_T(::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer);
MARK_VAL_T(::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer);
MARK_VAL_T(::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer);
MARK_VAL_T(::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.StreamCompressionModel/<bucketOffsets>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StreamCompressionModel__bucketOffsets_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamCompressionModel__bucketOffsets_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr StreamCompressionModel__bucketOffsets_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x40 - 0x4 = 0x3c, packed as 0x3c
  uint8_t _cordl_size_padding[0x3c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer, 0x40>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.StreamCompressionModel/<bucketSizes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StreamCompressionModel__bucketSizes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamCompressionModel__bucketSizes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr StreamCompressionModel__bucketSizes_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x10 - 0x1 = 0xf, packed as 0xf
  uint8_t _cordl_size_padding[0xf];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.StreamCompressionModel/<decodeTable>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StreamCompressionModel__decodeTable_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamCompressionModel__decodeTable_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr StreamCompressionModel__decodeTable_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  uint16_t FixedElementField;

  /// @brief Size padding 0x80 - 0x2 = 0x7e, packed as 0x7e
  uint8_t _cordl_size_padding[0x7e];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.StreamCompressionModel/<encodeTable>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StreamCompressionModel__encodeTable_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamCompressionModel__encodeTable_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr StreamCompressionModel__encodeTable_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  uint16_t FixedElementField;

  /// @brief Size padding 0x20 - 0x2 = 0x1e, packed as 0x1e
  uint8_t _cordl_size_padding[0x1e];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.StreamCompressionModel::<bucketOffsets>e__FixedBuffer, Unity.Collections.StreamCompressionModel::<bucketSizes>e__FixedBuffer,
// Unity.Collections.StreamCompressionModel::<decodeTable>e__FixedBuffer, Unity.Collections.StreamCompressionModel::<encodeTable>e__FixedBuffer
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.StreamCompressionModel
struct CORDL_TYPE StreamCompressionModel {
public:
  // Declarations
  using SharedStaticCompressionModel = ::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel;

  using _bucketOffsets_e__FixedBuffer = ::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer;

  using _bucketSizes_e__FixedBuffer = ::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer;

  using _decodeTable_e__FixedBuffer = ::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer;

  using _encodeTable_e__FixedBuffer = ::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer;

  /// @brief Field k_BucketOffsets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_BucketOffsets, put = setStaticF_k_BucketOffsets)) ::ArrayW<uint32_t, ::Array<uint32_t>*> k_BucketOffsets;

  /// @brief Field k_BucketSizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_BucketSizes, put = setStaticF_k_BucketSizes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> k_BucketSizes;

  /// @brief Field k_DefaultModelData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DefaultModelData, put = setStaticF_k_DefaultModelData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> k_DefaultModelData;

  /// @brief Field k_FirstBucketCandidate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FirstBucketCandidate, put = setStaticF_k_FirstBucketCandidate)) ::ArrayW<int32_t, ::Array<int32_t>*> k_FirstBucketCandidate;

  /// @brief Method CalculateBucket, addr 0x6311e38, size 0xe0, virtual false, abstract: false, final false
  inline int32_t CalculateBucket(uint32_t value);

  /// @brief Method CheckAlphabetAndMaxCodeLength, addr 0x6312078, size 0x60, virtual false, abstract: false, final false
  static inline void CheckAlphabetAndMaxCodeLength(int32_t alphabetSize, int32_t maxCodeLength);

  /// @brief Method CheckAlphabetSize, addr 0x6311f98, size 0x80, virtual false, abstract: false, final false
  static inline void CheckAlphabetSize(int32_t alphabetSize);

  /// @brief Method CheckExceedMaxCodeLength, addr 0x63120d8, size 0x58, virtual false, abstract: false, final false
  static inline void CheckExceedMaxCodeLength(int32_t length, int32_t maxCodeLength);

  /// @brief Method CheckSymbolLength, addr 0x6312018, size 0x60, virtual false, abstract: false, final false
  static inline void CheckSymbolLength(::Unity::Collections::NativeArray_1<uint8_t> symbolLengths, int32_t symbolLengthsOffset, int32_t symbol, int32_t length);

  /// @brief Method GenerateHuffmanCodes, addr 0x6311c28, size 0x1a8, virtual false, abstract: false, final false
  static inline void GenerateHuffmanCodes(::Unity::Collections::NativeArray_1<uint8_t> symbolCodes, int32_t symbolCodesOffset, ::Unity::Collections::NativeArray_1<uint8_t> symbolLengths,
                                          int32_t symbolLengthsOffset, int32_t alphabetSize, int32_t maxCodeLength);

  /// @brief Method GenerateHuffmanDecodeTable, addr 0x6311dd0, size 0x58, virtual false, abstract: false, final false
  static inline void GenerateHuffmanDecodeTable(::Unity::Collections::NativeArray_1<uint16_t> decodeTable, int32_t decodeTableOffset, ::Unity::Collections::NativeArray_1<uint8_t> symbolLengths,
                                                ::Unity::Collections::NativeArray_1<uint8_t> symbolCodes, int32_t alphabetSize, int32_t maxCodeLength);

  /// @brief Method GetCompressedSizeInBits, addr 0x6311f18, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetCompressedSizeInBits(uint32_t value);

  /// @brief Method Initialize, addr 0x63117b0, size 0x478, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method ReverseBits, addr 0x6311e28, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t ReverseBits(uint32_t value, int32_t num_bits);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_k_BucketOffsets();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_k_BucketSizes();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_k_DefaultModelData();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_FirstBucketCandidate();

  /// @brief Method get_Default, addr 0x6311650, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Collections::StreamCompressionModel get_Default();

  static inline void setStaticF_k_BucketOffsets(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_k_BucketSizes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_k_DefaultModelData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_k_FirstBucketCandidate(::ArrayW<int32_t, ::Array<int32_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamCompressionModel();

  // Ctor Parameters [CppParam { name: "m_Initialized", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "encodeTable", ty:
  // "::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "decodeTable", ty:
  // "::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "bucketSizes", ty:
  // "::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "bucketOffsets", ty:
  // "::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr StreamCompressionModel(uint8_t m_Initialized, ::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer encodeTable,
                                   ::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer decodeTable,
                                   ::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer bucketSizes,
                                   ::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer bucketOffsets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xf4 };

  /// @brief Field k_AlphabetSize offset 0xffffffff size 0x4
  static constexpr int32_t k_AlphabetSize{ static_cast<int32_t>(0x10) };

  /// @brief Field k_MaxContexts offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxContexts{ static_cast<int32_t>(0x1) };

  /// @brief Field k_MaxHuffmanSymbolLength offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxHuffmanSymbolLength{ static_cast<int32_t>(0x6) };

  /// @brief Field m_Initialized, offset: 0x0, size: 0x1, def value: None
  uint8_t m_Initialized;

  /// @brief Field encodeTable, offset: 0x2, size: 0x20, def value: None
  ::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer encodeTable;

  /// @brief Field decodeTable, offset: 0x22, size: 0x80, def value: None
  ::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer decodeTable;

  /// @brief Field bucketSizes, offset: 0xa2, size: 0x10, def value: None
  ::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer bucketSizes;

  /// @brief Field bucketOffsets, offset: 0xb4, size: 0x40, def value: None
  ::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer bucketOffsets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::StreamCompressionModel, m_Initialized) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::StreamCompressionModel, encodeTable) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::StreamCompressionModel, decodeTable) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::StreamCompressionModel, bucketSizes) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::StreamCompressionModel, bucketOffsets) == 0xb4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamCompressionModel, 0xf4>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>, Unity.Collections.StreamCompressionModel
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.StreamCompressionModel/SharedStaticCompressionModel
class CORDL_TYPE StreamCompressionModel_SharedStaticCompressionModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel> Default;

  static inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel> getStaticF_Default();

  static inline void setStaticF_Default(::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamCompressionModel_SharedStaticCompressionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamCompressionModel_SharedStaticCompressionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamCompressionModel_SharedStaticCompressionModel(StreamCompressionModel_SharedStaticCompressionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamCompressionModel_SharedStaticCompressionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamCompressionModel_SharedStaticCompressionModel(StreamCompressionModel_SharedStaticCompressionModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel*, "Unity.Collections", "StreamCompressionModel/SharedStaticCompressionModel");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamCompressionModel, "Unity.Collections", "StreamCompressionModel");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer, "Unity.Collections", "StreamCompressionModel/<bucketOffsets>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer, "Unity.Collections", "StreamCompressionModel/<bucketSizes>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer, "Unity.Collections", "StreamCompressionModel/<decodeTable>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer, "Unity.Collections", "StreamCompressionModel/<encodeTable>e__FixedBuffer");
