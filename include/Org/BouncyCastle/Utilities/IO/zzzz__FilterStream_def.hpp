#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FilterStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class FilterStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::FilterStream);
// Type: Org.BouncyCastle.Utilities.IO::FilterStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3617))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(452))
// CS Name: ::Org.BouncyCastle.Utilities.IO::FilterStream*
class CORDL_TYPE FilterStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field s, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s))::System::IO::Stream* s;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __cordl_internal_get_s();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_s() const;

  constexpr void __cordl_internal_set_s(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Utilities::IO::FilterStream* New_ctor(::System::IO::Stream* s);

  /// @brief Method .ctor, addr 0x11e0c34, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* s);

  /// @brief Method get_CanRead, addr 0x11e0ca0, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x11e0cc0, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x11e0ce0, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x11e0d00, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x11e0d20, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x11e0d44, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method Close, addr 0x11e0d68, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x11e0dd0, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method Seek, addr 0x11e0df4, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x11e0e18, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Read, addr 0x11e0e3c, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x11e0e60, size 0x24, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Write, addr 0x11e0e84, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x11e0ea8, size 0x24, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  // Ctor Parameters [CppParam { name: "", ty: "FilterStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilterStream(FilterStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilterStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilterStream(FilterStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterStream();

public:
  /// @brief Field s, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::FilterStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::FilterStream, ___s) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::FilterStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::FilterStream*, "Org.BouncyCastle.Utilities.IO", "FilterStream");
