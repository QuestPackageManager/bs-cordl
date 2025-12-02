#pragma once
// IWYU pragma private; include "System/Data/AggregateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AggregateType)
// Forward declare root types
namespace System::Data {
struct AggregateType;
}
// Write type traits
MARK_VAL_T(::System::Data::AggregateType);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.AggregateType
struct CORDL_TYPE AggregateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AggregateType_Unwrapped
  enum struct __AggregateType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Sum = static_cast<int32_t>(0x4),
    __E_Mean = static_cast<int32_t>(0x5),
    __E_Min = static_cast<int32_t>(0x6),
    __E_Max = static_cast<int32_t>(0x7),
    __E_First = static_cast<int32_t>(0x8),
    __E_Count = static_cast<int32_t>(0x9),
    __E_Var = static_cast<int32_t>(0xa),
    __E_StDev = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AggregateType_Unwrapped() const noexcept {
    return static_cast<__AggregateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AggregateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AggregateType(int32_t value__) noexcept;

  /// @brief Field Count value: I32(9)
  static ::System::Data::AggregateType const Count;

  /// @brief Field First value: I32(8)
  static ::System::Data::AggregateType const First;

  /// @brief Field Max value: I32(7)
  static ::System::Data::AggregateType const Max;

  /// @brief Field Mean value: I32(5)
  static ::System::Data::AggregateType const Mean;

  /// @brief Field Min value: I32(6)
  static ::System::Data::AggregateType const Min;

  /// @brief Field None value: I32(0)
  static ::System::Data::AggregateType const None;

  /// @brief Field StDev value: I32(11)
  static ::System::Data::AggregateType const StDev;

  /// @brief Field Sum value: I32(4)
  static ::System::Data::AggregateType const Sum;

  /// @brief Field Var value: I32(10)
  static ::System::Data::AggregateType const Var;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13723 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::AggregateType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::AggregateType, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AggregateType, "System.Data", "AggregateType");
