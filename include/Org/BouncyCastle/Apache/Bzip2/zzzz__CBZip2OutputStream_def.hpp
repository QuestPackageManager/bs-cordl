#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CBZip2OutputStream)
namespace Org::BouncyCastle::Apache::Bzip2 {
class CRC;
}
namespace Org::BouncyCastle::Apache::Bzip2 {
class __CBZip2OutputStream__StackElem;
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
class __CBZip2OutputStream__StackElem;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::__CBZip2OutputStream__StackElem);
// Type: ::StackElem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1633))
// CS Name: ::CBZip2OutputStream::StackElem*
class CORDL_TYPE __CBZip2OutputStream__StackElem : public ::System::Object {
public:
  // Declarations
  /// @brief Field ll, offset 0x10, size 0x4
  __declspec(property(get = __get_ll, put = __set_ll)) int32_t ll;

  /// @brief Field hh, offset 0x14, size 0x4
  __declspec(property(get = __get_hh, put = __set_hh)) int32_t hh;

  /// @brief Field dd, offset 0x18, size 0x4
  __declspec(property(get = __get_dd, put = __set_dd)) int32_t dd;

  constexpr int32_t& __get_ll();

  constexpr int32_t const& __get_ll() const;

  constexpr void __set_ll(int32_t value);

  constexpr int32_t& __get_hh();

  constexpr int32_t const& __get_hh() const;

  constexpr void __set_hh(int32_t value);

  constexpr int32_t& __get_dd();

  constexpr int32_t const& __get_dd() const;

  constexpr void __set_dd(int32_t value);

  static inline ::Org::BouncyCastle::Apache::Bzip2::__CBZip2OutputStream__StackElem* New_ctor();

  /// @brief Method .ctor addr 0x10a8ae0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__CBZip2OutputStream__StackElem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CBZip2OutputStream__StackElem(__CBZip2OutputStream__StackElem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CBZip2OutputStream__StackElem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CBZip2OutputStream__StackElem(__CBZip2OutputStream__StackElem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CBZip2OutputStream__StackElem();

public:
  /// @brief Field ll, offset: 0x10, size: 0x4, def value: None
  int32_t ___ll;

  /// @brief Field hh, offset: 0x14, size: 0x4, def value: None
  int32_t ___hh;

  /// @brief Field dd, offset: 0x18, size: 0x4, def value: None
  int32_t ___dd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::__CBZip2OutputStream__StackElem, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
// Type: Org.BouncyCastle.Apache.Bzip2::CBZip2OutputStream
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1634))
// CS Name: ::Org.BouncyCastle.Apache.Bzip2::CBZip2OutputStream*
class CORDL_TYPE CBZip2OutputStream : public ::System::IO::Stream {
public:
  // Declarations
  using StackElem = ::Org::BouncyCastle::Apache::Bzip2::__CBZip2OutputStream__StackElem;

  /// @brief Field finished, offset 0x28, size 0x1
  __declspec(property(get = __get_finished, put = __set_finished)) bool finished;

  /// @brief Field last, offset 0x2c, size 0x4
  __declspec(property(get = __get_last, put = __set_last)) int32_t last;

  /// @brief Field origPtr, offset 0x30, size 0x4
  __declspec(property(get = __get_origPtr, put = __set_origPtr)) int32_t origPtr;

  /// @brief Field blockSize100k, offset 0x34, size 0x4
  __declspec(property(get = __get_blockSize100k, put = __set_blockSize100k)) int32_t blockSize100k;

  /// @brief Field blockRandomised, offset 0x38, size 0x1
  __declspec(property(get = __get_blockRandomised, put = __set_blockRandomised)) bool blockRandomised;

  /// @brief Field bytesOut, offset 0x3c, size 0x4
  __declspec(property(get = __get_bytesOut, put = __set_bytesOut)) int32_t bytesOut;

  /// @brief Field bsBuff, offset 0x40, size 0x4
  __declspec(property(get = __get_bsBuff, put = __set_bsBuff)) int32_t bsBuff;

  /// @brief Field bsLive, offset 0x44, size 0x4
  __declspec(property(get = __get_bsLive, put = __set_bsLive)) int32_t bsLive;

  /// @brief Field mCrc, offset 0x48, size 0x8
  __declspec(property(get = __get_mCrc, put = __set_mCrc))::Org::BouncyCastle::Apache::Bzip2::CRC* mCrc;

  /// @brief Field inUse, offset 0x50, size 0x8
  __declspec(property(get = __get_inUse, put = __set_inUse))::ArrayW<bool, ::Array<bool>*> inUse;

  /// @brief Field nInUse, offset 0x58, size 0x4
  __declspec(property(get = __get_nInUse, put = __set_nInUse)) int32_t nInUse;

  /// @brief Field seqToUnseq, offset 0x60, size 0x8
  __declspec(property(get = __get_seqToUnseq, put = __set_seqToUnseq))::ArrayW<char16_t, ::Array<char16_t>*> seqToUnseq;

  /// @brief Field unseqToSeq, offset 0x68, size 0x8
  __declspec(property(get = __get_unseqToSeq, put = __set_unseqToSeq))::ArrayW<char16_t, ::Array<char16_t>*> unseqToSeq;

  /// @brief Field selector, offset 0x70, size 0x8
  __declspec(property(get = __get_selector, put = __set_selector))::ArrayW<char16_t, ::Array<char16_t>*> selector;

  /// @brief Field selectorMtf, offset 0x78, size 0x8
  __declspec(property(get = __get_selectorMtf, put = __set_selectorMtf))::ArrayW<char16_t, ::Array<char16_t>*> selectorMtf;

  /// @brief Field block, offset 0x80, size 0x8
  __declspec(property(get = __get_block, put = __set_block))::ArrayW<char16_t, ::Array<char16_t>*> block;

  /// @brief Field quadrant, offset 0x88, size 0x8
  __declspec(property(get = __get_quadrant, put = __set_quadrant))::ArrayW<int32_t, ::Array<int32_t>*> quadrant;

  /// @brief Field zptr, offset 0x90, size 0x8
  __declspec(property(get = __get_zptr, put = __set_zptr))::ArrayW<int32_t, ::Array<int32_t>*> zptr;

  /// @brief Field szptr, offset 0x98, size 0x8
  __declspec(property(get = __get_szptr, put = __set_szptr))::ArrayW<int16_t, ::Array<int16_t>*> szptr;

  /// @brief Field ftab, offset 0xa0, size 0x8
  __declspec(property(get = __get_ftab, put = __set_ftab))::ArrayW<int32_t, ::Array<int32_t>*> ftab;

  /// @brief Field nMTF, offset 0xa8, size 0x4
  __declspec(property(get = __get_nMTF, put = __set_nMTF)) int32_t nMTF;

  /// @brief Field mtfFreq, offset 0xb0, size 0x8
  __declspec(property(get = __get_mtfFreq, put = __set_mtfFreq))::ArrayW<int32_t, ::Array<int32_t>*> mtfFreq;

  /// @brief Field workFactor, offset 0xb8, size 0x4
  __declspec(property(get = __get_workFactor, put = __set_workFactor)) int32_t workFactor;

  /// @brief Field workDone, offset 0xbc, size 0x4
  __declspec(property(get = __get_workDone, put = __set_workDone)) int32_t workDone;

  /// @brief Field workLimit, offset 0xc0, size 0x4
  __declspec(property(get = __get_workLimit, put = __set_workLimit)) int32_t workLimit;

  /// @brief Field firstAttempt, offset 0xc4, size 0x1
  __declspec(property(get = __get_firstAttempt, put = __set_firstAttempt)) bool firstAttempt;

  /// @brief Field nBlocksRandomised, offset 0xc8, size 0x4
  __declspec(property(get = __get_nBlocksRandomised, put = __set_nBlocksRandomised)) int32_t nBlocksRandomised;

  /// @brief Field currentChar, offset 0xcc, size 0x4
  __declspec(property(get = __get_currentChar, put = __set_currentChar)) int32_t currentChar;

  /// @brief Field runLength, offset 0xd0, size 0x4
  __declspec(property(get = __get_runLength, put = __set_runLength)) int32_t runLength;

  /// @brief Field closed, offset 0xd4, size 0x1
  __declspec(property(get = __get_closed, put = __set_closed)) bool closed;

  /// @brief Field blockCRC, offset 0xd8, size 0x4
  __declspec(property(get = __get_blockCRC, put = __set_blockCRC)) int32_t blockCRC;

  /// @brief Field combinedCRC, offset 0xdc, size 0x4
  __declspec(property(get = __get_combinedCRC, put = __set_combinedCRC)) int32_t combinedCRC;

  /// @brief Field allowableBlockSize, offset 0xe0, size 0x4
  __declspec(property(get = __get_allowableBlockSize, put = __set_allowableBlockSize)) int32_t allowableBlockSize;

  /// @brief Field bsStream, offset 0xe8, size 0x8
  __declspec(property(get = __get_bsStream, put = __set_bsStream))::System::IO::Stream* bsStream;

  /// @brief Field incs, offset 0xf0, size 0x8
  __declspec(property(get = __get_incs, put = __set_incs))::ArrayW<int32_t, ::Array<int32_t>*> incs;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr bool& __get_finished();

  constexpr bool const& __get_finished() const;

  constexpr void __set_finished(bool value);

  constexpr int32_t& __get_last();

  constexpr int32_t const& __get_last() const;

  constexpr void __set_last(int32_t value);

  constexpr int32_t& __get_origPtr();

  constexpr int32_t const& __get_origPtr() const;

  constexpr void __set_origPtr(int32_t value);

  constexpr int32_t& __get_blockSize100k();

  constexpr int32_t const& __get_blockSize100k() const;

  constexpr void __set_blockSize100k(int32_t value);

  constexpr bool& __get_blockRandomised();

  constexpr bool const& __get_blockRandomised() const;

  constexpr void __set_blockRandomised(bool value);

  constexpr int32_t& __get_bytesOut();

  constexpr int32_t const& __get_bytesOut() const;

  constexpr void __set_bytesOut(int32_t value);

  constexpr int32_t& __get_bsBuff();

  constexpr int32_t const& __get_bsBuff() const;

  constexpr void __set_bsBuff(int32_t value);

  constexpr int32_t& __get_bsLive();

  constexpr int32_t const& __get_bsLive() const;

  constexpr void __set_bsLive(int32_t value);

  constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC*& __get_mCrc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Apache::Bzip2::CRC*> const& __get_mCrc() const;

  constexpr void __set_mCrc(::Org::BouncyCastle::Apache::Bzip2::CRC* value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_inUse();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_inUse() const;

  constexpr void __set_inUse(::ArrayW<bool, ::Array<bool>*> value);

  constexpr int32_t& __get_nInUse();

  constexpr int32_t const& __get_nInUse() const;

  constexpr void __set_nInUse(int32_t value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_seqToUnseq();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_seqToUnseq() const;

  constexpr void __set_seqToUnseq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_unseqToSeq();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_unseqToSeq() const;

  constexpr void __set_unseqToSeq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_selector();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_selector() const;

  constexpr void __set_selector(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_selectorMtf();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_selectorMtf() const;

  constexpr void __set_selectorMtf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_block();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_block() const;

  constexpr void __set_block(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_quadrant();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_quadrant() const;

  constexpr void __set_quadrant(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_zptr();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_zptr() const;

  constexpr void __set_zptr(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_szptr();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_szptr() const;

  constexpr void __set_szptr(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_ftab();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_ftab() const;

  constexpr void __set_ftab(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_nMTF();

  constexpr int32_t const& __get_nMTF() const;

  constexpr void __set_nMTF(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mtfFreq();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mtfFreq() const;

  constexpr void __set_mtfFreq(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_workFactor();

  constexpr int32_t const& __get_workFactor() const;

  constexpr void __set_workFactor(int32_t value);

  constexpr int32_t& __get_workDone();

  constexpr int32_t const& __get_workDone() const;

  constexpr void __set_workDone(int32_t value);

  constexpr int32_t& __get_workLimit();

  constexpr int32_t const& __get_workLimit() const;

  constexpr void __set_workLimit(int32_t value);

  constexpr bool& __get_firstAttempt();

  constexpr bool const& __get_firstAttempt() const;

  constexpr void __set_firstAttempt(bool value);

  constexpr int32_t& __get_nBlocksRandomised();

  constexpr int32_t const& __get_nBlocksRandomised() const;

  constexpr void __set_nBlocksRandomised(int32_t value);

  constexpr int32_t& __get_currentChar();

  constexpr int32_t const& __get_currentChar() const;

  constexpr void __set_currentChar(int32_t value);

  constexpr int32_t& __get_runLength();

  constexpr int32_t const& __get_runLength() const;

  constexpr void __set_runLength(int32_t value);

  constexpr bool& __get_closed();

  constexpr bool const& __get_closed() const;

  constexpr void __set_closed(bool value);

  constexpr int32_t& __get_blockCRC();

  constexpr int32_t const& __get_blockCRC() const;

  constexpr void __set_blockCRC(int32_t value);

  constexpr int32_t& __get_combinedCRC();

  constexpr int32_t const& __get_combinedCRC() const;

  constexpr void __set_combinedCRC(int32_t value);

  constexpr int32_t& __get_allowableBlockSize();

  constexpr int32_t const& __get_allowableBlockSize() const;

  constexpr void __set_allowableBlockSize(int32_t value);

  constexpr ::System::IO::Stream*& __get_bsStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_bsStream() const;

  constexpr void __set_bsStream(::System::IO::Stream* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_incs();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_incs() const;

  constexpr void __set_incs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method Panic addr 0x10a5c90 size 0x4 virtual false final false
  static inline void Panic();

  /// @brief Method MakeMaps addr 0x10a5c94 size 0x8c virtual false final false
  inline void MakeMaps();

  /// @brief Method HbMakeCodeLengths addr 0x10a5d20 size 0x62c virtual false final false
  static inline void HbMakeCodeLengths(::ArrayW<char16_t, ::Array<char16_t>*> len, ::ArrayW<int32_t, ::Array<int32_t>*> freq, int32_t alphaSize, int32_t maxLen);

  static inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream* New_ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor addr 0x10a5bf0 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream* New_ctor(::System::IO::Stream* inStream, int32_t inBlockSize);

  /// @brief Method .ctor addr 0x10a634c size 0x20c virtual false final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t inBlockSize);

  /// @brief Method WriteByte addr 0x10a66f8 size 0x7c virtual true final false
  inline void WriteByte(uint8_t bv);

  /// @brief Method WriteRun addr 0x10a6774 size 0x23c virtual false final false
  inline void WriteRun();

  /// @brief Method Close addr 0x10a6a90 size 0x8c virtual true final false
  inline void Close();

  /// @brief Method Finish addr 0x10a5bfc size 0x64 virtual false final false
  inline void Finish();

  /// @brief Method Flush addr 0x10a6b98 size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method Initialize addr 0x10a6648 size 0x3c virtual false final false
  inline void Initialize();

  /// @brief Method InitBlock addr 0x10a6684 size 0x74 virtual false final false
  inline void InitBlock();

  /// @brief Method EndBlock addr 0x10a69b0 size 0xe0 virtual false final false
  inline void EndBlock();

  /// @brief Method EndCompression addr 0x10a6b1c size 0x7c virtual false final false
  inline void EndCompression();

  /// @brief Method HbAssignCodes addr 0x10a6ef4 size 0x88 virtual false final false
  inline void HbAssignCodes(::ArrayW<int32_t, ::Array<int32_t>*> code, ::ArrayW<char16_t, ::Array<char16_t>*> length, int32_t minLen, int32_t maxLen, int32_t alphaSize);

  /// @brief Method BsSetStream addr 0x10a6558 size 0x10 virtual false final false
  inline void BsSetStream(::System::IO::Stream* f);

  /// @brief Method BsFinishedWithStream addr 0x10a6e08 size 0xec virtual false final false
  inline void BsFinishedWithStream();

  /// @brief Method BsW addr 0x10a6cd0 size 0x110 virtual false final false
  inline void BsW(int32_t n, int32_t v);

  /// @brief Method BsPutUChar addr 0x10a6bbc size 0xc virtual false final false
  inline void BsPutUChar(int32_t c);

  /// @brief Method BsPutint addr 0x10a6c7c size 0x54 virtual false final false
  inline void BsPutint(int32_t u);

  /// @brief Method BsPutIntVS addr 0x10a6f7c size 0x4 virtual false final false
  inline void BsPutIntVS(int32_t numBits, int32_t c);

  /// @brief Method SendMTFValues addr 0x10a6f80 size 0xcb8 virtual false final false
  inline void SendMTFValues();

  /// @brief Method MoveToFrontCodeAndSend addr 0x10a6de0 size 0x28 virtual false final false
  inline void MoveToFrontCodeAndSend();

  /// @brief Method SimpleSort addr 0x10a7fdc size 0x314 virtual false final false
  inline void SimpleSort(int32_t lo, int32_t hi, int32_t d);

  /// @brief Method Vswap addr 0x10a8604 size 0x68 virtual false final false
  inline void Vswap(int32_t p1, int32_t p2, int32_t n);

  /// @brief Method Med3 addr 0x10a866c size 0x2c virtual false final false
  inline char16_t Med3(char16_t a, char16_t b, char16_t c);

  /// @brief Method QSort3 addr 0x10a8698 size 0x448 virtual false final false
  inline void QSort3(int32_t loSt, int32_t hiSt, int32_t dSt);

  /// @brief Method MainSort addr 0x10a8ae8 size 0x7f8 virtual false final false
  inline void MainSort();

  /// @brief Method RandomiseBlock addr 0x10a92e0 size 0x138 virtual false final false
  inline void RandomiseBlock();

  /// @brief Method DoReversibleTransformation addr 0x10a6bc8 size 0xb4 virtual false final false
  inline void DoReversibleTransformation();

  /// @brief Method FullGtU addr 0x10a82f0 size 0x314 virtual false final false
  inline bool FullGtU(int32_t i1, int32_t i2);

  /// @brief Method AllocateCompressStructures addr 0x10a6568 size 0xe0 virtual false final false
  inline void AllocateCompressStructures();

  /// @brief Method GenerateMTFValues addr 0x10a7c38 size 0x3a4 virtual false final false
  inline void GenerateMTFValues();

  /// @brief Method Read addr 0x10a9418 size 0x8 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek addr 0x10a9420 size 0x8 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x10a9428 size 0x4 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method Write addr 0x10a942c size 0x88 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method get_CanRead addr 0x10a94b4 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x10a94bc size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x10a94c4 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x10a94cc size 0x8 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x10a94d4 size 0x8 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x10a94dc size 0x4 virtual true final false
  inline void set_Position(int64_t value);

  // Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CBZip2OutputStream(CBZip2OutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CBZip2OutputStream(CBZip2OutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CBZip2OutputStream();

public:
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

  /// @brief Field SETMASK offset 0xffffffff size 0x4
  static constexpr int32_t SETMASK{ static_cast<int32_t>(0x200000) };

  /// @brief Field CLEARMASK offset 0xffffffff size 0x4
  static constexpr int32_t CLEARMASK{ static_cast<int32_t>(0xffdfffff) };

  /// @brief Field GREATER_ICOST offset 0xffffffff size 0x4
  static constexpr int32_t GREATER_ICOST{ static_cast<int32_t>(0xf) };

  /// @brief Field LESSER_ICOST offset 0xffffffff size 0x4
  static constexpr int32_t LESSER_ICOST{ static_cast<int32_t>(0x0) };

  /// @brief Field SMALL_THRESH offset 0xffffffff size 0x4
  static constexpr int32_t SMALL_THRESH{ static_cast<int32_t>(0x14) };

  /// @brief Field DEPTH_THRESH offset 0xffffffff size 0x4
  static constexpr int32_t DEPTH_THRESH{ static_cast<int32_t>(0xa) };

  /// @brief Field QSORT_STACK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t QSORT_STACK_SIZE{ static_cast<int32_t>(0x3e8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, 0xf8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream*, "Org.BouncyCastle.Apache.Bzip2", "CBZip2OutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::__CBZip2OutputStream__StackElem);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::__CBZip2OutputStream__StackElem*, "Org.BouncyCastle.Apache.Bzip2", "CBZip2OutputStream/StackElem");
