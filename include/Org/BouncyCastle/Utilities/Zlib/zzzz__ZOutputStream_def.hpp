#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZOutputStream)
namespace System::IO {
struct SeekOrigin;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1297))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZOutputStream*
class CORDL_TYPE ZOutputStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Field flushLevel, offset 0x30, size 0x4
  __declspec(property(get = __get_flushLevel, put = __set_flushLevel)) int32_t flushLevel;

  /// @brief Field buf, offset 0x38, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf1, offset 0x40, size 0x8
  __declspec(property(get = __get_buf1, put = __set_buf1))::ArrayW<uint8_t, ::Array<uint8_t>*> buf1;

  /// @brief Field compress, offset 0x48, size 0x1
  __declspec(property(get = __get_compress, put = __set_compress)) bool compress;

  /// @brief Field output, offset 0x50, size 0x8
  __declspec(property(get = __get_output, put = __set_output))::System::IO::Stream* output;

  /// @brief Field closed, offset 0x58, size 0x1
  __declspec(property(get = __get_closed, put = __set_closed)) bool closed;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_FlushMode, put = set_FlushMode)) int32_t FlushMode;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_TotalIn)) int64_t TotalIn;

  __declspec(property(get = get_TotalOut)) int64_t TotalOut;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __get_z();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __get_z() const;

  constexpr void __set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  constexpr int32_t& __get_flushLevel();

  constexpr int32_t const& __get_flushLevel() const;

  constexpr void __set_flushLevel(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf1();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf1() const;

  constexpr void __set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_compress();

  constexpr bool const& __get_compress() const;

  constexpr void __set_compress(bool value);

  constexpr ::System::IO::Stream*& __get_output();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_output() const;

  constexpr void __set_output(::System::IO::Stream* value);

  constexpr bool& __get_closed();

  constexpr bool const& __get_closed() const;

  constexpr void __set_closed(bool value);

  /// @brief Method GetDefaultZStream, addr 0xfa3218, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Zlib::ZStream* GetDefaultZStream(bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0xfa3288, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, bool nowrap);

  /// @brief Method .ctor, addr 0xfa32b8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method .ctor, addr 0xfa3100, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, int32_t level);

  /// @brief Method .ctor, addr 0xfa32e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, int32_t level);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* New_ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  /// @brief Method .ctor, addr 0xfa32f0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  /// @brief Method get_CanRead, addr 0xfa33f0, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0xfa33f8, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0xfa3400, size 0x10, virtual true, abstract: false, final true
  inline bool get_CanWrite();

  /// @brief Method Close, addr 0xfa3410, size 0x2c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DoClose, addr 0xfa343c, size 0x1a8, virtual false, abstract: false, final false
  inline void DoClose();

  /// @brief Method End, addr 0xfa35e4, size 0x4c, virtual true, abstract: false, final false
  inline void End();

  /// @brief Method Finish, addr 0xfa3630, size 0x16c, virtual true, abstract: false, final false
  inline void Finish();

  /// @brief Method Flush, addr 0xfa379c, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method get_FlushMode, addr 0xfa37c0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FlushMode();

  /// @brief Method set_FlushMode, addr 0xfa37c8, size 0x8, virtual true, abstract: false, final false
  inline void set_FlushMode(int32_t value);

  /// @brief Method get_Length, addr 0xfa37d0, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0xfa3810, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0xfa3850, size 0x40, virtual true, abstract: false, final true
  inline void set_Position(int64_t value);

  /// @brief Method Read, addr 0xfa3890, size 0x40, virtual true, abstract: false, final true
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0xfa38d0, size 0x40, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0xfa3910, size 0x40, virtual true, abstract: false, final true
  inline void SetLength(int64_t value);

  /// @brief Method get_TotalIn, addr 0xfa3950, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_TotalIn();

  /// @brief Method get_TotalOut, addr 0xfa396c, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_TotalOut();

  /// @brief Method Write, addr 0xfa3988, size 0x168, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0xfa3af0, size 0x40, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  // Ctor Parameters [CppParam { name: "", ty: "ZOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZOutputStream(ZOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZOutputStream(ZOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZOutputStream();

public:
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
