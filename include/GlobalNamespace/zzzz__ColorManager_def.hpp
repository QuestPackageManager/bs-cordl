#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorManager)
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorManager);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorManager
class CORDL_TYPE ColorManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme)) ::GlobalNamespace::ColorScheme* _colorScheme;

  __declspec(property(get = get_obstaclesColor)) ::UnityEngine::Color obstaclesColor;

  /// @brief Method ColorForSaberType, addr 0x3b0704c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ColorForSaberType(::GlobalNamespace::SaberType type);

  /// @brief Method ColorForType, addr 0x3b06fd8, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ColorForType(::GlobalNamespace::ColorType type);

  /// @brief Method ColorForType, addr 0x3b06eec, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ColorForType(::GlobalNamespace::EnvironmentColorType type, bool boost);

  /// @brief Method EffectsColorForSaberType, addr 0x3b070a0, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Color EffectsColorForSaberType(::GlobalNamespace::SaberType type);

  /// @brief Method GetObstacleEffectColor, addr 0x3b07130, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetObstacleEffectColor();

  static inline ::GlobalNamespace::ColorManager* New_ctor();

  /// @brief Method SetColorScheme, addr 0x3b06ee4, size 0x8, virtual false, abstract: false, final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  constexpr ::GlobalNamespace::ColorScheme* const& __cordl_internal_get__colorScheme() const;

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get__colorScheme();

  constexpr void __cordl_internal_set__colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method .ctor, addr 0x3b0718c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_obstaclesColor, addr 0x3b06ec4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_obstaclesColor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorManager(ColorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorManager(ColorManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5012 };

  /// @brief Field _colorScheme, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorManager, ____colorScheme) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManager*, "", "ColorManager");
