#pragma once
// IWYU pragma private; include "System/IO/TextReader_NullTextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader_NullTextReader)
// Forward declare root types
namespace GlobalNamespace {
class TextReader_NullTextReader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextReader_NullTextReader);
// Dependencies System.IO.TextReader
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.IO.TextReader/NullTextReader
class CORDL_TYPE TextReader_NullTextReader : public ::System::IO::TextReader {
public:
  // Declarations
  static inline ::GlobalNamespace::TextReader_NullTextReader* New_ctor();

  /// @brief Method Read, addr 0x59ecda8, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadLine, addr 0x59ecdb0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method .ctor, addr 0x59ecd50, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextReader_NullTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextReader_NullTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextReader_NullTextReader(TextReader_NullTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextReader_NullTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextReader_NullTextReader(TextReader_NullTextReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextReader_NullTextReader, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextReader_NullTextReader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextReader_NullTextReader*, "System.IO", "TextReader/NullTextReader");
