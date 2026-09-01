#pragma once
// IWYU pragma private; include "System\IO\TextWriter_NullTextWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter_NullTextWriter)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace GlobalNamespace {
class TextWriter_NullTextWriter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextWriter_NullTextWriter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextWriter_NullTextWriter*, "System.IO", "TextWriter/NullTextWriter");
// Dependencies System.IO.TextWriter
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.IO.TextWriter/NullTextWriter
class CORDL_TYPE TextWriter_NullTextWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  __declspec(property(get = get_Encoding)) ::System::Text::Encoding* Encoding;

  static inline ::GlobalNamespace::TextWriter_NullTextWriter* New_ctor();

  /// @brief Method Write, addr 0x5c0442c, size 0x4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x5c04430, size 0x4, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x5c0443c, size 0x4, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method WriteLine, addr 0x5c04434, size 0x4, virtual true, abstract: false, final false
  inline void WriteLine();

  /// @brief Method WriteLine, addr 0x5c04438, size 0x4, virtual true, abstract: false, final false
  inline void WriteLine(::StringW value);

  /// @brief Method .ctor, addr 0x5c04390, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Encoding, addr 0x5c04424, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextWriter_NullTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextWriter_NullTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextWriter_NullTextWriter(TextWriter_NullTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextWriter_NullTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextWriter_NullTextWriter(TextWriter_NullTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TextWriter_NullTextWriter) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
