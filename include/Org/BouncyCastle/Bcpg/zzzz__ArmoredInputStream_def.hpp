#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ArmoredInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArmoredInputStream)
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ArmoredInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ArmoredInputStream);
// Type: Org.BouncyCastle.Bcpg::ArmoredInputStream
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 125, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::ArmoredInputStream*
class CORDL_TYPE ArmoredInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field bufPtr, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bufPtr, put = __cordl_internal_set_bufPtr)) int32_t bufPtr;

  /// @brief Field clearText, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_clearText, put = __cordl_internal_set_clearText)) bool clearText;

  /// @brief Field crc, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_crc, put = __cordl_internal_set_crc))::Org::BouncyCastle::Bcpg::Crc24* crc;

  /// @brief Field crcFound, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_crcFound, put = __cordl_internal_set_crcFound)) bool crcFound;

  /// @brief Field decodingTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_decodingTable, put = setStaticF_decodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> decodingTable;

  /// @brief Field hasHeaders, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHeaders, put = __cordl_internal_set_hasHeaders)) bool hasHeaders;

  /// @brief Field header, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_header, put = __cordl_internal_set_header))::StringW header;

  /// @brief Field headerList, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_headerList, put = __cordl_internal_set_headerList))::System::Collections::IList* headerList;

  /// @brief Field input, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input))::System::IO::Stream* input;

  /// @brief Field isEndOfStream, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_isEndOfStream, put = __cordl_internal_set_isEndOfStream)) bool isEndOfStream;

  /// @brief Field lastC, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_lastC, put = __cordl_internal_set_lastC)) int32_t lastC;

  /// @brief Field newLineFound, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_newLineFound, put = __cordl_internal_set_newLineFound)) bool newLineFound;

  /// @brief Field outBuf, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_outBuf, put = __cordl_internal_set_outBuf))::ArrayW<int32_t, ::Array<int32_t>*> outBuf;

  /// @brief Field restart, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_restart, put = __cordl_internal_set_restart)) bool restart;

  /// @brief Field start, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) bool start;

  /// @brief Method Close, addr 0x1433714, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Decode, addr 0x1432508, size 0x208, virtual false, abstract: false, final false
  inline int32_t Decode(int32_t in0, int32_t in1, int32_t in2, int32_t in3, ::ArrayW<int32_t, ::Array<int32_t>*> result);

  /// @brief Method DoReadByte, addr 0x14331cc, size 0x298, virtual false, abstract: false, final false
  inline int32_t DoReadByte();

  /// @brief Method GetArmorHeaderLine, addr 0x1432c94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetArmorHeaderLine();

  /// @brief Method GetArmorHeaders, addr 0x1432c9c, size 0x26c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetArmorHeaders();

  /// @brief Method IsClearText, addr 0x1432c84, size 0x8, virtual false, abstract: false, final false
  inline bool IsClearText();

  /// @brief Method IsEndOfStream, addr 0x1432c8c, size 0x8, virtual false, abstract: false, final false
  inline bool IsEndOfStream();

  static inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* New_ctor(::System::IO::Stream* input, bool hasHeaders);

  /// @brief Method ParseHeaders, addr 0x1432850, size 0x434, virtual false, abstract: false, final false
  inline bool ParseHeaders();

  /// @brief Method Read, addr 0x1433548, size 0x1cc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x1433464, size 0x9c, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadByteClearText, addr 0x1432fac, size 0xd8, virtual false, abstract: false, final false
  inline int32_t ReadByteClearText();

  /// @brief Method ReadClearText, addr 0x1433084, size 0x148, virtual false, abstract: false, final false
  inline int32_t ReadClearText(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadIgnoreSpace, addr 0x1432f08, size 0x44, virtual false, abstract: false, final false
  inline int32_t ReadIgnoreSpace();

  /// @brief Method ReadIgnoreWhitespace, addr 0x1432f4c, size 0x60, virtual false, abstract: false, final false
  inline int32_t ReadIgnoreWhitespace();

  constexpr int32_t const& __cordl_internal_get_bufPtr() const;

  constexpr int32_t& __cordl_internal_get_bufPtr();

  constexpr bool const& __cordl_internal_get_clearText() const;

  constexpr bool& __cordl_internal_get_clearText();

  constexpr ::Org::BouncyCastle::Bcpg::Crc24*& __cordl_internal_get_crc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::Crc24*> const& __cordl_internal_get_crc() const;

  constexpr bool const& __cordl_internal_get_crcFound() const;

  constexpr bool& __cordl_internal_get_crcFound();

  constexpr bool const& __cordl_internal_get_hasHeaders() const;

  constexpr bool& __cordl_internal_get_hasHeaders();

  constexpr ::StringW const& __cordl_internal_get_header() const;

  constexpr ::StringW& __cordl_internal_get_header();

  constexpr ::System::Collections::IList*& __cordl_internal_get_headerList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_headerList() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_input() const;

  constexpr bool const& __cordl_internal_get_isEndOfStream() const;

  constexpr bool& __cordl_internal_get_isEndOfStream();

  constexpr int32_t const& __cordl_internal_get_lastC() const;

  constexpr int32_t& __cordl_internal_get_lastC();

  constexpr bool const& __cordl_internal_get_newLineFound() const;

  constexpr bool& __cordl_internal_get_newLineFound();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_outBuf() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_outBuf();

  constexpr bool const& __cordl_internal_get_restart() const;

  constexpr bool& __cordl_internal_get_restart();

  constexpr bool const& __cordl_internal_get_start() const;

  constexpr bool& __cordl_internal_get_start();

  constexpr void __cordl_internal_set_bufPtr(int32_t value);

  constexpr void __cordl_internal_set_clearText(bool value);

  constexpr void __cordl_internal_set_crc(::Org::BouncyCastle::Bcpg::Crc24* value);

  constexpr void __cordl_internal_set_crcFound(bool value);

  constexpr void __cordl_internal_set_hasHeaders(bool value);

  constexpr void __cordl_internal_set_header(::StringW value);

  constexpr void __cordl_internal_set_headerList(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_isEndOfStream(bool value);

  constexpr void __cordl_internal_set_lastC(int32_t value);

  constexpr void __cordl_internal_set_newLineFound(bool value);

  constexpr void __cordl_internal_set_outBuf(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_restart(bool value);

  constexpr void __cordl_internal_set_start(bool value);

  /// @brief Method .ctor, addr 0x1432710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x1432718, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, bool hasHeaders);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_decodingTable();

  static inline void setStaticF_decodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArmoredInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArmoredInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArmoredInputStream(ArmoredInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArmoredInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArmoredInputStream(ArmoredInputStream const&) = delete;

  /// @brief Field input, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field start, offset: 0x38, size: 0x1, def value: None
  bool ___start;

  /// @brief Field outBuf, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___outBuf;

  /// @brief Field bufPtr, offset: 0x48, size: 0x4, def value: None
  int32_t ___bufPtr;

  /// @brief Field crc, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::Crc24* ___crc;

  /// @brief Field crcFound, offset: 0x58, size: 0x1, def value: None
  bool ___crcFound;

  /// @brief Field hasHeaders, offset: 0x59, size: 0x1, def value: None
  bool ___hasHeaders;

  /// @brief Field header, offset: 0x60, size: 0x8, def value: None
  ::StringW ___header;

  /// @brief Field newLineFound, offset: 0x68, size: 0x1, def value: None
  bool ___newLineFound;

  /// @brief Field clearText, offset: 0x69, size: 0x1, def value: None
  bool ___clearText;

  /// @brief Field restart, offset: 0x6a, size: 0x1, def value: None
  bool ___restart;

  /// @brief Field headerList, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::IList* ___headerList;

  /// @brief Field lastC, offset: 0x78, size: 0x4, def value: None
  int32_t ___lastC;

  /// @brief Field isEndOfStream, offset: 0x7c, size: 0x1, def value: None
  bool ___isEndOfStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ArmoredInputStream, 0x80>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___start) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___outBuf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___bufPtr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___crc) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___crcFound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___hasHeaders) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___header) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___newLineFound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___clearText) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___restart) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___headerList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___lastC) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ArmoredInputStream, ___isEndOfStream) == 0x7c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ArmoredInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ArmoredInputStream*, "Org.BouncyCastle.Bcpg", "ArmoredInputStream");
