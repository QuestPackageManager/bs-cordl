#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/TeeInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Utilities.IO::TeeInputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::TeeInputStream*
class CORDL_TYPE TeeInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field input, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input))::System::IO::Stream* input;

  /// @brief Field tee, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tee, put = __cordl_internal_set_tee))::System::IO::Stream* tee;

  /// @brief Method Close, addr 0x13c1ad4, size 0x74, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Utilities::IO::TeeInputStream* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* tee);

  /// @brief Method Read, addr 0x13c1b48, size 0x78, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ReadByte, addr 0x13c1bc0, size 0x5c, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_input() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_tee();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_tee() const;

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_tee(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x13c1aa8, size 0x2c, virtual false, abstract: false, final false
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

  /// @brief Field input, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field tee, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ___tee;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::TeeInputStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::TeeInputStream, ___input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::TeeInputStream, ___tee) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::TeeInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::TeeInputStream*, "Org.BouncyCastle.Utilities.IO", "TeeInputStream");
