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
class ArcAndObstacleHapticEffectManager_EffectState;
}
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
class ArcAndObstacleHapticEffectManager_EffectState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArcAndObstacleHapticEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState);
// Dependencies ColorType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcAndObstacleHapticEffectManager/EffectState
class CORDL_TYPE ArcAndObstacleHapticEffectManager_EffectState : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_canBeActive)) bool canBeActive;

  /// @brief Field colorType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_isActive)) bool isActive;

  /// @brief Field isInTheObstacle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isInTheObstacle, put = __cordl_internal_set_isInTheObstacle)) bool isInTheObstacle;

  /// @brief Field isSliderActive, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_isSliderActive, put = __cordl_internal_set_isSliderActive)) bool isSliderActive;

  /// @brief Field sliderInteractionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sliderInteractionManager, put = __cordl_internal_set_sliderInteractionManager)) ::UnityW<::GlobalNamespace::SliderInteractionManager>
      sliderInteractionManager;

  static inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* New_ctor();

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

  /// @brief Method .ctor, addr 0x3b844cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canBeActive, addr 0x3b842f4, size 0x20, virtual false, abstract: false, final false
  inline bool get_canBeActive();

  /// @brief Method get_isActive, addr 0x3b84224, size 0x44, virtual false, abstract: false, final false
  inline bool get_isActive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArcAndObstacleHapticEffectManager_EffectState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArcAndObstacleHapticEffectManager_EffectState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArcAndObstacleHapticEffectManager_EffectState(ArcAndObstacleHapticEffectManager_EffectState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArcAndObstacleHapticEffectManager_EffectState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArcAndObstacleHapticEffectManager_EffectState(ArcAndObstacleHapticEffectManager_EffectState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4195 };

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
static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState, ___colorType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState, ___sliderInteractionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState, ___isInTheObstacle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState, ___isSliderActive) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcAndObstacleHapticEffectManager
class CORDL_TYPE ArcAndObstacleHapticEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EffectState = ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState;

  /// @brief Field _hapticFeedbackManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _hapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticPreset, put = __cordl_internal_set__hapticPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _hapticPreset;

  /// @brief Field _leftHandEffectState, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandEffectState,
                      put = __cordl_internal_set__leftHandEffectState)) ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* _leftHandEffectState;

  /// @brief Field _obstacleSaberSparkleEffectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleSaberSparkleEffectManager,
                      put = __cordl_internal_set__obstacleSaberSparkleEffectManager)) ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager>
      _obstacleSaberSparkleEffectManager;

  /// @brief Field _rightHandEffectState, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandEffectState,
                      put = __cordl_internal_set__rightHandEffectState)) ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* _rightHandEffectState;

  /// @brief Field _saberManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sliderInteractionManagers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderInteractionManagers,
                      put = __cordl_internal_set__sliderInteractionManagers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* _sliderInteractionManagers;

  /// @brief Method GetState, addr 0x3b843c8, size 0x30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* GetState(::GlobalNamespace::ColorType colorType);

  /// @brief Method GetState, addr 0x3b842a8, size 0x4c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* GetState(::GlobalNamespace::SaberType saberType);

  /// @brief Method HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders, addr 0x3b84388, size 0x40, virtual false, abstract: false, final false
  inline void HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager);

  /// @brief Method HandleSliderInteractionManagerSliderWasAddedToActiveSliders, addr 0x3b843f8, size 0x5c, virtual false, abstract: false, final false
  inline void HandleSliderInteractionManagerSliderWasAddedToActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager, float_t sliderInteractionParam);

  /// @brief Method HandleSparkleEffectDidEnd, addr 0x3b84314, size 0x24, virtual false, abstract: false, final false
  inline void HandleSparkleEffectDidEnd(::GlobalNamespace::SaberType saberType);

  /// @brief Method HandleSparkleEffectDidStart, addr 0x3b84268, size 0x40, virtual false, abstract: false, final false
  inline void HandleSparkleEffectDidStart(::GlobalNamespace::SaberType saberType);

  static inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b83e84, size 0x314, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b83b34, size 0x350, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryDisableThis, addr 0x3b84338, size 0x50, virtual false, abstract: false, final false
  inline void TryDisableThis();

  /// @brief Method Update, addr 0x3b84198, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHaptic, addr 0x3b841c0, size 0x64, virtual false, abstract: false, final false
  inline void UpdateHaptic(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* state, ::UnityEngine::XR::XRNode node);

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__hapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__hapticPreset();

  constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* const& __cordl_internal_get__leftHandEffectState() const;

  constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*& __cordl_internal_get__leftHandEffectState();

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> const& __cordl_internal_get__obstacleSaberSparkleEffectManager() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager>& __cordl_internal_get__obstacleSaberSparkleEffectManager();

  constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* const& __cordl_internal_get__rightHandEffectState() const;

  constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*& __cordl_internal_get__rightHandEffectState();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* const& __cordl_internal_get__sliderInteractionManagers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*& __cordl_internal_get__sliderInteractionManagers();

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__leftHandEffectState(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* value);

  constexpr void __cordl_internal_set__obstacleSaberSparkleEffectManager(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> value);

  constexpr void __cordl_internal_set__rightHandEffectState(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sliderInteractionManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  /// @brief Method .ctor, addr 0x3b84454, size 0x78, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4196 };

  /// @brief Field _hapticPreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____hapticPreset;

  /// @brief Field _obstacleSaberSparkleEffectManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> ____obstacleSaberSparkleEffectManager;

  /// @brief Field _sliderInteractionManagers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* ____sliderInteractionManagers;

  /// @brief Field _saberManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _hapticFeedbackManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _leftHandEffectState, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* ____leftHandEffectState;

  /// @brief Field _rightHandEffectState, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* ____rightHandEffectState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____hapticPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____obstacleSaberSparkleEffectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____sliderInteractionManagers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____saberManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____hapticFeedbackManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____leftHandEffectState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcAndObstacleHapticEffectManager, ____rightHandEffectState) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArcAndObstacleHapticEffectManager, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArcAndObstacleHapticEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArcAndObstacleHapticEffectManager*, "", "ArcAndObstacleHapticEffectManager");
NEED_NO_BOX(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*, "", "ArcAndObstacleHapticEffectManager/EffectState");
