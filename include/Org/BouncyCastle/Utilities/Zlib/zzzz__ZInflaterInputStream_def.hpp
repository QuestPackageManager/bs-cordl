#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/ZInflaterInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZInflaterInputStream)
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
class ZInflaterInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZInflaterInputStream
class CORDL_TYPE ZInflaterInputStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field buf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf1, put = __cordl_internal_set_buf1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf1;

  /// @brief Field flushLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_flushLevel, put = __cordl_internal_set_flushLevel)) int32_t flushLevel;

  /// @brief Field inp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_inp, put = __cordl_internal_set_inp)) ::System::IO::Stream* inp;

  /// @brief Field nomoreinput, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_nomoreinput, put = __cordl_internal_set_nomoreinput)) bool nomoreinput;

  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Method Close, addr 0x353e5f4, size 0x7c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x353e5d0, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream* New_ctor(::System::IO::Stream* inp);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream* New_ctor(::System::IO::Stream* inp, bool nowrap);

  /// @brief Method Read, addr 0x353e44c, size 0x168, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method ReadByte, addr 0x353e68c, size 0x58, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x353e440, size 0x8, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x353e448, size 0x4, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x353e43c, size 0x4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x353e5f0, size 0x4, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf1() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf1();

  constexpr int32_t const& __cordl_internal_get_flushLevel() const;

  constexpr int32_t& __cordl_internal_get_flushLevel();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_inp() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_inp();

  constexpr bool const& __cordl_internal_get_nomoreinput() const;

  constexpr bool& __cordl_internal_get_nomoreinput();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& __cordl_internal_get_z() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_flushLevel(int32_t value);

  constexpr void __cordl_internal_set_inp(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_nomoreinput(bool value);

  constexpr void __cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  /// @brief Method .ctor, addr 0x353e2f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inp);

  /// @brief Method .ctor, addr 0x353e300, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inp, bool nowrap);

  /// @brief Method get_CanRead, addr 0x353e410, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x353e418, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x353e420, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x353e428, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x353e430, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x353e438, size 0x4, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZInflaterInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZInflaterInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZInflaterInputStream(ZInflaterInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZInflaterInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZInflaterInputStream(ZInflaterInputStream const&) = delete;

  /// @brief Field BUFSIZE offset 0xffffffff size 0x4
  static constexpr int32_t BUFSIZE{ static_cast<int32_t>(0x1060) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1828 };

  /// @brief Field z, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___z;

  /// @brief Field flushLevel, offset: 0x30, size: 0x4, def value: None
  int32_t ___flushLevel;

  /// @brief Field buf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field buf1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf1;

  /// @brief Field inp, offset: 0x48, size: 0x8, def value: None
  ::System::IO::Stream* ___inp;

  /// @brief Field nomoreinput, offset: 0x50, size: 0x1, def value: None
  bool ___nomoreinput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, ___z) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, ___flushLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, ___buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, ___buf1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, ___inp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, ___nomoreinput) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZInflaterInputStream");
