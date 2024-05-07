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
// Type: Unity.Burst::CompilationPriority
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::CompilationPriority
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Asynchronous value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::CompilationPriority const Asynchronous;

  /// @brief Field EagerCompilationAsynchronous value: static_cast<int32_t>(0x3)
  static ::Unity::Burst::CompilationPriority const EagerCompilationAsynchronous;

  /// @brief Field EagerCompilationSynchronous value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::CompilationPriority const EagerCompilationSynchronous;

  /// @brief Field ILPP value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::CompilationPriority const ILPP;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilationPriority, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::CompilationPriority, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilationPriority, "Unity.Burst", "CompilationPriority");
