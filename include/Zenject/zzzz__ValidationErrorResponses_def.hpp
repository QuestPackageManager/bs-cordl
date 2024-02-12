#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationErrorResponses)
// Forward declare root types
namespace Zenject {
struct ValidationErrorResponses;
}
// Write type traits
MARK_VAL_T(::Zenject::ValidationErrorResponses);
// Type: Zenject::ValidationErrorResponses
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10311))
// CS Name: ::Zenject::ValidationErrorResponses
struct CORDL_TYPE ValidationErrorResponses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValidationErrorResponses_Unwrapped
  enum struct __ValidationErrorResponses_Unwrapped : int32_t {
    __E_Log = static_cast<int32_t>(0x0),
    __E_Throw = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValidationErrorResponses_Unwrapped() const noexcept {
    return static_cast<__ValidationErrorResponses_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValidationErrorResponses(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationErrorResponses();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Log value: static_cast<int32_t>(0x0)
  static ::Zenject::ValidationErrorResponses const Log;

  /// @brief Field Throw value: static_cast<int32_t>(0x1)
  static ::Zenject::ValidationErrorResponses const Throw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ValidationErrorResponses, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::ValidationErrorResponses, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ValidationErrorResponses, "Zenject", "ValidationErrorResponses");
