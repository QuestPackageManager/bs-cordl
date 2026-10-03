#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeTransformMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeTransformMode)
// Forward declare root types
namespace GlobalNamespace {
struct CompositeTransformMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CompositeTransformMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeTransformMode, "", "CompositeTransformMode");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: CompositeTransformMode
struct CORDL_TYPE CompositeTransformMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompositeTransformMode_Unwrapped
  enum struct __CompositeTransformMode_Unwrapped : int32_t {
    __E_Override = static_cast<int32_t>(0x0),
    __E_Additive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompositeTransformMode_Unwrapped() const noexcept {
    return static_cast<__CompositeTransformMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeTransformMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr CompositeTransformMode(int32_t value__) noexcept;

  /// @brief Field Additive value: I32(1)
  static ::GlobalNamespace::CompositeTransformMode const Additive;

  /// @brief Field Override value: I32(0)
  static ::GlobalNamespace::CompositeTransformMode const Override;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeTransformMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeTransformMode) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
