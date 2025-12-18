#pragma once
// IWYU pragma private; include "Unity/Burst/CompilationPriority.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompilationPriority)
// Forward declare root types
namespace Unity::Burst {
struct CompilationPriority;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::CompilationPriority);
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.CompilationPriority
struct CORDL_TYPE CompilationPriority {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompilationPriority_Unwrapped
  enum struct __CompilationPriority_Unwrapped : int32_t {
    __E_EagerCompilationSynchronous = static_cast<int32_t>(0x0),
    __E_Asynchronous = static_cast<int32_t>(0x1),
    __E_ILPP = static_cast<int32_t>(0x2),
    __E_EagerCompilationAsynchronous = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompilationPriority_Unwrapped() const noexcept {
    return static_cast<__CompilationPriority_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompilationPriority();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompilationPriority(int32_t value__) noexcept;

  /// @brief Field Asynchronous value: I32(1)
  static ::Unity::Burst::CompilationPriority const Asynchronous;

  /// @brief Field EagerCompilationAsynchronous value: I32(3)
  static ::Unity::Burst::CompilationPriority const EagerCompilationAsynchronous;

  /// @brief Field EagerCompilationSynchronous value: I32(0)
  static ::Unity::Burst::CompilationPriority const EagerCompilationSynchronous;

  /// @brief Field ILPP value: I32(2)
  static ::Unity::Burst::CompilationPriority const ILPP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::CompilationPriority, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilationPriority, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilationPriority, "Unity.Burst", "CompilationPriority");
