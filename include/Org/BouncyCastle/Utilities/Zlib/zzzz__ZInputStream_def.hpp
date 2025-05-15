#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/ZInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZInputStream)
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZInputStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZInputStream
class CORDL_TYPE ZInputStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_FlushMode, put = set_FlushMode)) int32_t FlushMode;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_TotalIn)) int64_t TotalIn;

  __declspec(property(get = get_TotalOut)) int64_t TotalOut;

  /// @brief Field buf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf1, put = __cordl_internal_set_buf1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf1;

  /// @brief Field closed, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) bool closed;

  /// @brief Field compress, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_compress, put = __cordl_internal_set_compress)) bool compress;

  /// @brief Field flushLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_flushLevel, put = __cordl_internal_set_flushLevel)) int32_t flushLevel;

  /// @brief Field input, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input)) ::System::IO::Stream* input;

  /// @brief Field nomoreinput, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_nomoreinput, put = __cordl_internal_set_nomoreinput)) bool nomoreinput;

  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Method Close, addr 0x25e47c8, size 0x94, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x25e485c, size 0x4, virtual true, abstract: false, final true
  inline void Flush();

  /// @brief Method GetDefaultZStream, addr 0x25e4494, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Zlib::ZStream* GetDefaultZStream(bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, int32_t level);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, int32_t level, bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method Read, addr 0x25e4918, size 0x1bc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method ReadByte, addr 0x25e4ad4, size 0x58, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x25e4b2c, size 0x38, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x25e4b64, size 0x38, virtual true, abstract: false, final true
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x25e4bd4, size 0x38, virtual true, abstract: false, final true
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf1() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf1();

  constexpr bool const& __cordl_internal_get_closed() const;

  constexpr bool& __cordl_internal_get_closed();

  constexpr bool const& __cordl_internal_get_compress() const;

  constexpr bool& __cordl_internal_get_compress();

  constexpr int32_t const& __cordl_internal_get_flushLevel() const;

  constexpr int32_t& __cordl_internal_get_flushLevel();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_input() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr bool const& __cordl_internal_get_nomoreinput() const;

  constexpr bool& __cordl_internal_get_nomoreinput();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& __cordl_internal_get_z() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_closed(bool value);

  constexpr void __cordl_internal_set_compress(bool value);

  constexpr void __cordl_internal_set_flushLevel(int32_t value);

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_nomoreinput(bool value);

  constexpr void __cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  /// @brief Method .ctor, addr 0x25e4500, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x25e468c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, int32_t level);

  /// @brief Method .ctor, addr 0x25e4694, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, int32_t level, bool nowrap);

  /// @brief Method .ctor, addr 0x25e4530, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, bool nowrap);

  /// @brief Method .ctor, addr 0x25e4560, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method get_CanRead, addr 0x25e47a8, size 0x10, virtual true, abstract: false, final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x25e47b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x25e47c0, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanWrite();

  /// @brief Method get_FlushMode, addr 0x25e4860, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FlushMode();

  /// @brief Method get_Length, addr 0x25e4870, size 0x38, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x25e48a8, size 0x38, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method get_TotalIn, addr 0x25e4b9c, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_TotalIn();

  /// @brief Method get_TotalOut, addr 0x25e4bb8, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_TotalOut();

  /// @brief Method set_FlushMode, addr 0x25e4868, size 0x8, virtual true, abstract: false, final false
  inline void set_FlushMode(int32_t value);

  /// @brief Method set_Position, addr 0x25e48e0, size 0x38, virtual true, abstract: false, final true
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZInputStream(ZInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZInputStream(ZInputStream const&) = delete;

  /// @brief Field BufferSize offset 0xffffffff size 0x4
  static constexpr int32_t BufferSize{ static_cast<int32_t>(0x1000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1829 };

  /// @brief Field z, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___z;

  /// @brief Field flushLevel, offset: 0x30, size: 0x4, def value: None
  int32_t ___flushLevel;

  /// @brief Field buf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field buf1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf1;

  /// @brief Field compress, offset: 0x48, size: 0x1, def value: None
  bool ___compress;

  /// @brief Field input, offset: 0x50, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field closed, offset: 0x58, size: 0x1, def value: None
  bool ___closed;

  /// @brief Field nomoreinput, offset: 0x59, size: 0x1, def value: None
  bool ___nomoreinput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___z) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___flushLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___buf1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___compress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___input) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___closed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInputStream, ___nomoreinput) == 0x59, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZInputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZInputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZInputStream");
