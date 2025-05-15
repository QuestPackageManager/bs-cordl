#pragma once
// IWYU pragma private; include "SFB/ExtensionFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExtensionFilter)
// Forward declare root types
namespace SFB {
struct ExtensionFilter;
}
// Write type traits
MARK_VAL_T(::SFB::ExtensionFilter);
// Dependencies
namespace SFB {
// Is value type: true
// CS Name: SFB.ExtensionFilter
struct CORDL_TYPE ExtensionFilter {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3b75570, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW filterName, ::ArrayW<::StringW, ::Array<::StringW>*> filterExtensions);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionFilter();

  // Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
  // def_value: None }]
  constexpr ExtensionFilter(::StringW _name, ::ArrayW<::StringW, ::Array<::StringW>*> _extensions) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _name, offset: 0x0, size: 0x8, def value: None
  ::StringW _name;

  /// @brief Field _extensions, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> _extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::SFB::ExtensionFilter, _name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::SFB::ExtensionFilter, _extensions) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::SFB::ExtensionFilter, 0x10>, "Size mismatch!");

} // namespace SFB
DEFINE_IL2CPP_ARG_TYPE(::SFB::ExtensionFilter, "SFB", "ExtensionFilter");
