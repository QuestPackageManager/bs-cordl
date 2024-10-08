#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/Architecture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Architecture)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct Architecture;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::Architecture);
// Type: System.Runtime.InteropServices::Architecture
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::Architecture
struct CORDL_TYPE Architecture {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Architecture_Unwrapped
  enum struct __Architecture_Unwrapped : int32_t {
    __E_X86 = static_cast<int32_t>(0x0),
    __E_X64 = static_cast<int32_t>(0x1),
    __E_Arm = static_cast<int32_t>(0x2),
    __E_Arm64 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Architecture_Unwrapped() const noexcept {
    return static_cast<__Architecture_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Architecture();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Architecture(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Arm value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::Architecture const Arm;

  /// @brief Field Arm64 value: static_cast<int32_t>(0x3)
  static ::System::Runtime::InteropServices::Architecture const Arm64;

  /// @brief Field X64 value: static_cast<int32_t>(0x1)
  static ::System::Runtime::InteropServices::Architecture const X64;

  /// @brief Field X86 value: static_cast<int32_t>(0x0)
  static ::System::Runtime::InteropServices::Architecture const X86;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3306 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::Architecture, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::Architecture, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Architecture, "System.Runtime.InteropServices", "Architecture");
