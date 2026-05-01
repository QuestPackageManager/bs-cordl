#pragma once
// IWYU pragma private; include "System/Threading/LazyThreadSafetyMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LazyThreadSafetyMode)
// Forward declare root types
namespace System::Threading {
struct LazyThreadSafetyMode;
}
// Write type traits
MARK_VAL_T(::System::Threading::LazyThreadSafetyMode);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.LazyThreadSafetyMode
struct CORDL_TYPE LazyThreadSafetyMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LazyThreadSafetyMode_Unwrapped
  enum struct __LazyThreadSafetyMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PublicationOnly = static_cast<int32_t>(0x1),
    __E_ExecutionAndPublication = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LazyThreadSafetyMode_Unwrapped() const noexcept {
    return static_cast<__LazyThreadSafetyMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyThreadSafetyMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LazyThreadSafetyMode(int32_t value__) noexcept;

  /// @brief Field ExecutionAndPublication value: I32(2)
  static ::System::Threading::LazyThreadSafetyMode const ExecutionAndPublication;

  /// @brief Field None value: I32(0)
  static ::System::Threading::LazyThreadSafetyMode const None;

  /// @brief Field PublicationOnly value: I32(1)
  static ::System::Threading::LazyThreadSafetyMode const PublicationOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2675 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::LazyThreadSafetyMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::LazyThreadSafetyMode, 0x4>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LazyThreadSafetyMode, "System.Threading", "LazyThreadSafetyMode");
