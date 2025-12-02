#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullMode
struct CORDL_TYPE CullMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CullMode_Unwrapped
  enum struct __CullMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Front = static_cast<int32_t>(0x1),
    __E_Back = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CullMode_Unwrapped() const noexcept {
    return static_cast<__CullMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CullMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CullMode(int32_t value__) noexcept;

  /// @brief Field Back value: I32(2)
  static ::UnityEngine::Rendering::CullMode const Back;

  /// @brief Field Front value: I32(1)
  static ::UnityEngine::Rendering::CullMode const Front;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Rendering::CullMode const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CullMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullMode, "UnityEngine.Rendering", "CullMode");
