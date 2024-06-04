#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcAndObstacleHapticEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ArcAndObstacleHapticEffectManager)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class SliderInteractionManager;
}
namespace GlobalNamespace {
class __ArcAndObstacleHapticEffectManager__EffectState;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcAndObstacleHapticEffectManager;
}
namespace GlobalNamespace {
class __ArcAndObstacleHapticEffectManager__EffectState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArcAndObstacleHapticEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState);
// Type: ::EffectState
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ArcAndObstacleHapticEffectManager::EffectState*
class CORDL_TYPE __ArcAndObstacleHapticEffectManager__EffectState : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_canBeActive)) bool canBeActive;

  /// @brief Field colorType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType))::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_isActive)) bool isActive;

  /// @brief Field isInTheObstacle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isInTheObstacle, put = __cordl_internal_set_isInTheObstacle)) bool isInTheObstacle;

  /// @brief Field isSliderActive, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_isSliderActive, put = __cordl_internal_set_isSliderActive)) bool isSliderActive;

  /// @brief Field sliderInteractionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sliderInteractionManager,
                      put = __cordl_internal_set_sliderInteractionManager))::UnityW<::GlobalNamespace::SliderInteractionManager> sliderInteractionManager;

  static inline ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* New_ctor();

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr bool const& __cordl_internal_get_isInTheObstacle() const;

  constexpr bool& __cordl_internal_get_isInTheObstacle();

  constexpr bool const& __cordl_internal_get_isSliderActive() const;

  constexpr bool& __cordl_internal_get_isSliderActive();

  constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager> const& __cordl_internal_get_sliderInteractionManager() const;

  constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager>& __cordl_internal_get_sliderInteractionManager();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_isInTheObstacle(bool value);

  constexpr void __cordl_internal_set_isSliderActive(bool value);

  constexpr void __cordl_internal_set_sliderInteractionManager(::UnityW<::GlobalNamespace::SliderInteractionManager> value);

  /// @brief Method .ctor, addr 0x26cd900, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canBeActive, addr 0x26cd71c, size 0x20, virtual false, abstract: false, final false
  inline bool get_canBeActive();

  /// @brief Method get_isActive, addr 0x26cd64c, size 0x44, virtual false, abstract: false, final false
  inline bool get_isActive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArcAndObstacleHapticEffectManager__EffectState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArcAndObstacleHapticEffectManager__EffectState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArcAndObstacleHapticEffectManager__EffectState(__ArcAndObstacleHapticEffectManager__EffectState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArcAndObstacleHapticEffectManager__EffectState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArcAndObstacleHapticEffectManager__EffectState(__ArcAndObstacleHapticEffectManager__EffectState const&) = delete;

  /// @brief Field colorType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field sliderInteractionManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderInteractionManager> ___sliderInteractionManager;

  /// @brief Field isInTheObstacle, offset: 0x20, size: 0x1, def value: None
  bool ___isInTheObstacle;

  /// @brief Field isSliderActive, offset: 0x21, size: 0x1, def value: None
  bool ___isSliderActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState, ___colorType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState, ___sliderInteractionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState, ___isInTheObstacle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState, ___isSliderActive) == 0x21, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ArcAndObstacleHapticEffectManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ArcAndObstacleHapticEffectManager*
class CORDL_TYPE ArcAndObstacleHapticEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EffectState = ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState;

  /// @brief Field _hapticFeedbackManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _hapticPreset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticPreset, put = __cordl_internal_set__hapticPreset))::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _hapticPreset;

  /// @brief Field _leftHandEffectState, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandEffectState,
                      put = __cordl_internal_set__leftHandEffectState))::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* _leftHandEffectState;

  /// @brief Field _obstacleSaberSparkleEffectManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleSaberSparkleEffectManager,
                      put = __cordl_internal_set__obstacleSaberSparkleEffectManager))::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> _obstacleSaberSparkleEffectManager;

  /// @brief Field _rightHandEffectState, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandEffectState,
                      put = __cordl_internal_set__rightHandEffectState))::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* _rightHandEffectState;

  /// @brief Field _saberManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sliderInteractionManagers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderInteractionManagers,
                      put = __cordl_internal_set__sliderInteractionManagers))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* _sliderInteractionManagers;

  /// @brief Method GetState, addr 0x26cd7f0, size 0x30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* GetState(::GlobalNamespace::ColorType colorType);

  /// @brief Method GetState, addr 0x26cd6d0, size 0x4c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* GetState(::GlobalNamespace::SaberType saberType);

  /// @brief Method HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders, addr 0x26cd7b0, size 0x40, virtual false, abstract: false, final false
  inline void HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager);

  /// @brief Method HandleSliderInteractionManagerSliderWasAddedToActiveSliders, addr 0x26cd820, size 0x5c, virtual false, abstract: false, final false
  inline void HandleSliderInteractionManagerSliderWasAddedToActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager, float_t sliderInteractionParam);

  /// @brief Method HandleSparkleEffectDidEnd, addr 0x26cd73c, size 0x24, virtual false, abstract: false, final false
  inline void HandleSparkleEffectDidEnd(::GlobalNamespace::SaberType saberType);

  /// @brief Method HandleSparkleEffectDidStart, addr 0x26cd690, size 0x40, virtual false, abstract: false, final false
  inline void HandleSparkleEffectDidStart(::GlobalNamespace::SaberType saberType);

  static inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x26cd288, size 0x338, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x26ccf14, size 0x374, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryDisableThis, addr 0x26cd760, size 0x50, virtual false, abstract: false, final false
  inline void TryDisableThis();

  /// @brief Method Update, addr 0x26cd5c0, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHaptic, addr 0x26cd5e8, size 0x64, virtual false, abstract: false, final false
  inline void UpdateHaptic(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* state, ::UnityEngine::XR::XRNode node);

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__hapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__hapticPreset();

  constexpr ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState*& __cordl_internal_get__leftHandEffectState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState*> const& __cordl_internal_get__leftHandEffectState() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> const& __cordl_internal_get__obstacleSaberSparkleEffectManager() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager>& __cordl_internal_get__obstacleSaberSparkleEffectManager();

  constexpr ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState*& __cordl_internal_get__rightHandEffectState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState*> const& __cordl_internal_get__rightHandEffectState() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*& __cordl_internal_get__sliderInteractionManagers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*> const&
  __cordl_internal_get__sliderInteractionManagers() const;

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__leftHandEffectState(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* value);

  constexpr void __cordl_internal_set__obstacleSaberSparkleEffectManager(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> value);

  constexpr void __cordl_internal_set__rightHandEffectState(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sliderInteractionManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  /// @brief Method .ctor, addr 0x26cd87c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArcAndObstacleHapticEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArcAndObstacleHapticEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArcAndObstacleHapticEffectManager(ArcAndObstacleHapticEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArcAndObstacleHapticEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArcAndObstacleHapticEffectManager(ArcAndObstacleHapticEffectManager const&) = delete;

  /// @brief Field _hapticPreset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____hapticPreset;

  /// @brief Field _obstacleSaberSparkleEffectManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> ____obstacleSaberSparkleEffectManager;

  /// @brief Field _sliderInteractionManagers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* ____sliderInteractionManagers;

  /// @brief Field _saberManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _hapticFeedbackManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _leftHandEffectState, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* ____leftHandEffectState;

  /// @brief Field _rightHandEffectState, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState* ____rightHandEffectState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArcAndObstacleHapticEffectManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____hapticPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____obstacleSaberSparkleEffectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____sliderInteractionManagers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____saberManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____hapticFeedbackManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____leftHandEffectState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____rightHandEffectState) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArcAndObstacleHapticEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArcAndObstacleHapticEffectManager*, "", "ArcAndObstacleHapticEffectManager");
NEED_NO_BOX(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ArcAndObstacleHapticEffectManager__EffectState*, "", "ArcAndObstacleHapticEffectManager/EffectState");
