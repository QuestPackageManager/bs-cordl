#pragma once
// IWYU pragma private; include "Unity/Properties/TypeGenerationOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeGenerationOptions)
// Forward declare root types
namespace Unity::Properties {
struct TypeGenerationOptions;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::TypeGenerationOptions);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.TypeGenerationOptions
struct CORDL_TYPE TypeGenerationOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeGenerationOptions_Unwrapped
  enum struct __TypeGenerationOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ValueType = static_cast<int32_t>(0x2),
    __E_ReferenceType = static_cast<int32_t>(0x4),
    __E_Default = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeGenerationOptions_Unwrapped() const noexcept {
    return static_cast<__TypeGenerationOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeGenerationOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeGenerationOptions(int32_t value__) noexcept;

  /// @brief Field Default value: I32(6)
  static ::Unity::Properties::TypeGenerationOptions const Default;

  /// @brief Field None value: I32(0)
  static ::Unity::Properties::TypeGenerationOptions const None;

  /// @brief Field ReferenceType value: I32(4)
  static ::Unity::Properties::TypeGenerationOptions const ReferenceType;

  /// @brief Field ValueType value: I32(2)
  static ::Unity::Properties::TypeGenerationOptions const ValueType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19331 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::TypeGenerationOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeGenerationOptions, 0x4>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeGenerationOptions, "Unity.Properties", "TypeGenerationOptions");
