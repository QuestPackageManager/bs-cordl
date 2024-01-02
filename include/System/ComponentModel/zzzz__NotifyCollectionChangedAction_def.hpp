#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyCollectionChangedAction)
// Forward declare root types
namespace System::ComponentModel {
struct NotifyCollectionChangedAction;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::NotifyCollectionChangedAction);
// Type: System.ComponentModel::NotifyCollectionChangedAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11789))
// CS Name: ::System.ComponentModel::NotifyCollectionChangedAction
struct CORDL_TYPE NotifyCollectionChangedAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NotifyCollectionChangedAction_Unwrapped
  enum struct __NotifyCollectionChangedAction_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_Remove = static_cast<int32_t>(0x1),
    __E_Replace = static_cast<int32_t>(0x2),
    __E_Move = static_cast<int32_t>(0x3),
    __E_Reset = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NotifyCollectionChangedAction_Unwrapped() const noexcept {
    return static_cast<__NotifyCollectionChangedAction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NotifyCollectionChangedAction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyCollectionChangedAction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Add value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::NotifyCollectionChangedAction const Add;

  /// @brief Field Remove value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::NotifyCollectionChangedAction const Remove;

  /// @brief Field Replace value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::NotifyCollectionChangedAction const Replace;

  /// @brief Field Move value: static_cast<int32_t>(0x3)
  static ::System::ComponentModel::NotifyCollectionChangedAction const Move;

  /// @brief Field Reset value: static_cast<int32_t>(0x4)
  static ::System::ComponentModel::NotifyCollectionChangedAction const Reset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NotifyCollectionChangedAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::NotifyCollectionChangedAction, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyCollectionChangedAction, "System.ComponentModel", "NotifyCollectionChangedAction");
