#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalDefaultSyncModes)
// Forward declare root types
namespace Zenject {
struct SignalDefaultSyncModes;
}
// Write type traits
MARK_VAL_T(::Zenject::SignalDefaultSyncModes);
// Type: Zenject::SignalDefaultSyncModes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::Zenject::SignalDefaultSyncModes
struct CORDL_TYPE SignalDefaultSyncModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SignalDefaultSyncModes_Unwrapped
  enum struct __SignalDefaultSyncModes_Unwrapped : int32_t {
    __E_Synchronous = static_cast<int32_t>(0x0),
    __E_Asynchronous = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SignalDefaultSyncModes_Unwrapped() const noexcept {
    return static_cast<__SignalDefaultSyncModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__SignalDefaultSyncModes_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDefaultSyncModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SignalDefaultSyncModes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Asynchronous value: static_cast<int32_t>(0x1)
  static ::Zenject::SignalDefaultSyncModes const Asynchronous;

  /// @brief Field Synchronous value: static_cast<int32_t>(0x0)
  static ::Zenject::SignalDefaultSyncModes const Synchronous;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDefaultSyncModes, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalDefaultSyncModes, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDefaultSyncModes, "Zenject", "SignalDefaultSyncModes");
