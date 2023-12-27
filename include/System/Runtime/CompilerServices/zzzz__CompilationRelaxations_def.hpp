#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompilationRelaxations)
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct CompilationRelaxations;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::CompilationRelaxations);
// Type: System.Runtime.CompilerServices::CompilationRelaxations
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3413))
// CS Name: ::System.Runtime.CompilerServices::CompilationRelaxations
struct CORDL_TYPE CompilationRelaxations {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompilationRelaxations_Unwrapped
  enum struct __CompilationRelaxations_Unwrapped : int32_t {
    __E_NoStringInterning = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompilationRelaxations_Unwrapped() const noexcept {
    return static_cast<__CompilationRelaxations_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompilationRelaxations(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompilationRelaxations();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoStringInterning value: static_cast<int32_t>(0x8)
  static ::System::Runtime::CompilerServices::CompilationRelaxations const NoStringInterning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CompilationRelaxations, 0x4>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilationRelaxations, "System.Runtime.CompilerServices", "CompilationRelaxations");
