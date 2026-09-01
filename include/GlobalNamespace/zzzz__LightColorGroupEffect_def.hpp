#pragma once
// IWYU pragma private; include "GlobalNamespace\LightColorGroupEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class LightColorEventHandler;
}
namespace GlobalNamespace {
class LightColorGroupEffect_InitData;
}
namespace GlobalNamespace {
class LightWithIdManager;
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
class LightColorGroupEffect_InitData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightColorGroupEffect*);
MARK_REF_T(::GlobalNamespace::LightColorGroupEffect_InitData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorGroupEffect*, "", "LightColorGroupEffect");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorGroupEffect_InitData*, "", "LightColorGroupEffect/InitData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorGroupEffect/InitData
class CORDL_TYPE LightColorGroupEffect_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field lightId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lightId, put = __cordl_internal_set_lightId)) int32_t lightId;

  static inline ::GlobalNamespace::LightColorGroupEffect_InitData* New_ctor(int32_t groupId, int32_t elementId, int32_t lightId);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr int32_t const& __cordl_internal_get_lightId() const;

  constexpr int32_t& __cordl_internal_get_lightId();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_lightId(int32_t value);

  /// @brief Method .ctor, addr 0x59999d4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, int32_t lightId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroupEffect_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroupEffect_InitData(LightColorGroupEffect_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroupEffect_InitData(LightColorGroupEffect_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5892 };

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field lightId, offset: 0x18, size: 0x4, def value: None
  int32_t ___lightId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect_InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect_InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect_InitData, ___lightId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightColorGroupEffect_InitData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorGroupEffect
class CORDL_TYPE LightColorGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::LightColorGroupEffect_InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _colorManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _handler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler)) ::GlobalNamespace::LightColorEventHandler* _handler;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColorBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightColorBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _lightColorBeatmapEventCallbackWrapper;

  /// @brief Method Cleanup, addr 0x5999950, size 0x38, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetColor, addr 0x59999a0, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  static inline ::GlobalNamespace::LightColorGroupEffect* New_ctor(::GlobalNamespace::LightColorGroupEffect_InitData* initData, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                   ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                                   ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::IBpmController* bpmController);

  /// @brief Method UseBoostColors, addr 0x5999988, size 0x18, virtual false, abstract: false, final false
  inline void UseBoostColors(bool useBoostColors);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::GlobalNamespace::LightColorEventHandler* const& __cordl_internal_get__handler() const;

  constexpr ::GlobalNamespace::LightColorEventHandler*& __cordl_internal_get__handler();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightColorBeatmapEventCallbackWrapper();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__handler(::GlobalNamespace::LightColorEventHandler* value);

  constexpr void __cordl_internal_set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method .ctor, addr 0x5999700, size 0x250, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightColorGroupEffect_InitData* initData, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5893 };

  /// @brief Field _colorManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LightColorEventHandler* ____handler;

  /// @brief Field _lightColorBeatmapEventCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightColorBeatmapEventCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____colorManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____handler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffect, ____lightColorBeatmapEventCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightColorGroupEffect) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
