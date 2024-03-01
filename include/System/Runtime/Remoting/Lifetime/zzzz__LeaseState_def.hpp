#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaseState)
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::Lifetime::LeaseState);
// Type: System.Runtime.Remoting.Lifetime::LeaseState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: true
// CS Name: ::System.Runtime.Remoting.Lifetime::LeaseState
struct CORDL_TYPE LeaseState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LeaseState_Unwrapped
  enum struct __LeaseState_Unwrapped : int32_t {
    __E_Null = static_cast<int32_t>(0x0),
    __E_Initial = static_cast<int32_t>(0x1),
    __E_Active = static_cast<int32_t>(0x2),
    __E_Renewing = static_cast<int32_t>(0x3),
    __E_Expired = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LeaseState_Unwrapped() const noexcept {
    return static_cast<__LeaseState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaseState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LeaseState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Active value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Remoting::Lifetime::LeaseState const Active;

  /// @brief Field Expired value: static_cast<int32_t>(0x4)
  static ::System::Runtime::Remoting::Lifetime::LeaseState const Expired;

  /// @brief Field Initial value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Remoting::Lifetime::LeaseState const Initial;

  /// @brief Field Null value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Remoting::Lifetime::LeaseState const Null;

  /// @brief Field Renewing value: static_cast<int32_t>(0x3)
  static ::System::Runtime::Remoting::Lifetime::LeaseState const Renewing;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LeaseState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::LeaseState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseState, "System.Runtime.Remoting.Lifetime", "LeaseState");
