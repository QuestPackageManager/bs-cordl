#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WellKnownObjectMode)
// Forward declare root types
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::WellKnownObjectMode);
// Type: System.Runtime.Remoting::WellKnownObjectMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: true
// CS Name: ::System.Runtime.Remoting::WellKnownObjectMode
struct CORDL_TYPE WellKnownObjectMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WellKnownObjectMode_Unwrapped
  enum struct __WellKnownObjectMode_Unwrapped : int32_t {
    __E_Singleton = static_cast<int32_t>(0x1),
    __E_SingleCall = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WellKnownObjectMode_Unwrapped() const noexcept {
    return static_cast<__WellKnownObjectMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownObjectMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WellKnownObjectMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field SingleCall value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Remoting::WellKnownObjectMode const SingleCall;

  /// @brief Field Singleton value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Remoting::WellKnownObjectMode const Singleton;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::WellKnownObjectMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::WellKnownObjectMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Remoting
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownObjectMode, "System.Runtime.Remoting", "WellKnownObjectMode");
