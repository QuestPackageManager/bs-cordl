#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataSetDateTime)
// Forward declare root types
namespace System::Data {
struct DataSetDateTime;
}
// Write type traits
MARK_VAL_T(::System::Data::DataSetDateTime);
// Type: System.Data::DataSetDateTime
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::DataSetDateTime
struct CORDL_TYPE DataSetDateTime {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DataSetDateTime_Unwrapped
  enum struct __DataSetDateTime_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x1),
    __E_Unspecified = static_cast<int32_t>(0x2),
    __E_UnspecifiedLocal = static_cast<int32_t>(0x3),
    __E_Utc = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DataSetDateTime_Unwrapped() const noexcept {
    return static_cast<__DataSetDateTime_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataSetDateTime();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataSetDateTime(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Local value: static_cast<int32_t>(0x1)
  static ::System::Data::DataSetDateTime const Local;

  /// @brief Field Unspecified value: static_cast<int32_t>(0x2)
  static ::System::Data::DataSetDateTime const Unspecified;

  /// @brief Field UnspecifiedLocal value: static_cast<int32_t>(0x3)
  static ::System::Data::DataSetDateTime const UnspecifiedLocal;

  /// @brief Field Utc value: static_cast<int32_t>(0x4)
  static ::System::Data::DataSetDateTime const Utc;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataSetDateTime, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataSetDateTime, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataSetDateTime, "System.Data", "DataSetDateTime");
