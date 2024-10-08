#pragma once
// IWYU pragma private; include "System/IO/TextWriter_NullTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter_NullTextWriter)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class __TextWriter__NullTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__TextWriter__NullTextWriter);
// Type: ::NullTextWriter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::TextWriter::NullTextWriter*
class CORDL_TYPE __TextWriter__NullTextWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  __declspec(property(get = get_Encoding)) ::System::Text::Encoding* Encoding;

  static inline ::System::IO::__TextWriter__NullTextWriter* New_ctor();

  /// @brief Method Write, addr 0x3ccf5e0, size 0x4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x3ccf5e4, size 0x4, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x3ccf5f0, size 0x4, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method WriteLine, addr 0x3ccf5e8, size 0x4, virtual true, abstract: false, final false
  inline void WriteLine();

  /// @brief Method WriteLine, addr 0x3ccf5ec, size 0x4, virtual true, abstract: false, final false
  inline void WriteLine(::StringW value);

  /// @brief Method .ctor, addr 0x3ccf54c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Encoding, addr 0x3ccf5d8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextWriter__NullTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextWriter__NullTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextWriter__NullTextWriter(__TextWriter__NullTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextWriter__NullTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextWriter__NullTextWriter(__TextWriter__NullTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextWriter__NullTextWriter, 0x30>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__TextWriter__NullTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextWriter__NullTextWriter*, "System.IO", "TextWriter/NullTextWriter");
