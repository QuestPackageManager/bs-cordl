#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleSaberSparkleEffectManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffect_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ObstacleSaberSparkleEffectManager)
namespace BeatSaber::Haptics {
class HapticFeedbackManager;
}
namespace BeatSaber::Haptics {
class HapticPresetSO;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ColorManager;
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
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager_BoxSideRotations;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObstacleSaberSparkleEffectManager*);
MARK_REF_T(::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObstacleSaberSparkleEffectManager*, "", "ObstacleSaberSparkleEffectManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*, "", "ObstacleSaberSparkleEffectManager/BoxSideRotations");
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5813 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ObstacleSaberSparkleEffect, Saber, UnityEngine.MonoBehaviour
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

  /// @brief Field _container, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _effects, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__effects, put = __cordl_internal_set__effects)) ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>> _effects;

  /// @brief Field _hapticFeedbackManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>
      _hapticFeedbackManager;

  /// @brief Field _obstacleSaberSparkleEffectPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleSaberSparkleEffectPrefab,
                      put = __cordl_internal_set__obstacleSaberSparkleEffectPrefab)) ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>
      _obstacleSaberSparkleEffectPrefab;

  /// @brief Field _rumblePreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblePreset, put = __cordl_internal_set__rumblePreset)) ::UnityW<::BeatSaber::Haptics::HapticPresetSO> _rumblePreset;

  /// @brief Field _saberManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sabers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers)) ::ArrayW<::UnityW<::GlobalNamespace::Saber>> _sabers;

  /// @brief Field sparkleEffectDidEndEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_sparkleEffectDidEndEvent,
                      put = __cordl_internal_set_sparkleEffectDidEndEvent)) ::System::Action_1<::GlobalNamespace::SaberType>* sparkleEffectDidEndEvent;

  /// @brief Field sparkleEffectDidStartEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_sparkleEffectDidStartEvent,
                      put = __cordl_internal_set_sparkleEffectDidStartEvent)) ::System::Action_1<::GlobalNamespace::SaberType>* sparkleEffectDidStartEvent;

  /// @brief Method FindBoxSurfaceRotation, addr 0x598d5cc, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FindBoxSurfaceRotation(::by_ref<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 position);

  /// @brief Method IntersectBounds, addr 0x598d040, size 0x1e0, virtual false, abstract: false, final false
  static inline bool IntersectBounds(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method IntersectBoxSurfacePose, addr 0x598cffc, size 0x44, virtual false, abstract: false, final false
  static inline bool IntersectBoxSurfacePose(::by_ref<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::Pose> hit);

  /// @brief Method IntersectBoxSurfacePosition, addr 0x598d220, size 0x3ac, virtual false, abstract: false, final false
  static inline bool IntersectBoxSurfacePosition(::by_ref<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::Vector3> hit);

  /// @brief Method IntersectSaberWithObstacles, addr 0x598cce0, size 0x31c, virtual false, abstract: false, final false
  static inline bool IntersectSaberWithObstacles(::GlobalNamespace::Saber* saber, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacles,
                                                 ::by_ref<bool> intersectObstacleSurface, ::by_ref<::UnityEngine::Pose> hit);

  static inline ::GlobalNamespace::ObstacleSaberSparkleEffectManager* New_ctor();

  /// @brief Method Start, addr 0x598c7fc, size 0x260, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x598ca5c, size 0x284, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>> const& __cordl_internal_get__effects() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>& __cordl_internal_get__effects();

  constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> const& __cordl_internal_get__obstacleSaberSparkleEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>& __cordl_internal_get__obstacleSaberSparkleEffectPrefab();

  constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& __cordl_internal_get__rumblePreset() const;

  constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& __cordl_internal_get__rumblePreset();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>> const& __cordl_internal_get__sabers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>>& __cordl_internal_get__sabers();

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>* const& __cordl_internal_get_sparkleEffectDidEndEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& __cordl_internal_get_sparkleEffectDidEndEvent();

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>* const& __cordl_internal_get_sparkleEffectDidStartEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& __cordl_internal_get_sparkleEffectDidStartEvent();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__effects(::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__obstacleSaberSparkleEffectPrefab(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> value);

  constexpr void __cordl_internal_set__rumblePreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>> value);

  constexpr void __cordl_internal_set_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  constexpr void __cordl_internal_set_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method .ctor, addr 0x598d778, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_sparkleEffectDidEndEvent, addr 0x598c67c, size 0xc0, virtual false, abstract: false, final false
  inline void add_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method add_sparkleEffectDidStartEvent, addr 0x598c4fc, size 0xc0, virtual false, abstract: false, final false
  inline void add_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method remove_sparkleEffectDidEndEvent, addr 0x598c73c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value);

  /// @brief Method remove_sparkleEffectDidStartEvent, addr 0x598c5bc, size 0xc0, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5814 };

  /// @brief Field _obstacleSaberSparkleEffectPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> ____obstacleSaberSparkleEffectPrefab;

  /// @brief Field _rumblePreset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BeatSaber::Haptics::HapticPresetSO> ____rumblePreset;

  /// @brief Field _beatmapObjectManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _hapticFeedbackManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _colorManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _container, offset: 0x50, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _sabers, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>> ____sabers;

  /// @brief Field _effects, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>> ____effects;

  /// @brief Field sparkleEffectDidStartEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SaberType>* ___sparkleEffectDidStartEvent;

  /// @brief Field sparkleEffectDidEndEvent, offset: 0x70, size: 0x8, def value: None
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

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____container) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____sabers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ____effects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ___sparkleEffectDidStartEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSparkleEffectManager, ___sparkleEffectDidEndEvent) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObstacleSaberSparkleEffectManager) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
