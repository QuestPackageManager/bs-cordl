#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/CallingConvention.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallingConvention)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::CallingConvention);
// Type: System.Runtime.InteropServices::CallingConvention
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::CallingConvention
struct CORDL_TYPE CallingConvention {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CallingConvention_Unwrapped
  enum struct __CallingConvention_Unwrapped : int32_t {
    __E_Winapi = static_cast<int32_t>(0x1),
    __E_Cdecl = static_cast<int32_t>(0x2),
    __E_StdCall = static_cast<int32_t>(0x3),
    __E_ThisCall = static_cast<int32_t>(0x4),
    __E_FastCall = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CallingConvention_Unwrapped() const noexcept {
    return static_cast<__CallingConvention_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CallingConvention();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CallingConvention(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cdecl value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::CallingConvention const Cdecl;

  /// @brief Field FastCall value: static_cast<int32_t>(0x5)
  static ::System::Runtime::InteropServices::CallingConvention const FastCall;

  /// @brief Field StdCall value: static_cast<int32_t>(0x3)
  static ::System::Runtime::InteropServices::CallingConvention const StdCall;

  /// @brief Field ThisCall value: static_cast<int32_t>(0x4)
  static ::System::Runtime::InteropServices::CallingConvention const ThisCall;

  /// @brief Field Winapi value: static_cast<int32_t>(0x1)
  static ::System::Runtime::InteropServices::CallingConvention const Winapi;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::CallingConvention, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::CallingConvention, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::CallingConvention, "System.Runtime.InteropServices", "CallingConvention");
