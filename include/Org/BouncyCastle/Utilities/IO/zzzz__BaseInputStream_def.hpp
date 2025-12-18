#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/BaseInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseInputStream)
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class BaseInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::BaseInputStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.BaseInputStream
class CORDL_TYPE BaseInputStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field closed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) bool closed;

  /// @brief Method Close, addr 0x3591194, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x35911a4, size 0x4, virtual true, abstract: false, final true
  inline void Flush();

  static inline ::Org::BouncyCastle::Utilities::IO::BaseInputStream* New_ctor();

  /// @brief Method Read, addr 0x3591250, size 0x150, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x35913a0, size 0x38, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x35913d8, size 0x38, virtual true, abstract: false, final true
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x3591410, size 0x38, virtual true, abstract: false, final true
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr bool const& __cordl_internal_get_closed() const;

  constexpr bool& __cordl_internal_get_closed();

  constexpr void __cordl_internal_set_closed(bool value);

  /// @brief Method .ctor, addr 0x3591448, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x3591174, size 0x10, virtual true, abstract: false, final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x3591184, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x359118c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x35911a8, size 0x38, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x35911e0, size 0x38, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x3591218, size 0x38, virtual true, abstract: false, final true
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInputStream(BaseInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInputStream(BaseInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 498 };

  /// @brief Field closed, offset: 0x28, size: 0x1, def value: None
  bool ___closed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::BaseInputStream, ___closed) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::BaseInputStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::BaseInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::BaseInputStream*, "Org.BouncyCastle.Utilities.IO", "BaseInputStream");
