#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/UndefinedSchemaIdHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UndefinedSchemaIdHandling)
// Forward declare root types
namespace Newtonsoft::Json::Schema {
struct UndefinedSchemaIdHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling);
// Dependencies
namespace Newtonsoft::Json::Schema {
// Is value type: true
// CS Name: Newtonsoft.Json.Schema.UndefinedSchemaIdHandling
struct CORDL_TYPE UndefinedSchemaIdHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UndefinedSchemaIdHandling_Unwrapped
  enum struct __UndefinedSchemaIdHandling_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseTypeName = static_cast<int32_t>(0x1),
    __E_UseAssemblyQualifiedName = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UndefinedSchemaIdHandling_Unwrapped() const noexcept {
    return static_cast<__UndefinedSchemaIdHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UndefinedSchemaIdHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UndefinedSchemaIdHandling(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const None;

  /// @brief Field UseAssemblyQualifiedName value: I32(2)
  static ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const UseAssemblyQualifiedName;

  /// @brief Field UseTypeName value: I32(1)
  static ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const UseTypeName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10375 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling, "Newtonsoft.Json.Schema", "UndefinedSchemaIdHandling");
