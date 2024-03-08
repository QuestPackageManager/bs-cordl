#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TailStream)
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TailStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::TailStream);
// Type: System.Security.Cryptography::TailStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::TailStream*
class CORDL_TYPE TailStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field _Buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Buffer, put = __cordl_internal_set__Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _Buffer;

  /// @brief Field _BufferFull, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__BufferFull, put = __cordl_internal_set__BufferFull)) bool _BufferFull;

  /// @brief Field _BufferIndex, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__BufferIndex, put = __cordl_internal_set__BufferIndex)) int32_t _BufferIndex;

  /// @brief Field _BufferSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__BufferSize, put = __cordl_internal_set__BufferSize)) int32_t _BufferSize;

  /// @brief Method Clear, addr 0x25b5fa0, size 0x10, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x25b5fb0, size 0xc0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x25b61b0, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::Security::Cryptography::TailStream* New_ctor(int32_t bufferSize);

  /// @brief Method Read, addr 0x25b6274, size 0x60, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x25b61b4, size 0x60, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x25b6214, size 0x60, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x25b62d4, size 0x174, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Buffer();

  constexpr bool const& __cordl_internal_get__BufferFull() const;

  constexpr bool& __cordl_internal_get__BufferFull();

  constexpr int32_t const& __cordl_internal_get__BufferIndex() const;

  constexpr int32_t& __cordl_internal_get__BufferIndex();

  constexpr int32_t const& __cordl_internal_get__BufferSize() const;

  constexpr int32_t& __cordl_internal_get__BufferSize();

  constexpr void __cordl_internal_set__Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__BufferFull(bool value);

  constexpr void __cordl_internal_set__BufferIndex(int32_t value);

  constexpr void __cordl_internal_set__BufferSize(int32_t value);

  /// @brief Method .ctor, addr 0x25b5c64, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t bufferSize);

  /// @brief Method get_Buffer, addr 0x25b5e40, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Buffer();

  /// @brief Method get_CanRead, addr 0x25b6070, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x25b6078, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x25b6080, size 0x10, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x25b6090, size 0x60, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x25b60f0, size 0x60, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x25b6150, size 0x60, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TailStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TailStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TailStream(TailStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TailStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TailStream(TailStream const&) = delete;

  /// @brief Field _Buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Buffer;

  /// @brief Field _BufferSize, offset: 0x30, size: 0x4, def value: None
  int32_t ____BufferSize;

  /// @brief Field _BufferIndex, offset: 0x34, size: 0x4, def value: None
  int32_t ____BufferIndex;

  /// @brief Field _BufferFull, offset: 0x38, size: 0x1, def value: None
  bool ____BufferFull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::TailStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TailStream, ____Buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TailStream, ____BufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TailStream, ____BufferIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::TailStream, ____BufferFull) == 0x38, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::TailStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TailStream*, "System.Security.Cryptography", "TailStream");
