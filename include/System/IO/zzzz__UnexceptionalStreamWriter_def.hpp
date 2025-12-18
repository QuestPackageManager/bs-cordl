#pragma once
// IWYU pragma private; include "System/IO/UnexceptionalStreamWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnexceptionalStreamWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class UnexceptionalStreamWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::UnexceptionalStreamWriter);
// Dependencies System.IO.StreamWriter
namespace System::IO {
// Is value type: false
// CS Name: System.IO.UnexceptionalStreamWriter
class CORDL_TYPE UnexceptionalStreamWriter : public ::System::IO::StreamWriter {
public:
  // Declarations
  /// @brief Method Flush, addr 0x5a71b64, size 0x98, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::IO::UnexceptionalStreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method Write, addr 0x5a71bfc, size 0x88, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x5a71d0c, size 0x88, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Write, addr 0x5a71d94, size 0x88, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x5a71c84, size 0x88, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method .ctor, addr 0x5a71ae8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnexceptionalStreamWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnexceptionalStreamWriter(UnexceptionalStreamWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnexceptionalStreamWriter(UnexceptionalStreamWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::UnexceptionalStreamWriter, 0x70>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::UnexceptionalStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::UnexceptionalStreamWriter*, "System.IO", "UnexceptionalStreamWriter");
