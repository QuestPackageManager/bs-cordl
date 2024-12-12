#pragma once
// IWYU pragma private; include "System/Data/DataRowState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowState)
// Forward declare root types
namespace System::Data {
struct DataRowState;
}
// Write type traits
MARK_VAL_T(::System::Data::DataRowState);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataRowState
struct CORDL_TYPE DataRowState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DataRowState_Unwrapped
  enum struct __DataRowState_Unwrapped : int32_t {
    __E_Detached = static_cast<int32_t>(0x1),
    __E_Unchanged = static_cast<int32_t>(0x2),
    __E_Added = static_cast<int32_t>(0x4),
    __E_Deleted = static_cast<int32_t>(0x8),
    __E_Modified = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DataRowState_Unwrapped() const noexcept {
    return static_cast<__DataRowState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataRowState(int32_t value__) noexcept;

  /// @brief Field Added value: I32(4)
  static ::System::Data::DataRowState const Added;

  /// @brief Field Deleted value: I32(8)
  static ::System::Data::DataRowState const Deleted;

  /// @brief Field Detached value: I32(1)
  static ::System::Data::DataRowState const Detached;

  /// @brief Field Modified value: I32(16)
  static ::System::Data::DataRowState const Modified;

  /// @brief Field Unchanged value: I32(2)
  static ::System::Data::DataRowState const Unchanged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11392 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRowState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataRowState, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowState, "System.Data", "DataRowState");
