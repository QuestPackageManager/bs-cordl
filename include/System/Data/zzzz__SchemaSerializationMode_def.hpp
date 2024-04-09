#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaSerializationMode)
// Forward declare root types
namespace System::Data {
struct SchemaSerializationMode;
}
// Write type traits
MARK_VAL_T(::System::Data::SchemaSerializationMode);
// Type: System.Data::SchemaSerializationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::SchemaSerializationMode
struct CORDL_TYPE SchemaSerializationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SchemaSerializationMode_Unwrapped
  enum struct __SchemaSerializationMode_Unwrapped : int32_t {
    __E_IncludeSchema = static_cast<int32_t>(0x1),
    __E_ExcludeSchema = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SchemaSerializationMode_Unwrapped() const noexcept {
    return static_cast<__SchemaSerializationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaSerializationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SchemaSerializationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ExcludeSchema value: static_cast<int32_t>(0x2)
  static ::System::Data::SchemaSerializationMode const ExcludeSchema;

  /// @brief Field IncludeSchema value: static_cast<int32_t>(0x1)
  static ::System::Data::SchemaSerializationMode const IncludeSchema;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SchemaSerializationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::SchemaSerializationMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SchemaSerializationMode, "System.Data", "SchemaSerializationMode");
