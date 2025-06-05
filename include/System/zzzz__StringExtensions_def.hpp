#pragma once
// IWYU pragma private; include "System/StringExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringExtensions)
// Forward declare root types
namespace System {
class StringExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::StringExtensions);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.StringExtensions
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SubstringTrim, addr 0x440919c, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW SubstringTrim(::StringW value, int32_t startIndex, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringExtensions(StringExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringExtensions(StringExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::StringExtensions, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::StringExtensions*, "System", "StringExtensions");
