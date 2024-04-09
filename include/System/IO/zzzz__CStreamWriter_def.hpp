#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CStreamWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
class TermInfoDriver;
}
// Forward declare root types
namespace System::IO {
class CStreamWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::CStreamWriter);
// Type: System.IO::CStreamWriter
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::CStreamWriter*
class CORDL_TYPE CStreamWriter : public ::System::IO::StreamWriter {
public:
  // Declarations
  /// @brief Field driver, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_driver, put = __cordl_internal_set_driver))::System::TermInfoDriver* driver;

  /// @brief Method InternalWriteChar, addr 0x27c4724, size 0x84, virtual false, abstract: false, final false
  inline void InternalWriteChar(char16_t val);

  /// @brief Method InternalWriteChars, addr 0x27c482c, size 0x8c, virtual false, abstract: false, final false
  inline void InternalWriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t n);

  /// @brief Method InternalWriteString, addr 0x27c47a8, size 0x84, virtual false, abstract: false, final false
  inline void InternalWriteString(::StringW val);

  static inline ::System::IO::CStreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method Write, addr 0x27c4250, size 0x348, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x27c48b8, size 0x28, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> val);

  /// @brief Method Write, addr 0x27c48e0, size 0xcc, virtual true, abstract: false, final false
  inline void Write(::StringW val);

  /// @brief Method Write, addr 0x27c4598, size 0x18c, virtual true, abstract: false, final false
  inline void Write(char16_t val);

  /// @brief Method WriteLine, addr 0x27c49ac, size 0x48, virtual true, abstract: false, final false
  inline void WriteLine(::StringW val);

  constexpr ::System::TermInfoDriver*& __cordl_internal_get_driver();

  constexpr ::cordl_internals::to_const_pointer<::System::TermInfoDriver*> const& __cordl_internal_get_driver() const;

  constexpr void __cordl_internal_set_driver(::System::TermInfoDriver* value);

  /// @brief Method .ctor, addr 0x27c4128, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CStreamWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CStreamWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CStreamWriter(CStreamWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CStreamWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CStreamWriter(CStreamWriter const&) = delete;

  /// @brief Field driver, offset: 0x70, size: 0x8, def value: None
  ::System::TermInfoDriver* ___driver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::CStreamWriter, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::IO::CStreamWriter, ___driver) == 0x70, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::CStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::CStreamWriter*, "System.IO", "CStreamWriter");
