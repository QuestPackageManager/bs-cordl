#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTaskSourceOnCompletedFlags)
// Forward declare root types
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags);
// Type: System.Threading.Tasks.Sources::ValueTaskSourceOnCompletedFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks::Sources {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2821))
// CS Name: ::System.Threading.Tasks.Sources::ValueTaskSourceOnCompletedFlags
struct CORDL_TYPE ValueTaskSourceOnCompletedFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValueTaskSourceOnCompletedFlags_Unwrapped
  enum struct __ValueTaskSourceOnCompletedFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseSchedulingContext = static_cast<int32_t>(0x1),
    __E_FlowExecutionContext = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValueTaskSourceOnCompletedFlags_Unwrapped() const noexcept {
    return static_cast<__ValueTaskSourceOnCompletedFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueTaskSourceOnCompletedFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskSourceOnCompletedFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags const None;

  /// @brief Field UseSchedulingContext value: static_cast<int32_t>(0x1)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags const UseSchedulingContext;

  /// @brief Field FlowExecutionContext value: static_cast<int32_t>(0x2)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags const FlowExecutionContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags, 0x4>, "Size mismatch!");

} // namespace System::Threading::Tasks::Sources
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags, "System.Threading.Tasks.Sources", "ValueTaskSourceOnCompletedFlags");
