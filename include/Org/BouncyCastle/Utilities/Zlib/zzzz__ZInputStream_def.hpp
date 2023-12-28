#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZInputStream)
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZInputStream);
// Type: Org.BouncyCastle.Utilities.Zlib::ZInputStream
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1829))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZInputStream*
class CORDL_TYPE ZInputStream : public ::System::IO::Stream {
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

  /// @brief Field input, offset 0x50, size 0x8
  __declspec(property(get = __get_input, put = __set_input))::System::IO::Stream* input;

  /// @brief Field closed, offset 0x58, size 0x1
  __declspec(property(get = __get_closed, put = __set_closed)) bool closed;

  /// @brief Field nomoreinput, offset 0x59, size 0x1
  __declspec(property(get = __get_nomoreinput, put = __set_nomoreinput)) bool nomoreinput;

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

  constexpr ::System::IO::Stream*& __get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_input() const;

  constexpr void __set_input(::System::IO::Stream* value);

  constexpr bool& __get_closed();

  constexpr bool const& __get_closed() const;

  constexpr void __set_closed(bool value);

  constexpr bool& __get_nomoreinput();

  constexpr bool const& __get_nomoreinput() const;

  constexpr void __set_nomoreinput(bool value);

  /// @brief Method GetDefaultZStream addr 0x116a1dc size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Utilities::Zlib::ZStream* GetDefaultZStream(bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0x116a248 size 0x30 virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, bool nowrap);

  /// @brief Method .ctor addr 0x116a278 size 0x30 virtual false final false
  inline void _ctor(::System::IO::Stream* input, bool nowrap);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method .ctor addr 0x116a2a8 size 0x120 virtual false final false
  inline void _ctor(::System::IO::Stream* input, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, int32_t level);

  /// @brief Method .ctor addr 0x116a3d4 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* input, int32_t level);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInputStream* New_ctor(::System::IO::Stream* input, int32_t level, bool nowrap);

  /// @brief Method .ctor addr 0x116a3dc size 0x114 virtual false final false
  inline void _ctor(::System::IO::Stream* input, int32_t level, bool nowrap);

  /// @brief Method get_CanRead addr 0x116a4f0 size 0x10 virtual true final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x116a500 size 0x8 virtual true final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x116a508 size 0x8 virtual true final true
  inline bool get_CanWrite();

  /// @brief Method Close addr 0x116a510 size 0x94 virtual true final false
  inline void Close();

  /// @brief Method Flush addr 0x116a5a4 size 0x4 virtual true final true
  inline void Flush();

  /// @brief Method get_FlushMode addr 0x116a5a8 size 0x8 virtual true final false
  inline int32_t get_FlushMode();

  /// @brief Method set_FlushMode addr 0x116a5b0 size 0x8 virtual true final false
  inline void set_FlushMode(int32_t value);

  /// @brief Method get_Length addr 0x116a5b8 size 0x40 virtual true final true
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x116a5f8 size 0x40 virtual true final true
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x116a638 size 0x40 virtual true final true
  inline void set_Position(int64_t value);

  /// @brief Method Read addr 0x116a678 size 0x1ec virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method ReadByte addr 0x116a864 size 0x58 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Seek addr 0x116a8bc size 0x40 virtual true final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x116a8fc size 0x40 virtual true final true
  inline void SetLength(int64_t value);

  /// @brief Method get_TotalIn addr 0x116a93c size 0x1c virtual true final false
  inline int64_t get_TotalIn();

  /// @brief Method get_TotalOut addr 0x116a958 size 0x1c virtual true final false
  inline int64_t get_TotalOut();

  /// @brief Method Write addr 0x116a974 size 0x40 virtual true final true
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "ZInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZInputStream(ZInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZInputStream(ZInputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZInputStream();

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

  /// @brief Field input, offset: 0x50, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field closed, offset: 0x58, size: 0x1, def value: None
  bool ___closed;

  /// @brief Field nomoreinput, offset: 0x59, size: 0x1, def value: None
  bool ___nomoreinput;

  /// @brief Field BufferSize offset 0xffffffff size 0x4
  static constexpr int32_t BufferSize{ static_cast<int32_t>(0x1000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZInputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZInputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZInputStream");
