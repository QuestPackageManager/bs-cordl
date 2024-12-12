#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/Cer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cer)
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
struct Cer;
}
// Write type traits
MARK_VAL_T(::System::Runtime::ConstrainedExecution::Cer);
// Dependencies
namespace System::Runtime::ConstrainedExecution {
// Is value type: true
// CS Name: System.Runtime.ConstrainedExecution.Cer
struct CORDL_TYPE Cer {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Cer_Unwrapped
  enum struct __Cer_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MayFail = static_cast<int32_t>(0x1),
    __E_Success = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Cer_Unwrapped() const noexcept {
    return static_cast<__Cer_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cer();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cer(int32_t value__) noexcept;

  /// @brief Field MayFail value: I32(1)
  static ::System::Runtime::ConstrainedExecution::Cer const MayFail;

  /// @brief Field None value: I32(0)
  static ::System::Runtime::ConstrainedExecution::Cer const None;

  /// @brief Field Success value: I32(2)
  static ::System::Runtime::ConstrainedExecution::Cer const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3350 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::ConstrainedExecution::Cer, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::Cer, 0x4>, "Size mismatch!");

} // namespace System::Runtime::ConstrainedExecution
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::Cer, "System.Runtime.ConstrainedExecution", "Cer");
