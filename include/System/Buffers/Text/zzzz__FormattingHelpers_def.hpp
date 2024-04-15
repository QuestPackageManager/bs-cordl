#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::System::Buffers::Text::FormattingHelpers);
// Type: System.Buffers.Text::FormattingHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Buffers::Text {
// Is value type: false
// CS Name: ::System.Buffers.Text::FormattingHelpers*
class CORDL_TYPE FormattingHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CountDigits, addr 0x2812584, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t CountDigits(uint32_t value);

  /// @brief Method CountDigits, addr 0x28124c8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t CountDigits(uint64_t value);

  /// @brief Method CountHexDigits, addr 0x28125f0, size 0x48, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::Text::FormattingHelpers, 0x10>, "Size mismatch!");

} // namespace System::Buffers::Text
NEED_NO_BOX(::System::Buffers::Text::FormattingHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Text::FormattingHelpers*, "System.Buffers.Text", "FormattingHelpers");
