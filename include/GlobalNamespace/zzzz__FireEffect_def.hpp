#pragma once
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
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4007))
// CS Name: ::FireEffect*
class CORDL_TYPE FireEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _groupId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId, put = __cordl_internal_set__groupId)) int32_t _groupId;

  /// @brief Field _elementId, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId, put = __cordl_internal_set__elementId)) int32_t _elementId;

  /// @brief Field _lightId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _flipBookPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__flipBookPropertyBlockController,
                      put = __cordl_internal_set__flipBookPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _flipBookPropertyBlockController;

  /// @brief Field _bloomPropertyBlockController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPropertyBlockController,
                      put = __cordl_internal_set__bloomPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _bloomPropertyBlockController;

  /// @brief Field _privatePointLightPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__privatePointLightPropertyBlockController,
                      put = __cordl_internal_set__privatePointLightPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _privatePointLightPropertyBlockController;

  /// @brief Field _bloomPrePassRenderer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderer,
                      put = __cordl_internal_set__bloomPrePassRenderer))::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> _bloomPrePassRenderer;

  /// @brief Field _bloomIntensityMultiplier, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomIntensityMultiplier, put = __cordl_internal_set__bloomIntensityMultiplier)) float_t _bloomIntensityMultiplier;

  /// @brief Field _pointLightColor, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get__pointLightColor, put = __cordl_internal_set__pointLightColor))::UnityEngine::Color _pointLightColor;

  /// @brief Field _contributeCustomLightColor, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__contributeCustomLightColor, put = __cordl_internal_set__contributeCustomLightColor)) bool _contributeCustomLightColor;

  /// @brief Field _customLightColorContribution, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__customLightColorContribution,
                      put = __cordl_internal_set__customLightColorContribution))::UnityW<::GlobalNamespace::ColorSO> _customLightColorContribution;

  /// @brief Field _beatmapCallbacksController, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lightWithIdManager, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__lightWithIdManager, put = __cordl_internal_set__lightWithIdManager))::UnityW<::GlobalNamespace::LightWithIdManager> _lightWithIdManager;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColorBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightColorBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightColorBeatmapEventCallbackWrapper;

  constexpr int32_t& __cordl_internal_get__groupId();

  constexpr int32_t const& __cordl_internal_get__groupId() const;

  constexpr void __cordl_internal_set__groupId(int32_t value);

  constexpr int32_t& __cordl_internal_get__elementId();

  constexpr int32_t const& __cordl_internal_get__elementId() const;

  constexpr void __cordl_internal_set__elementId(int32_t value);

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__flipBookPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__flipBookPropertyBlockController() const;

  constexpr void __cordl_internal_set__flipBookPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__bloomPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__bloomPropertyBlockController() const;

  constexpr void __cordl_internal_set__bloomPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__privatePointLightPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__privatePointLightPropertyBlockController() const;

  constexpr void __cordl_internal_set__privatePointLightPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>& __cordl_internal_get__bloomPrePassRenderer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> const& __cordl_internal_get__bloomPrePassRenderer() const;

  constexpr void __cordl_internal_set__bloomPrePassRenderer(::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> value);

  constexpr float_t& __cordl_internal_get__bloomIntensityMultiplier();

  constexpr float_t const& __cordl_internal_get__bloomIntensityMultiplier() const;

  constexpr void __cordl_internal_set__bloomIntensityMultiplier(float_t value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__pointLightColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__pointLightColor() const;

  constexpr void __cordl_internal_set__pointLightColor(::UnityEngine::Color value);

  constexpr bool& __cordl_internal_get__contributeCustomLightColor();

  constexpr bool const& __cordl_internal_get__contributeCustomLightColor() const;

  constexpr void __cordl_internal_set__contributeCustomLightColor(bool value);

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__customLightColorContribution();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__customLightColorContribution() const;

  constexpr void __cordl_internal_set__customLightColorContribution(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightWithIdManager();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightWithIdManager() const;

  constexpr void __cordl_internal_set__lightWithIdManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper() const;

  constexpr void __cordl_internal_set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x2221168, size 0x120, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x22213d4, size 0x1c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);

  /// @brief Method SetRenderersEnabled, addr 0x2221624, size 0x8c, virtual false, abstract: false, final false
  inline void SetRenderersEnabled(bool enabled);

  /// @brief Method NotifyAlphaWasChanged, addr 0x2221844, size 0x70, virtual false, abstract: false, final false
  inline void NotifyAlphaWasChanged(float_t currentAlpha);

  static inline ::GlobalNamespace::FireEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2221938, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FireEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireEffect(FireEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireEffect(FireEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireEffect();

public:
  /// @brief Field _groupId, offset: 0x18, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _elementId, offset: 0x1c, size: 0x4, def value: None
  int32_t ____elementId;

  /// @brief Field _lightId, offset: 0x20, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _flipBookPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____flipBookPropertyBlockController;

  /// @brief Field _bloomPropertyBlockController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____bloomPropertyBlockController;

  /// @brief Field _privatePointLightPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____privatePointLightPropertyBlockController;

  /// @brief Field _bloomPrePassRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> ____bloomPrePassRenderer;

  /// @brief Field _bloomIntensityMultiplier, offset: 0x48, size: 0x4, def value: None
  float_t ____bloomIntensityMultiplier;

  /// @brief Field _pointLightColor, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ____pointLightColor;

  /// @brief Field _contributeCustomLightColor, offset: 0x5c, size: 0x1, def value: None
  bool ____contributeCustomLightColor;

  /// @brief Field _customLightColorContribution, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____customLightColorContribution;

  /// @brief Field _beatmapCallbacksController, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lightWithIdManager, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightWithIdManager;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightColorBeatmapEventCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireEffect, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____groupId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____elementId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____lightId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____flipBookPropertyBlockController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____bloomPropertyBlockController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____privatePointLightPropertyBlockController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____bloomPrePassRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____bloomIntensityMultiplier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____pointLightColor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____contributeCustomLightColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____customLightColorContribution) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____beatmapCallbacksController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____lightWithIdManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireEffect, ____lightColorBeatmapEventCallbackWrapper) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireEffect*, "", "FireEffect");
