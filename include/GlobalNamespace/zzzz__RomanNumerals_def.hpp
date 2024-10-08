#pragma once
// IWYU pragma private; include "GlobalNamespace/RomanNumerals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RomanNumerals)
// Forward declare root types
namespace GlobalNamespace {
class RomanNumerals;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RomanNumerals);
// Type: ::RomanNumerals
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RomanNumerals*
class CORDL_TYPE RomanNumerals : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToRomanNumeralString, addr 0x3ab9a1c, size 0xa4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5137 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RomanNumerals, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RomanNumerals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RomanNumerals*, "", "RomanNumerals");
