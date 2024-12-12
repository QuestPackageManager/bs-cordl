#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AccessControlSections.hpp"
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
// Dependencies
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: System.Security.AccessControl.AccessControlSections
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessControlSections();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AccessControlSections(int32_t value__) noexcept;

  /// @brief Field Access value: I32(2)
  static ::System::Security::AccessControl::AccessControlSections const Access;

  /// @brief Field All value: I32(15)
  static ::System::Security::AccessControl::AccessControlSections const All;

  /// @brief Field Audit value: I32(1)
  static ::System::Security::AccessControl::AccessControlSections const Audit;

  /// @brief Field Group value: I32(8)
  static ::System::Security::AccessControl::AccessControlSections const Group;

  /// @brief Field None value: I32(0)
  static ::System::Security::AccessControl::AccessControlSections const None;

  /// @brief Field Owner value: I32(4)
  static ::System::Security::AccessControl::AccessControlSections const Owner;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3012 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::AccessControlSections, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AccessControlSections, 0x4>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessControlSections, "System.Security.AccessControl", "AccessControlSections");
