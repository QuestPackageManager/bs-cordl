#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/CustomErrorsModes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomErrorsModes)
// Forward declare root types
namespace System::Runtime::Remoting {
struct CustomErrorsModes;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::CustomErrorsModes);
// Type: System.Runtime.Remoting::CustomErrorsModes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: true
// CS Name: ::System.Runtime.Remoting::CustomErrorsModes
struct CORDL_TYPE CustomErrorsModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CustomErrorsModes_Unwrapped
  enum struct __CustomErrorsModes_Unwrapped : int32_t {
    __E_On = static_cast<int32_t>(0x0),
    __E_Off = static_cast<int32_t>(0x1),
    __E_RemoteOnly = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CustomErrorsModes_Unwrapped() const noexcept {
    return static_cast<__CustomErrorsModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomErrorsModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CustomErrorsModes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Off value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Remoting::CustomErrorsModes const Off;

  /// @brief Field On value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Remoting::CustomErrorsModes const On;

  /// @brief Field RemoteOnly value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Remoting::CustomErrorsModes const RemoteOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::CustomErrorsModes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::CustomErrorsModes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Remoting
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::CustomErrorsModes, "System.Runtime.Remoting", "CustomErrorsModes");
