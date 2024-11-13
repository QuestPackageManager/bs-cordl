#pragma once
// IWYU pragma private; include "GlobalNamespace/WhiteColorOrAlphaGroupEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WhiteColorOrAlphaGroupEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class __LightColorGroupEffect__InitData;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WhiteColorOrAlphaGroupEffect);
// Type: ::WhiteColorOrAlphaGroupEffect
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WhiteColorOrAlphaGroupEffect*
class CORDL_TYPE WhiteColorOrAlphaGroupEffect : public ::GlobalNamespace::LightColorGroupEffect {
public:
  // Declarations
  /// @brief Field _defaultColor, offset 0xa4, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultColor, put = __cordl_internal_set__defaultColor)) ::UnityEngine::Color _defaultColor;

  /// @brief Method GetColor, addr 0x3b2b99c, size 0x4c, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  static inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffect* New_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData* initData, ::UnityEngine::Color defaultColor,
                                                                          ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                          ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                          ::GlobalNamespace::IBpmController* bpmController);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor();

  constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3b2b960, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__LightColorGroupEffect__InitData* initData, ::UnityEngine::Color defaultColor, ::GlobalNamespace::LightWithIdManager* lightManager,
                    ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::IBpmController* bpmController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhiteColorOrAlphaGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhiteColorOrAlphaGroupEffect(WhiteColorOrAlphaGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhiteColorOrAlphaGroupEffect(WhiteColorOrAlphaGroupEffect const&) = delete;

  /// @brief Field _defaultColor, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultColor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4278 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WhiteColorOrAlphaGroupEffect, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffect, ____defaultColor) == 0xa4, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WhiteColorOrAlphaGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WhiteColorOrAlphaGroupEffect*, "", "WhiteColorOrAlphaGroupEffect");
