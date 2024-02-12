#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CsvWriter)
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
// Type: BGLib.Polyglot::CsvWriter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15668))
// CS Name: ::BGLib.Polyglot::CsvWriter*
class CORDL_TYPE CsvWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendRow, addr 0xe4a78c, size 0x3b4, virtual false, abstract: false, final false
  static inline void AppendRow(::StringW filePath, ::System::Collections::Generic::List_1<::StringW>* row);

  /// @brief Method AppendElement, addr 0xe4abf4, size 0x84, virtual false, abstract: false, final false
  static inline void AppendElement(::System::Text::StringBuilder* buffer, ::StringW element);

  /// @brief Method HasEscapeChars, addr 0xe4ab40, size 0xb4, virtual false, abstract: false, final false
  static inline bool HasEscapeChars(::StringW element);

  static inline ::BGLib::Polyglot::CsvWriter* New_ctor();

  /// @brief Method .ctor, addr 0xe4ac78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CsvWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CsvWriter(CsvWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CsvWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CsvWriter(CsvWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CsvWriter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::CsvWriter, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::CsvWriter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::CsvWriter*, "BGLib.Polyglot", "CsvWriter");
