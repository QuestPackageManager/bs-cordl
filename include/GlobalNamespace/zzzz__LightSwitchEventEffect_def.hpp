#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightSwitchEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace Tweening {
class ColorTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightSwitchEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightSwitchEventEffect);
// Type: ::LightSwitchEventEffect
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightSwitchEventEffect*
class CORDL_TYPE LightSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _alternativeFromColor, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get__alternativeFromColor, put = __cordl_internal_set__alternativeFromColor))::UnityEngine::Color _alternativeFromColor;

  /// @brief Field _alternativeToColor, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__alternativeToColor, put = __cordl_internal_set__alternativeToColor))::UnityEngine::Color _alternativeToColor;

  /// @brief Field _beatmapCallbacksController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper,
                      put = __cordl_internal_set__colorBoostBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _colorChangeBeatmapDataCallbackWrapper, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__colorChangeBeatmapDataCallbackWrapper,
                      put = __cordl_internal_set__colorChangeBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorChangeBeatmapDataCallbackWrapper;

  /// @brief Field _colorManager, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _colorTween, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTween, put = __cordl_internal_set__colorTween))::Tweening::ColorTween* _colorTween;

  /// @brief Field _event, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event))::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _highlightColor0, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor0, put = __cordl_internal_set__highlightColor0))::UnityW<::GlobalNamespace::ColorSO> _highlightColor0;

  /// @brief Field _highlightColor0Boost, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor0Boost, put = __cordl_internal_set__highlightColor0Boost))::UnityW<::GlobalNamespace::ColorSO> _highlightColor0Boost;

  /// @brief Field _highlightColor1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor1, put = __cordl_internal_set__highlightColor1))::UnityW<::GlobalNamespace::ColorSO> _highlightColor1;

  /// @brief Field _highlightColor1Boost, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor1Boost, put = __cordl_internal_set__highlightColor1Boost))::UnityW<::GlobalNamespace::ColorSO> _highlightColor1Boost;

  /// @brief Field _lightColor0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor0, put = __cordl_internal_set__lightColor0))::UnityW<::GlobalNamespace::ColorSO> _lightColor0;

  /// @brief Field _lightColor0Boost, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor0Boost, put = __cordl_internal_set__lightColor0Boost))::UnityW<::GlobalNamespace::ColorSO> _lightColor0Boost;

  /// @brief Field _lightColor1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor1, put = __cordl_internal_set__lightColor1))::UnityW<::GlobalNamespace::ColorSO> _lightColor1;

  /// @brief Field _lightColor1Boost, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColor1Boost, put = __cordl_internal_set__lightColor1Boost))::UnityW<::GlobalNamespace::ColorSO> _lightColor1Boost;

  /// @brief Field _lightManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager))::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Field _lightOnStart, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__lightOnStart, put = __cordl_internal_set__lightOnStart)) bool _lightOnStart;

  /// @brief Field _lightsID, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__lightsID, put = __cordl_internal_set__lightsID)) int32_t _lightsID;

  /// @brief Field _offColorIntensity, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__offColorIntensity, put = __cordl_internal_set__offColorIntensity)) float_t _offColorIntensity;

  /// @brief Field _tweeningManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Field _usingBoostColors, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__usingBoostColors, put = __cordl_internal_set__usingBoostColors)) bool _usingBoostColors;

  __declspec(property(get = get_eventType))::GlobalNamespace::BasicBeatmapEventType eventType;

  __declspec(property(get = get_lightsId)) int32_t lightsId;

  /// @brief Method CheckNextEventForFade, addr 0x26ceaf8, size 0x218, virtual false, abstract: false, final false
  inline void CheckNextEventForFade(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method GetHighlightColor, addr 0x26cedac, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetHighlightColor(int32_t beatmapEventValue, bool colorBoost);

  /// @brief Method GetNormalColor, addr 0x26ced10, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetNormalColor(int32_t beatmapEventValue, bool colorBoost);

  /// @brief Method HandleColorBoostBeatmapEvent, addr 0x26cee48, size 0xcc, virtual false, abstract: false, final false
  inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x26ce78c, size 0x348, virtual false, abstract: false, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::LightSwitchEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x26ce6dc, size 0xb0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetColor, addr 0x26cead4, size 0x24, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetupTweenAndSaveOtherColors, addr 0x26ce6a4, size 0x38, virtual false, abstract: false, final false
  inline void SetupTweenAndSaveOtherColors(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor, ::UnityEngine::Color alternativeToColor);

  /// @brief Method Start, addr 0x26ce348, size 0x35c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__alternativeFromColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__alternativeFromColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__alternativeToColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__alternativeToColor();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__colorChangeBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__colorChangeBeatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTween() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__event() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__event();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor0() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor0Boost() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor0Boost();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor1Boost() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor1Boost();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor0() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor0();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor0Boost() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor0Boost();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__lightColor1Boost() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__lightColor1Boost();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr bool const& __cordl_internal_get__lightOnStart() const;

  constexpr bool& __cordl_internal_get__lightOnStart();

  constexpr int32_t const& __cordl_internal_get__lightsID() const;

  constexpr int32_t& __cordl_internal_get__lightsID();

  constexpr float_t const& __cordl_internal_get__offColorIntensity() const;

  constexpr float_t& __cordl_internal_get__offColorIntensity();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get__usingBoostColors() const;

  constexpr bool& __cordl_internal_get__usingBoostColors();

  constexpr void __cordl_internal_set__alternativeFromColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__alternativeToColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__colorChangeBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__highlightColor0(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightColor0Boost(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightColor1Boost(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightColor0(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightColor0Boost(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightColor1Boost(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__lightOnStart(bool value);

  constexpr void __cordl_internal_set__lightsID(int32_t value);

  constexpr void __cordl_internal_set__offColorIntensity(float_t value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__usingBoostColors(bool value);

  /// @brief Method .ctor, addr 0x26cef14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventType, addr 0x26ce340, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_eventType();

  /// @brief Method get_lightsId, addr 0x26ce338, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightsId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightSwitchEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightSwitchEventEffect(LightSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightSwitchEventEffect(LightSwitchEventEffect const&) = delete;

  /// @brief Field _lightColor0, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor0;

  /// @brief Field _lightColor1, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor1;

  /// @brief Field _highlightColor0, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor0;

  /// @brief Field _highlightColor1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor1;

  /// @brief Field _lightColor0Boost, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor0Boost;

  /// @brief Field _lightColor1Boost, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____lightColor1Boost;

  /// @brief Field _highlightColor0Boost, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor0Boost;

  /// @brief Field _highlightColor1Boost, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor1Boost;

  /// @brief Field _offColorIntensity, offset: 0x58, size: 0x4, def value: None
  float_t ____offColorIntensity;

  /// @brief Field _lightOnStart, offset: 0x5c, size: 0x1, def value: None
  bool ____lightOnStart;

  /// @brief Field _lightsID, offset: 0x60, size: 0x4, def value: None
  int32_t ____lightsID;

  /// @brief Field _event, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _lightManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _colorManager, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _colorTween, offset: 0x88, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTween;

  /// @brief Field _alternativeFromColor, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ____alternativeFromColor;

  /// @brief Field _alternativeToColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____alternativeToColor;

  /// @brief Field _usingBoostColors, offset: 0xb0, size: 0x1, def value: None
  bool ____usingBoostColors;

  /// @brief Field _colorChangeBeatmapDataCallbackWrapper, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____colorChangeBeatmapDataCallbackWrapper;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field kFlashAndFadeDuration offset 0xffffffff size 0x4
  static constexpr float_t kFlashAndFadeDuration{ 1.5 };

  /// @brief Field kHighlightDuration offset 0xffffffff size 0x4
  static constexpr float_t kHighlightDuration{ 0.6 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightSwitchEventEffect, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightColor0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightColor1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____highlightColor0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____highlightColor1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightColor0Boost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightColor1Boost) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____highlightColor0Boost) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____highlightColor1Boost) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____offColorIntensity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightOnStart) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightsID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____event) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____lightManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____beatmapCallbacksController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____tweeningManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____colorManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____colorTween) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____alternativeFromColor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____alternativeToColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____usingBoostColors) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____colorChangeBeatmapDataCallbackWrapper) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightSwitchEventEffect, ____colorBoostBeatmapDataCallbackWrapper) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightSwitchEventEffect*, "", "LightSwitchEventEffect");
