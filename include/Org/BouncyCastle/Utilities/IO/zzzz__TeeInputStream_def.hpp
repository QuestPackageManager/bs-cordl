#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/TeeInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeeInputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class TeeInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::TeeInputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseInputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.TeeInputStream
class CORDL_TYPE TeeInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field input, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input)) ::System::IO::Stream* input;

  /// @brief Field tee, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tee, put = __cordl_internal_set_tee)) ::System::IO::Stream* tee;

  /// @brief Method Close, addr 0x25d6ce4, size 0x74, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Utilities::IO::TeeInputStream* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* tee);

  /// @brief Method Read, addr 0x25d6d58, size 0x78, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ReadByte, addr 0x25d6dd0, size 0x5c, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_input() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_tee() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_tee();

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_tee(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x25d6cb8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::IO::Stream* tee);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeeInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeeInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeeInputStream(TeeInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeeInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeeInputStream(TeeInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1814 };

  /// @brief Field input, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field tee, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ___tee;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::TeeInputStream, ___input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::TeeInputStream, ___tee) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::TeeInputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::TeeInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::TeeInputStream*, "Org.BouncyCastle.Utilities.IO", "TeeInputStream");
