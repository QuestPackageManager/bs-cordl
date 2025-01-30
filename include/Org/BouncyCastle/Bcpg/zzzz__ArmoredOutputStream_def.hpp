#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ArmoredOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArmoredOutputStream)
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ArmoredOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ArmoredOutputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.ArmoredOutputStream
class CORDL_TYPE ArmoredOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field HeaderVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HeaderVersion, put = setStaticF_HeaderVersion)) ::StringW HeaderVersion;

  /// @brief Field Version, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version, put = setStaticF_Version)) ::StringW Version;

  /// @brief Field buf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) ::ArrayW<int32_t, ::Array<int32_t>*> buf;

  /// @brief Field bufPtr, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_bufPtr, put = __cordl_internal_set_bufPtr)) int32_t bufPtr;

  /// @brief Field chunkCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkCount, put = __cordl_internal_set_chunkCount)) int32_t chunkCount;

  /// @brief Field clearText, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_clearText, put = __cordl_internal_set_clearText)) bool clearText;

  /// @brief Field crc, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_crc, put = __cordl_internal_set_crc)) ::Org::BouncyCastle::Bcpg::Crc24* crc;

  /// @brief Field encodingTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingTable, put = setStaticF_encodingTable)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingTable;

  /// @brief Field footerStart, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_footerStart, put = setStaticF_footerStart)) ::StringW footerStart;

  /// @brief Field footerTail, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_footerTail, put = setStaticF_footerTail)) ::StringW footerTail;

  /// @brief Field headerStart, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_headerStart, put = setStaticF_headerStart)) ::StringW headerStart;

  /// @brief Field headerTail, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_headerTail, put = setStaticF_headerTail)) ::StringW headerTail;

  /// @brief Field headers, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::System::Collections::IDictionary* headers;

  /// @brief Field lastb, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_lastb, put = __cordl_internal_set_lastb)) int32_t lastb;

  /// @brief Field newLine, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_newLine, put = __cordl_internal_set_newLine)) bool newLine;

  /// @brief Field nl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nl, put = setStaticF_nl)) ::StringW nl;

  /// @brief Field outStream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_outStream, put = __cordl_internal_set_outStream)) ::System::IO::Stream* outStream;

  /// @brief Field start, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) bool start;

  /// @brief Field type, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  /// @brief Method AddHeader, addr 0x2640f6c, size 0x218, virtual false, abstract: false, final false
  inline void AddHeader(::StringW name, ::StringW val);

  /// @brief Method BeginClearText, addr 0x26413ac, size 0x1d4, virtual false, abstract: false, final false
  inline void BeginClearText(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method Close, addr 0x2642128, size 0x38, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DoClose, addr 0x2642160, size 0x1ac, virtual false, abstract: false, final false
  inline void DoClose();

  /// @brief Method DoWrite, addr 0x2641580, size 0x44, virtual false, abstract: false, final false
  inline void DoWrite(::StringW s);

  /// @brief Method Encode, addr 0x2640340, size 0x2f4, virtual false, abstract: false, final false
  static inline void Encode(::System::IO::Stream* outStream, ::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t len);

  /// @brief Method EndClearText, addr 0x26415c4, size 0x8, virtual false, abstract: false, final false
  inline void EndClearText();

  static inline ::Org::BouncyCastle::Bcpg::ArmoredOutputStream* New_ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Bcpg::ArmoredOutputStream* New_ctor(::System::IO::Stream* outStream, ::System::Collections::IDictionary* headers);

  /// @brief Method ResetHeaders, addr 0x2641184, size 0x228, virtual false, abstract: false, final false
  inline void ResetHeaders();

  /// @brief Method SetHeader, addr 0x2640760, size 0x2b4, virtual false, abstract: false, final false
  inline void SetHeader(::StringW name, ::StringW val);

  /// @brief Method WriteByte, addr 0x26415cc, size 0xac0, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method WriteHeaderEntry, addr 0x264208c, size 0x9c, virtual false, abstract: false, final false
  inline void WriteHeaderEntry(::StringW name, ::StringW v);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_buf();

  constexpr int32_t const& __cordl_internal_get_bufPtr() const;

  constexpr int32_t& __cordl_internal_get_bufPtr();

  constexpr int32_t const& __cordl_internal_get_chunkCount() const;

  constexpr int32_t& __cordl_internal_get_chunkCount();

  constexpr bool const& __cordl_internal_get_clearText() const;

  constexpr bool& __cordl_internal_get_clearText();

  constexpr ::Org::BouncyCastle::Bcpg::Crc24* const& __cordl_internal_get_crc() const;

  constexpr ::Org::BouncyCastle::Bcpg::Crc24*& __cordl_internal_get_crc();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_headers() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_headers();

  constexpr int32_t const& __cordl_internal_get_lastb() const;

  constexpr int32_t& __cordl_internal_get_lastb();

  constexpr bool const& __cordl_internal_get_newLine() const;

  constexpr bool& __cordl_internal_get_newLine();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_outStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_outStream();

  constexpr bool const& __cordl_internal_get_start() const;

  constexpr bool& __cordl_internal_get_start();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_buf(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_bufPtr(int32_t value);

  constexpr void __cordl_internal_set_chunkCount(int32_t value);

  constexpr void __cordl_internal_set_clearText(bool value);

  constexpr void __cordl_internal_set_crc(::Org::BouncyCastle::Bcpg::Crc24* value);

  constexpr void __cordl_internal_set_headers(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_lastb(int32_t value);

  constexpr void __cordl_internal_set_newLine(bool value);

  constexpr void __cordl_internal_set_outStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_start(bool value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x2640634, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor, addr 0x2640a14, size 0x558, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream, ::System::Collections::IDictionary* headers);

  static inline ::StringW getStaticF_HeaderVersion();

  static inline ::StringW getStaticF_Version();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_encodingTable();

  static inline ::StringW getStaticF_footerStart();

  static inline ::StringW getStaticF_footerTail();

  static inline ::StringW getStaticF_headerStart();

  static inline ::StringW getStaticF_headerTail();

  static inline ::StringW getStaticF_nl();

  static inline void setStaticF_HeaderVersion(::StringW value);

  static inline void setStaticF_Version(::StringW value);

  static inline void setStaticF_encodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_footerStart(::StringW value);

  static inline void setStaticF_footerTail(::StringW value);

  static inline void setStaticF_headerStart(::StringW value);

  static inline void setStaticF_headerTail(::StringW value);

  static inline void setStaticF_nl(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArmoredOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArmoredOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArmoredOutputStream(ArmoredOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArmoredOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArmoredOutputStream(ArmoredOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 551 };

  /// @brief Field outStream, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___outStream;

  /// @brief Field buf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___buf;

  /// @brief Field bufPtr, offset: 0x40, size: 0x4, def value: None
  int32_t ___bufPtr;

  /// @brief Field crc, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::Crc24* ___crc;

  /// @brief Field chunkCount, offset: 0x50, size: 0x4, def value: None
  int32_t ___chunkCount;

  /// @brief Field lastb, offset: 0x54, size: 0x4, def value: None
  int32_t ___lastb;

  /// @brief Field start, offset: 0x58, size: 0x1, def value: None
  bool ___start;

  /// @brief Field clearText, offset: 0x59, size: 0x1, def value: None
  bool ___clearText;

  /// @brief Field newLine, offset: 0x5a, size: 0x1, def value: None
  bool ___newLine;

  /// @brief Field type, offset: 0x60, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field headers, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___headers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___outStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___bufPtr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___crc) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___chunkCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___lastb) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___start) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___clearText) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___newLine) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___type) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, ___headers) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ArmoredOutputStream, 0x70>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ArmoredOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ArmoredOutputStream*, "Org.BouncyCastle.Bcpg", "ArmoredOutputStream");
