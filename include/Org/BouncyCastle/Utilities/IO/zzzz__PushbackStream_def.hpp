#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PushbackStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class PushbackStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::PushbackStream);
// Type: Org.BouncyCastle.Utilities.IO::PushbackStream
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::PushbackStream*
class CORDL_TYPE PushbackStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  /// @brief Field buf, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) int32_t buf;

  static inline ::Org::BouncyCastle::Utilities::IO::PushbackStream* New_ctor(::System::IO::Stream* s);

  /// @brief Method Read, addr 0x11f6148, size 0x60, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x11f6124, size 0x24, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Unread, addr 0x11f61a8, size 0x6c, virtual true, abstract: false, final false
  inline void Unread(int32_t b);

  constexpr int32_t const& __cordl_internal_get_buf() const;

  constexpr int32_t& __cordl_internal_get_buf();

  constexpr void __cordl_internal_set_buf(int32_t value);

  /// @brief Method .ctor, addr 0x11f6114, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PushbackStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PushbackStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PushbackStream(PushbackStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PushbackStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PushbackStream(PushbackStream const&) = delete;

  /// @brief Field buf, offset: 0x30, size: 0x4, def value: None
  int32_t ___buf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::PushbackStream, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::PushbackStream, ___buf) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::PushbackStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::PushbackStream*, "Org.BouncyCastle.Utilities.IO", "PushbackStream");
