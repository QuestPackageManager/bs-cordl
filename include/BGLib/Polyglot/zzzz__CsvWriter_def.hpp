#pragma once
// IWYU pragma private; include "BGLib/Polyglot/CsvWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CsvWriter)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace BGLib::Polyglot {
class CsvWriter;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::CsvWriter);
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.CsvWriter
class CORDL_TYPE CsvWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendCSVLine, addr 0x31f8c48, size 0x2c, virtual false, abstract: false, final false
  static inline void AppendCSVLine(::System::Text::StringBuilder* buffer, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method AppendCSVLine, addr 0x31f8c1c, size 0x2c, virtual false, abstract: false, final false
  static inline void AppendCSVLine(::System::Text::StringBuilder* buffer, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method AppendElement, addr 0x31f8b88, size 0x94, virtual false, abstract: false, final false
  static inline void AppendElement(::System::Text::StringBuilder* buffer, ::StringW element);

  /// @brief Method AppendRow, addr 0x31f8580, size 0x1d0, virtual false, abstract: false, final false
  static inline void AppendRow(::StringW filePath, ::System::Collections::Generic::List_1<::StringW>* row);

  /// @brief Method AppendRowInternal, addr 0x31f8750, size 0x35c, virtual false, abstract: false, final false
  static inline void AppendRowInternal(::System::Text::StringBuilder* buffer, ::System::Collections::Generic::IEnumerable_1<::StringW>* row);

  /// @brief Method HasEscapeChars, addr 0x31f8aac, size 0xdc, virtual false, abstract: false, final false
  static inline bool HasEscapeChars(::StringW element);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CsvWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CsvWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CsvWriter(CsvWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CsvWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CsvWriter(CsvWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21966 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::CsvWriter, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::CsvWriter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::CsvWriter*, "BGLib.Polyglot", "CsvWriter");
