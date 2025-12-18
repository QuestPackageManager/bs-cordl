#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderVariantLogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderVariantLogLevel)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderVariantLogLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderVariantLogLevel);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderVariantLogLevel
struct CORDL_TYPE ShaderVariantLogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShaderVariantLogLevel_Unwrapped
  enum struct __ShaderVariantLogLevel_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_OnlySRPShaders = static_cast<int32_t>(0x1),
    __E_AllShaders = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShaderVariantLogLevel_Unwrapped() const noexcept {
    return static_cast<__ShaderVariantLogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariantLogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderVariantLogLevel(int32_t value__) noexcept;

  /// @brief Field AllShaders value: I32(2)
  static ::UnityEngine::Rendering::ShaderVariantLogLevel const AllShaders;

  /// @brief Field Disabled value: I32(0)
  static ::UnityEngine::Rendering::ShaderVariantLogLevel const Disabled;

  /// @brief Field OnlySRPShaders value: I32(1)
  static ::UnityEngine::Rendering::ShaderVariantLogLevel const OnlySRPShaders;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12170 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderVariantLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderVariantLogLevel, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderVariantLogLevel, "UnityEngine.Rendering", "ShaderVariantLogLevel");
