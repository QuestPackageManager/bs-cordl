#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeToken)
namespace System {
struct __DateTimeParse__DTT;
}
namespace System {
struct TokenType;
}
// Forward declare root types
namespace System {
struct DateTimeToken;
}
// Write type traits
MARK_VAL_T(::System::DateTimeToken);
// Type: System::DateTimeToken
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2401)), TypeDefinitionIndex(TypeDefinitionIndex(2387))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2395))
// CS Name: ::System::DateTimeToken
struct CORDL_TYPE DateTimeToken {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "dtt", ty: "::System::__DateTimeParse__DTT", modifiers: "", def_value: None }, CppParam { name: "suffix", ty: "::System::TokenType", modifiers: "", def_value:
  // None }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeToken(::System::__DateTimeParse__DTT dtt, ::System::TokenType suffix, int32_t num) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeToken();

  /// @brief Field dtt, offset: 0x0, size: 0x4, def value: None
  ::System::__DateTimeParse__DTT dtt;

  /// @brief Field suffix, offset: 0x4, size: 0x4, def value: None
  ::System::TokenType suffix;

  /// @brief Field num, offset: 0x8, size: 0x4, def value: None
  int32_t num;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeToken, 0xc>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeToken, "System", "DateTimeToken");
