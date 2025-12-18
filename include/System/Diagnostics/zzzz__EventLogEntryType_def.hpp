#pragma once
// IWYU pragma private; include "System/Diagnostics/EventLogEntryType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventLogEntryType)
// Forward declare root types
namespace System::Diagnostics {
struct EventLogEntryType;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::EventLogEntryType);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.EventLogEntryType
struct CORDL_TYPE EventLogEntryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventLogEntryType_Unwrapped
  enum struct __EventLogEntryType_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Information = static_cast<int32_t>(0x4),
    __E_SuccessAudit = static_cast<int32_t>(0x8),
    __E_FailureAudit = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventLogEntryType_Unwrapped() const noexcept {
    return static_cast<__EventLogEntryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventLogEntryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventLogEntryType(int32_t value__) noexcept;

  /// @brief Field Error value: I32(1)
  static ::System::Diagnostics::EventLogEntryType const Error;

  /// @brief Field FailureAudit value: I32(16)
  static ::System::Diagnostics::EventLogEntryType const FailureAudit;

  /// @brief Field Information value: I32(4)
  static ::System::Diagnostics::EventLogEntryType const Information;

  /// @brief Field SuccessAudit value: I32(8)
  static ::System::Diagnostics::EventLogEntryType const SuccessAudit;

  /// @brief Field Warning value: I32(2)
  static ::System::Diagnostics::EventLogEntryType const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21104 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::EventLogEntryType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::EventLogEntryType, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::EventLogEntryType, "System.Diagnostics", "EventLogEntryType");
