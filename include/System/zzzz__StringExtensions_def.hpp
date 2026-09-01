#pragma once
// IWYU pragma private; include "System\StringExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringExtensions)
// Forward declare root types
namespace System {
class StringExtensions;
}
// Write type traits
MARK_REF_T(::System::StringExtensions*);
DEFINE_IL2CPP_CLASS(::System::StringExtensions*, "System", "StringExtensions");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.StringExtensions
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SubstringTrim, addr 0x63738c0, size 0x13c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::StringExtensions) == 0x10, "Size mismatch!");

} // namespace System
