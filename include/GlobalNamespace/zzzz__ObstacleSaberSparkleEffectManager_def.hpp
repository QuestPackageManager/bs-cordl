#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ObstacleSaberSparkleEffectManager)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffect;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
// Type: ::ObstacleSaberSparkleEffectManager
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleSaberSparkleEffectManager*
class CORDL_TYPE ObstacleSaberSparkleEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _burnMarkPositions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__burnMarkPositions,
                      put = __cordl_internal_set__burnMarkPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _burnMarkPositions;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _effects, offset 0x60, size 0x8
  __declspec(
      property(get = __cordl_internal_get__effects,
               put = __cordl_internal_set__effects))::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> _effects;

  /// @brief Field _effectsTransforms, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__effectsTransforms,
                      put = __cordl_internal_set__effectsTransforms))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> _effectsTransforms;

  /// @brief Field _hapticFeedbackManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _isSystemActive, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__isSystemActive, put = __cordl_internal_set__isSystemActive))::ArrayW<bool, ::Array<bool>*> _isSystemActive;

  /// @brief Field _obstacleSaberSparkleEffectPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleSaberSparkleEffectPrefab,
                      put = __cordl_internal_set__obstacleSaberSparkleEffectPrefab))::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> _obstacleSaberSparkleEffectPrefab;

  /// @brief Field _rumblePreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblePreset, put = __cordl_internal_set__rumblePreset))::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _rumblePreset;

  /// @brief Field _saberManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sabers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers))::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> _sabers;

  /// @brief Field _wasSystemActive, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__wasSystemActive, put = __cordl_internal_set__wasSystemActive))::ArrayW<bool, ::Array<bool>*> _wasSystemActive;

  /// @brief Field sparkleEffectDidEndEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sparkleEffectDidEndEvent,
                      put = __cordl_internal_set_sparkleEffectDidEndEvent))::System::Action_1<::GlobalNamespace::SaberType>* sparkleEffectDidEndEvent;

  /// @brief Field sparkleEffectDidStartEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sparkleEffectDidStartEvent,
                      put = __cordl_internal_set_sparkleEffectDidStartEvent))::System::Action_1<::GlobalNamespace::SaberType>* sparkleEffectDidStartEvent;

  /// @brief Method BurnMarkPosForSaberType, addr 0x25bf798, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 BurnMarkPosForSaberType(::GlobalNamespace::SaberType saberType);

  /// @brief Method GetBurnMarkPos, addr 0x25bf2b8, size 0x288, virtual false, abstract: false, final false
  inline bool GetBurnMarkPos(::UnityEngine::Bounds bounds, ::UnityEngine::Transform* transform, ::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos,
                             ByRef<::UnityEngine::Vector3> burnMarkPos);

  /// @brief Method GetEffectRotation, addr 0x25bf540, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetEffectRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Transform* transform, ::UnityEngine::Bounds bounds);

  static inline ::GlobalNamespace::ObstacleSaberSparkleEffectManager* New_ctor();

  /// @brief Method OnDisable, addr 0x25bec08, size 0xa4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Start, addr 0x25be860, size 0x2ac, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x25becac, size 0x60c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__burnMarkPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__burnMarkPositions();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> const& __cordl_internal_get__effects() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*>& __cordl_internal_get__effects();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__effectsTransforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__effectsTransforms();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__isSystemActive() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__isSystemActive();

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> const& __cordl_internal_get__obstacleSaberSparkleEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>& __cordl_internal_get__obstacleSaberSparkleEffectPrefab();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__rumblePreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__rumblePreset();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> const& __cordl_internal_get__sabers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*>& __cordl_internal_get__sabers();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__wasSystemActive() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__wasSystemActive();

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& __cordl_internal_get_sparkleEffectDidEndEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SaberType>*> const& __cordl_internal_get_sparkleEffectDidEndEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& __cordl_internal_get_sparkleEffectDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SaberType>*> const& __cordl_internal_get_sparkleEffectDidStartEvent() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__burnMarkPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__effects(::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> value);

  constexpr void __cordl_internal_set__effectsTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__isSystemActive(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set__obstacleSaberSparkleEffectPrefab(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> value);

  constexpr void __cordl_internal_set__rumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> value);

  constexpr void __cordl_internal_set__wasSystemActive(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  constexpr void __cordl_internal_set_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method .ctor, addr 0x25bf824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_sparkleEffectDidEndEvent, addr 0x25be700, size 0xb0, virtual false, abstract: false, final false
  inline void add_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method add_sparkleEffectDidStartEvent, addr 0x25be5a0, size 0xb0, virtual false, abstract: false, final false
  inline void add_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method remove_sparkleEffectDidEndEvent, addr 0x25be7b0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method remove_sparkleEffectDidStartEvent, addr 0x25be650, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSaberSparkleEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSaberSparkleEffectManager(ObstacleSaberSparkleEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSaberSparkleEffectManager(ObstacleSaberSparkleEffectManager const&) = delete;

  /// @brief Field _obstacleSaberSparkleEffectPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> ____obstacleSaberSparkleEffectPrefab;

  /// @brief Field _rumblePreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____rumblePreset;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _hapticFeedbackManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field sparkleEffectDidStartEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SaberType>* ___sparkleEffectDidStartEvent;

  /// @brief Field sparkleEffectDidEndEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SaberType>* ___sparkleEffectDidEndEvent;

  /// @brief Field _sabers, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> ____sabers;

  /// @brief Field _effects, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> ____effects;

  /// @brief Field _effectsTransforms, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____effectsTransforms;

  /// @brief Field _isSystemActive, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____isSystemActive;

  /// @brief Field _wasSystemActive, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____wasSystemActive;

  /// @brief Field _burnMarkPositions, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____burnMarkPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffectManager, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____obstacleSaberSparkleEffectPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____rumblePreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____saberManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____hapticFeedbackManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____colorManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ___sparkleEffectDidStartEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ___sparkleEffectDidEndEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____sabers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____effects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____effectsTransforms) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____isSystemActive) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____wasSystemActive) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____burnMarkPositions) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffectManager*, "", "ObstacleSaberSparkleEffectManager");
