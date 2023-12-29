#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CsvWriter)
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Polyglot {
class CsvWriter;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::CsvWriter);
// Type: Polyglot::CsvWriter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15532))
// CS Name: ::Polyglot::CsvWriter*
class CORDL_TYPE CsvWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendRow addr 0x2686650 size 0x3b4 virtual false final false
  static inline void AppendRow(::StringW filePath, ::System::Collections::Generic::List_1<::StringW>* row);

  /// @brief Method AppendElement addr 0x2686ab8 size 0x84 virtual false final false
  static inline void AppendElement(::System::Text::StringBuilder* buffer, ::StringW element);

  /// @brief Method HasEscapeChars addr 0x2686a04 size 0xb4 virtual false final false
  static inline bool HasEscapeChars(::StringW element);

  static inline ::Polyglot::CsvWriter* New_ctor();

  /// @brief Method .ctor addr 0x2686b3c size 0x8 virtual false final false
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
static_assert(::cordl_internals::size_check_v<::Polyglot::CsvWriter, 0x10>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::CsvWriter);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::CsvWriter*, "Polyglot", "CsvWriter");
