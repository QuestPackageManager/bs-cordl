#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SearchTarget)
// Forward declare root types
namespace System::IO {
struct SearchTarget;
}
// Write type traits
MARK_VAL_T(::System::IO::SearchTarget);
// Type: System.IO::SearchTarget
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3598))
// CS Name: ::System.IO::SearchTarget
struct CORDL_TYPE SearchTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SearchTarget_Unwrapped
  enum struct __SearchTarget_Unwrapped : int32_t {
    __E_Files = static_cast<int32_t>(0x1),
    __E_Directories = static_cast<int32_t>(0x2),
    __E_Both = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SearchTarget_Unwrapped() const noexcept {
    return static_cast<__SearchTarget_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SearchTarget(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SearchTarget();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Files value: static_cast<int32_t>(0x1)
  static ::System::IO::SearchTarget const Files;

  /// @brief Field Directories value: static_cast<int32_t>(0x2)
  static ::System::IO::SearchTarget const Directories;

  /// @brief Field Both value: static_cast<int32_t>(0x3)
  static ::System::IO::SearchTarget const Both;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::SearchTarget, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::SearchTarget, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchTarget, "System.IO", "SearchTarget");
