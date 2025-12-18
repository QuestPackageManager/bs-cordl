#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/EditLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditLevel)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct EditLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::EditLevel);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.EditLevel
struct CORDL_TYPE EditLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EditLevel_Unwrapped
  enum struct __EditLevel_Unwrapped : int32_t {
    __E_Top = static_cast<int32_t>(0x0),
    __E_Geometry = static_cast<int32_t>(0x1),
    __E_Texture = static_cast<int32_t>(0x2),
    __E_Plugin = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EditLevel_Unwrapped() const noexcept {
    return static_cast<__EditLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EditLevel(int32_t value__) noexcept;

  /// @brief Field Geometry value: I32(1)
  static ::UnityEngine::ProBuilder::EditLevel const Geometry;

  /// @brief Field Plugin value: I32(3)
  static ::UnityEngine::ProBuilder::EditLevel const Plugin;

  /// @brief Field Texture value: I32(2)
  static ::UnityEngine::ProBuilder::EditLevel const Texture;

  /// @brief Field Top value: I32(0)
  static ::UnityEngine::ProBuilder::EditLevel const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16734 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::EditLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EditLevel, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EditLevel, "UnityEngine.ProBuilder", "EditLevel");
