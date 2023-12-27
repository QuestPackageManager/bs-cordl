#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MeshRendererSwitchEventEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4955))
// CS Name: ::MeshRendererSwitchEventEffect*
class CORDL_TYPE MeshRendererSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapEvent, offset 0x18, size 0x4
  __declspec(property(get = __get__beatmapEvent, put = __set__beatmapEvent))::GlobalNamespace::BasicBeatmapEventType _beatmapEvent;

  /// @brief Field _deactivateOnBoostRenderers, offset 0x20, size 0x8
  __declspec(property(get = __get__deactivateOnBoostRenderers,
                      put = __set__deactivateOnBoostRenderers))::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> _deactivateOnBoostRenderers;

  /// @brief Field _activateOnBoostRenderers, offset 0x28, size 0x8
  __declspec(property(get = __get__activateOnBoostRenderers,
                      put = __set__activateOnBoostRenderers))::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> _activateOnBoostRenderers;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEvent() const;

  constexpr void __set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& __get__deactivateOnBoostRenderers();

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& __get__deactivateOnBoostRenderers() const;

  constexpr void __set__deactivateOnBoostRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value);

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& __get__activateOnBoostRenderers();

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& __get__activateOnBoostRenderers() const;

  constexpr void __set__activateOnBoostRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start addr 0x23ae598 size 0x124 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23ae6bc size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent addr 0x23ae6d8 size 0x20 virtual false final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method ToggleObjects addr 0x23ae6f8 size 0xc4 virtual false final false
  inline void ToggleObjects(bool isBoostOn);

  static inline ::GlobalNamespace::MeshRendererSwitchEventEffect* New_ctor();

  /// @brief Method .ctor addr 0x23ae7bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MeshRendererSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshRendererSwitchEventEffect(MeshRendererSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshRendererSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshRendererSwitchEventEffect(MeshRendererSwitchEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshRendererSwitchEventEffect();

public:
  /// @brief Field _beatmapEvent, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEvent;

  /// @brief Field _deactivateOnBoostRenderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> ____deactivateOnBoostRenderers;

  /// @brief Field _activateOnBoostRenderers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> ____activateOnBoostRenderers;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MeshRendererSwitchEventEffect, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MeshRendererSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MeshRendererSwitchEventEffect*, "", "MeshRendererSwitchEventEffect");
