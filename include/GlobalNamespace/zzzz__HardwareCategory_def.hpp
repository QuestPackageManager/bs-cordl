#pragma once
// IWYU pragma private; include "GlobalNamespace/HardwareCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareCategory)
// Forward declare root types
namespace GlobalNamespace {
struct HardwareCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HardwareCategory);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: HardwareCategory
struct CORDL_TYPE HardwareCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HardwareCategory_Unwrapped
  enum struct __HardwareCategory_Unwrapped : int32_t {
    __E_Standalone = static_cast<int32_t>(0x0),
    __E_Quest1 = static_cast<int32_t>(0x1),
    __E_Quest2 = static_cast<int32_t>(0x2),
    __E_Quest3 = static_cast<int32_t>(0x3),
    __E_QuestPro = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HardwareCategory_Unwrapped() const noexcept {
    return static_cast<__HardwareCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HardwareCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HardwareCategory(int32_t value__) noexcept;

  /// @brief Field Quest1 value: I32(1)
  static ::GlobalNamespace::HardwareCategory const Quest1;

  /// @brief Field Quest2 value: I32(2)
  static ::GlobalNamespace::HardwareCategory const Quest2;

  /// @brief Field Quest3 value: I32(3)
  static ::GlobalNamespace::HardwareCategory const Quest3;

  /// @brief Field QuestPro value: I32(4)
  static ::GlobalNamespace::HardwareCategory const QuestPro;

  /// @brief Field Standalone value: I32(0)
  static ::GlobalNamespace::HardwareCategory const Standalone;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21835 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HardwareCategory, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HardwareCategory, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HardwareCategory, "", "HardwareCategory");
