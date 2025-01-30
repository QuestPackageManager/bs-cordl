#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceEventType)
// Forward declare root types
namespace System::Diagnostics {
struct TraceEventType;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceEventType);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.TraceEventType
struct CORDL_TYPE TraceEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceEventType_Unwrapped
  enum struct __TraceEventType_Unwrapped : int32_t {
    __E_Critical = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
    __E_Warning = static_cast<int32_t>(0x4),
    __E_Information = static_cast<int32_t>(0x8),
    __E_Verbose = static_cast<int32_t>(0x10),
    __E_Start = static_cast<int32_t>(0x100),
    __E_Stop = static_cast<int32_t>(0x200),
    __E_Suspend = static_cast<int32_t>(0x400),
    __E_Resume = static_cast<int32_t>(0x800),
    __E_Transfer = static_cast<int32_t>(0x1000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceEventType_Unwrapped() const noexcept {
    return static_cast<__TraceEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceEventType(int32_t value__) noexcept;

  /// @brief Field Critical value: I32(1)
  static ::System::Diagnostics::TraceEventType const Critical;

  /// @brief Field Error value: I32(2)
  static ::System::Diagnostics::TraceEventType const Error;

  /// @brief Field Information value: I32(8)
  static ::System::Diagnostics::TraceEventType const Information;

  /// @brief Field Resume value: I32(2048)
  static ::System::Diagnostics::TraceEventType const Resume;

  /// @brief Field Start value: I32(256)
  static ::System::Diagnostics::TraceEventType const Start;

  /// @brief Field Stop value: I32(512)
  static ::System::Diagnostics::TraceEventType const Stop;

  /// @brief Field Suspend value: I32(1024)
  static ::System::Diagnostics::TraceEventType const Suspend;

  /// @brief Field Transfer value: I32(4096)
  static ::System::Diagnostics::TraceEventType const Transfer;

  /// @brief Field Verbose value: I32(16)
  static ::System::Diagnostics::TraceEventType const Verbose;

  /// @brief Field Warning value: I32(4)
  static ::System::Diagnostics::TraceEventType const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9258 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceEventType, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceEventType, "System.Diagnostics", "TraceEventType");
