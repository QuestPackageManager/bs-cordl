#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleSaberSparkleEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
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
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager_BoxSideRotations;
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager_BoxSideRotations;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations);
// Dependencies System.Object, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleSaberSparkleEffectManager/BoxSideRotations
class CORDL_TYPE ObstacleSaberSparkleEffectManager_BoxSideRotations : public ::System::Object {
public:
  // Declarations
  /// @brief Field kNegativeX, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kNegativeX, put = setStaticF_kNegativeX)) ::UnityEngine::Quaternion kNegativeX;

  /// @brief Field kNegativeY, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kNegativeY, put = setStaticF_kNegativeY)) ::UnityEngine::Quaternion kNegativeY;

  /// @brief Field kNegativeZ, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kNegativeZ, put = setStaticF_kNegativeZ)) ::UnityEngine::Quaternion kNegativeZ;

  /// @brief Field kPositiveX, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kPositiveX, put = setStaticF_kPositiveX)) ::UnityEngine::Quaternion kPositiveX;

  /// @brief Field kPositiveY, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kPositiveY, put = setStaticF_kPositiveY)) ::UnityEngine::Quaternion kPositiveY;

  /// @brief Field kPositiveZ, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kPositiveZ, put = setStaticF_kPositiveZ)) ::UnityEngine::Quaternion kPositiveZ;

  static inline ::UnityEngine::Quaternion getStaticF_kNegativeX();

  static inline ::UnityEngine::Quaternion getStaticF_kNegativeY();

  static inline ::UnityEngine::Quaternion getStaticF_kNegativeZ();

  static inline ::UnityEngine::Quaternion getStaticF_kPositiveX();

  static inline ::UnityEngine::Quaternion getStaticF_kPositiveY();

  static inline ::UnityEngine::Quaternion getStaticF_kPositiveZ();

  static inline void setStaticF_kNegativeX(::UnityEngine::Quaternion value);

  static inline void setStaticF_kNegativeY(::UnityEngine::Quaternion value);

  static inline void setStaticF_kNegativeZ(::UnityEngine::Quaternion value);

  static inline void setStaticF_kPositiveX(::UnityEngine::Quaternion value);

  static inline void setStaticF_kPositiveY(::UnityEngine::Quaternion value);

  static inline void setStaticF_kPositiveZ(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSaberSparkleEffectManager_BoxSideRotations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager_BoxSideRotations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSaberSparkleEffectManager_BoxSideRotations(ObstacleSaberSparkleEffectManager_BoxSideRotations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager_BoxSideRotations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSaberSparkleEffectManager_BoxSideRotations(ObstacleSaberSparkleEffectManager_BoxSideRotations const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4254 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleSaberSparkleEffectManager
class CORDL_TYPE ObstacleSaberSparkleEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoxSideRotations = ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations;

  /// @brief Field _beatmapObjectManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _colorManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _effects, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__effects,
                      put = __cordl_internal_set__effects)) ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*>
      _effects;

  /// @brief Field _hapticFeedbackManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _obstacleSaberSparkleEffectPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleSaberSparkleEffectPrefab,
                      put = __cordl_internal_set__obstacleSaberSparkleEffectPrefab)) ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>
      _obstacleSaberSparkleEffectPrefab;

  /// @brief Field _rumblePreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblePreset, put = __cordl_internal_set__rumblePreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _rumblePreset;

  /// @brief Field _saberManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sabers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers)) ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> _sabers;

  /// @brief Field sparkleEffectDidEndEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_sparkleEffectDidEndEvent,
                      put = __cordl_internal_set_sparkleEffectDidEndEvent)) ::System::Action_1<::GlobalNamespace::SaberType>* sparkleEffectDidEndEvent;

  /// @brief Field sparkleEffectDidStartEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_sparkleEffectDidStartEvent,
                      put = __cordl_internal_set_sparkleEffectDidStartEvent)) ::System::Action_1<::GlobalNamespace::SaberType>* sparkleEffectDidStartEvent;

  /// @brief Method FindBoxSurfaceRotation, addr 0x3b99cd0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FindBoxSurfaceRotation(::ByRef<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 position);

  /// @brief Method IntersectBounds, addr 0x3b99798, size 0x1ac, virtual false, abstract: false, final false
  static inline bool IntersectBounds(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method IntersectBoxSurfacePose, addr 0x3b99754, size 0x44, virtual false, abstract: false, final false
  static inline bool IntersectBoxSurfacePose(::ByRef<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<::UnityEngine::Pose> hit);

  /// @brief Method IntersectBoxSurfacePosition, addr 0x3b99944, size 0x38c, virtual false, abstract: false, final false
  static inline bool IntersectBoxSurfacePosition(::ByRef<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<::UnityEngine::Vector3> hit);

  /// @brief Method IntersectSaberWithObstacles, addr 0x3b992b4, size 0x35c, virtual false, abstract: false, final false
  static inline bool IntersectSaberWithObstacles(::GlobalNamespace::Saber* saber, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacles,
                                                 ::ByRef<bool> intersectObstacleSurface, ::ByRef<::UnityEngine::Pose> hit);

  static inline ::GlobalNamespace::ObstacleSaberSparkleEffectManager* New_ctor();

  /// @brief Method Start, addr 0x3b98d1c, size 0x1d4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b98fec, size 0x2bc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> const& __cordl_internal_get__effects() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*>& __cordl_internal_get__effects();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> const& __cordl_internal_get__obstacleSaberSparkleEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>& __cordl_internal_get__obstacleSaberSparkleEffectPrefab();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__rumblePreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__rumblePreset();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> const& __cordl_internal_get__sabers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*>& __cordl_internal_get__sabers();

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>* const& __cordl_internal_get_sparkleEffectDidEndEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& __cordl_internal_get_sparkleEffectDidEndEvent();

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>* const& __cordl_internal_get_sparkleEffectDidStartEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& __cordl_internal_get_sparkleEffectDidStartEvent();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__effects(::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__obstacleSaberSparkleEffectPrefab(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> value);

  constexpr void __cordl_internal_set__rumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> value);

  constexpr void __cordl_internal_set_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  constexpr void __cordl_internal_set_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method .ctor, addr 0x3b99e90, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_sparkleEffectDidEndEvent, addr 0x3b98bbc, size 0xb0, virtual false, abstract: false, final false
  inline void add_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method add_sparkleEffectDidStartEvent, addr 0x3b98a5c, size 0xb0, virtual false, abstract: false, final false
  inline void add_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method remove_sparkleEffectDidEndEvent, addr 0x3b98c6c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method remove_sparkleEffectDidStartEvent, addr 0x3b98b0c, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4255 };

  /// @brief Field _obstacleSaberSparkleEffectPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> ____obstacleSaberSparkleEffectPrefab;

  /// @brief Field _rumblePreset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____rumblePreset;

  /// @brief Field _beatmapObjectManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _hapticFeedbackManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _colorManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _sabers, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> ____sabers;

  /// @brief Field _effects, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>, ::Array<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>*> ____effects;

  /// @brief Field sparkleEffectDidStartEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SaberType>* ___sparkleEffectDidStartEvent;

  /// @brief Field sparkleEffectDidEndEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SaberType>* ___sparkleEffectDidEndEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____obstacleSaberSparkleEffectPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____rumblePreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____beatmapObjectManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____saberManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____hapticFeedbackManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____colorManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____sabers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____effects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ___sparkleEffectDidStartEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ___sparkleEffectDidEndEvent) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffectManager, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffectManager*, "", "ObstacleSaberSparkleEffectManager");
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*, "", "ObstacleSaberSparkleEffectManager/BoxSideRotations");
