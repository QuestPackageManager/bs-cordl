#pragma once
// IWYU pragma private; include "System/DateTimeToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeToken)
// Forward declare root types
namespace System {
struct DateTimeToken;
}
// Write type traits
MARK_VAL_T(::System::DateTimeToken);
// Dependencies System.DateTimeParse::DTT, System.TokenType
namespace System {
// Is value type: true
// CS Name: System.DateTimeToken
struct CORDL_TYPE DateTimeToken {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeToken();

  // Ctor Parameters [CppParam { name: "dtt", ty: "::System::DateTimeParse_DTT", modifiers: "", def_value: None }, CppParam { name: "suffix", ty: "::System::TokenType", modifiers: "", def_value: None
  // }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeToken(::System::DateTimeParse_DTT dtt, ::System::TokenType suffix, int32_t num) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2397 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field dtt, offset: 0x0, size: 0x4, def value: None
  ::System::DateTimeParse_DTT dtt;

  /// @brief Field suffix, offset: 0x4, size: 0x4, def value: None
  ::System::TokenType suffix;

  /// @brief Field num, offset: 0x8, size: 0x4, def value: None
  int32_t num;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DateTimeToken, dtt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeToken, suffix) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeToken, num) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DateTimeToken, 0xc>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeToken, "System", "DateTimeToken");
