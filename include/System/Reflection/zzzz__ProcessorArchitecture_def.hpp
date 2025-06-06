#pragma once
// IWYU pragma private; include "System/Reflection/ProcessorArchitecture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessorArchitecture)
// Forward declare root types
namespace System::Reflection {
struct ProcessorArchitecture;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ProcessorArchitecture);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.ProcessorArchitecture
struct CORDL_TYPE ProcessorArchitecture {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessorArchitecture_Unwrapped
  enum struct __ProcessorArchitecture_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MSIL = static_cast<int32_t>(0x1),
    __E_X86 = static_cast<int32_t>(0x2),
    __E_IA64 = static_cast<int32_t>(0x3),
    __E_Amd64 = static_cast<int32_t>(0x4),
    __E_Arm = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessorArchitecture_Unwrapped() const noexcept {
    return static_cast<__ProcessorArchitecture_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorArchitecture();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProcessorArchitecture(int32_t value__) noexcept;

  /// @brief Field Amd64 value: I32(4)
  static ::System::Reflection::ProcessorArchitecture const Amd64;

  /// @brief Field Arm value: I32(5)
  static ::System::Reflection::ProcessorArchitecture const Arm;

  /// @brief Field IA64 value: I32(3)
  static ::System::Reflection::ProcessorArchitecture const IA64;

  /// @brief Field MSIL value: I32(1)
  static ::System::Reflection::ProcessorArchitecture const MSIL;

  /// @brief Field None value: I32(0)
  static ::System::Reflection::ProcessorArchitecture const None;

  /// @brief Field X86 value: I32(2)
  static ::System::Reflection::ProcessorArchitecture const X86;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3488 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::ProcessorArchitecture, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::ProcessorArchitecture, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ProcessorArchitecture, "System.Reflection", "ProcessorArchitecture");
