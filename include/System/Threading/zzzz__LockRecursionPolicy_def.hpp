#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LockRecursionPolicy)
// Forward declare root types
namespace System::Threading {
struct LockRecursionPolicy;
}
// Write type traits
MARK_VAL_T(::System::Threading::LockRecursionPolicy);
// Type: System.Threading::LockRecursionPolicy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14317))
// CS Name: ::System.Threading::LockRecursionPolicy
struct CORDL_TYPE LockRecursionPolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LockRecursionPolicy_Unwrapped
  enum struct __LockRecursionPolicy_Unwrapped : int32_t {
    __E_NoRecursion = static_cast<int32_t>(0x0),
    __E_SupportsRecursion = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LockRecursionPolicy_Unwrapped() const noexcept {
    return static_cast<__LockRecursionPolicy_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LockRecursionPolicy(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LockRecursionPolicy();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoRecursion value: static_cast<int32_t>(0x0)
  static ::System::Threading::LockRecursionPolicy const NoRecursion;

  /// @brief Field SupportsRecursion value: static_cast<int32_t>(0x1)
  static ::System::Threading::LockRecursionPolicy const SupportsRecursion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LockRecursionPolicy, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::LockRecursionPolicy, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockRecursionPolicy, "System.Threading", "LockRecursionPolicy");
