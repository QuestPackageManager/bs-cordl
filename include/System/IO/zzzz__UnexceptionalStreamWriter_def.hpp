#pragma once
// IWYU pragma private; include "System/IO/UnexceptionalStreamWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.IO::UnexceptionalStreamWriter
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::UnexceptionalStreamWriter*
class CORDL_TYPE UnexceptionalStreamWriter : public ::System::IO::StreamWriter {
public:
  // Declarations
  /// @brief Method Flush, addr 0x28f7104, size 0x84, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::IO::UnexceptionalStreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method Write, addr 0x28f7188, size 0x84, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x28f7290, size 0x84, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Write, addr 0x28f7314, size 0x84, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x28f720c, size 0x84, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method .ctor, addr 0x28f708c, size 0x78, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::UnexceptionalStreamWriter, 0x70>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::UnexceptionalStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::UnexceptionalStreamWriter*, "System.IO", "UnexceptionalStreamWriter");
