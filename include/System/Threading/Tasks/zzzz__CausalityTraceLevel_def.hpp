#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CausalityTraceLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CausalityTraceLevel)
// Forward declare root types
namespace System::Threading::Tasks {
struct CausalityTraceLevel;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::CausalityTraceLevel);
// Type: System.Threading.Tasks::CausalityTraceLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: ::System.Threading.Tasks::CausalityTraceLevel
struct CORDL_TYPE CausalityTraceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CausalityTraceLevel_Unwrapped
  enum struct __CausalityTraceLevel_Unwrapped : int32_t {
    __E_Required = static_cast<int32_t>(0x0),
    __E_Important = static_cast<int32_t>(0x1),
    __E_Verbose = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CausalityTraceLevel_Unwrapped() const noexcept {
    return static_cast<__CausalityTraceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CausalityTraceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CausalityTraceLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Important value: static_cast<int32_t>(0x1)
  static ::System::Threading::Tasks::CausalityTraceLevel const Important;

  /// @brief Field Required value: static_cast<int32_t>(0x0)
  static ::System::Threading::Tasks::CausalityTraceLevel const Required;

  /// @brief Field Verbose value: static_cast<int32_t>(0x2)
  static ::System::Threading::Tasks::CausalityTraceLevel const Verbose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::CausalityTraceLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::CausalityTraceLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CausalityTraceLevel, "System.Threading.Tasks", "CausalityTraceLevel");
