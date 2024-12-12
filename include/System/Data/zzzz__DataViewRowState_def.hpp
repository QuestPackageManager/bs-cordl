#pragma once
// IWYU pragma private; include "System/Data/DataViewRowState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataViewRowState)
// Forward declare root types
namespace System::Data {
struct DataViewRowState;
}
// Write type traits
MARK_VAL_T(::System::Data::DataViewRowState);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataViewRowState
struct CORDL_TYPE DataViewRowState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DataViewRowState_Unwrapped
  enum struct __DataViewRowState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Unchanged = static_cast<int32_t>(0x2),
    __E_Added = static_cast<int32_t>(0x4),
    __E_Deleted = static_cast<int32_t>(0x8),
    __E_ModifiedCurrent = static_cast<int32_t>(0x10),
    __E_ModifiedOriginal = static_cast<int32_t>(0x20),
    __E_OriginalRows = static_cast<int32_t>(0x2a),
    __E_CurrentRows = static_cast<int32_t>(0x16),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DataViewRowState_Unwrapped() const noexcept {
    return static_cast<__DataViewRowState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewRowState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataViewRowState(int32_t value__) noexcept;

  /// @brief Field Added value: I32(4)
  static ::System::Data::DataViewRowState const Added;

  /// @brief Field CurrentRows value: I32(22)
  static ::System::Data::DataViewRowState const CurrentRows;

  /// @brief Field Deleted value: I32(8)
  static ::System::Data::DataViewRowState const Deleted;

  /// @brief Field ModifiedCurrent value: I32(16)
  static ::System::Data::DataViewRowState const ModifiedCurrent;

  /// @brief Field ModifiedOriginal value: I32(32)
  static ::System::Data::DataViewRowState const ModifiedOriginal;

  /// @brief Field None value: I32(0)
  static ::System::Data::DataViewRowState const None;

  /// @brief Field OriginalRows value: I32(42)
  static ::System::Data::DataViewRowState const OriginalRows;

  /// @brief Field Unchanged value: I32(2)
  static ::System::Data::DataViewRowState const Unchanged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11409 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataViewRowState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataViewRowState, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewRowState, "System.Data", "DataViewRowState");
