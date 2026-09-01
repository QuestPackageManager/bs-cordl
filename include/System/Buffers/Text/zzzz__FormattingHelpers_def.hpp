#pragma once
// IWYU pragma private; include "System\Buffers\Text\FormattingHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattingHelpers)
// Forward declare root types
namespace System::Buffers::Text {
class FormattingHelpers;
}
// Write type traits
MARK_REF_T(::System::Buffers::Text::FormattingHelpers*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::FormattingHelpers*, "System.Buffers.Text", "FormattingHelpers");
// Dependencies System.Object
namespace System::Buffers::Text {
// Is value type: false
// CS Name: System.Buffers.Text.FormattingHelpers
class CORDL_TYPE FormattingHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CountDigits, addr 0x5bf4148, size 0x68, virtual false, abstract: false, final false
  static inline int32_t CountDigits(uint32_t value);

  /// @brief Method CountDigits, addr 0x5bf406c, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t CountDigits(uint64_t value);

  /// @brief Method CountHexDigits, addr 0x5bf41b0, size 0x48, virtual false, abstract: false, final false
  static inline int32_t CountHexDigits(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattingHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormattingHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattingHelpers(FormattingHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattingHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattingHelpers(FormattingHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Text::FormattingHelpers) == 0x10, "Size mismatch!");

} // namespace System::Buffers::Text
