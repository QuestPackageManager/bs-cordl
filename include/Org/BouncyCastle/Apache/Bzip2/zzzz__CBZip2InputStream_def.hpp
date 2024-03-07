#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CBZip2InputStream)
namespace Org::BouncyCastle::Apache::Bzip2 {
class CRC;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class CBZip2InputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream);
// Type: Org.BouncyCastle.Apache.Bzip2::CBZip2InputStream
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 250, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Apache.Bzip2::CBZip2InputStream*
class CORDL_TYPE CBZip2InputStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field basev, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_basev, put = __cordl_internal_set_basev))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> basev;

  /// @brief Field blockRandomised, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_blockRandomised, put = __cordl_internal_set_blockRandomised)) bool blockRandomised;

  /// @brief Field blockSize100k, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize100k, put = __cordl_internal_set_blockSize100k)) int32_t blockSize100k;

  /// @brief Field bsBuff, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bsBuff, put = __cordl_internal_set_bsBuff)) int32_t bsBuff;

  /// @brief Field bsLive, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_bsLive, put = __cordl_internal_set_bsLive)) int32_t bsLive;

  /// @brief Field bsStream, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_bsStream, put = __cordl_internal_set_bsStream))::System::IO::Stream* bsStream;

  /// @brief Field ch2, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_ch2, put = __cordl_internal_set_ch2)) int32_t ch2;

  /// @brief Field chPrev, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_chPrev, put = __cordl_internal_set_chPrev)) int32_t chPrev;

  /// @brief Field computedBlockCRC, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_computedBlockCRC, put = __cordl_internal_set_computedBlockCRC)) int32_t computedBlockCRC;

  /// @brief Field computedCombinedCRC, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_computedCombinedCRC, put = __cordl_internal_set_computedCombinedCRC)) int32_t computedCombinedCRC;

  /// @brief Field count, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field currentChar, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_currentChar, put = __cordl_internal_set_currentChar)) int32_t currentChar;

  /// @brief Field currentState, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState)) int32_t currentState;

  /// @brief Field i, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  /// @brief Field i2, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_i2, put = __cordl_internal_set_i2)) int32_t i2;

  /// @brief Field inUse, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_inUse, put = __cordl_internal_set_inUse))::ArrayW<bool, ::Array<bool>*> inUse;

  /// @brief Field j2, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_j2, put = __cordl_internal_set_j2)) int32_t j2;

  /// @brief Field last, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_last, put = __cordl_internal_set_last)) int32_t last;

  /// @brief Field limit, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_limit, put = __cordl_internal_set_limit))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> limit;

  /// @brief Field ll8, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_ll8, put = __cordl_internal_set_ll8))::ArrayW<char16_t, ::Array<char16_t>*> ll8;

  /// @brief Field mCrc, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mCrc, put = __cordl_internal_set_mCrc))::Org::BouncyCastle::Apache::Bzip2::CRC* mCrc;

  /// @brief Field minLens, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_minLens, put = __cordl_internal_set_minLens))::ArrayW<int32_t, ::Array<int32_t>*> minLens;

  /// @brief Field nInUse, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_nInUse, put = __cordl_internal_set_nInUse)) int32_t nInUse;

  /// @brief Field origPtr, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_origPtr, put = __cordl_internal_set_origPtr)) int32_t origPtr;

  /// @brief Field perm, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_perm, put = __cordl_internal_set_perm))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> perm;

  /// @brief Field rNToGo, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_rNToGo, put = __cordl_internal_set_rNToGo)) int32_t rNToGo;

  /// @brief Field rTPos, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_rTPos, put = __cordl_internal_set_rTPos)) int32_t rTPos;

  /// @brief Field selector, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector))::ArrayW<char16_t, ::Array<char16_t>*> selector;

  /// @brief Field selectorMtf, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_selectorMtf, put = __cordl_internal_set_selectorMtf))::ArrayW<char16_t, ::Array<char16_t>*> selectorMtf;

  /// @brief Field seqToUnseq, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_seqToUnseq, put = __cordl_internal_set_seqToUnseq))::ArrayW<char16_t, ::Array<char16_t>*> seqToUnseq;

  /// @brief Field storedBlockCRC, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_storedBlockCRC, put = __cordl_internal_set_storedBlockCRC)) int32_t storedBlockCRC;

  /// @brief Field storedCombinedCRC, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_storedCombinedCRC, put = __cordl_internal_set_storedCombinedCRC)) int32_t storedCombinedCRC;

  /// @brief Field streamEnd, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_streamEnd, put = __cordl_internal_set_streamEnd)) bool streamEnd;

  /// @brief Field tPos, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_tPos, put = __cordl_internal_set_tPos)) int32_t tPos;

  /// @brief Field tt, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_tt, put = __cordl_internal_set_tt))::ArrayW<int32_t, ::Array<int32_t>*> tt;

  /// @brief Field unseqToSeq, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_unseqToSeq, put = __cordl_internal_set_unseqToSeq))::ArrayW<char16_t, ::Array<char16_t>*> unseqToSeq;

  /// @brief Field unzftab, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_unzftab, put = __cordl_internal_set_unzftab))::ArrayW<int32_t, ::Array<int32_t>*> unzftab;

  /// @brief Field z, offset 0xf8, size 0x2
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) char16_t z;

  /// @brief Method BadBlockHeader, addr 0x121f958, size 0x4, virtual false, abstract: false, final false
  static inline void BadBlockHeader();

  /// @brief Method BlockOverrun, addr 0x12203cc, size 0x4, virtual false, abstract: false, final false
  static inline void BlockOverrun();

  /// @brief Method BsFinishedWithStream, addr 0x121f7c8, size 0xdc, virtual false, abstract: false, final false
  inline void BsFinishedWithStream();

  /// @brief Method BsGetInt32, addr 0x121f95c, size 0x4, virtual false, abstract: false, final false
  inline int32_t BsGetInt32();

  /// @brief Method BsGetIntVS, addr 0x1220424, size 0x4, virtual false, abstract: false, final false
  inline int32_t BsGetIntVS(int32_t numBits);

  /// @brief Method BsGetUChar, addr 0x121f7b4, size 0x14, virtual false, abstract: false, final false
  inline char16_t BsGetUChar();

  /// @brief Method BsGetint, addr 0x12203d0, size 0x54, virtual false, abstract: false, final false
  inline int32_t BsGetint();

  /// @brief Method BsR, addr 0x121f960, size 0x108, virtual false, abstract: false, final false
  inline int32_t BsR(int32_t n);

  /// @brief Method BsSetStream, addr 0x121ef6c, size 0xc, virtual false, abstract: false, final false
  inline void BsSetStream(::System::IO::Stream* f);

  /// @brief Method Cadvise, addr 0x121ec10, size 0x4, virtual false, abstract: false, final false
  static inline void Cadvise();

  /// @brief Method Complete, addr 0x121f930, size 0x28, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method CompressedStreamEOF, addr 0x121ec14, size 0x4, virtual false, abstract: false, final false
  static inline void CompressedStreamEOF();

  /// @brief Method CrcError, addr 0x12203c8, size 0x4, virtual false, abstract: false, final false
  static inline void CrcError();

  /// @brief Method EndBlock, addr 0x1220390, size 0x2c, virtual false, abstract: false, final false
  inline void EndBlock();

  /// @brief Method Flush, addr 0x1220dac, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetAndMoveToFrontDecode, addr 0x121fa68, size 0x91c, virtual false, abstract: false, final false
  inline void GetAndMoveToFrontDecode();

  /// @brief Method HbCreateDecodeTables, addr 0x1220428, size 0x20c, virtual false, abstract: false, final false
  inline void HbCreateDecodeTables(::ArrayW<int32_t, ::Array<int32_t>*> limit, ::ArrayW<int32_t, ::Array<int32_t>*> basev, ::ArrayW<int32_t, ::Array<int32_t>*> perm,
                                   ::ArrayW<char16_t, ::Array<char16_t>*> length, int32_t minLen, int32_t maxLen, int32_t alphaSize);

  /// @brief Method InitBlock, addr 0x121f064, size 0x170, virtual false, abstract: false, final false
  inline void InitBlock();

  /// @brief Method InitCharArray, addr 0x121f3a0, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<char16_t, ::Array<char16_t>*>, ::Array<::ArrayW<char16_t, ::Array<char16_t>*>>*> InitCharArray(int32_t n1, int32_t n2);

  /// @brief Method InitIntArray, addr 0x121ee80, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> InitIntArray(int32_t n1, int32_t n2);

  /// @brief Method Initialize, addr 0x121ef78, size 0xec, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method MakeMaps, addr 0x121ec18, size 0x8c, virtual false, abstract: false, final false
  inline void MakeMaps();

  static inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream* New_ctor(::System::IO::Stream* zStream);

  /// @brief Method Read, addr 0x1220db0, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x121f48c, size 0x64, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method RecvDecodingTables, addr 0x1220634, size 0x4e0, virtual false, abstract: false, final false
  inline void RecvDecodingTables();

  /// @brief Method Seek, addr 0x1220e54, size 0x8, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetDecompressStructureSizes, addr 0x121f8a4, size 0x8c, virtual false, abstract: false, final false
  inline void SetDecompressStructureSizes(int32_t newSize100k);

  /// @brief Method SetLength, addr 0x1220e5c, size 0x4, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SetupBlock, addr 0x121f1d4, size 0x1cc, virtual false, abstract: false, final false
  inline void SetupBlock();

  /// @brief Method SetupNoRandPartA, addr 0x1220c60, size 0xa8, virtual false, abstract: false, final false
  inline void SetupNoRandPartA();

  /// @brief Method SetupNoRandPartB, addr 0x121f6a8, size 0xa8, virtual false, abstract: false, final false
  inline void SetupNoRandPartB();

  /// @brief Method SetupNoRandPartC, addr 0x121f750, size 0x64, virtual false, abstract: false, final false
  inline void SetupNoRandPartC();

  /// @brief Method SetupRandPartA, addr 0x1220b14, size 0x14c, virtual false, abstract: false, final false
  inline void SetupRandPartA();

  /// @brief Method SetupRandPartB, addr 0x121f4f0, size 0x154, virtual false, abstract: false, final false
  inline void SetupRandPartB();

  /// @brief Method SetupRandPartC, addr 0x121f644, size 0x64, virtual false, abstract: false, final false
  inline void SetupRandPartC();

  /// @brief Method Write, addr 0x1220e60, size 0x4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_basev() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_basev();

  constexpr bool const& __cordl_internal_get_blockRandomised() const;

  constexpr bool& __cordl_internal_get_blockRandomised();

  constexpr int32_t const& __cordl_internal_get_blockSize100k() const;

  constexpr int32_t& __cordl_internal_get_blockSize100k();

  constexpr int32_t const& __cordl_internal_get_bsBuff() const;

  constexpr int32_t& __cordl_internal_get_bsBuff();

  constexpr int32_t const& __cordl_internal_get_bsLive() const;

  constexpr int32_t& __cordl_internal_get_bsLive();

  constexpr ::System::IO::Stream*& __cordl_internal_get_bsStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_bsStream() const;

  constexpr int32_t const& __cordl_internal_get_ch2() const;

  constexpr int32_t& __cordl_internal_get_ch2();

  constexpr int32_t const& __cordl_internal_get_chPrev() const;

  constexpr int32_t& __cordl_internal_get_chPrev();

  constexpr int32_t const& __cordl_internal_get_computedBlockCRC() const;

  constexpr int32_t& __cordl_internal_get_computedBlockCRC();

  constexpr int32_t const& __cordl_internal_get_computedCombinedCRC() const;

  constexpr int32_t& __cordl_internal_get_computedCombinedCRC();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_currentChar() const;

  constexpr int32_t& __cordl_internal_get_currentChar();

  constexpr int32_t const& __cordl_internal_get_currentState() const;

  constexpr int32_t& __cordl_internal_get_currentState();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr int32_t const& __cordl_internal_get_i2() const;

  constexpr int32_t& __cordl_internal_get_i2();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_inUse() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_inUse();

  constexpr int32_t const& __cordl_internal_get_j2() const;

  constexpr int32_t& __cordl_internal_get_j2();

  constexpr int32_t const& __cordl_internal_get_last() const;

  constexpr int32_t& __cordl_internal_get_last();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_limit() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_limit();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_ll8() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_ll8();

  constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC*& __cordl_internal_get_mCrc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Apache::Bzip2::CRC*> const& __cordl_internal_get_mCrc() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_minLens() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_minLens();

  constexpr int32_t const& __cordl_internal_get_nInUse() const;

  constexpr int32_t& __cordl_internal_get_nInUse();

  constexpr int32_t const& __cordl_internal_get_origPtr() const;

  constexpr int32_t& __cordl_internal_get_origPtr();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_perm() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_perm();

  constexpr int32_t const& __cordl_internal_get_rNToGo() const;

  constexpr int32_t& __cordl_internal_get_rNToGo();

  constexpr int32_t const& __cordl_internal_get_rTPos() const;

  constexpr int32_t& __cordl_internal_get_rTPos();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_selector() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_selector();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_selectorMtf() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_selectorMtf();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_seqToUnseq() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_seqToUnseq();

  constexpr int32_t const& __cordl_internal_get_storedBlockCRC() const;

  constexpr int32_t& __cordl_internal_get_storedBlockCRC();

  constexpr int32_t const& __cordl_internal_get_storedCombinedCRC() const;

  constexpr int32_t& __cordl_internal_get_storedCombinedCRC();

  constexpr bool const& __cordl_internal_get_streamEnd() const;

  constexpr bool& __cordl_internal_get_streamEnd();

  constexpr int32_t const& __cordl_internal_get_tPos() const;

  constexpr int32_t& __cordl_internal_get_tPos();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_tt() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_tt();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_unseqToSeq() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_unseqToSeq();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_unzftab() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_unzftab();

  constexpr char16_t const& __cordl_internal_get_z() const;

  constexpr char16_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_basev(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set_blockRandomised(bool value);

  constexpr void __cordl_internal_set_blockSize100k(int32_t value);

  constexpr void __cordl_internal_set_bsBuff(int32_t value);

  constexpr void __cordl_internal_set_bsLive(int32_t value);

  constexpr void __cordl_internal_set_bsStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_ch2(int32_t value);

  constexpr void __cordl_internal_set_chPrev(int32_t value);

  constexpr void __cordl_internal_set_computedBlockCRC(int32_t value);

  constexpr void __cordl_internal_set_computedCombinedCRC(int32_t value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_currentChar(int32_t value);

  constexpr void __cordl_internal_set_currentState(int32_t value);

  constexpr void __cordl_internal_set_i(int32_t value);

  constexpr void __cordl_internal_set_i2(int32_t value);

  constexpr void __cordl_internal_set_inUse(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_j2(int32_t value);

  constexpr void __cordl_internal_set_last(int32_t value);

  constexpr void __cordl_internal_set_limit(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set_ll8(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_mCrc(::Org::BouncyCastle::Apache::Bzip2::CRC* value);

  constexpr void __cordl_internal_set_minLens(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_nInUse(int32_t value);

  constexpr void __cordl_internal_set_origPtr(int32_t value);

  constexpr void __cordl_internal_set_perm(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set_rNToGo(int32_t value);

  constexpr void __cordl_internal_set_rTPos(int32_t value);

  constexpr void __cordl_internal_set_selector(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_selectorMtf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_seqToUnseq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_storedBlockCRC(int32_t value);

  constexpr void __cordl_internal_set_storedCombinedCRC(int32_t value);

  constexpr void __cordl_internal_set_streamEnd(bool value);

  constexpr void __cordl_internal_set_tPos(int32_t value);

  constexpr void __cordl_internal_set_tt(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_unseqToSeq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_unzftab(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_z(char16_t value);

  /// @brief Method .ctor, addr 0x121eca4, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* zStream);

  /// @brief Method get_CanRead, addr 0x1220e64, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x1220e6c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x1220e74, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x1220e7c, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x1220e84, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x1220e8c, size 0x4, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CBZip2InputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CBZip2InputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CBZip2InputStream(CBZip2InputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CBZip2InputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CBZip2InputStream(CBZip2InputStream const&) = delete;

  /// @brief Field last, offset: 0x28, size: 0x4, def value: None
  int32_t ___last;

  /// @brief Field origPtr, offset: 0x2c, size: 0x4, def value: None
  int32_t ___origPtr;

  /// @brief Field blockSize100k, offset: 0x30, size: 0x4, def value: None
  int32_t ___blockSize100k;

  /// @brief Field blockRandomised, offset: 0x34, size: 0x1, def value: None
  bool ___blockRandomised;

  /// @brief Field bsBuff, offset: 0x38, size: 0x4, def value: None
  int32_t ___bsBuff;

  /// @brief Field bsLive, offset: 0x3c, size: 0x4, def value: None
  int32_t ___bsLive;

  /// @brief Field mCrc, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Apache::Bzip2::CRC* ___mCrc;

  /// @brief Field inUse, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___inUse;

  /// @brief Field nInUse, offset: 0x50, size: 0x4, def value: None
  int32_t ___nInUse;

  /// @brief Field seqToUnseq, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___seqToUnseq;

  /// @brief Field unseqToSeq, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___unseqToSeq;

  /// @brief Field selector, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___selector;

  /// @brief Field selectorMtf, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___selectorMtf;

  /// @brief Field tt, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___tt;

  /// @brief Field ll8, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___ll8;

  /// @brief Field unzftab, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___unzftab;

  /// @brief Field limit, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___limit;

  /// @brief Field basev, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___basev;

  /// @brief Field perm, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___perm;

  /// @brief Field minLens, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___minLens;

  /// @brief Field bsStream, offset: 0xb0, size: 0x8, def value: None
  ::System::IO::Stream* ___bsStream;

  /// @brief Field streamEnd, offset: 0xb8, size: 0x1, def value: None
  bool ___streamEnd;

  /// @brief Field currentChar, offset: 0xbc, size: 0x4, def value: None
  int32_t ___currentChar;

  /// @brief Field currentState, offset: 0xc0, size: 0x4, def value: None
  int32_t ___currentState;

  /// @brief Field storedBlockCRC, offset: 0xc4, size: 0x4, def value: None
  int32_t ___storedBlockCRC;

  /// @brief Field storedCombinedCRC, offset: 0xc8, size: 0x4, def value: None
  int32_t ___storedCombinedCRC;

  /// @brief Field computedBlockCRC, offset: 0xcc, size: 0x4, def value: None
  int32_t ___computedBlockCRC;

  /// @brief Field computedCombinedCRC, offset: 0xd0, size: 0x4, def value: None
  int32_t ___computedCombinedCRC;

  /// @brief Field i2, offset: 0xd4, size: 0x4, def value: None
  int32_t ___i2;

  /// @brief Field count, offset: 0xd8, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field chPrev, offset: 0xdc, size: 0x4, def value: None
  int32_t ___chPrev;

  /// @brief Field ch2, offset: 0xe0, size: 0x4, def value: None
  int32_t ___ch2;

  /// @brief Field i, offset: 0xe4, size: 0x4, def value: None
  int32_t ___i;

  /// @brief Field tPos, offset: 0xe8, size: 0x4, def value: None
  int32_t ___tPos;

  /// @brief Field rNToGo, offset: 0xec, size: 0x4, def value: None
  int32_t ___rNToGo;

  /// @brief Field rTPos, offset: 0xf0, size: 0x4, def value: None
  int32_t ___rTPos;

  /// @brief Field j2, offset: 0xf4, size: 0x4, def value: None
  int32_t ___j2;

  /// @brief Field z, offset: 0xf8, size: 0x2, def value: None
  char16_t ___z;

  /// @brief Field NO_RAND_PART_A_STATE offset 0xffffffff size 0x4
  static constexpr int32_t NO_RAND_PART_A_STATE{ static_cast<int32_t>(0x5) };

  /// @brief Field NO_RAND_PART_B_STATE offset 0xffffffff size 0x4
  static constexpr int32_t NO_RAND_PART_B_STATE{ static_cast<int32_t>(0x6) };

  /// @brief Field NO_RAND_PART_C_STATE offset 0xffffffff size 0x4
  static constexpr int32_t NO_RAND_PART_C_STATE{ static_cast<int32_t>(0x7) };

  /// @brief Field RAND_PART_A_STATE offset 0xffffffff size 0x4
  static constexpr int32_t RAND_PART_A_STATE{ static_cast<int32_t>(0x2) };

  /// @brief Field RAND_PART_B_STATE offset 0xffffffff size 0x4
  static constexpr int32_t RAND_PART_B_STATE{ static_cast<int32_t>(0x3) };

  /// @brief Field RAND_PART_C_STATE offset 0xffffffff size 0x4
  static constexpr int32_t RAND_PART_C_STATE{ static_cast<int32_t>(0x4) };

  /// @brief Field START_BLOCK_STATE offset 0xffffffff size 0x4
  static constexpr int32_t START_BLOCK_STATE{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, 0x100>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___last) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___origPtr) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___blockSize100k) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___blockRandomised) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___bsBuff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___bsLive) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___mCrc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___inUse) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___nInUse) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___seqToUnseq) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___unseqToSeq) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___selector) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___selectorMtf) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___tt) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___ll8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___unzftab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___limit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___basev) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___perm) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___minLens) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___bsStream) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___streamEnd) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___currentChar) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___currentState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___storedBlockCRC) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___storedCombinedCRC) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___computedBlockCRC) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___computedCombinedCRC) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___i2) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___count) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___chPrev) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___ch2) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___i) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___tPos) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___rNToGo) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___rTPos) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___j2) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, ___z) == 0xf8, "Offset mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*, "Org.BouncyCastle.Apache.Bzip2", "CBZip2InputStream");
