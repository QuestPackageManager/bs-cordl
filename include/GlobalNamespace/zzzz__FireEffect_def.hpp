#pragma once
// IWYU pragma private; include "GlobalNamespace/FireEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FireEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class FireEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireEffect);
// Type: ::FireEffect
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireEffect*
class CORDL_TYPE FireEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _bloomIntensityMultiplier, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomIntensityMultiplier, put = __cordl_internal_set__bloomIntensityMultiplier)) float_t _bloomIntensityMultiplier;

  /// @brief Field _bloomPrePassRenderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderer, put = __cordl_internal_set__bloomPrePassRenderer)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>
      _bloomPrePassRenderer;

  /// @brief Field _bloomPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPropertyBlockController, put = __cordl_internal_set__bloomPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _bloomPropertyBlockController;

  /// @brief Field _contributeCustomLightColor, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get__contributeCustomLightColor, put = __cordl_internal_set__contributeCustomLightColor)) bool _contributeCustomLightColor;

  /// @brief Field _customLightColorContribution, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__customLightColorContribution, put = __cordl_internal_set__customLightColorContribution)) ::UnityW<::GlobalNamespace::ColorSO>
      _customLightColorContribution;

  /// @brief Field _elementId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId, put = __cordl_internal_set__elementId)) int32_t _elementId;

  /// @brief Field _flipBookPropertyBlockController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__flipBookPropertyBlockController,
                      put = __cordl_internal_set__flipBookPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _flipBookPropertyBlockController;

  /// @brief Field _groupId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId, put = __cordl_internal_set__groupId)) int32_t _groupId;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColorBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightColorBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _lightColorBeatmapEventCallbackWrapper;

  /// @brief Field _lightId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _lightWithIdManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__lightWithIdManager, put = __cordl_internal_set__lightWithIdManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> _lightWithIdManager;

  /// @brief Field _pointLightColor, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__pointLightColor, put = __cordl_internal_set__pointLightColor)) ::UnityEngine::Color _pointLightColor;

  /// @brief Field _privatePointLightPropertyBlockController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__privatePointLightPropertyBlockController,
                      put = __cordl_internal_set__privatePointLightPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _privatePointLightPropertyBlockController;

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);

  static inline ::GlobalNamespace::FireEffect* New_ctor();

  /// @brief Method NotifyAlphaWasChanged, addr 0x223e0d4, size 0xc0, virtual false, abstract: false, final false
  inline void NotifyAlphaWasChanged(float_t currentAlpha);

  /// @brief Method OnDestroy, addr 0x223dc50, size 0x2c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetRenderersEnabled, addr 0x223deb4, size 0x8c, virtual false, abstract: false, final false
  inline void SetRenderersEnabled(bool enabled);

  /// @brief Method Start, addr 0x223d9f4, size 0x11c, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr float_t const& __cordl_internal_get__bloomIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__bloomIntensityMultiplier();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> const& __cordl_internal_get__bloomPrePassRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>& __cordl_internal_get__bloomPrePassRenderer();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__bloomPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__bloomPropertyBlockController();

  constexpr bool const& __cordl_internal_get__contributeCustomLightColor() const;

  constexpr bool& __cordl_internal_get__contributeCustomLightColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__customLightColorContribution() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__customLightColorContribution();

  constexpr int32_t const& __cordl_internal_get__elementId() const;

  constexpr int32_t& __cordl_internal_get__elementId();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__flipBookPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__flipBookPropertyBlockController();

  constexpr int32_t const& __cordl_internal_get__groupId() const;

  constexpr int32_t& __cordl_internal_get__groupId();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper() const;

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightWithIdManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightWithIdManager();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__pointLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__pointLightColor();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__privatePointLightPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__privatePointLightPropertyBlockController();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__bloomIntensityMultiplier(float_t value);

  constexpr void __cordl_internal_set__bloomPrePassRenderer(::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> value);

  constexpr void __cordl_internal_set__bloomPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__contributeCustomLightColor(bool value);

  constexpr void __cordl_internal_set__customLightColorContribution(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__elementId(int32_t value);

  constexpr void __cordl_internal_set__flipBookPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__groupId(int32_t value);

  constexpr void __cordl_internal_set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr void __cordl_internal_set__lightWithIdManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__pointLightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__privatePointLightPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  /// @brief Method .ctor, addr 0x223e20c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FireEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireEffect(FireEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireEffect(FireEffect const&) = delete;

  /// @brief Field _groupId, offset: 0x20, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _elementId, offset: 0x24, size: 0x4, def value: None
  int32_t ____elementId;

  /// @brief Field _lightId, offset: 0x28, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _flipBookPropertyBlockController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____flipBookPropertyBlockController;

  /// @brief Field _bloomPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____bloomPropertyBlockController;

  /// @brief Field _privatePointLightPropertyBlockController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____privatePointLightPropertyBlockController;

  /// @brief Field _bloomPrePassRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> ____bloomPrePassRenderer;

  /// @brief Field _bloomIntensityMultiplier, offset: 0x50, size: 0x4, def value: None
  float_t ____bloomIntensityMultiplier;

  /// @brief Field _pointLightColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____pointLightColor;

  /// @brief Field _contributeCustomLightColor, offset: 0x64, size: 0x1, def value: None
  bool ____contributeCustomLightColor;

  /// @brief Field _customLightColorContribution, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____customLightColorContribution;

  /// @brief Field _beatmapCallbacksController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lightWithIdManager, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightWithIdManager;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightColorBeatmapEventCallbackWrapper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireEffect, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____groupId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____elementId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____lightId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____flipBookPropertyBlockController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____bloomPropertyBlockController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____privatePointLightPropertyBlockController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____bloomPrePassRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____bloomIntensityMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____pointLightColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____contributeCustomLightColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____customLightColorContribution) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____beatmapCallbacksController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____lightWithIdManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____lightColorBeatmapEventCallbackWrapper) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireEffect*, "", "FireEffect");
