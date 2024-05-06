#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorGroupEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorGroupEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
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
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class __LightColorGroupEffect__InitData;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupEffect;
}
namespace GlobalNamespace {
class __LightColorGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__LightColorGroupEffect__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightColorGroupEffect::InitData*
class CORDL_TYPE __LightColorGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field lightId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lightId, put = __cordl_internal_set_lightId)) int32_t lightId;

  static inline ::GlobalNamespace::__LightColorGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, int32_t lightId);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr int32_t const& __cordl_internal_get_lightId() const;

  constexpr int32_t& __cordl_internal_get_lightId();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_lightId(int32_t value);

  /// @brief Method .ctor, addr 0x26c96f8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, int32_t lightId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightColorGroupEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightColorGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightColorGroupEffect__InitData(__LightColorGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightColorGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightColorGroupEffect__InitData(__LightColorGroupEffect__InitData const&) = delete;

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field lightId, offset: 0x18, size: 0x4, def value: None
  int32_t ___lightId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightColorGroupEffect__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightColorGroupEffect__InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightColorGroupEffect__InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightColorGroupEffect__InitData, ___lightId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightColorGroupEffect
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 162, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightColorGroupEffect*
class CORDL_TYPE LightColorGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__LightColorGroupEffect__InitData;

  /// @brief Field _alternativeFromColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__alternativeFromColor, put = __cordl_internal_set__alternativeFromColor))::UnityEngine::Color _alternativeFromColor;

  /// @brief Field _alternativeToColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__alternativeToColor, put = __cordl_internal_set__alternativeToColor))::UnityEngine::Color _alternativeToColor;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _bpmController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmController, put = __cordl_internal_set__bpmController))::GlobalNamespace::IBpmController* _bpmController;

  /// @brief Field _colorManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _floatTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__floatTween, put = __cordl_internal_set__floatTween))::Tweening::FloatTween* _floatTween;

  /// @brief Field _fromColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__fromColor, put = __cordl_internal_set__fromColor))::UnityEngine::Color _fromColor;

  /// @brief Field _fromStrobeBrightness, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__fromStrobeBrightness, put = __cordl_internal_set__fromStrobeBrightness)) float_t _fromStrobeBrightness;

  /// @brief Field _fromStrobeFrequency, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__fromStrobeFrequency, put = __cordl_internal_set__fromStrobeFrequency)) float_t _fromStrobeFrequency;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColorBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightColorBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightColorBeatmapEventCallbackWrapper;

  /// @brief Field _lightId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _lightManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager))::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Field _strobeFade, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__strobeFade, put = __cordl_internal_set__strobeFade)) bool _strobeFade;

  /// @brief Field _toColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__toColor, put = __cordl_internal_set__toColor))::UnityEngine::Color _toColor;

  /// @brief Field _toStrobeBrightness, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__toStrobeBrightness, put = __cordl_internal_set__toStrobeBrightness)) float_t _toStrobeBrightness;

  /// @brief Field _toStrobeFrequency, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__toStrobeFrequency, put = __cordl_internal_set__toStrobeFrequency)) float_t _toStrobeFrequency;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Field _usingBoostColors, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__usingBoostColors, put = __cordl_internal_set__usingBoostColors)) bool _usingBoostColors;

  /// @brief Method Cleanup, addr 0x26c8d84, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetColor, addr 0x26c9540, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x26c8e20, size 0x47c, virtual false, abstract: false, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEventData);

  static inline ::GlobalNamespace::LightColorGroupEffect* New_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData* initData, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                   ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                                   ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::IBpmController* bpmController);

  /// @brief Method SetColor, addr 0x26c929c, size 0x124, virtual false, abstract: false, final false
  inline void SetColor(float_t t);

  /// @brief Method SetData, addr 0x26c9574, size 0x184, virtual false, abstract: false, final false
  inline void SetData(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor, ::UnityEngine::Color alternativeToColor, float_t fromStrobeBeatFrequency,
                      float_t toStrobeBeatFrequency, float_t fromStrobeBrightness, float_t toStrobeBrightness, bool strobeFade);

  /// @brief Method UseBoostColors, addr 0x26c93c0, size 0x180, virtual false, abstract: false, final false
  inline void UseBoostColors(bool useBoostColors);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__alternativeFromColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__alternativeFromColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__alternativeToColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__alternativeToColor();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::IBpmController*& __cordl_internal_get__bpmController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBpmController*> const& __cordl_internal_get__bpmController() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__floatTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__floatTween() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get__fromColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__fromColor();

  constexpr float_t const& __cordl_internal_get__fromStrobeBrightness() const;

  constexpr float_t& __cordl_internal_get__fromStrobeBrightness();

  constexpr float_t const& __cordl_internal_get__fromStrobeFrequency() const;

  constexpr float_t& __cordl_internal_get__fromStrobeFrequency();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper() const;

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr bool const& __cordl_internal_get__strobeFade() const;

  constexpr bool& __cordl_internal_get__strobeFade();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__toColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__toColor();

  constexpr float_t const& __cordl_internal_get__toStrobeBrightness() const;

  constexpr float_t& __cordl_internal_get__toStrobeBrightness();

  constexpr float_t const& __cordl_internal_get__toStrobeFrequency() const;

  constexpr float_t& __cordl_internal_get__toStrobeFrequency();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get__usingBoostColors() const;

  constexpr bool& __cordl_internal_get__usingBoostColors();

  constexpr void __cordl_internal_set__alternativeFromColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__alternativeToColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__bpmController(::GlobalNamespace::IBpmController* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__floatTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__fromColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__fromStrobeBrightness(float_t value);

  constexpr void __cordl_internal_set__fromStrobeFrequency(float_t value);

  constexpr void __cordl_internal_set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__strobeFade(bool value);

  constexpr void __cordl_internal_set__toColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__toStrobeBrightness(float_t value);

  constexpr void __cordl_internal_set__toStrobeFrequency(float_t value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__usingBoostColors(bool value);

  /// @brief Method .ctor, addr 0x26c8a28, size 0x35c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__LightColorGroupEffect__InitData* initData, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::IBpmController* bpmController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroupEffect(LightColorGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroupEffect(LightColorGroupEffect const&) = delete;

  /// @brief Field _colorManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _lightId, offset: 0x18, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _lightManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _bpmController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBpmController* ____bpmController;

  /// @brief Field _floatTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightColorBeatmapEventCallbackWrapper;

  /// @brief Field _fromColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____fromColor;

  /// @brief Field _toColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____toColor;

  /// @brief Field _alternativeFromColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ____alternativeFromColor;

  /// @brief Field _alternativeToColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____alternativeToColor;

  /// @brief Field _fromStrobeFrequency, offset: 0x90, size: 0x4, def value: None
  float_t ____fromStrobeFrequency;

  /// @brief Field _toStrobeFrequency, offset: 0x94, size: 0x4, def value: None
  float_t ____toStrobeFrequency;

  /// @brief Field _fromStrobeBrightness, offset: 0x98, size: 0x4, def value: None
  float_t ____fromStrobeBrightness;

  /// @brief Field _toStrobeBrightness, offset: 0x9c, size: 0x4, def value: None
  float_t ____toStrobeBrightness;

  /// @brief Field _strobeFade, offset: 0xa0, size: 0x1, def value: None
  bool ____strobeFade;

  /// @brief Field _usingBoostColors, offset: 0xa1, size: 0x1, def value: None
  bool ____usingBoostColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroupEffect, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____colorManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____lightId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____lightManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____bpmController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____floatTween) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____lightColorBeatmapEventCallbackWrapper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____fromColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____toColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____alternativeFromColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____alternativeToColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____fromStrobeFrequency) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____toStrobeFrequency) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____fromStrobeBrightness) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____toStrobeBrightness) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____strobeFade) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____usingBoostColors) == 0xa1, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffect*, "", "LightColorGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__LightColorGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightColorGroupEffect__InitData*, "", "LightColorGroupEffect/InitData");
