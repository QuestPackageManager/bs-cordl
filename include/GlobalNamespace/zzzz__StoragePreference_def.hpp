#pragma once
// IWYU pragma private; include "GlobalNamespace/StoragePreference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StoragePreference)
// Forward declare root types
namespace GlobalNamespace {
struct StoragePreference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StoragePreference);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: StoragePreference
struct CORDL_TYPE StoragePreference {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StoragePreference_Unwrapped
  enum struct __StoragePreference_Unwrapped : int32_t {
    __E_Cloud = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StoragePreference_Unwrapped() const noexcept {
    return static_cast<__StoragePreference_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StoragePreference();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StoragePreference(int32_t value__) noexcept;

  /// @brief Field Cloud value: I32(0)
  static ::GlobalNamespace::StoragePreference const Cloud;

  /// @brief Field Local value: I32(1)
  static ::GlobalNamespace::StoragePreference const Local;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18915 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StoragePreference, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StoragePreference, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StoragePreference, "", "StoragePreference");
