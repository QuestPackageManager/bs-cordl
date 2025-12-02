#pragma once
// IWYU pragma private; include "System/Runtime/TraceEventOpcode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceEventOpcode)
// Forward declare root types
namespace System::Runtime {
struct TraceEventOpcode;
}
// Write type traits
MARK_VAL_T(::System::Runtime::TraceEventOpcode);
// Dependencies
namespace System::Runtime {
// Is value type: true
// CS Name: System.Runtime.TraceEventOpcode
struct CORDL_TYPE TraceEventOpcode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceEventOpcode_Unwrapped
  enum struct __TraceEventOpcode_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Start = static_cast<int32_t>(0x1),
    __E_Stop = static_cast<int32_t>(0x2),
    __E_Reply = static_cast<int32_t>(0x6),
    __E_Resume = static_cast<int32_t>(0x7),
    __E_Suspend = static_cast<int32_t>(0x8),
    __E_Send = static_cast<int32_t>(0x9),
    __E_Receive = static_cast<int32_t>(0xf0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceEventOpcode_Unwrapped() const noexcept {
    return static_cast<__TraceEventOpcode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceEventOpcode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceEventOpcode(int32_t value__) noexcept;

  /// @brief Field Info value: I32(0)
  static ::System::Runtime::TraceEventOpcode const Info;

  /// @brief Field Receive value: I32(240)
  static ::System::Runtime::TraceEventOpcode const Receive;

  /// @brief Field Reply value: I32(6)
  static ::System::Runtime::TraceEventOpcode const Reply;

  /// @brief Field Resume value: I32(7)
  static ::System::Runtime::TraceEventOpcode const Resume;

  /// @brief Field Send value: I32(9)
  static ::System::Runtime::TraceEventOpcode const Send;

  /// @brief Field Start value: I32(1)
  static ::System::Runtime::TraceEventOpcode const Start;

  /// @brief Field Stop value: I32(2)
  static ::System::Runtime::TraceEventOpcode const Stop;

  /// @brief Field Suspend value: I32(8)
  static ::System::Runtime::TraceEventOpcode const Suspend;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21089 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::TraceEventOpcode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::TraceEventOpcode, 0x4>, "Size mismatch!");

} // namespace System::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::TraceEventOpcode, "System.Runtime", "TraceEventOpcode");
