#pragma once
// IWYU pragma private; include "UnityEngine/TouchType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchType)
// Forward declare root types
namespace UnityEngine {
struct TouchType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TouchType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TouchType
struct CORDL_TYPE TouchType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TouchType_Unwrapped
  enum struct __TouchType_Unwrapped : int32_t {
    __E_Direct = static_cast<int32_t>(0x0),
    __E_Indirect = static_cast<int32_t>(0x1),
    __E_Stylus = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TouchType_Unwrapped() const noexcept {
    return static_cast<__TouchType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchType(int32_t value__) noexcept;

  /// @brief Field Direct value: I32(0)
  static ::UnityEngine::TouchType const Direct;

  /// @brief Field Indirect value: I32(1)
  static ::UnityEngine::TouchType const Indirect;

  /// @brief Field Stylus value: I32(2)
  static ::UnityEngine::TouchType const Stylus;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18608 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchType, "UnityEngine", "TouchType");
