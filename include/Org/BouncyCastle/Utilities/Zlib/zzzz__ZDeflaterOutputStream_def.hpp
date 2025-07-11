#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/ZDeflaterOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZDeflaterOutputStream)
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
class ZDeflaterOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZDeflaterOutputStream
class CORDL_TYPE ZDeflaterOutputStream : public ::System::IO::Stream {
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

  /// @brief Field outp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_outp, put = __cordl_internal_set_outp)) ::System::IO::Stream* outp;

  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Method Close, addr 0x25e3f58, size 0x198, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method End, addr 0x25e3ec0, size 0x54, virtual false, abstract: false, final false
  inline void End();

  /// @brief Method Finish, addr 0x25e3d90, size 0x130, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Flush, addr 0x25e3d2c, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* New_ctor(::System::IO::Stream* outp);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* New_ctor(::System::IO::Stream* outp, int32_t level);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* New_ctor(::System::IO::Stream* outp, int32_t level, bool nowrap);

  /// @brief Method Read, addr 0x25e3d24, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x25e3d18, size 0x8, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x25e3d20, size 0x4, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x25e3bc4, size 0x130, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x25e3d50, size 0x40, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf1() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf1();

  constexpr int32_t const& __cordl_internal_get_flushLevel() const;

  constexpr int32_t& __cordl_internal_get_flushLevel();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_outp() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_outp();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& __cordl_internal_get_z() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_flushLevel(int32_t value);

  constexpr void __cordl_internal_set_outp(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  /// @brief Method .ctor, addr 0x25e3a1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outp);

  /// @brief Method .ctor, addr 0x25e3b24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outp, int32_t level);

  /// @brief Method .ctor, addr 0x25e3a28, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outp, int32_t level, bool nowrap);

  /// @brief Method get_CanRead, addr 0x25e3b98, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x25e3ba0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x25e3ba8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x25e3bb0, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x25e3bb8, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x25e3bc0, size 0x4, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZDeflaterOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZDeflaterOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZDeflaterOutputStream(ZDeflaterOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZDeflaterOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZDeflaterOutputStream(ZDeflaterOutputStream const&) = delete;

  /// @brief Field BUFSIZE offset 0xffffffff size 0x4
  static constexpr int32_t BUFSIZE{ static_cast<int32_t>(0x1060) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1827 };

  /// @brief Field z, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___z;

  /// @brief Field flushLevel, offset: 0x30, size: 0x4, def value: None
  int32_t ___flushLevel;

  /// @brief Field buf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field buf1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf1;

  /// @brief Field outp, offset: 0x48, size: 0x8, def value: None
  ::System::IO::Stream* ___outp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___z) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___flushLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___buf1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___outp) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZDeflaterOutputStream");
