#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLightReflectionEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TubeBloomPrePassLightReflectionEffect)
namespace GlobalNamespace {
class EnvironmentCollisionRepository;
}
namespace GlobalNamespace {
class InstancedMaterialLightWithId;
}
namespace GlobalNamespace {
class TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightReflectionEffect;
}
namespace GlobalNamespace {
class TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect);
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeBloomPrePassLightReflectionEffect/TubeBloomPrePassLightWithHitPoint
class CORDL_TYPE TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hitPointState, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hitPointState, put = __cordl_internal_set__hitPointState)) bool _hitPointState;

  /// @brief Field hitPointDistanceToAlphaCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hitPointDistanceToAlphaCurve, put = __cordl_internal_set_hitPointDistanceToAlphaCurve)) ::UnityEngine::AnimationCurve* hitPointDistanceToAlphaCurve;

  /// @brief Field hitPointGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hitPointGameObject, put = __cordl_internal_set_hitPointGameObject)) ::UnityW<::UnityEngine::GameObject> hitPointGameObject;

  /// @brief Field hitPointLightWithId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_hitPointLightWithId, put = __cordl_internal_set_hitPointLightWithId)) ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> hitPointLightWithId;

  /// @brief Field hitPointTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hitPointTransform, put = __cordl_internal_set_hitPointTransform)) ::UnityW<::UnityEngine::Transform> hitPointTransform;

  /// @brief Field light, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_light, put = __cordl_internal_set_light)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> light;

  /// @brief Field showHitPoint, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_showHitPoint, put = __cordl_internal_set_showHitPoint)) bool showHitPoint;

  static inline ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* New_ctor();

  /// @brief Method SetActive, addr 0x3b99740, size 0xbc, virtual false, abstract: false, final false
  inline void SetActive(bool enabled, ::UnityEngine::Color mainLightColor);

  /// @brief Method SetCollisionLength, addr 0x3b99910, size 0x27c, virtual false, abstract: false, final false
  inline void SetCollisionLength(bool rayHitGeometry, ::UnityEngine::RaycastHit hit);

  /// @brief Method SetData, addr 0x3b997fc, size 0x114, virtual false, abstract: false, final false
  inline void SetData(float_t remainingLength, float_t startAlpha, ::UnityEngine::Vector3 hitWorldPosition, ::UnityEngine::Vector3 hitReflection);

  constexpr bool const& __cordl_internal_get__hitPointState() const;

  constexpr bool& __cordl_internal_get__hitPointState();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_hitPointDistanceToAlphaCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_hitPointDistanceToAlphaCurve();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hitPointGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hitPointGameObject();

  constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> const& __cordl_internal_get_hitPointLightWithId() const;

  constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId>& __cordl_internal_get_hitPointLightWithId();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hitPointTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hitPointTransform();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get_light() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get_light();

  constexpr bool const& __cordl_internal_get_showHitPoint() const;

  constexpr bool& __cordl_internal_get_showHitPoint();

  constexpr void __cordl_internal_set__hitPointState(bool value);

  constexpr void __cordl_internal_set_hitPointDistanceToAlphaCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_hitPointGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_hitPointLightWithId(::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> value);

  constexpr void __cordl_internal_set_hitPointTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_light(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set_showHitPoint(bool value);

  /// @brief Method .ctor, addr 0x3b99b94, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint(TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint(TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4339 };

  /// @brief Field light, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ___light;

  /// @brief Field showHitPoint, offset: 0x18, size: 0x1, def value: None
  bool ___showHitPoint;

  /// @brief Field hitPointGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___hitPointGameObject;

  /// @brief Field hitPointTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___hitPointTransform;

  /// @brief Field hitPointLightWithId, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> ___hitPointLightWithId;

  /// @brief Field hitPointDistanceToAlphaCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___hitPointDistanceToAlphaCurve;

  /// @brief Field _hitPointState, offset: 0x40, size: 0x1, def value: None
  bool ____hitPointState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ___light) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ___showHitPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ___hitPointGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ___hitPointTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ___hitPointLightWithId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ___hitPointDistanceToAlphaCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, ____hitPointState) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeBloomPrePassLightReflectionEffect
class CORDL_TYPE TubeBloomPrePassLightReflectionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TubeBloomPrePassLightWithHitPoint = ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint;

  /// @brief Field _environmentCollisionRepository, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentCollisionRepository,
                      put = __cordl_internal_set__environmentCollisionRepository)) ::GlobalNamespace::EnvironmentCollisionRepository* _environmentCollisionRepository;

  /// @brief Field _environmentLayerMask, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentLayerMask, put = __cordl_internal_set__environmentLayerMask)) ::UnityEngine::LayerMask _environmentLayerMask;

  /// @brief Field _mainTubeBloomPrePassLight, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainTubeBloomPrePassLight,
                      put = __cordl_internal_set__mainTubeBloomPrePassLight)) ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* _mainTubeBloomPrePassLight;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _tubeBloomPrePassLightBounces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLightBounces,
                      put = __cordl_internal_set__tubeBloomPrePassLightBounces)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*,
                                                                                          ::Array<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>*>
      _tubeBloomPrePassLightBounces;

  /// @brief Method Awake, addr 0x3b9924c, size 0x80, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x3b992cc, size 0x1c4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect* New_ctor();

  /// @brief Method RaycastAndSetLightLength, addr 0x3b99490, size 0x2b0, virtual false, abstract: false, final false
  inline bool RaycastAndSetLightLength(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* bounce, ::UnityEngine::Vector3 rayWorldOrigin,
                                       ::UnityEngine::Vector3 rayDirection, ::ByRef<::UnityEngine::Vector3> hitWorldPosition, ::ByRef<::UnityEngine::Vector3> hitReflection, ::ByRef<float_t> length,
                                       ::ByRef<float_t> endAlpha);

  constexpr ::GlobalNamespace::EnvironmentCollisionRepository* const& __cordl_internal_get__environmentCollisionRepository() const;

  constexpr ::GlobalNamespace::EnvironmentCollisionRepository*& __cordl_internal_get__environmentCollisionRepository();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__environmentLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__environmentLayerMask();

  constexpr ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* const& __cordl_internal_get__mainTubeBloomPrePassLight() const;

  constexpr ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*& __cordl_internal_get__mainTubeBloomPrePassLight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*,
                     ::Array<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>*> const&
  __cordl_internal_get__tubeBloomPrePassLightBounces() const;

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*,
                     ::Array<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>*>&
  __cordl_internal_get__tubeBloomPrePassLightBounces();

  constexpr void __cordl_internal_set__environmentCollisionRepository(::GlobalNamespace::EnvironmentCollisionRepository* value);

  constexpr void __cordl_internal_set__environmentLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__mainTubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLightBounces(::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*,
                                                                             ::Array<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>*>
                                                                        value);

  /// @brief Method .ctor, addr 0x3b99b8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightReflectionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightReflectionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightReflectionEffect(TubeBloomPrePassLightReflectionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightReflectionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightReflectionEffect(TubeBloomPrePassLightReflectionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4340 };

  /// @brief Field _mainTubeBloomPrePassLight, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* ____mainTubeBloomPrePassLight;

  /// @brief Field _tubeBloomPrePassLightBounces, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*,
           ::Array<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>*>
      ____tubeBloomPrePassLightBounces;

  /// @brief Field _environmentLayerMask, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____environmentLayerMask;

  /// @brief Field _environmentCollisionRepository, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentCollisionRepository* ____environmentCollisionRepository;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect, ____mainTubeBloomPrePassLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect, ____tubeBloomPrePassLightBounces) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect, ____environmentLayerMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect, ____environmentCollisionRepository) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect, ____transform) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*, "", "TubeBloomPrePassLightReflectionEffect");
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*, "", "TubeBloomPrePassLightReflectionEffect/TubeBloomPrePassLightWithHitPoint");
