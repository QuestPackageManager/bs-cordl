#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorChangeUIEventType)
// Forward declare root types
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorChangeUIEventType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ColorChangeUIEventType
struct CORDL_TYPE ColorChangeUIEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorChangeUIEventType_Unwrapped
  enum struct __ColorChangeUIEventType_Unwrapped : int32_t {
    __E_Drag = static_cast<int32_t>(0x0),
    __E_PointerUp = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorChangeUIEventType_Unwrapped() const noexcept {
    return static_cast<__ColorChangeUIEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorChangeUIEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorChangeUIEventType(int32_t value__) noexcept;

  /// @brief Field Drag value: I32(0)
  static ::GlobalNamespace::ColorChangeUIEventType const Drag;

  /// @brief Field PointerUp value: I32(1)
  static ::GlobalNamespace::ColorChangeUIEventType const PointerUp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19100 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorChangeUIEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorChangeUIEventType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorChangeUIEventType, "", "ColorChangeUIEventType");
