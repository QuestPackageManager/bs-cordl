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
class LightWithIdManager;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class ColorManager;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4954))
// CS Name: ::LightSwitchEventEffect*
class CORDL_TYPE LightSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightColor0, offset 0x18, size 0x8
  __declspec(property(get = __get__lightColor0, put = __set__lightColor0))::GlobalNamespace::ColorSO* _lightColor0;

  /// @brief Field _lightColor1, offset 0x20, size 0x8
  __declspec(property(get = __get__lightColor1, put = __set__lightColor1))::GlobalNamespace::ColorSO* _lightColor1;

  /// @brief Field _highlightColor0, offset 0x28, size 0x8
  __declspec(property(get = __get__highlightColor0, put = __set__highlightColor0))::GlobalNamespace::ColorSO* _highlightColor0;

  /// @brief Field _highlightColor1, offset 0x30, size 0x8
  __declspec(property(get = __get__highlightColor1, put = __set__highlightColor1))::GlobalNamespace::ColorSO* _highlightColor1;

  /// @brief Field _lightColor0Boost, offset 0x38, size 0x8
  __declspec(property(get = __get__lightColor0Boost, put = __set__lightColor0Boost))::GlobalNamespace::ColorSO* _lightColor0Boost;

  /// @brief Field _lightColor1Boost, offset 0x40, size 0x8
  __declspec(property(get = __get__lightColor1Boost, put = __set__lightColor1Boost))::GlobalNamespace::ColorSO* _lightColor1Boost;

  /// @brief Field _highlightColor0Boost, offset 0x48, size 0x8
  __declspec(property(get = __get__highlightColor0Boost, put = __set__highlightColor0Boost))::GlobalNamespace::ColorSO* _highlightColor0Boost;

  /// @brief Field _highlightColor1Boost, offset 0x50, size 0x8
  __declspec(property(get = __get__highlightColor1Boost, put = __set__highlightColor1Boost))::GlobalNamespace::ColorSO* _highlightColor1Boost;

  /// @brief Field _offColorIntensity, offset 0x58, size 0x4
  __declspec(property(get = __get__offColorIntensity, put = __set__offColorIntensity)) float_t _offColorIntensity;

  /// @brief Field _lightOnStart, offset 0x5c, size 0x1
  __declspec(property(get = __get__lightOnStart, put = __set__lightOnStart)) bool _lightOnStart;

  /// @brief Field _lightsID, offset 0x60, size 0x4
  __declspec(property(get = __get__lightsID, put = __set__lightsID)) int32_t _lightsID;

  /// @brief Field _event, offset 0x64, size 0x4
  __declspec(property(get = __get__event, put = __set__event))::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _lightManager, offset 0x68, size 0x8
  __declspec(property(get = __get__lightManager, put = __set__lightManager))::GlobalNamespace::LightWithIdManager* _lightManager;

  /// @brief Field _beatmapCallbacksController, offset 0x70, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset 0x78, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::SongTimeTweeningManager* _tweeningManager;

  /// @brief Field _colorManager, offset 0x80, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _colorTween, offset 0x88, size 0x8
  __declspec(property(get = __get__colorTween, put = __set__colorTween))::Tweening::ColorTween* _colorTween;

  /// @brief Field _alternativeFromColor, offset 0x90, size 0x10
  __declspec(property(get = __get__alternativeFromColor, put = __set__alternativeFromColor))::UnityEngine::Color _alternativeFromColor;

  /// @brief Field _alternativeToColor, offset 0xa0, size 0x10
  __declspec(property(get = __get__alternativeToColor, put = __set__alternativeToColor))::UnityEngine::Color _alternativeToColor;

  /// @brief Field _usingBoostColors, offset 0xb0, size 0x1
  __declspec(property(get = __get__usingBoostColors, put = __set__usingBoostColors)) bool _usingBoostColors;

  /// @brief Field _colorChangeBeatmapDataCallbackWrapper, offset 0xb8, size 0x8
  __declspec(property(get = __get__colorChangeBeatmapDataCallbackWrapper,
                      put = __set__colorChangeBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorChangeBeatmapDataCallbackWrapper;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset 0xc0, size 0x8
  __declspec(property(get = __get__colorBoostBeatmapDataCallbackWrapper,
                      put = __set__colorBoostBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorBoostBeatmapDataCallbackWrapper;

  __declspec(property(get = get_lightsId)) int32_t lightsId;

  __declspec(property(get = get_eventType))::GlobalNamespace::BasicBeatmapEventType eventType;

  constexpr ::GlobalNamespace::ColorSO*& __get__lightColor0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__lightColor0() const;

  constexpr void __set__lightColor0(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__lightColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__lightColor1() const;

  constexpr void __set__lightColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor0() const;

  constexpr void __set__highlightColor0(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor1() const;

  constexpr void __set__highlightColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__lightColor0Boost();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__lightColor0Boost() const;

  constexpr void __set__lightColor0Boost(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__lightColor1Boost();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__lightColor1Boost() const;

  constexpr void __set__lightColor1Boost(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor0Boost();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor0Boost() const;

  constexpr void __set__highlightColor0Boost(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor1Boost();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor1Boost() const;

  constexpr void __set__highlightColor1Boost(::GlobalNamespace::ColorSO* value);

  constexpr float_t& __get__offColorIntensity();

  constexpr float_t const& __get__offColorIntensity() const;

  constexpr void __set__offColorIntensity(float_t value);

  constexpr bool& __get__lightOnStart();

  constexpr bool const& __get__lightOnStart() const;

  constexpr void __set__lightOnStart(bool value);

  constexpr int32_t& __get__lightsID();

  constexpr int32_t const& __get__lightsID() const;

  constexpr void __set__lightsID(int32_t value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

  constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightManager() const;

  constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::Tweening::SongTimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::Tweening::ColorTween*& __get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__colorTween() const;

  constexpr void __set__colorTween(::Tweening::ColorTween* value);

  constexpr ::UnityEngine::Color& __get__alternativeFromColor();

  constexpr ::UnityEngine::Color const& __get__alternativeFromColor() const;

  constexpr void __set__alternativeFromColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__alternativeToColor();

  constexpr ::UnityEngine::Color const& __get__alternativeToColor() const;

  constexpr void __set__alternativeToColor(::UnityEngine::Color value);

  constexpr bool& __get__usingBoostColors();

  constexpr bool const& __get__usingBoostColors() const;

  constexpr void __set__usingBoostColors(bool value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__colorChangeBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__colorChangeBeatmapDataCallbackWrapper() const;

  constexpr void __set__colorChangeBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__colorBoostBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__colorBoostBeatmapDataCallbackWrapper() const;

  constexpr void __set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method get_lightsId, addr 0x23ad984, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightsId();

  /// @brief Method get_eventType, addr 0x23ad98c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_eventType();

  /// @brief Method Awake, addr 0x23ad994, size 0x1cc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x23adb98, size 0x1c0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23add58, size 0xb0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x23ade08, size 0x348, virtual false, abstract: false, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HandleColorBoostBeatmapEvent, addr 0x23ae4c4, size 0xcc, virtual false, abstract: false, final false
  inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);

  /// @brief Method SetupTweenAndSaveOtherColors, addr 0x23adb60, size 0x38, virtual false, abstract: false, final false
  inline void SetupTweenAndSaveOtherColors(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor, ::UnityEngine::Color alternativeToColor);

  /// @brief Method CheckNextEventForFade, addr 0x23ae174, size 0x218, virtual false, abstract: false, final false
  inline void CheckNextEventForFade(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method GetNormalColor, addr 0x23ae38c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetNormalColor(int32_t beatmapEventValue, bool colorBoost);

  /// @brief Method GetHighlightColor, addr 0x23ae428, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetHighlightColor(int32_t beatmapEventValue, bool colorBoost);

  /// @brief Method SetColor, addr 0x23ae150, size 0x24, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  static inline ::GlobalNamespace::LightSwitchEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23ae590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightSwitchEventEffect(LightSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightSwitchEventEffect(LightSwitchEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightSwitchEventEffect();

public:
  /// @brief Field _lightColor0, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____lightColor0;

  /// @brief Field _lightColor1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____lightColor1;

  /// @brief Field _highlightColor0, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor0;

  /// @brief Field _highlightColor1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor1;

  /// @brief Field _lightColor0Boost, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____lightColor0Boost;

  /// @brief Field _lightColor1Boost, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____lightColor1Boost;

  /// @brief Field _highlightColor0Boost, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor0Boost;

  /// @brief Field _highlightColor1Boost, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor1Boost;

  /// @brief Field _offColorIntensity, offset: 0x58, size: 0x4, def value: None
  float_t ____offColorIntensity;

  /// @brief Field _lightOnStart, offset: 0x5c, size: 0x1, def value: None
  bool ____lightOnStart;

  /// @brief Field _lightsID, offset: 0x60, size: 0x4, def value: None
  int32_t ____lightsID;

  /// @brief Field _event, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _lightManager, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset: 0x78, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____tweeningManager;

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
