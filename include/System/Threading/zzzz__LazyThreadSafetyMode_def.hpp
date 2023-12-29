#pragma once
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
// Type: System.Threading::LazyThreadSafetyMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2661))
// CS Name: ::System.Threading::LazyThreadSafetyMode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LazyThreadSafetyMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyThreadSafetyMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::LazyThreadSafetyMode const None;

  /// @brief Field PublicationOnly value: static_cast<int32_t>(0x1)
  static ::System::Threading::LazyThreadSafetyMode const PublicationOnly;

  /// @brief Field ExecutionAndPublication value: static_cast<int32_t>(0x2)
  static ::System::Threading::LazyThreadSafetyMode const ExecutionAndPublication;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LazyThreadSafetyMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::LazyThreadSafetyMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LazyThreadSafetyMode, "System.Threading", "LazyThreadSafetyMode");
