#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZOutputStream)
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
class ZOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream);
// Type: Org.BouncyCastle.Utilities.Zlib::ZOutputStream
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZOutputStream*
class CORDL_TYPE ZOutputStream : public ::System::IO::Stream {
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
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf1, put = __cordl_internal_set_buf1))::ArrayW<uint8_t, ::Array<uint8_t>*> buf1;

  /// @brief Field closed, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) bool closed;

  /// @brief Field compress, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_compress, put = __cordl_internal_set_compress)) bool compress;

  /// @brief Field flushLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_flushLevel, put = __cordl_internal_set_flushLevel)) int32_t flushLevel;

  /// @brief Field output, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_output, put = __cordl_internal_set_output))::System::IO::Stream* output;

  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z))::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Method Close, addr 0x110f4f8, size 0x2c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DoClose, addr 0x110f524, size 0x1a8, virtual false, abstract: false, final false
  inline void DoClose();

  /// @brief Method End, addr 0x110f6cc, size 0x4c, virtual true, abstract: false, final false
  inline void End();

  /// @brief Method Finish, addr 0x110f718, size 0x16c, virtual true, abstract: false, final false
  inline void Finish();

  /// @brief Method Flush, addr 0x110f884, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetDefaultZStream, addr 0x110f300, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Zlib::ZStream* GetDefaultZStream(bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, int32_t level);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method Read, addr 0x110f978, size 0x40, virtual true, abstract: false, final true
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x110f9b8, size 0x40, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x110f9f8, size 0x40, virtual true, abstract: false, final true
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x110fa70, size 0x168, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x110fbd8, size 0x40, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

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

  constexpr ::System::IO::Stream*& __cordl_internal_get_output();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_output() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_z();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __cordl_internal_get_z() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_closed(bool value);

  constexpr void __cordl_internal_set_compress(bool value);

  constexpr void __cordl_internal_set_flushLevel(int32_t value);

  constexpr void __cordl_internal_set_output(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  /// @brief Method .ctor, addr 0x110f370, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x110f3d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, int32_t level);

  /// @brief Method .ctor, addr 0x110f3d8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  /// @brief Method .ctor, addr 0x110f3a0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, bool nowrap);

  /// @brief Method .ctor, addr 0x110f1e8, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method get_CanRead, addr 0x110f4d8, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x110f4e0, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x110f4e8, size 0x10, virtual true, abstract: false, final true
  inline bool get_CanWrite();

  /// @brief Method get_FlushMode, addr 0x110f8a8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FlushMode();

  /// @brief Method get_Length, addr 0x110f8b8, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x110f8f8, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method get_TotalIn, addr 0x110fa38, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_TotalIn();

  /// @brief Method get_TotalOut, addr 0x110fa54, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_TotalOut();

  /// @brief Method set_FlushMode, addr 0x110f8b0, size 0x8, virtual true, abstract: false, final false
  inline void set_FlushMode(int32_t value);

  /// @brief Method set_Position, addr 0x110f938, size 0x40, virtual true, abstract: false, final true
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZOutputStream(ZOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZOutputStream(ZOutputStream const&) = delete;

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

  /// @brief Field output, offset: 0x50, size: 0x8, def value: None
  ::System::IO::Stream* ___output;

  /// @brief Field closed, offset: 0x58, size: 0x1, def value: None
  bool ___closed;

  /// @brief Field BufferSize offset 0xffffffff size 0x4
  static constexpr int32_t BufferSize{ static_cast<int32_t>(0x1000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___z) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___flushLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___buf1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___compress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___output) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream, ___closed) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZOutputStream");
