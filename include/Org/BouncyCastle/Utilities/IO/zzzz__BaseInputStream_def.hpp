#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Utilities.IO::BaseInputStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::BaseInputStream*
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

  /// @brief Method Close, addr 0x1422198, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x14221a8, size 0x4, virtual true, abstract: false, final true
  inline void Flush();

  static inline ::Org::BouncyCastle::Utilities::IO::BaseInputStream* New_ctor();

  /// @brief Method Read, addr 0x142226c, size 0x144, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x14223b0, size 0x40, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x14223f0, size 0x40, virtual true, abstract: false, final true
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x1422430, size 0x40, virtual true, abstract: false, final true
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr bool const& __cordl_internal_get_closed() const;

  constexpr bool& __cordl_internal_get_closed();

  constexpr void __cordl_internal_set_closed(bool value);

  /// @brief Method .ctor, addr 0x1422470, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x1422178, size 0x10, virtual true, abstract: false, final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x1422188, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x1422190, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x14221ac, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x14221ec, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x142222c, size 0x40, virtual true, abstract: false, final true
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

  /// @brief Field closed, offset: 0x28, size: 0x1, def value: None
  bool ___closed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::BaseInputStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::BaseInputStream, ___closed) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::BaseInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::BaseInputStream*, "Org.BouncyCastle.Utilities.IO", "BaseInputStream");
