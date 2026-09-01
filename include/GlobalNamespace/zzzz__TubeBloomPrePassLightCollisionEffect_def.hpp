#pragma once
// IWYU pragma private; include "GlobalNamespace\TubeBloomPrePassLightCollisionEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeBloomPrePassLightCollisionEffect)
namespace GlobalNamespace {
class InstancedMaterialLightWithId;
}
namespace GlobalNamespace {
class TubeBloomPrePassLightCollisionEffectUpdater;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightCollisionEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*, "", "TubeBloomPrePassLightCollisionEffect");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeBloomPrePassLightCollisionEffect
class CORDL_TYPE TubeBloomPrePassLightCollisionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_EffectTransform)) ::UnityW<::UnityEngine::Transform> EffectTransform;

  __declspec(property(get = get_EnvironmentLayerMask)) int32_t EnvironmentLayerMask;

  __declspec(property(get = get_HitPointTransform)) ::UnityW<::UnityEngine::Transform> HitPointTransform;

  __declspec(property(get = get_MaxLength)) float_t MaxLength;

  __declspec(property(get = get_NeedsUpdate)) bool NeedsUpdate;

  __declspec(property(get = get_ScaleTransform)) ::UnityW<::UnityEngine::Transform> ScaleTransform;

  __declspec(property(get = get_ShowHitPoint)) bool ShowHitPoint;

  __declspec(property(get = get_UseScale)) bool UseScale;

  /// @brief Field _effectUpdater, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__effectUpdater, put = __cordl_internal_set__effectUpdater)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater> _effectUpdater;

  /// @brief Field _environmentLayerMask, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentLayerMask, put = __cordl_internal_set__environmentLayerMask)) ::UnityEngine::LayerMask _environmentLayerMask;

  /// @brief Field _hitPointDistanceToAlphaCurve, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointDistanceToAlphaCurve, put = __cordl_internal_set__hitPointDistanceToAlphaCurve)) ::UnityEngine::AnimationCurve* _hitPointDistanceToAlphaCurve;

  /// @brief Field _hitPointGameObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointGameObject, put = __cordl_internal_set__hitPointGameObject)) ::UnityW<::UnityEngine::GameObject> _hitPointGameObject;

  /// @brief Field _hitPointLightWithId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointLightWithId, put = __cordl_internal_set__hitPointLightWithId)) ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> _hitPointLightWithId;

  /// @brief Field _hitPointState, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__hitPointState, put = __cordl_internal_set__hitPointState)) bool _hitPointState;

  /// @brief Field _hitPointTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointTransform, put = __cordl_internal_set__hitPointTransform)) ::UnityW<::UnityEngine::Transform> _hitPointTransform;

  /// @brief Field _scaleTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleTransform, put = __cordl_internal_set__scaleTransform)) ::UnityW<::UnityEngine::Transform> _scaleTransform;

  /// @brief Field _showHitPoint, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__showHitPoint, put = __cordl_internal_set__showHitPoint)) bool _showHitPoint;

  /// @brief Field _transform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _tubeBloomPrePassLight, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  /// @brief Field _useScale, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__useScale, put = __cordl_internal_set__useScale)) bool _useScale;

  static inline ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x59a2cb8, size 0xb0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x59a2c20, size 0x98, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x59a2b88, size 0x98, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x59a2988, size 0x48, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateExternal, addr 0x59a2ef8, size 0xe0, virtual false, abstract: false, final false
  inline void UpdateExternal(bool hit, float_t normalizedHitDistance);

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater> const& __cordl_internal_get__effectUpdater() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater>& __cordl_internal_get__effectUpdater();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__environmentLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__environmentLayerMask();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__hitPointDistanceToAlphaCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__hitPointDistanceToAlphaCurve();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hitPointGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hitPointGameObject();

  constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> const& __cordl_internal_get__hitPointLightWithId() const;

  constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId>& __cordl_internal_get__hitPointLightWithId();

  constexpr bool const& __cordl_internal_get__hitPointState() const;

  constexpr bool& __cordl_internal_get__hitPointState();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hitPointTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hitPointTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__scaleTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__scaleTransform();

  constexpr bool const& __cordl_internal_get__showHitPoint() const;

  constexpr bool& __cordl_internal_get__showHitPoint();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr bool const& __cordl_internal_get__useScale() const;

  constexpr bool& __cordl_internal_get__useScale();

  constexpr void __cordl_internal_set__effectUpdater(::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater> value);

  constexpr void __cordl_internal_set__environmentLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__hitPointDistanceToAlphaCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__hitPointGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__hitPointLightWithId(::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> value);

  constexpr void __cordl_internal_set__hitPointState(bool value);

  constexpr void __cordl_internal_set__hitPointTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__scaleTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__showHitPoint(bool value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set__useScale(bool value);

  /// @brief Method .ctor, addr 0x59a2fd8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EffectTransform, addr 0x59a2970, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_EffectTransform();

  /// @brief Method get_EnvironmentLayerMask, addr 0x59a2968, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EnvironmentLayerMask();

  /// @brief Method get_HitPointTransform, addr 0x59a2978, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_HitPointTransform();

  /// @brief Method get_MaxLength, addr 0x59a2950, size 0x18, virtual false, abstract: false, final false
  inline float_t get_MaxLength();

  /// @brief Method get_NeedsUpdate, addr 0x59a2938, size 0x18, virtual false, abstract: false, final false
  inline bool get_NeedsUpdate();

  /// @brief Method get_ScaleTransform, addr 0x59a2980, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_ScaleTransform();

  /// @brief Method get_ShowHitPoint, addr 0x59a2928, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowHitPoint();

  /// @brief Method get_UseScale, addr 0x59a2930, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseScale();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightCollisionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightCollisionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightCollisionEffect(TubeBloomPrePassLightCollisionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightCollisionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightCollisionEffect(TubeBloomPrePassLightCollisionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5949 };

  /// @brief Field _tubeBloomPrePassLight, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  /// @brief Field _environmentLayerMask, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____environmentLayerMask;

  /// @brief Field _useScale, offset: 0x2c, size: 0x1, def value: None
  bool ____useScale;

  /// @brief Field _scaleTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____scaleTransform;

  /// @brief Field _showHitPoint, offset: 0x38, size: 0x1, def value: None
  bool ____showHitPoint;

  /// @brief Field _hitPointGameObject, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____hitPointGameObject;

  /// @brief Field _hitPointTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____hitPointTransform;

  /// @brief Field _hitPointLightWithId, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> ____hitPointLightWithId;

  /// @brief Field _hitPointDistanceToAlphaCurve, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____hitPointDistanceToAlphaCurve;

  /// @brief Field _effectUpdater, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater> ____effectUpdater;

  /// @brief Field _transform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _hitPointState, offset: 0x70, size: 0x1, def value: None
  bool ____hitPointState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____tubeBloomPrePassLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____environmentLayerMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____useScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____scaleTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____showHitPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointGameObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointLightWithId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointDistanceToAlphaCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____effectUpdater) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____transform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointState) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
