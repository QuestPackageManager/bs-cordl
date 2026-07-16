#pragma once
// IWYU pragma private; include "GlobalNamespace/RomanNumerals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RomanNumerals)
// Forward declare root types
namespace GlobalNamespace {
class RomanNumerals;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RomanNumerals*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RomanNumerals*, "", "RomanNumerals");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RomanNumerals
class CORDL_TYPE RomanNumerals : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToRomanNumeralString, addr 0x58ff36c, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW ToRomanNumeralString(int32_t input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RomanNumerals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RomanNumerals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RomanNumerals(RomanNumerals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RomanNumerals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RomanNumerals(RomanNumerals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RomanNumerals) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
