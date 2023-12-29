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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1811))
// CS Name: ::Org.BouncyCastle.Utilities.IO::PushbackStream*
class CORDL_TYPE PushbackStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  /// @brief Field buf, offset 0x30, size 0x4
  __declspec(property(get = __get_buf, put = __set_buf)) int32_t buf;

  constexpr int32_t& __get_buf();

  constexpr int32_t const& __get_buf() const;

  constexpr void __set_buf(int32_t value);

  static inline ::Org::BouncyCastle::Utilities::IO::PushbackStream* New_ctor(::System::IO::Stream* s);

  /// @brief Method .ctor addr 0x10ee968 size 0x10 virtual false final false
  inline void _ctor(::System::IO::Stream* s);

  /// @brief Method ReadByte addr 0x10ee978 size 0x24 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Read addr 0x10ee99c size 0x60 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Unread addr 0x10ee9fc size 0x6c virtual true final false
  inline void Unread(int32_t b);

  // Ctor Parameters [CppParam { name: "", ty: "PushbackStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PushbackStream(PushbackStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PushbackStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PushbackStream(PushbackStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PushbackStream();

public:
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
