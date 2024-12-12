#pragma once
// IWYU pragma private; include "System/Data/Aggregate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Aggregate)
// Forward declare root types
namespace System::Data {
struct Aggregate;
}
// Write type traits
MARK_VAL_T(::System::Data::Aggregate);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.Aggregate
struct CORDL_TYPE Aggregate {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Aggregate_Unwrapped
  enum struct __Aggregate_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Sum = static_cast<int32_t>(0x1e),
    __E_Avg = static_cast<int32_t>(0x1f),
    __E_Min = static_cast<int32_t>(0x20),
    __E_Max = static_cast<int32_t>(0x21),
    __E_Count = static_cast<int32_t>(0x22),
    __E_StDev = static_cast<int32_t>(0x23),
    __E_Var = static_cast<int32_t>(0x25),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Aggregate_Unwrapped() const noexcept {
    return static_cast<__Aggregate_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Aggregate();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Aggregate(int32_t value__) noexcept;

  /// @brief Field Avg value: I32(31)
  static ::System::Data::Aggregate const Avg;

  /// @brief Field Count value: I32(34)
  static ::System::Data::Aggregate const Count;

  /// @brief Field Max value: I32(33)
  static ::System::Data::Aggregate const Max;

  /// @brief Field Min value: I32(32)
  static ::System::Data::Aggregate const Min;

  /// @brief Field None value: I32(-1)
  static ::System::Data::Aggregate const None;

  /// @brief Field StDev value: I32(35)
  static ::System::Data::Aggregate const StDev;

  /// @brief Field Sum value: I32(30)
  static ::System::Data::Aggregate const Sum;

  /// @brief Field Var value: I32(37)
  static ::System::Data::Aggregate const Var;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11413 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Aggregate, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Aggregate, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Aggregate, "System.Data", "Aggregate");
