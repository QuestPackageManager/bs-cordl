#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PasteArguments)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System {
class PasteArguments;
}
// Write type traits
MARK_REF_PTR_T(::System::PasteArguments);
// Type: System::PasteArguments
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::PasteArguments*
class CORDL_TYPE PasteArguments : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendArgument, addr 0x2f7a8c4, size 0x1dc, virtual false, abstract: false, final false
  static inline void AppendArgument(::System::Text::StringBuilder* stringBuilder, ::StringW argument);

  /// @brief Method ContainsNoWhitespaceOrQuotes, addr 0x2f7aaa0, size 0xc0, virtual false, abstract: false, final false
  static inline bool ContainsNoWhitespaceOrQuotes(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasteArguments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PasteArguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasteArguments(PasteArguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasteArguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasteArguments(PasteArguments const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::PasteArguments, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::PasteArguments);
DEFINE_IL2CPP_ARG_TYPE(::System::PasteArguments*, "System", "PasteArguments");
