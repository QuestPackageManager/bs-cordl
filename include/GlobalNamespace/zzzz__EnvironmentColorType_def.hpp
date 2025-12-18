#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentColorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentColorType)
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentColorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentColorType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentColorType
struct CORDL_TYPE EnvironmentColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentColorType_Unwrapped
  enum struct __EnvironmentColorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Color0 = static_cast<int32_t>(0x0),
    __E_Color1 = static_cast<int32_t>(0x1),
    __E_ColorW = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentColorType_Unwrapped() const noexcept {
    return static_cast<__EnvironmentColorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentColorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentColorType(int32_t value__) noexcept;

  /// @brief Field Color0 value: I32(0)
  static ::GlobalNamespace::EnvironmentColorType const Color0;

  /// @brief Field Color1 value: I32(1)
  static ::GlobalNamespace::EnvironmentColorType const Color1;

  /// @brief Field ColorW value: I32(2)
  static ::GlobalNamespace::EnvironmentColorType const ColorW;

  /// @brief Field None value: I32(-1)
  static ::GlobalNamespace::EnvironmentColorType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentColorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentColorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentColorType, "", "EnvironmentColorType");
