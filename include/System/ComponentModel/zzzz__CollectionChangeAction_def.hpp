#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionChangeAction)
// Forward declare root types
namespace System::ComponentModel {
struct CollectionChangeAction;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::CollectionChangeAction);
// Type: System.ComponentModel::CollectionChangeAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::System.ComponentModel::CollectionChangeAction
struct CORDL_TYPE CollectionChangeAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CollectionChangeAction_Unwrapped
  enum struct __CollectionChangeAction_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x1),
    __E_Remove = static_cast<int32_t>(0x2),
    __E_Refresh = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollectionChangeAction_Unwrapped() const noexcept {
    return static_cast<__CollectionChangeAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionChangeAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CollectionChangeAction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Add value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::CollectionChangeAction const Add;

  /// @brief Field Refresh value: static_cast<int32_t>(0x3)
  static ::System::ComponentModel::CollectionChangeAction const Refresh;

  /// @brief Field Remove value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::CollectionChangeAction const Remove;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CollectionChangeAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::CollectionChangeAction, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CollectionChangeAction, "System.ComponentModel", "CollectionChangeAction");
