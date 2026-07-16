#pragma once
// IWYU pragma private; include "GlobalNamespace/AutocompleteResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutocompleteResult)
// Forward declare root types
namespace GlobalNamespace {
struct AutocompleteResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutocompleteResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutocompleteResult, "", "AutocompleteResult");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AutocompleteResult
struct CORDL_TYPE AutocompleteResult {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutocompleteResult();

  // Ctor Parameters [CppParam { name: "userWrittenCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "matches", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None },
  // CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }]
  constexpr AutocompleteResult(int32_t userWrittenCount, ::ArrayW<::StringW> matches, bool isValid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field userWrittenCount, offset: 0x0, size: 0x4, def value: None
  int32_t userWrittenCount;

  /// @brief Field matches, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW> matches;

  /// @brief Field isValid, offset: 0x10, size: 0x1, def value: None
  bool isValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutocompleteResult, userWrittenCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutocompleteResult, matches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutocompleteResult, isValid) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutocompleteResult) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
