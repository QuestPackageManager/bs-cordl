#pragma once
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
// Type: Newtonsoft.Json.Schema::UndefinedSchemaIdHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: true
// CS Name: ::Newtonsoft.Json.Schema::UndefinedSchemaIdHandling
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const None;

  /// @brief Field UseAssemblyQualifiedName value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const UseAssemblyQualifiedName;

  /// @brief Field UseTypeName value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const UseTypeName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling, "Newtonsoft.Json.Schema", "UndefinedSchemaIdHandling");
