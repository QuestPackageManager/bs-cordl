#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventKeywords.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventKeywords)
// Forward declare root types
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::Tracing::EventKeywords);
// Dependencies
namespace System::Diagnostics::Tracing {
// Is value type: true
// CS Name: System.Diagnostics.Tracing.EventKeywords
struct CORDL_TYPE EventKeywords {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int64_t;

  /// @brief Nested struct __EventKeywords_Unwrapped
  enum struct __EventKeywords_Unwrapped : int64_t {
    __E_None = static_cast<int64_t>(0x0),
    __E_All = static_cast<int64_t>(0xffffffffffffffff),
    __E_MicrosoftTelemetry = static_cast<int64_t>(0x2000000000000),
    __E_WdiContext = static_cast<int64_t>(0x2000000000000),
    __E_WdiDiagnostic = static_cast<int64_t>(0x4000000000000),
    __E_Sqm = static_cast<int64_t>(0x8000000000000),
    __E_AuditFailure = static_cast<int64_t>(0x10000000000000),
    __E_AuditSuccess = static_cast<int64_t>(0x20000000000000),
    __E_CorrelationHint = static_cast<int64_t>(0x10000000000000),
    __E_EventLogClassic = static_cast<int64_t>(0x80000000000000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventKeywords_Unwrapped() const noexcept {
    return static_cast<__EventKeywords_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int64_t() const noexcept {
    return static_cast<int64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventKeywords();

  // Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr EventKeywords(int64_t value__) noexcept;

  /// @brief Field All value: I64(-1)
  static ::System::Diagnostics::Tracing::EventKeywords const All;

  /// @brief Field AuditFailure value: I64(4503599627370496)
  static ::System::Diagnostics::Tracing::EventKeywords const AuditFailure;

  /// @brief Field AuditSuccess value: I64(9007199254740992)
  static ::System::Diagnostics::Tracing::EventKeywords const AuditSuccess;

  /// @brief Field CorrelationHint value: I64(4503599627370496)
  static ::System::Diagnostics::Tracing::EventKeywords const CorrelationHint;

  /// @brief Field EventLogClassic value: I64(36028797018963968)
  static ::System::Diagnostics::Tracing::EventKeywords const EventLogClassic;

  /// @brief Field MicrosoftTelemetry value: I64(562949953421312)
  static ::System::Diagnostics::Tracing::EventKeywords const MicrosoftTelemetry;

  /// @brief Field None value: I64(0)
  static ::System::Diagnostics::Tracing::EventKeywords const None;

  /// @brief Field Sqm value: I64(2251799813685248)
  static ::System::Diagnostics::Tracing::EventKeywords const Sqm;

  /// @brief Field WdiContext value: I64(562949953421312)
  static ::System::Diagnostics::Tracing::EventKeywords const WdiContext;

  /// @brief Field WdiDiagnostic value: I64(1125899906842624)
  static ::System::Diagnostics::Tracing::EventKeywords const WdiDiagnostic;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3750 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  int64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Tracing::EventKeywords, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventKeywords, 0x8>, "Size mismatch!");

} // namespace System::Diagnostics::Tracing
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventKeywords, "System.Diagnostics.Tracing", "EventKeywords");
