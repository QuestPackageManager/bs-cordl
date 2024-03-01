#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentContext)
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentContext);
// Type: ::EnvironmentContext
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentContext
struct CORDL_TYPE EnvironmentContext {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentContext_Unwrapped
  enum struct __EnvironmentContext_Unwrapped : int32_t {
    __E_Gameplay = static_cast<int32_t>(0x0),
    __E_BeatmapEditor = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentContext_Unwrapped() const noexcept {
    return static_cast<__EnvironmentContext_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__EnvironmentContext_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentContext();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentContext(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeatmapEditor value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::EnvironmentContext const BeatmapEditor;

  /// @brief Field Gameplay value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::EnvironmentContext const Gameplay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentContext, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentContext, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentContext, "", "EnvironmentContext");
