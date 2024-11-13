#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLightCollisionEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TubeBloomPrePassLightCollisionEffect)
namespace GlobalNamespace {
class InstancedMaterialLightWithId;
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
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect);
// Type: ::TubeBloomPrePassLightCollisionEffect
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TubeBloomPrePassLightCollisionEffect*
class CORDL_TYPE TubeBloomPrePassLightCollisionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _environmentLayerMask, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentLayerMask, put = __cordl_internal_set__environmentLayerMask)) ::UnityEngine::LayerMask _environmentLayerMask;

  /// @brief Field _hitPointDistanceToAlphaCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointDistanceToAlphaCurve, put = __cordl_internal_set__hitPointDistanceToAlphaCurve)) ::UnityEngine::AnimationCurve* _hitPointDistanceToAlphaCurve;

  /// @brief Field _hitPointGameObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointGameObject, put = __cordl_internal_set__hitPointGameObject)) ::UnityW<::UnityEngine::GameObject> _hitPointGameObject;

  /// @brief Field _hitPointLightWithId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointLightWithId, put = __cordl_internal_set__hitPointLightWithId)) ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> _hitPointLightWithId;

  /// @brief Field _hitPointState, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__hitPointState, put = __cordl_internal_set__hitPointState)) bool _hitPointState;

  /// @brief Field _hitPointTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointTransform, put = __cordl_internal_set__hitPointTransform)) ::UnityW<::UnityEngine::Transform> _hitPointTransform;

  /// @brief Field _showHitPoint, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__showHitPoint, put = __cordl_internal_set__showHitPoint)) bool _showHitPoint;

  /// @brief Field _transform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _tubeBloomPrePassLight, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  static inline ::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* New_ctor();

  /// @brief Method Start, addr 0x3b352fc, size 0x38, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b35334, size 0x3e0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__environmentLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__environmentLayerMask();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__hitPointDistanceToAlphaCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__hitPointDistanceToAlphaCurve() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hitPointGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hitPointGameObject();

  constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> const& __cordl_internal_get__hitPointLightWithId() const;

  constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId>& __cordl_internal_get__hitPointLightWithId();

  constexpr bool const& __cordl_internal_get__hitPointState() const;

  constexpr bool& __cordl_internal_get__hitPointState();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hitPointTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hitPointTransform();

  constexpr bool const& __cordl_internal_get__showHitPoint() const;

  constexpr bool& __cordl_internal_get__showHitPoint();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr void __cordl_internal_set__environmentLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__hitPointDistanceToAlphaCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__hitPointGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__hitPointLightWithId(::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> value);

  constexpr void __cordl_internal_set__hitPointState(bool value);

  constexpr void __cordl_internal_set__hitPointTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__showHitPoint(bool value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  /// @brief Method .ctor, addr 0x3b35714, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

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

  /// @brief Field _tubeBloomPrePassLight, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  /// @brief Field _environmentLayerMask, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____environmentLayerMask;

  /// @brief Field _showHitPoint, offset: 0x2c, size: 0x1, def value: None
  bool ____showHitPoint;

  /// @brief Field _hitPointGameObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____hitPointGameObject;

  /// @brief Field _hitPointTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____hitPointTransform;

  /// @brief Field _hitPointLightWithId, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> ____hitPointLightWithId;

  /// @brief Field _hitPointDistanceToAlphaCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____hitPointDistanceToAlphaCurve;

  /// @brief Field _transform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _hitPointState, offset: 0x58, size: 0x1, def value: None
  bool ____hitPointState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4331 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____tubeBloomPrePassLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____environmentLayerMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____showHitPoint) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointGameObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointLightWithId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointDistanceToAlphaCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____transform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect, ____hitPointState) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*, "", "TubeBloomPrePassLightCollisionEffect");
