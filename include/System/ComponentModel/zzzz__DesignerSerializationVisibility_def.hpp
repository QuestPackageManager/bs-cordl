#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerSerializationVisibility)
// Forward declare root types
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::DesignerSerializationVisibility);
// Type: System.ComponentModel::DesignerSerializationVisibility
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9391))
// CS Name: ::System.ComponentModel::DesignerSerializationVisibility
struct CORDL_TYPE DesignerSerializationVisibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DesignerSerializationVisibility_Unwrapped
  enum struct __DesignerSerializationVisibility_Unwrapped : int32_t {
    __E_Hidden = static_cast<int32_t>(0x0),
    __E_Visible = static_cast<int32_t>(0x1),
    __E_Content = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DesignerSerializationVisibility_Unwrapped() const noexcept {
    return static_cast<__DesignerSerializationVisibility_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DesignerSerializationVisibility(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerSerializationVisibility();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Hidden value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::DesignerSerializationVisibility const Hidden;

  /// @brief Field Visible value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::DesignerSerializationVisibility const Visible;

  /// @brief Field Content value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::DesignerSerializationVisibility const Content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignerSerializationVisibility, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignerSerializationVisibility, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerSerializationVisibility, "System.ComponentModel", "DesignerSerializationVisibility");
