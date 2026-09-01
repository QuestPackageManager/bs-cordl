#pragma once
// IWYU pragma private; include "System\Data\MissingSchemaAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissingSchemaAction)
// Forward declare root types
namespace System::Data {
struct MissingSchemaAction;
}
// Write type traits
MARK_VAL_T(::System::Data::MissingSchemaAction);
DEFINE_IL2CPP_CLASS(::System::Data::MissingSchemaAction, "System.Data", "MissingSchemaAction");
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.MissingSchemaAction
struct CORDL_TYPE MissingSchemaAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MissingSchemaAction_Unwrapped
  enum struct __MissingSchemaAction_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x1),
    __E_Ignore = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
    __E_AddWithKey = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MissingSchemaAction_Unwrapped() const noexcept {
    return static_cast<__MissingSchemaAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingSchemaAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MissingSchemaAction(int32_t value__) noexcept;

  /// @brief Field Add value: I32(1)
  static ::System::Data::MissingSchemaAction const Add;

  /// @brief Field AddWithKey value: I32(4)
  static ::System::Data::MissingSchemaAction const AddWithKey;

  /// @brief Field Error value: I32(3)
  static ::System::Data::MissingSchemaAction const Error;

  /// @brief Field Ignore value: I32(2)
  static ::System::Data::MissingSchemaAction const Ignore;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13836 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::MissingSchemaAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Data::MissingSchemaAction) == 0x4, "Size mismatch!");

} // namespace System::Data
