#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcVisibilityType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArcVisibilityType)
// Forward declare root types
namespace GlobalNamespace {
struct ArcVisibilityType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArcVisibilityType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArcVisibilityType
struct CORDL_TYPE ArcVisibilityType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ArcVisibilityType_Unwrapped
  enum struct __ArcVisibilityType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Standard = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ArcVisibilityType_Unwrapped() const noexcept {
    return static_cast<__ArcVisibilityType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArcVisibilityType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArcVisibilityType(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::GlobalNamespace::ArcVisibilityType const High;

  /// @brief Field Low value: I32(1)
  static ::GlobalNamespace::ArcVisibilityType const Low;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::ArcVisibilityType const None;

  /// @brief Field Standard value: I32(2)
  static ::GlobalNamespace::ArcVisibilityType const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13214 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcVisibilityType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArcVisibilityType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArcVisibilityType, "", "ArcVisibilityType");
