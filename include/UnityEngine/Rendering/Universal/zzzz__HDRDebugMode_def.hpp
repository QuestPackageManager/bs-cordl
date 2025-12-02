#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRDebugMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRDebugMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct HDRDebugMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::HDRDebugMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.HDRDebugMode
struct CORDL_TYPE HDRDebugMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDRDebugMode_Unwrapped
  enum struct __HDRDebugMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_GamutView = static_cast<int32_t>(0x1),
    __E_GamutClip = static_cast<int32_t>(0x2),
    __E_ValuesAbovePaperWhite = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDRDebugMode_Unwrapped() const noexcept {
    return static_cast<__HDRDebugMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDRDebugMode(int32_t value__) noexcept;

  /// @brief Field GamutClip value: I32(2)
  static ::UnityEngine::Rendering::Universal::HDRDebugMode const GamutClip;

  /// @brief Field GamutView value: I32(1)
  static ::UnityEngine::Rendering::Universal::HDRDebugMode const GamutView;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::HDRDebugMode const None;

  /// @brief Field ValuesAbovePaperWhite value: I32(3)
  static ::UnityEngine::Rendering::Universal::HDRDebugMode const ValuesAbovePaperWhite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugMode, "UnityEngine.Rendering.Universal", "HDRDebugMode");
