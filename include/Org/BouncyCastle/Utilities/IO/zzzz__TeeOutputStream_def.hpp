#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/TeeOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeeOutputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class TeeOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::TeeOutputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.TeeOutputStream
class CORDL_TYPE TeeOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field output, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_output, put = __cordl_internal_set_output)) ::System::IO::Stream* output;

  /// @brief Field tee, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tee, put = __cordl_internal_set_tee)) ::System::IO::Stream* tee;

  /// @brief Method Close, addr 0x25da958, size 0x74, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Utilities::IO::TeeOutputStream* New_ctor(::System::IO::Stream* output, ::System::IO::Stream* tee);

  /// @brief Method Write, addr 0x25da9cc, size 0x68, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x25daa34, size 0x50, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::System::IO::Stream* const& __cordl_internal_get_output() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_output();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_tee() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_tee();

  constexpr void __cordl_internal_set_output(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_tee(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x25da92c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, ::System::IO::Stream* tee);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeeOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeeOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeeOutputStream(TeeOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeeOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeeOutputStream(TeeOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1815 };

  /// @brief Field output, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___output;

  /// @brief Field tee, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ___tee;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::TeeOutputStream, ___output) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::TeeOutputStream, ___tee) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::TeeOutputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::TeeOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::TeeOutputStream*, "Org.BouncyCastle.Utilities.IO", "TeeOutputStream");
