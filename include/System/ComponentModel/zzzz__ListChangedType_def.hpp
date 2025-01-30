#pragma once
// IWYU pragma private; include "System/ComponentModel/ListChangedType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedType)
// Forward declare root types
namespace System::ComponentModel {
struct ListChangedType;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::ListChangedType);
// Dependencies
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.ListChangedType
struct CORDL_TYPE ListChangedType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ListChangedType_Unwrapped
  enum struct __ListChangedType_Unwrapped : int32_t {
    __E_Reset = static_cast<int32_t>(0x0),
    __E_ItemAdded = static_cast<int32_t>(0x1),
    __E_ItemDeleted = static_cast<int32_t>(0x2),
    __E_ItemMoved = static_cast<int32_t>(0x3),
    __E_ItemChanged = static_cast<int32_t>(0x4),
    __E_PropertyDescriptorAdded = static_cast<int32_t>(0x5),
    __E_PropertyDescriptorDeleted = static_cast<int32_t>(0x6),
    __E_PropertyDescriptorChanged = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ListChangedType_Unwrapped() const noexcept {
    return static_cast<__ListChangedType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ListChangedType(int32_t value__) noexcept;

  /// @brief Field ItemAdded value: I32(1)
  static ::System::ComponentModel::ListChangedType const ItemAdded;

  /// @brief Field ItemChanged value: I32(4)
  static ::System::ComponentModel::ListChangedType const ItemChanged;

  /// @brief Field ItemDeleted value: I32(2)
  static ::System::ComponentModel::ListChangedType const ItemDeleted;

  /// @brief Field ItemMoved value: I32(3)
  static ::System::ComponentModel::ListChangedType const ItemMoved;

  /// @brief Field PropertyDescriptorAdded value: I32(5)
  static ::System::ComponentModel::ListChangedType const PropertyDescriptorAdded;

  /// @brief Field PropertyDescriptorChanged value: I32(7)
  static ::System::ComponentModel::ListChangedType const PropertyDescriptorChanged;

  /// @brief Field PropertyDescriptorDeleted value: I32(6)
  static ::System::ComponentModel::ListChangedType const PropertyDescriptorDeleted;

  /// @brief Field Reset value: I32(0)
  static ::System::ComponentModel::ListChangedType const Reset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ListChangedType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListChangedType, 0x4>, "Size mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedType, "System.ComponentModel", "ListChangedType");
