#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessControlSections)
// Forward declare root types
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AccessControlSections);
// Type: System.Security.AccessControl::AccessControlSections
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3013))
// CS Name: ::System.Security.AccessControl::AccessControlSections
struct CORDL_TYPE AccessControlSections {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AccessControlSections_Unwrapped
  enum struct __AccessControlSections_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Audit = static_cast<int32_t>(0x1),
    __E_Access = static_cast<int32_t>(0x2),
    __E_Owner = static_cast<int32_t>(0x4),
    __E_Group = static_cast<int32_t>(0x8),
    __E_All = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AccessControlSections_Unwrapped() const noexcept {
    return static_cast<__AccessControlSections_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AccessControlSections(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessControlSections();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Security::AccessControl::AccessControlSections const None;

  /// @brief Field Audit value: static_cast<int32_t>(0x1)
  static ::System::Security::AccessControl::AccessControlSections const Audit;

  /// @brief Field Access value: static_cast<int32_t>(0x2)
  static ::System::Security::AccessControl::AccessControlSections const Access;

  /// @brief Field Owner value: static_cast<int32_t>(0x4)
  static ::System::Security::AccessControl::AccessControlSections const Owner;

  /// @brief Field Group value: static_cast<int32_t>(0x8)
  static ::System::Security::AccessControl::AccessControlSections const Group;

  /// @brief Field All value: static_cast<int32_t>(0xf)
  static ::System::Security::AccessControl::AccessControlSections const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AccessControlSections, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AccessControlSections, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessControlSections, "System.Security.AccessControl", "AccessControlSections");
