#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Apache/Bzip2/CBZip2OutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CBZip2OutputStream)
namespace Org::BouncyCastle::Apache::Bzip2 {
class CBZip2OutputStream_StackElem;
}
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
class CBZip2OutputStream;
}
namespace Org::BouncyCastle::Apache::Bzip2 {
class CBZip2OutputStream_StackElem;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem);
// Dependencies System.Object
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// CS Name: Org.BouncyCastle.Apache.Bzip2.CBZip2OutputStream/StackElem
class CORDL_TYPE CBZip2OutputStream_StackElem : public ::System::Object {
public:
  // Declarations
  /// @brief Field dd, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_dd, put = __cordl_internal_set_dd)) int32_t dd;

  /// @brief Field hh, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hh, put = __cordl_internal_set_hh)) int32_t hh;

  /// @brief Field ll, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ll, put = __cordl_internal_set_ll)) int32_t ll;

  static inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem* New_ctor();

  constexpr int32_t const& __cordl_internal_get_dd() const;

  constexpr int32_t& __cordl_internal_get_dd();

  constexpr int32_t const& __cordl_internal_get_hh() const;

  constexpr int32_t& __cordl_internal_get_hh();

  constexpr int32_t const& __cordl_internal_get_ll() const;

  constexpr int32_t& __cordl_internal_get_ll();

  constexpr void __cordl_internal_set_dd(int32_t value);

  constexpr void __cordl_internal_set_hh(int32_t value);

  constexpr void __cordl_internal_set_ll(int32_t value);

  /// @brief Method .ctor, addr 0x252889c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CBZip2OutputStream_StackElem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream_StackElem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CBZip2OutputStream_StackElem(CBZip2OutputStream_StackElem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream_StackElem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CBZip2OutputStream_StackElem(CBZip2OutputStream_StackElem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1633 };

  /// @brief Field ll, offset: 0x10, size: 0x4, def value: None
  int32_t ___ll;

  /// @brief Field hh, offset: 0x14, size: 0x4, def value: None
  int32_t ___hh;

  /// @brief Field dd, offset: 0x18, size: 0x4, def value: None
  int32_t ___dd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem, ___ll) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem, ___hh) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem, ___dd) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// CS Name: Org.BouncyCastle.Apache.Bzip2.CBZip2OutputStream
class CORDL_TYPE CBZip2OutputStream : public ::System::IO::Stream {
public:
  // Declarations
  using StackElem = ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field allowableBlockSize, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_allowableBlockSize, put = __cordl_internal_set_allowableBlockSize)) int32_t allowableBlockSize;

  /// @brief Field block, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block)) ::ArrayW<char16_t, ::Array<char16_t>*> block;

  /// @brief Field blockCRC, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_blockCRC, put = __cordl_internal_set_blockCRC)) int32_t blockCRC;

  /// @brief Field blockRandomised, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_blockRandomised, put = __cordl_internal_set_blockRandomised)) bool blockRandomised;

  /// @brief Field blockSize100k, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize100k, put = __cordl_internal_set_blockSize100k)) int32_t blockSize100k;

  /// @brief Field bsBuff, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_bsBuff, put = __cordl_internal_set_bsBuff)) int32_t bsBuff;

  /// @brief Field bsLive, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_bsLive, put = __cordl_internal_set_bsLive)) int32_t bsLive;

  /// @brief Field bsStream, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_bsStream, put = __cordl_internal_set_bsStream)) ::System::IO::Stream* bsStream;

  /// @brief Field bytesOut, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_bytesOut, put = __cordl_internal_set_bytesOut)) int32_t bytesOut;

  /// @brief Field closed, offset 0xd4, size 0x1
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) bool closed;

  /// @brief Field combinedCRC, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_combinedCRC, put = __cordl_internal_set_combinedCRC)) int32_t combinedCRC;

  /// @brief Field currentChar, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_currentChar, put = __cordl_internal_set_currentChar)) int32_t currentChar;

  /// @brief Field finished, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_finished, put = __cordl_internal_set_finished)) bool finished;

  /// @brief Field firstAttempt, offset 0xc4, size 0x1
  __declspec(property(get = __cordl_internal_get_firstAttempt, put = __cordl_internal_set_firstAttempt)) bool firstAttempt;

  /// @brief Field ftab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_ftab, put = __cordl_internal_set_ftab)) ::ArrayW<int32_t, ::Array<int32_t>*> ftab;

  /// @brief Field inUse, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inUse, put = __cordl_internal_set_inUse)) ::ArrayW<bool, ::Array<bool>*> inUse;

  /// @brief Field incs, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_incs, put = __cordl_internal_set_incs)) ::ArrayW<int32_t, ::Array<int32_t>*> incs;

  /// @brief Field last, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_last, put = __cordl_internal_set_last)) int32_t last;

  /// @brief Field mCrc, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mCrc, put = __cordl_internal_set_mCrc)) ::Org::BouncyCastle::Apache::Bzip2::CRC* mCrc;

  /// @brief Field mtfFreq, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_mtfFreq, put = __cordl_internal_set_mtfFreq)) ::ArrayW<int32_t, ::Array<int32_t>*> mtfFreq;

  /// @brief Field nBlocksRandomised, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_nBlocksRandomised, put = __cordl_internal_set_nBlocksRandomised)) int32_t nBlocksRandomised;

  /// @brief Field nInUse, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_nInUse, put = __cordl_internal_set_nInUse)) int32_t nInUse;

  /// @brief Field nMTF, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_nMTF, put = __cordl_internal_set_nMTF)) int32_t nMTF;

  /// @brief Field origPtr, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_origPtr, put = __cordl_internal_set_origPtr)) int32_t origPtr;

  /// @brief Field quadrant, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_quadrant, put = __cordl_internal_set_quadrant)) ::ArrayW<int32_t, ::Array<int32_t>*> quadrant;

  /// @brief Field runLength, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_runLength, put = __cordl_internal_set_runLength)) int32_t runLength;

  /// @brief Field selector, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::ArrayW<char16_t, ::Array<char16_t>*> selector;

  /// @brief Field selectorMtf, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_selectorMtf, put = __cordl_internal_set_selectorMtf)) ::ArrayW<char16_t, ::Array<char16_t>*> selectorMtf;

  /// @brief Field seqToUnseq, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_seqToUnseq, put = __cordl_internal_set_seqToUnseq)) ::ArrayW<char16_t, ::Array<char16_t>*> seqToUnseq;

  /// @brief Field szptr, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_szptr, put = __cordl_internal_set_szptr)) ::ArrayW<int16_t, ::Array<int16_t>*> szptr;

  /// @brief Field unseqToSeq, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_unseqToSeq, put = __cordl_internal_set_unseqToSeq)) ::ArrayW<char16_t, ::Array<char16_t>*> unseqToSeq;

  /// @brief Field workDone, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_workDone, put = __cordl_internal_set_workDone)) int32_t workDone;

  /// @brief Field workFactor, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_workFactor, put = __cordl_internal_set_workFactor)) int32_t workFactor;

  /// @brief Field workLimit, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_workLimit, put = __cordl_internal_set_workLimit)) int32_t workLimit;

  /// @brief Field zptr, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_zptr, put = __cordl_internal_set_zptr)) ::ArrayW<int32_t, ::Array<int32_t>*> zptr;

  /// @brief Method AllocateCompressStructures, addr 0x25262f8, size 0xe0, virtual false, abstract: false, final false
  inline void AllocateCompressStructures();

  /// @brief Method BsFinishedWithStream, addr 0x2526b90, size 0xec, virtual false, abstract: false, final false
  inline void BsFinishedWithStream();

  /// @brief Method BsPutIntVS, addr 0x2526d04, size 0x4, virtual false, abstract: false, final false
  inline void BsPutIntVS(int32_t numBits, int32_t c);

  /// @brief Method BsPutUChar, addr 0x2526944, size 0xc, virtual false, abstract: false, final false
  inline void BsPutUChar(int32_t c);

  /// @brief Method BsPutint, addr 0x2526a04, size 0x54, virtual false, abstract: false, final false
  inline void BsPutint(int32_t u);

  /// @brief Method BsSetStream, addr 0x25262e8, size 0x10, virtual false, abstract: false, final false
  inline void BsSetStream(::System::IO::Stream* f);

  /// @brief Method BsW, addr 0x2526a58, size 0x110, virtual false, abstract: false, final false
  inline void BsW(int32_t n, int32_t v);

  /// @brief Method Close, addr 0x2526818, size 0x8c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DoReversibleTransformation, addr 0x2526950, size 0xb4, virtual false, abstract: false, final false
  inline void DoReversibleTransformation();

  /// @brief Method EndBlock, addr 0x2526738, size 0xe0, virtual false, abstract: false, final false
  inline void EndBlock();

  /// @brief Method EndCompression, addr 0x25268a4, size 0x7c, virtual false, abstract: false, final false
  inline void EndCompression();

  /// @brief Method Finish, addr 0x2525978, size 0x64, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Flush, addr 0x2526920, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FullGtU, addr 0x2528090, size 0x314, virtual false, abstract: false, final false
  inline bool FullGtU(int32_t i1, int32_t i2);

  /// @brief Method GenerateMTFValues, addr 0x25279e8, size 0x39c, virtual false, abstract: false, final false
  inline void GenerateMTFValues();

  /// @brief Method HbAssignCodes, addr 0x2526c7c, size 0x88, virtual false, abstract: false, final false
  inline void HbAssignCodes(::ArrayW<int32_t, ::Array<int32_t>*> code, ::ArrayW<char16_t, ::Array<char16_t>*> length, int32_t minLen, int32_t maxLen, int32_t alphaSize);

  /// @brief Method HbMakeCodeLengths, addr 0x2525a9c, size 0x63c, virtual false, abstract: false, final false
  static inline void HbMakeCodeLengths(::ArrayW<char16_t, ::Array<char16_t>*> len, ::ArrayW<int32_t, ::Array<int32_t>*> freq, int32_t alphaSize, int32_t maxLen);

  /// @brief Method InitBlock, addr 0x2526414, size 0x74, virtual false, abstract: false, final false
  inline void InitBlock();

  /// @brief Method Initialize, addr 0x25263d8, size 0x3c, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method MainSort, addr 0x25288a4, size 0x7ec, virtual false, abstract: false, final false
  inline void MainSort();

  /// @brief Method MakeMaps, addr 0x2525a10, size 0x8c, virtual false, abstract: false, final false
  inline void MakeMaps();

  /// @brief Method Med3, addr 0x252840c, size 0x2c, virtual false, abstract: false, final false
  inline char16_t Med3(char16_t a, char16_t b, char16_t c);

  /// @brief Method MoveToFrontCodeAndSend, addr 0x2526b68, size 0x28, virtual false, abstract: false, final false
  inline void MoveToFrontCodeAndSend();

  static inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream* New_ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream* New_ctor(::System::IO::Stream* inStream, int32_t inBlockSize);

  /// @brief Method Panic, addr 0x2525a0c, size 0x4, virtual false, abstract: false, final false
  static inline void Panic();

  /// @brief Method QSort3, addr 0x2528438, size 0x464, virtual false, abstract: false, final false
  inline void QSort3(int32_t loSt, int32_t hiSt, int32_t dSt);

  /// @brief Method RandomiseBlock, addr 0x2529090, size 0x138, virtual false, abstract: false, final false
  inline void RandomiseBlock();

  /// @brief Method Read, addr 0x25291c8, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x25291d0, size 0x8, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SendMTFValues, addr 0x2526d08, size 0xce0, virtual false, abstract: false, final false
  inline void SendMTFValues();

  /// @brief Method SetLength, addr 0x25291d8, size 0x4, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SimpleSort, addr 0x2527d84, size 0x30c, virtual false, abstract: false, final false
  inline void SimpleSort(int32_t lo, int32_t hi, int32_t d);

  /// @brief Method Vswap, addr 0x25283a4, size 0x68, virtual false, abstract: false, final false
  inline void Vswap(int32_t p1, int32_t p2, int32_t n);

  /// @brief Method Write, addr 0x25291dc, size 0x88, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x2526488, size 0x74, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t bv);

  /// @brief Method WriteRun, addr 0x25264fc, size 0x23c, virtual false, abstract: false, final false
  inline void WriteRun();

  constexpr int32_t const& __cordl_internal_get_allowableBlockSize() const;

  constexpr int32_t& __cordl_internal_get_allowableBlockSize();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_block() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_block();

  constexpr int32_t const& __cordl_internal_get_blockCRC() const;

  constexpr int32_t& __cordl_internal_get_blockCRC();

  constexpr bool const& __cordl_internal_get_blockRandomised() const;

  constexpr bool& __cordl_internal_get_blockRandomised();

  constexpr int32_t const& __cordl_internal_get_blockSize100k() const;

  constexpr int32_t& __cordl_internal_get_blockSize100k();

  constexpr int32_t const& __cordl_internal_get_bsBuff() const;

  constexpr int32_t& __cordl_internal_get_bsBuff();

  constexpr int32_t const& __cordl_internal_get_bsLive() const;

  constexpr int32_t& __cordl_internal_get_bsLive();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_bsStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_bsStream();

  constexpr int32_t const& __cordl_internal_get_bytesOut() const;

  constexpr int32_t& __cordl_internal_get_bytesOut();

  constexpr bool const& __cordl_internal_get_closed() const;

  constexpr bool& __cordl_internal_get_closed();

  constexpr int32_t const& __cordl_internal_get_combinedCRC() const;

  constexpr int32_t& __cordl_internal_get_combinedCRC();

  constexpr int32_t const& __cordl_internal_get_currentChar() const;

  constexpr int32_t& __cordl_internal_get_currentChar();

  constexpr bool const& __cordl_internal_get_finished() const;

  constexpr bool& __cordl_internal_get_finished();

  constexpr bool const& __cordl_internal_get_firstAttempt() const;

  constexpr bool& __cordl_internal_get_firstAttempt();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_ftab() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_ftab();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_inUse() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_inUse();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_incs() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_incs();

  constexpr int32_t const& __cordl_internal_get_last() const;

  constexpr int32_t& __cordl_internal_get_last();

  constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC* const& __cordl_internal_get_mCrc() const;

  constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC*& __cordl_internal_get_mCrc();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mtfFreq() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mtfFreq();

  constexpr int32_t const& __cordl_internal_get_nBlocksRandomised() const;

  constexpr int32_t& __cordl_internal_get_nBlocksRandomised();

  constexpr int32_t const& __cordl_internal_get_nInUse() const;

  constexpr int32_t& __cordl_internal_get_nInUse();

  constexpr int32_t const& __cordl_internal_get_nMTF() const;

  constexpr int32_t& __cordl_internal_get_nMTF();

  constexpr int32_t const& __cordl_internal_get_origPtr() const;

  constexpr int32_t& __cordl_internal_get_origPtr();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_quadrant() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_quadrant();

  constexpr int32_t const& __cordl_internal_get_runLength() const;

  constexpr int32_t& __cordl_internal_get_runLength();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_selector() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_selector();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_selectorMtf() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_selectorMtf();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_seqToUnseq() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_seqToUnseq();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_szptr() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_szptr();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_unseqToSeq() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_unseqToSeq();

  constexpr int32_t const& __cordl_internal_get_workDone() const;

  constexpr int32_t& __cordl_internal_get_workDone();

  constexpr int32_t const& __cordl_internal_get_workFactor() const;

  constexpr int32_t& __cordl_internal_get_workFactor();

  constexpr int32_t const& __cordl_internal_get_workLimit() const;

  constexpr int32_t& __cordl_internal_get_workLimit();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_zptr() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_zptr();

  constexpr void __cordl_internal_set_allowableBlockSize(int32_t value);

  constexpr void __cordl_internal_set_block(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_blockCRC(int32_t value);

  constexpr void __cordl_internal_set_blockRandomised(bool value);

  constexpr void __cordl_internal_set_blockSize100k(int32_t value);

  constexpr void __cordl_internal_set_bsBuff(int32_t value);

  constexpr void __cordl_internal_set_bsLive(int32_t value);

  constexpr void __cordl_internal_set_bsStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_bytesOut(int32_t value);

  constexpr void __cordl_internal_set_closed(bool value);

  constexpr void __cordl_internal_set_combinedCRC(int32_t value);

  constexpr void __cordl_internal_set_currentChar(int32_t value);

  constexpr void __cordl_internal_set_finished(bool value);

  constexpr void __cordl_internal_set_firstAttempt(bool value);

  constexpr void __cordl_internal_set_ftab(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_inUse(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_incs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_last(int32_t value);

  constexpr void __cordl_internal_set_mCrc(::Org::BouncyCastle::Apache::Bzip2::CRC* value);

  constexpr void __cordl_internal_set_mtfFreq(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_nBlocksRandomised(int32_t value);

  constexpr void __cordl_internal_set_nInUse(int32_t value);

  constexpr void __cordl_internal_set_nMTF(int32_t value);

  constexpr void __cordl_internal_set_origPtr(int32_t value);

  constexpr void __cordl_internal_set_quadrant(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_runLength(int32_t value);

  constexpr void __cordl_internal_set_selector(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_selectorMtf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_seqToUnseq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_szptr(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_unseqToSeq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_workDone(int32_t value);

  constexpr void __cordl_internal_set_workFactor(int32_t value);

  constexpr void __cordl_internal_set_workLimit(int32_t value);

  constexpr void __cordl_internal_set_zptr(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x252596c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor, addr 0x25260d8, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t inBlockSize);

  /// @brief Method get_CanRead, addr 0x2529264, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x252926c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x2529274, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x252927c, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2529284, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x252928c, size 0x4, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CBZip2OutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CBZip2OutputStream(CBZip2OutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CBZip2OutputStream(CBZip2OutputStream const&) = delete;

  /// @brief Field CLEARMASK offset 0xffffffff size 0x4
  static constexpr int32_t CLEARMASK{ static_cast<int32_t>(0xffdfffff) };

  /// @brief Field DEPTH_THRESH offset 0xffffffff size 0x4
  static constexpr int32_t DEPTH_THRESH{ static_cast<int32_t>(0xa) };

  /// @brief Field GREATER_ICOST offset 0xffffffff size 0x4
  static constexpr int32_t GREATER_ICOST{ static_cast<int32_t>(0xf) };

  /// @brief Field LESSER_ICOST offset 0xffffffff size 0x4
  static constexpr int32_t LESSER_ICOST{ static_cast<int32_t>(0x0) };

  /// @brief Field QSORT_STACK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t QSORT_STACK_SIZE{ static_cast<int32_t>(0x3e8) };

  /// @brief Field SETMASK offset 0xffffffff size 0x4
  static constexpr int32_t SETMASK{ static_cast<int32_t>(0x200000) };

  /// @brief Field SMALL_THRESH offset 0xffffffff size 0x4
  static constexpr int32_t SMALL_THRESH{ static_cast<int32_t>(0x14) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1634 };

  /// @brief Field finished, offset: 0x28, size: 0x1, def value: None
  bool ___finished;

  /// @brief Field last, offset: 0x2c, size: 0x4, def value: None
  int32_t ___last;

  /// @brief Field origPtr, offset: 0x30, size: 0x4, def value: None
  int32_t ___origPtr;

  /// @brief Field blockSize100k, offset: 0x34, size: 0x4, def value: None
  int32_t ___blockSize100k;

  /// @brief Field blockRandomised, offset: 0x38, size: 0x1, def value: None
  bool ___blockRandomised;

  /// @brief Field bytesOut, offset: 0x3c, size: 0x4, def value: None
  int32_t ___bytesOut;

  /// @brief Field bsBuff, offset: 0x40, size: 0x4, def value: None
  int32_t ___bsBuff;

  /// @brief Field bsLive, offset: 0x44, size: 0x4, def value: None
  int32_t ___bsLive;

  /// @brief Field mCrc, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Apache::Bzip2::CRC* ___mCrc;

  /// @brief Field inUse, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___inUse;

  /// @brief Field nInUse, offset: 0x58, size: 0x4, def value: None
  int32_t ___nInUse;

  /// @brief Field seqToUnseq, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___seqToUnseq;

  /// @brief Field unseqToSeq, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___unseqToSeq;

  /// @brief Field selector, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___selector;

  /// @brief Field selectorMtf, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___selectorMtf;

  /// @brief Field block, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___block;

  /// @brief Field quadrant, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___quadrant;

  /// @brief Field zptr, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___zptr;

  /// @brief Field szptr, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___szptr;

  /// @brief Field ftab, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ftab;

  /// @brief Field nMTF, offset: 0xa8, size: 0x4, def value: None
  int32_t ___nMTF;

  /// @brief Field mtfFreq, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mtfFreq;

  /// @brief Field workFactor, offset: 0xb8, size: 0x4, def value: None
  int32_t ___workFactor;

  /// @brief Field workDone, offset: 0xbc, size: 0x4, def value: None
  int32_t ___workDone;

  /// @brief Field workLimit, offset: 0xc0, size: 0x4, def value: None
  int32_t ___workLimit;

  /// @brief Field firstAttempt, offset: 0xc4, size: 0x1, def value: None
  bool ___firstAttempt;

  /// @brief Field nBlocksRandomised, offset: 0xc8, size: 0x4, def value: None
  int32_t ___nBlocksRandomised;

  /// @brief Field currentChar, offset: 0xcc, size: 0x4, def value: None
  int32_t ___currentChar;

  /// @brief Field runLength, offset: 0xd0, size: 0x4, def value: None
  int32_t ___runLength;

  /// @brief Field closed, offset: 0xd4, size: 0x1, def value: None
  bool ___closed;

  /// @brief Field blockCRC, offset: 0xd8, size: 0x4, def value: None
  int32_t ___blockCRC;

  /// @brief Field combinedCRC, offset: 0xdc, size: 0x4, def value: None
  int32_t ___combinedCRC;

  /// @brief Field allowableBlockSize, offset: 0xe0, size: 0x4, def value: None
  int32_t ___allowableBlockSize;

  /// @brief Field bsStream, offset: 0xe8, size: 0x8, def value: None
  ::System::IO::Stream* ___bsStream;

  /// @brief Field incs, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___incs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___finished) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___last) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___origPtr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___blockSize100k) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___blockRandomised) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___bytesOut) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___bsBuff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___bsLive) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___mCrc) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___inUse) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___nInUse) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___seqToUnseq) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___unseqToSeq) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___selector) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___selectorMtf) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___block) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___quadrant) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___zptr) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___szptr) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___ftab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___nMTF) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___mtfFreq) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___workFactor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___workDone) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___workLimit) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___firstAttempt) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___nBlocksRandomised) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___currentChar) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___runLength) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___closed) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___blockCRC) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___combinedCRC) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___allowableBlockSize) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___bsStream) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, ___incs) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, 0xf8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream*, "Org.BouncyCastle.Apache.Bzip2", "CBZip2OutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream_StackElem*, "Org.BouncyCastle.Apache.Bzip2", "CBZip2OutputStream/StackElem");
