#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NoteURL)
// Forward declare root types
namespace Notepad {
struct NoteURL;
}
// Write type traits
MARK_VAL_T(::Notepad::NoteURL);
// Type: Notepad::NoteURL
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Notepad {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16279))
// CS Name: ::Notepad::NoteURL
struct CORDL_TYPE NoteURL {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr NoteURL(::StringW name, ::StringW url) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteURL();

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field url, offset: 0x8, size: 0x8, def value: None
  ::StringW url;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Notepad::NoteURL, 0x10>, "Size mismatch!");

static_assert(offsetof(::Notepad::NoteURL, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteURL, url) == 0x8, "Offset mismatch!");

} // namespace Notepad
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteURL, "Notepad", "NoteURL");
