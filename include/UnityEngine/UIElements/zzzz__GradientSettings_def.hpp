#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__AddressMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GradientSettings)
namespace UnityEngine::UIElements {
struct GradientType;
}
namespace UnityEngine::UIElements {
struct AddressMode;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct GradientSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::GradientSettings);
// Type: UnityEngine.UIElements::GradientSettings
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6888)), TypeDefinitionIndex(TypeDefinitionIndex(6889)), TypeDefinitionIndex(TypeDefinitionIndex(10090)),
// TypeDefinitionIndex(TypeDefinitionIndex(10170))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6891)) CS Name: ::UnityEngine.UIElements::GradientSettings
struct CORDL_TYPE GradientSettings {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "gradientType", ty: "::UnityEngine::UIElements::GradientType", modifiers: "", def_value: None }, CppParam { name: "addressMode", ty:
  // "::UnityEngine::UIElements::AddressMode", modifiers: "", def_value: None }, CppParam { name: "radialFocus", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "location", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }]
  constexpr GradientSettings(::UnityEngine::UIElements::GradientType gradientType, ::UnityEngine::UIElements::AddressMode addressMode, ::UnityEngine::Vector2 radialFocus,
                             ::UnityEngine::RectInt location) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientSettings();

  /// @brief Field gradientType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::GradientType gradientType;

  /// @brief Field addressMode, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::AddressMode addressMode;

  /// @brief Field radialFocus, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 radialFocus;

  /// @brief Field location, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::RectInt location;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GradientSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GradientSettings, gradientType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GradientSettings, addressMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GradientSettings, radialFocus) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GradientSettings, location) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GradientSettings, "UnityEngine.UIElements", "GradientSettings");
