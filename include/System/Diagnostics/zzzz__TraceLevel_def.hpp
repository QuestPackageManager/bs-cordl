#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceLevel)
// Forward declare root types
namespace System::Diagnostics {
struct TraceLevel;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceLevel);
// Type: System.Diagnostics::TraceLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8942))
// CS Name: ::System.Diagnostics::TraceLevel
struct CORDL_TYPE TraceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceLevel_Unwrapped
  enum struct __TraceLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Info = static_cast<int32_t>(0x3),
    __E_Verbose = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceLevel_Unwrapped() const noexcept {
    return static_cast<__TraceLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::TraceLevel const Off;

  /// @brief Field Error value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::TraceLevel const Error;

  /// @brief Field Warning value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::TraceLevel const Warning;

  /// @brief Field Info value: static_cast<int32_t>(0x3)
  static ::System::Diagnostics::TraceLevel const Info;

  /// @brief Field Verbose value: static_cast<int32_t>(0x4)
  static ::System::Diagnostics::TraceLevel const Verbose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceLevel, "System.Diagnostics", "TraceLevel");
