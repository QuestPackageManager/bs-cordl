#pragma once
// IWYU pragma private; include "Unity/Collections/StreamCompressionModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__StreamCompressionModel_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__StreamCompressionModel_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer::StreamCompressionModel__bucketOffsets_e__FixedBuffer(uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer::StreamCompressionModel__bucketOffsets_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer::StreamCompressionModel__bucketSizes_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer::StreamCompressionModel__bucketSizes_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer::StreamCompressionModel__decodeTable_e__FixedBuffer(uint16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer::StreamCompressionModel__decodeTable_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer::StreamCompressionModel__encodeTable_e__FixedBuffer(uint16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer::StreamCompressionModel__encodeTable_e__FixedBuffer() {}
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::StreamCompressionModel (*)()>(&::Unity::Collections::StreamCompressionModel::get_Default)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x64c24b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Collections::StreamCompressionModel::Initialize)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x64c2614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.GenerateHuffmanCodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint8_t>, int32_t, ::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t, int32_t)>(
    &::Unity::Collections::StreamCompressionModel::GenerateHuffmanCodes)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x64c2a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                         { "GenerateHuffmanCodes",
                                           {},
                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.ReverseBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::Unity::Collections::StreamCompressionModel::ReverseBits)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c2c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "ReverseBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.GenerateHuffmanDecodeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::Unity::Collections::NativeArray_1<uint16_t>, int32_t, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t)>(
        &::Unity::Collections::StreamCompressionModel::GenerateHuffmanDecodeTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64c2c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                         { "GenerateHuffmanDecodeTable",
                                           {},
                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.CalculateBucket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::StreamCompressionModel::*)(uint32_t)>(&::Unity::Collections::StreamCompressionModel::CalculateBucket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x64c2c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "CalculateBucket", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.GetCompressedSizeInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::StreamCompressionModel::*)(uint32_t)>(&::Unity::Collections::StreamCompressionModel::GetCompressedSizeInBits)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64c2d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "GetCompressedSizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.CheckAlphabetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::StreamCompressionModel::CheckAlphabetSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64c2dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "CheckAlphabetSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.CheckSymbolLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t, int32_t)>(
    &::Unity::Collections::StreamCompressionModel::CheckSymbolLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64c2e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
            { "CheckSymbolLength", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.CheckAlphabetAndMaxCodeLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Unity::Collections::StreamCompressionModel::CheckAlphabetAndMaxCodeLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64c2edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                                                                           { "CheckAlphabetAndMaxCodeLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StreamCompressionModel.CheckExceedMaxCodeLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Unity::Collections::StreamCompressionModel::CheckExceedMaxCodeLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64c2f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                                                                           { "CheckExceedMaxCodeLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::StreamCompressionModel::setStaticF_k_BucketSizes(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "k_BucketSizes", ::Unity::Collections::StreamCompressionModel>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Collections::StreamCompressionModel::getStaticF_k_BucketSizes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "k_BucketSizes", ::Unity::Collections::StreamCompressionModel>();
}
inline void Unity::Collections::StreamCompressionModel::setStaticF_k_BucketOffsets(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "k_BucketOffsets", ::Unity::Collections::StreamCompressionModel>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Unity::Collections::StreamCompressionModel::getStaticF_k_BucketOffsets() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "k_BucketOffsets", ::Unity::Collections::StreamCompressionModel>();
}
inline void Unity::Collections::StreamCompressionModel::setStaticF_k_FirstBucketCandidate(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "k_FirstBucketCandidate", ::Unity::Collections::StreamCompressionModel>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Unity::Collections::StreamCompressionModel::getStaticF_k_FirstBucketCandidate() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "k_FirstBucketCandidate", ::Unity::Collections::StreamCompressionModel>();
}
inline void Unity::Collections::StreamCompressionModel::setStaticF_k_DefaultModelData(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "k_DefaultModelData", ::Unity::Collections::StreamCompressionModel>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Collections::StreamCompressionModel::getStaticF_k_DefaultModelData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "k_DefaultModelData", ::Unity::Collections::StreamCompressionModel>();
}
inline ::Unity::Collections::StreamCompressionModel Unity::Collections::StreamCompressionModel::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::StreamCompressionModel>(nullptr, ___internal_method);
}
inline void Unity::Collections::StreamCompressionModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Collections::StreamCompressionModel::GenerateHuffmanCodes(::Unity::Collections::NativeArray_1<uint8_t> symbolCodes, int32_t symbolCodesOffset,
                                                                             ::Unity::Collections::NativeArray_1<uint8_t> symbolLengths, int32_t symbolLengthsOffset, int32_t alphabetSize,
                                                                             int32_t maxCodeLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                       { "GenerateHuffmanCodes",
                                         {},
                                         { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, symbolCodes, symbolCodesOffset, symbolLengths, symbolLengthsOffset, alphabetSize, maxCodeLength);
}
inline uint32_t Unity::Collections::StreamCompressionModel::ReverseBits(uint32_t value, int32_t num_bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "ReverseBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, num_bits);
}
inline void Unity::Collections::StreamCompressionModel::GenerateHuffmanDecodeTable(::Unity::Collections::NativeArray_1<uint16_t> decodeTable, int32_t decodeTableOffset,
                                                                                   ::Unity::Collections::NativeArray_1<uint8_t> symbolLengths, ::Unity::Collections::NativeArray_1<uint8_t> symbolCodes,
                                                                                   int32_t alphabetSize, int32_t maxCodeLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                       { "GenerateHuffmanDecodeTable",
                                         {},
                                         { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(),
                                           ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, decodeTable, decodeTableOffset, symbolLengths, symbolCodes, alphabetSize, maxCodeLength);
}
inline int32_t Unity::Collections::StreamCompressionModel::CalculateBucket(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "CalculateBucket", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::StreamCompressionModel::GetCompressedSizeInBits(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "GetCompressedSizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline void Unity::Collections::StreamCompressionModel::CheckAlphabetSize(int32_t alphabetSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "CheckAlphabetSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, alphabetSize);
}
inline void Unity::Collections::StreamCompressionModel::CheckSymbolLength(::Unity::Collections::NativeArray_1<uint8_t> symbolLengths, int32_t symbolLengthsOffset, int32_t symbol, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
          { "CheckSymbolLength", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, symbolLengths, symbolLengthsOffset, symbol, length);
}
inline void Unity::Collections::StreamCompressionModel::CheckAlphabetAndMaxCodeLength(int32_t alphabetSize, int32_t maxCodeLength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(),
                                                                                         { "CheckAlphabetAndMaxCodeLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, alphabetSize, maxCodeLength);
}
inline void Unity::Collections::StreamCompressionModel::CheckExceedMaxCodeLength(int32_t length, int32_t maxCodeLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::StreamCompressionModel>(), { "CheckExceedMaxCodeLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, length, maxCodeLength);
}
// Ctor Parameters [CppParam { name: "m_Initialized", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encodeTable", ty:
// "::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "decodeTable", ty:
// "::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "bucketSizes", ty:
// "::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "bucketOffsets", ty:
// "::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::StreamCompressionModel::StreamCompressionModel(uint8_t m_Initialized, ::Unity::Collections::StreamCompressionModel__encodeTable_e__FixedBuffer encodeTable,
                                                                               ::Unity::Collections::StreamCompressionModel__decodeTable_e__FixedBuffer decodeTable,
                                                                               ::Unity::Collections::StreamCompressionModel__bucketSizes_e__FixedBuffer bucketSizes,
                                                                               ::Unity::Collections::StreamCompressionModel__bucketOffsets_e__FixedBuffer bucketOffsets) noexcept {
  this->m_Initialized = m_Initialized;
  this->encodeTable = encodeTable;
  this->decodeTable = decodeTable;
  this->bucketSizes = bucketSizes;
  this->bucketOffsets = bucketOffsets;
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamCompressionModel::StreamCompressionModel() {}
inline void Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel::setStaticF_Default(::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel>, "Default",
                                    ::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel*>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel> Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::StreamCompressionModel>, "Default",
                                           ::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel*>();
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamCompressionModel_SharedStaticCompressionModel::StreamCompressionModel_SharedStaticCompressionModel() {}
