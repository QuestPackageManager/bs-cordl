#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Utilities.Zlib::ZDeflaterOutputStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3619))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1827))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZDeflaterOutputStream*
class CORDL_TYPE ZDeflaterOutputStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z))::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Field flushLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_flushLevel, put = __cordl_internal_set_flushLevel)) int32_t flushLevel;

  /// @brief Field buf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf1, put = __cordl_internal_set_buf1))::ArrayW<uint8_t, ::Array<uint8_t>*> buf1;

  /// @brief Field outp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_outp, put = __cordl_internal_set_outp))::System::IO::Stream* outp;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_z();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __cordl_internal_get_z() const;

  constexpr void __cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  constexpr int32_t& __cordl_internal_get_flushLevel();

  constexpr int32_t const& __cordl_internal_get_flushLevel() const;

  constexpr void __cordl_internal_set_flushLevel(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf1();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf1() const;

  constexpr void __cordl_internal_set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::IO::Stream*& __cordl_internal_get_outp();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_outp() const;

  constexpr void __cordl_internal_set_outp(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* New_ctor(::System::IO::Stream* outp);

  /// @brief Method .ctor, addr 0x11696c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outp);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* New_ctor(::System::IO::Stream* outp, int32_t level);

  /// @brief Method .ctor, addr 0x11697cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outp, int32_t level);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* New_ctor(::System::IO::Stream* outp, int32_t level, bool nowrap);

  /// @brief Method .ctor, addr 0x11696d4, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outp, int32_t level, bool nowrap);

  /// @brief Method get_CanRead, addr 0x1169848, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x1169850, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x1169858, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x1169860, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x1169868, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x1169870, size 0x4, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method Write, addr 0x1169874, size 0x138, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method Seek, addr 0x11699d0, size 0x8, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x11699d8, size 0x4, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Read, addr 0x11699dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Flush, addr 0x11699e4, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method WriteByte, addr 0x1169a08, size 0x40, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Finish, addr 0x1169a48, size 0x138, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method End, addr 0x1169b80, size 0x54, virtual false, abstract: false, final false
  inline void End();

  /// @brief Method Close, addr 0x1169c18, size 0x19c, virtual true, abstract: false, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "ZDeflaterOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZDeflaterOutputStream(ZDeflaterOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZDeflaterOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZDeflaterOutputStream(ZDeflaterOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZDeflaterOutputStream();

public:
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

  /// @brief Field BUFSIZE offset 0xffffffff size 0x4
  static constexpr int32_t BUFSIZE{ static_cast<int32_t>(0x1060) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___z) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___flushLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___buf1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, ___outp) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZDeflaterOutputStream");
