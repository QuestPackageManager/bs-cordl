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
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4007))
// CS Name: ::FireEffect*
class CORDL_TYPE FireEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _groupId, offset 0x18, size 0x4
  __declspec(property(get = __get__groupId, put = __set__groupId)) int32_t _groupId;

  /// @brief Field _elementId, offset 0x1c, size 0x4
  __declspec(property(get = __get__elementId, put = __set__elementId)) int32_t _elementId;

  /// @brief Field _lightId, offset 0x20, size 0x4
  __declspec(property(get = __get__lightId, put = __set__lightId)) int32_t _lightId;

  /// @brief Field _flipBookPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __get__flipBookPropertyBlockController, put = __set__flipBookPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _flipBookPropertyBlockController;

  /// @brief Field _bloomPropertyBlockController, offset 0x30, size 0x8
  __declspec(property(get = __get__bloomPropertyBlockController, put = __set__bloomPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _bloomPropertyBlockController;

  /// @brief Field _privatePointLightPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __get__privatePointLightPropertyBlockController,
                      put = __set__privatePointLightPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _privatePointLightPropertyBlockController;

  /// @brief Field _bloomPrePassRenderer, offset 0x40, size 0x8
  __declspec(property(get = __get__bloomPrePassRenderer, put = __set__bloomPrePassRenderer))::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer* _bloomPrePassRenderer;

  /// @brief Field _bloomIntensityMultiplier, offset 0x48, size 0x4
  __declspec(property(get = __get__bloomIntensityMultiplier, put = __set__bloomIntensityMultiplier)) float_t _bloomIntensityMultiplier;

  /// @brief Field _pointLightColor, offset 0x4c, size 0x10
  __declspec(property(get = __get__pointLightColor, put = __set__pointLightColor))::UnityEngine::Color _pointLightColor;

  /// @brief Field _contributeCustomLightColor, offset 0x5c, size 0x1
  __declspec(property(get = __get__contributeCustomLightColor, put = __set__contributeCustomLightColor)) bool _contributeCustomLightColor;

  /// @brief Field _customLightColorContribution, offset 0x60, size 0x8
  __declspec(property(get = __get__customLightColorContribution, put = __set__customLightColorContribution))::GlobalNamespace::ColorSO* _customLightColorContribution;

  /// @brief Field _beatmapCallbacksController, offset 0x68, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lightWithIdManager, offset 0x70, size 0x8
  __declspec(property(get = __get__lightWithIdManager, put = __set__lightWithIdManager))::GlobalNamespace::LightWithIdManager* _lightWithIdManager;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset 0x78, size 0x8
  __declspec(property(get = __get__lightColorBeatmapEventCallbackWrapper,
                      put = __set__lightColorBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightColorBeatmapEventCallbackWrapper;

  constexpr int32_t& __get__groupId();

  constexpr int32_t const& __get__groupId() const;

  constexpr void __set__groupId(int32_t value);

  constexpr int32_t& __get__elementId();

  constexpr int32_t const& __get__elementId() const;

  constexpr void __set__elementId(int32_t value);

  constexpr int32_t& __get__lightId();

  constexpr int32_t const& __get__lightId() const;

  constexpr void __set__lightId(int32_t value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__flipBookPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__flipBookPropertyBlockController() const;

  constexpr void __set__flipBookPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__bloomPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__bloomPropertyBlockController() const;

  constexpr void __set__bloomPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__privatePointLightPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__privatePointLightPropertyBlockController() const;

  constexpr void __set__privatePointLightPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*& __get__bloomPrePassRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*> const& __get__bloomPrePassRenderer() const;

  constexpr void __set__bloomPrePassRenderer(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer* value);

  constexpr float_t& __get__bloomIntensityMultiplier();

  constexpr float_t const& __get__bloomIntensityMultiplier() const;

  constexpr void __set__bloomIntensityMultiplier(float_t value);

  constexpr ::UnityEngine::Color& __get__pointLightColor();

  constexpr ::UnityEngine::Color const& __get__pointLightColor() const;

  constexpr void __set__pointLightColor(::UnityEngine::Color value);

  constexpr bool& __get__contributeCustomLightColor();

  constexpr bool const& __get__contributeCustomLightColor() const;

  constexpr void __set__contributeCustomLightColor(bool value);

  constexpr ::GlobalNamespace::ColorSO*& __get__customLightColorContribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__customLightColorContribution() const;

  constexpr void __set__customLightColorContribution(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightWithIdManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightWithIdManager() const;

  constexpr void __set__lightWithIdManager(::GlobalNamespace::LightWithIdManager* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__lightColorBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__lightColorBeatmapEventCallbackWrapper() const;

  constexpr void __set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start addr 0x2221168 size 0x120 virtual true final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x22213d4 size 0x1c virtual true final false
  inline void OnDestroy();

  /// @brief Method HandleColorChangeBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);

  /// @brief Method SetRenderersEnabled addr 0x2221624 size 0x8c virtual false final false
  inline void SetRenderersEnabled(bool enabled);

  /// @brief Method NotifyAlphaWasChanged addr 0x2221844 size 0x70 virtual false final false
  inline void NotifyAlphaWasChanged(float_t currentAlpha);

  static inline ::GlobalNamespace::FireEffect* New_ctor();

  /// @brief Method .ctor addr 0x2221938 size 0x24 virtual false final false
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
  ::GlobalNamespace::MaterialPropertyBlockController* ____flipBookPropertyBlockController;

  /// @brief Field _bloomPropertyBlockController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____bloomPropertyBlockController;

  /// @brief Field _privatePointLightPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____privatePointLightPropertyBlockController;

  /// @brief Field _bloomPrePassRenderer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer* ____bloomPrePassRenderer;

  /// @brief Field _bloomIntensityMultiplier, offset: 0x48, size: 0x4, def value: None
  float_t ____bloomIntensityMultiplier;

  /// @brief Field _pointLightColor, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ____pointLightColor;

  /// @brief Field _contributeCustomLightColor, offset: 0x5c, size: 0x1, def value: None
  bool ____contributeCustomLightColor;

  /// @brief Field _customLightColorContribution, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____customLightColorContribution;

  /// @brief Field _beatmapCallbacksController, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lightWithIdManager, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightWithIdManager;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightColorBeatmapEventCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireEffect, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireEffect*, "", "FireEffect");
