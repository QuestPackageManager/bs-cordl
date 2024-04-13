#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MeshRendererSwitchEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MeshRendererSwitchEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MeshRendererSwitchEventEffect);
// Type: ::MeshRendererSwitchEventEffect
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MeshRendererSwitchEventEffect*
class CORDL_TYPE MeshRendererSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activateOnBoostRenderers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__activateOnBoostRenderers,
                      put = __cordl_internal_set__activateOnBoostRenderers))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> _activateOnBoostRenderers;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _beatmapEvent, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEvent, put = __cordl_internal_set__beatmapEvent))::GlobalNamespace::BasicBeatmapEventType _beatmapEvent;

  /// @brief Field _deactivateOnBoostRenderers, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__deactivateOnBoostRenderers,
               put = __cordl_internal_set__deactivateOnBoostRenderers))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> _deactivateOnBoostRenderers;

  /// @brief Method HandleBeatmapEvent, addr 0x25d02f0, size 0x20, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::MeshRendererSwitchEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x25d02d4, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25d01b0, size 0x124, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToggleObjects, addr 0x25d0310, size 0xc4, virtual false, abstract: false, final false
  inline void ToggleObjects(bool isBoostOn);

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get__activateOnBoostRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get__activateOnBoostRenderers();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEvent();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get__deactivateOnBoostRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get__deactivateOnBoostRenderers();

  constexpr void __cordl_internal_set__activateOnBoostRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__deactivateOnBoostRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  /// @brief Method .ctor, addr 0x25d03d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshRendererSwitchEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshRendererSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshRendererSwitchEventEffect(MeshRendererSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshRendererSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshRendererSwitchEventEffect(MeshRendererSwitchEventEffect const&) = delete;

  /// @brief Field _beatmapEvent, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEvent;

  /// @brief Field _deactivateOnBoostRenderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ____deactivateOnBoostRenderers;

  /// @brief Field _activateOnBoostRenderers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ____activateOnBoostRenderers;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MeshRendererSwitchEventEffect, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshRendererSwitchEventEffect, ____beatmapEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshRendererSwitchEventEffect, ____deactivateOnBoostRenderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshRendererSwitchEventEffect, ____activateOnBoostRenderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshRendererSwitchEventEffect, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshRendererSwitchEventEffect, ____beatmapDataCallbackWrapper) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MeshRendererSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MeshRendererSwitchEventEffect*, "", "MeshRendererSwitchEventEffect");
