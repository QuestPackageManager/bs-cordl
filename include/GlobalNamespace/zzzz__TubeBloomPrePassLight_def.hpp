#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeBloomPrePassLight)
namespace GlobalNamespace {
struct BloomPrePassLight_QuadData;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
namespace GlobalNamespace {
class ParametricBoxController;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLight);
// Dependencies BloomPrePassLight, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeBloomPrePassLight
class CORDL_TYPE TubeBloomPrePassLight : public ::GlobalNamespace::BloomPrePassLight {
public:
  // Declarations
  /// @brief Field _addWidthToLength, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__addWidthToLength, put = __cordl_internal_set__addWidthToLength)) bool _addWidthToLength;

  /// @brief Field _alphaToLengthBloomFogCurve, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__alphaToLengthBloomFogCurve, put = __cordl_internal_set__alphaToLengthBloomFogCurve)) ::UnityEngine::AnimationCurve* _alphaToLengthBloomFogCurve;

  /// @brief Field _alphaToLengthCurve, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__alphaToLengthCurve, put = __cordl_internal_set__alphaToLengthCurve)) ::UnityEngine::AnimationCurve* _alphaToLengthCurve;

  /// @brief Field _bakedGlowOnceParInitialized, offset 0xeb, size 0x1
  __declspec(property(get = __cordl_internal_get__bakedGlowOnceParInitialized, put = __cordl_internal_set__bakedGlowOnceParInitialized)) bool _bakedGlowOnceParInitialized;

  /// @brief Field _bakedGlowWidthScale, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__bakedGlowWidthScale, put = __cordl_internal_set__bakedGlowWidthScale)) float_t _bakedGlowWidthScale;

  /// @brief Field _bloomFogIntensityMultiplier, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomFogIntensityMultiplier, put = __cordl_internal_set__bloomFogIntensityMultiplier)) float_t _bloomFogIntensityMultiplier;

  /// @brief Field _boostToWhite, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__boostToWhite, put = __cordl_internal_set__boostToWhite)) float_t _boostToWhite;

  /// @brief Field _center, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__center, put = __cordl_internal_set__center)) float_t _center;

  /// @brief Field _collisionLength, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get__collisionLength, put = __cordl_internal_set__collisionLength)) float_t _collisionLength;

  /// @brief Field _color, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorAlphaMultiplier, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__colorAlphaMultiplier, put = __cordl_internal_set__colorAlphaMultiplier)) float_t _colorAlphaMultiplier;

  /// @brief Field _disableRenderersOnZeroAlpha, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__disableRenderersOnZeroAlpha, put = __cordl_internal_set__disableRenderersOnZeroAlpha)) bool _disableRenderersOnZeroAlpha;

  /// @brief Field _dynamic3SliceSprite, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__dynamic3SliceSprite, put = __cordl_internal_set__dynamic3SliceSprite)) ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>
      _dynamic3SliceSprite;

  /// @brief Field _enabledRenderers, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__enabledRenderers, put = __cordl_internal_set__enabledRenderers)) bool _enabledRenderers;

  /// @brief Field _endAlpha, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__endAlpha, put = __cordl_internal_set__endAlpha)) float_t _endAlpha;

  /// @brief Field _endWidth, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__endWidth, put = __cordl_internal_set__endWidth)) float_t _endWidth;

  /// @brief Field _fakeBloomIntensityMultiplier, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__fakeBloomIntensityMultiplier, put = __cordl_internal_set__fakeBloomIntensityMultiplier)) float_t _fakeBloomIntensityMultiplier;

  /// @brief Field _forceUseBakedGlow, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__forceUseBakedGlow, put = __cordl_internal_set__forceUseBakedGlow)) bool _forceUseBakedGlow;

  /// @brief Field _initialized, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _isDirty, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty, put = __cordl_internal_set__isDirty)) bool _isDirty;

  /// @brief Field _isDynamic3SliceSpriteValid, offset 0xed, size 0x1
  __declspec(property(get = __cordl_internal_get__isDynamic3SliceSpriteValid, put = __cordl_internal_set__isDynamic3SliceSpriteValid)) bool _isDynamic3SliceSpriteValid;

  /// @brief Field _isParametricBoxControllerValid, offset 0xec, size 0x1
  __declspec(property(get = __cordl_internal_get__isParametricBoxControllerValid, put = __cordl_internal_set__isParametricBoxControllerValid)) bool _isParametricBoxControllerValid;

  /// @brief Field _length, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) float_t _length;

  /// @brief Field _lightWidthMultiplier, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__lightWidthMultiplier, put = __cordl_internal_set__lightWidthMultiplier)) float_t _lightWidthMultiplier;

  /// @brief Field _limitAlpha, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get__limitAlpha, put = __cordl_internal_set__limitAlpha)) bool _limitAlpha;

  /// @brief Field _mainEffectPostProcessEnabled, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectPostProcessEnabled, put = __cordl_internal_set__mainEffectPostProcessEnabled)) ::UnityW<::GlobalNamespace::BoolSO>
      _mainEffectPostProcessEnabled;

  /// @brief Field _maxAlpha, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAlpha, put = __cordl_internal_set__maxAlpha)) float_t _maxAlpha;

  /// @brief Field _maxDistance, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__maxDistance, put = __cordl_internal_set__maxDistance)) float_t _maxDistance;

  /// @brief Field _maxWidthMultiplier, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxWidthMultiplier, put = __cordl_internal_set__maxWidthMultiplier)) float_t _maxWidthMultiplier;

  /// @brief Field _minAlpha, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _minDistance, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__minDistance, put = __cordl_internal_set__minDistance)) float_t _minDistance;

  /// @brief Field _minWidthMultiplier, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__minWidthMultiplier, put = __cordl_internal_set__minWidthMultiplier)) float_t _minWidthMultiplier;

  /// @brief Field _multiplyLengthByAlpha, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyLengthByAlpha, put = __cordl_internal_set__multiplyLengthByAlpha)) bool _multiplyLengthByAlpha;

  /// @brief Field _multiplyLengthByAlphaBloomFogMultiplier, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplyLengthByAlphaBloomFogMultiplier,
                      put = __cordl_internal_set__multiplyLengthByAlphaBloomFogMultiplier)) float_t _multiplyLengthByAlphaBloomFogMultiplier;

  /// @brief Field _multiplyLengthByAlphaMultiplier, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplyLengthByAlphaMultiplier, put = __cordl_internal_set__multiplyLengthByAlphaMultiplier)) float_t _multiplyLengthByAlphaMultiplier;

  /// @brief Field _overrideChildrenAlpha, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideChildrenAlpha, put = __cordl_internal_set__overrideChildrenAlpha)) bool _overrideChildrenAlpha;

  /// @brief Field _overrideChildrenLength, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideChildrenLength, put = __cordl_internal_set__overrideChildrenLength)) bool _overrideChildrenLength;

  /// @brief Field _overrideChildrenWidth, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideChildrenWidth, put = __cordl_internal_set__overrideChildrenWidth)) bool _overrideChildrenWidth;

  /// @brief Field _parametricBoxController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__parametricBoxController, put = __cordl_internal_set__parametricBoxController)) ::UnityW<::GlobalNamespace::ParametricBoxController>
      _parametricBoxController;

  /// @brief Field _parametricBoxControllerOnceParInitialized, offset 0xea, size 0x1
  __declspec(property(get = __cordl_internal_get__parametricBoxControllerOnceParInitialized,
                      put = __cordl_internal_set__parametricBoxControllerOnceParInitialized)) bool _parametricBoxControllerOnceParInitialized;

  /// @brief Field _startAlpha, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__startAlpha, put = __cordl_internal_set__startAlpha)) float_t _startAlpha;

  /// @brief Field _startWidth, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get__startWidth, put = __cordl_internal_set__startWidth)) float_t _startWidth;

  /// @brief Field _thickenCurve, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__thickenCurve, put = __cordl_internal_set__thickenCurve)) ::UnityEngine::AnimationCurve* _thickenCurve;

  /// @brief Field _thickenWithDistance, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get__thickenWithDistance, put = __cordl_internal_set__thickenWithDistance)) bool _thickenWithDistance;

  /// @brief Field _transform, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _updateAlways, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__updateAlways, put = __cordl_internal_set__updateAlways)) bool _updateAlways;

  /// @brief Field _useCollision, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__useCollision, put = __cordl_internal_set__useCollision)) bool _useCollision;

  /// @brief Field _width, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__width, put = __cordl_internal_set__width)) float_t _width;

  __declspec(property(get = get_bloomFogIntensityMultiplier, put = set_bloomFogIntensityMultiplier)) float_t bloomFogIntensityMultiplier;

  __declspec(property(get = get_calculatedCollisionLength)) float_t calculatedCollisionLength;

  __declspec(property(get = get_center)) float_t center;

  __declspec(property(get = get_collisionEndAlpha)) float_t collisionEndAlpha;

  __declspec(property(get = get_collisionLength, put = set_collisionLength)) float_t collisionLength;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_colorAlphaMultiplier)) float_t colorAlphaMultiplier;

  /// @brief Field didRefreshEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_didRefreshEvent, put = __cordl_internal_set_didRefreshEvent)) ::System::Action* didRefreshEvent;

  __declspec(property(get = get_enabledRenderers)) bool enabledRenderers;

  __declspec(property(get = get_length, put = set_length)) float_t length;

  __declspec(property(get = get_lightWidthMultiplier, put = set_lightWidthMultiplier)) float_t lightWidthMultiplier;

  __declspec(property(get = get_startAlpha, put = set_startAlpha)) float_t startAlpha;

  __declspec(property(get = get_useCollision, put = set_useCollision)) bool useCollision;

  __declspec(property(get = get_width, put = set_width)) float_t width;

  /// @brief Method Awake, addr 0x39dbab4, size 0x14, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClipPoints, addr 0x39dc83c, size 0x94, virtual false, abstract: false, final false
  static inline void ClipPoints(::ByRef<::UnityEngine::Vector4> fromPointClipPos, ::ByRef<::UnityEngine::Vector4> toPointClipPos, ::ByRef<::UnityEngine::Vector3> fromPointViewPos,
                                ::ByRef<::UnityEngine::Vector3> toPointViewPos, bool fromPointInside, float_t t);

  /// @brief Method DidRegisterLight, addr 0x39dbae8, size 0x1c, virtual true, abstract: false, final false
  inline void DidRegisterLight();

  /// @brief Method FillMeshData, addr 0x39dbf00, size 0x8a4, virtual true, abstract: false, final false
  inline void FillMeshData(::ByRef<int32_t> lightNum, ::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*> lightQuads,
                           ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth);

  /// @brief Method InitIfNeeded, addr 0x39db81c, size 0xc4, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  /// @brief Method MarkDirty, addr 0x39db984, size 0xc, virtual false, abstract: false, final false
  inline void MarkDirty();

  /// @brief Method NeedsRefresh, addr 0x39dbb04, size 0x68, virtual false, abstract: false, final false
  inline bool NeedsRefresh();

  static inline ::GlobalNamespace::TubeBloomPrePassLight* New_ctor();

  /// @brief Method OnDrawGizmos, addr 0x39dc8d0, size 0x15c, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  /// @brief Method OnEnable, addr 0x39dbac8, size 0x20, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x39dbb6c, size 0x394, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method ZeroQuad, addr 0x39dc7a4, size 0x98, virtual false, abstract: false, final false
  static inline void ZeroQuad(::ByRef<::GlobalNamespace::BloomPrePassLight_QuadData> quad);

  constexpr bool const& __cordl_internal_get__addWidthToLength() const;

  constexpr bool& __cordl_internal_get__addWidthToLength();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__alphaToLengthBloomFogCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__alphaToLengthBloomFogCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__alphaToLengthCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__alphaToLengthCurve();

  constexpr bool const& __cordl_internal_get__bakedGlowOnceParInitialized() const;

  constexpr bool& __cordl_internal_get__bakedGlowOnceParInitialized();

  constexpr float_t const& __cordl_internal_get__bakedGlowWidthScale() const;

  constexpr float_t& __cordl_internal_get__bakedGlowWidthScale();

  constexpr float_t const& __cordl_internal_get__bloomFogIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__bloomFogIntensityMultiplier();

  constexpr float_t const& __cordl_internal_get__boostToWhite() const;

  constexpr float_t& __cordl_internal_get__boostToWhite();

  constexpr float_t const& __cordl_internal_get__center() const;

  constexpr float_t& __cordl_internal_get__center();

  constexpr float_t const& __cordl_internal_get__collisionLength() const;

  constexpr float_t& __cordl_internal_get__collisionLength();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__colorAlphaMultiplier() const;

  constexpr float_t& __cordl_internal_get__colorAlphaMultiplier();

  constexpr bool const& __cordl_internal_get__disableRenderersOnZeroAlpha() const;

  constexpr bool& __cordl_internal_get__disableRenderersOnZeroAlpha();

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& __cordl_internal_get__dynamic3SliceSprite() const;

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& __cordl_internal_get__dynamic3SliceSprite();

  constexpr bool const& __cordl_internal_get__enabledRenderers() const;

  constexpr bool& __cordl_internal_get__enabledRenderers();

  constexpr float_t const& __cordl_internal_get__endAlpha() const;

  constexpr float_t& __cordl_internal_get__endAlpha();

  constexpr float_t const& __cordl_internal_get__endWidth() const;

  constexpr float_t& __cordl_internal_get__endWidth();

  constexpr float_t const& __cordl_internal_get__fakeBloomIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__fakeBloomIntensityMultiplier();

  constexpr bool const& __cordl_internal_get__forceUseBakedGlow() const;

  constexpr bool& __cordl_internal_get__forceUseBakedGlow();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr bool const& __cordl_internal_get__isDirty() const;

  constexpr bool& __cordl_internal_get__isDirty();

  constexpr bool const& __cordl_internal_get__isDynamic3SliceSpriteValid() const;

  constexpr bool& __cordl_internal_get__isDynamic3SliceSpriteValid();

  constexpr bool const& __cordl_internal_get__isParametricBoxControllerValid() const;

  constexpr bool& __cordl_internal_get__isParametricBoxControllerValid();

  constexpr float_t const& __cordl_internal_get__length() const;

  constexpr float_t& __cordl_internal_get__length();

  constexpr float_t const& __cordl_internal_get__lightWidthMultiplier() const;

  constexpr float_t& __cordl_internal_get__lightWidthMultiplier();

  constexpr bool const& __cordl_internal_get__limitAlpha() const;

  constexpr bool& __cordl_internal_get__limitAlpha();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__mainEffectPostProcessEnabled() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__mainEffectPostProcessEnabled();

  constexpr float_t const& __cordl_internal_get__maxAlpha() const;

  constexpr float_t& __cordl_internal_get__maxAlpha();

  constexpr float_t const& __cordl_internal_get__maxDistance() const;

  constexpr float_t& __cordl_internal_get__maxDistance();

  constexpr float_t const& __cordl_internal_get__maxWidthMultiplier() const;

  constexpr float_t& __cordl_internal_get__maxWidthMultiplier();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr float_t const& __cordl_internal_get__minDistance() const;

  constexpr float_t& __cordl_internal_get__minDistance();

  constexpr float_t const& __cordl_internal_get__minWidthMultiplier() const;

  constexpr float_t& __cordl_internal_get__minWidthMultiplier();

  constexpr bool const& __cordl_internal_get__multiplyLengthByAlpha() const;

  constexpr bool& __cordl_internal_get__multiplyLengthByAlpha();

  constexpr float_t const& __cordl_internal_get__multiplyLengthByAlphaBloomFogMultiplier() const;

  constexpr float_t& __cordl_internal_get__multiplyLengthByAlphaBloomFogMultiplier();

  constexpr float_t const& __cordl_internal_get__multiplyLengthByAlphaMultiplier() const;

  constexpr float_t& __cordl_internal_get__multiplyLengthByAlphaMultiplier();

  constexpr bool const& __cordl_internal_get__overrideChildrenAlpha() const;

  constexpr bool& __cordl_internal_get__overrideChildrenAlpha();

  constexpr bool const& __cordl_internal_get__overrideChildrenLength() const;

  constexpr bool& __cordl_internal_get__overrideChildrenLength();

  constexpr bool const& __cordl_internal_get__overrideChildrenWidth() const;

  constexpr bool& __cordl_internal_get__overrideChildrenWidth();

  constexpr ::UnityW<::GlobalNamespace::ParametricBoxController> const& __cordl_internal_get__parametricBoxController() const;

  constexpr ::UnityW<::GlobalNamespace::ParametricBoxController>& __cordl_internal_get__parametricBoxController();

  constexpr bool const& __cordl_internal_get__parametricBoxControllerOnceParInitialized() const;

  constexpr bool& __cordl_internal_get__parametricBoxControllerOnceParInitialized();

  constexpr float_t const& __cordl_internal_get__startAlpha() const;

  constexpr float_t& __cordl_internal_get__startAlpha();

  constexpr float_t const& __cordl_internal_get__startWidth() const;

  constexpr float_t& __cordl_internal_get__startWidth();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__thickenCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__thickenCurve();

  constexpr bool const& __cordl_internal_get__thickenWithDistance() const;

  constexpr bool& __cordl_internal_get__thickenWithDistance();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr bool const& __cordl_internal_get__updateAlways() const;

  constexpr bool& __cordl_internal_get__updateAlways();

  constexpr bool const& __cordl_internal_get__useCollision() const;

  constexpr bool& __cordl_internal_get__useCollision();

  constexpr float_t const& __cordl_internal_get__width() const;

  constexpr float_t& __cordl_internal_get__width();

  constexpr ::System::Action* const& __cordl_internal_get_didRefreshEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didRefreshEvent();

  constexpr void __cordl_internal_set__addWidthToLength(bool value);

  constexpr void __cordl_internal_set__alphaToLengthBloomFogCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__alphaToLengthCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__bakedGlowOnceParInitialized(bool value);

  constexpr void __cordl_internal_set__bakedGlowWidthScale(float_t value);

  constexpr void __cordl_internal_set__bloomFogIntensityMultiplier(float_t value);

  constexpr void __cordl_internal_set__boostToWhite(float_t value);

  constexpr void __cordl_internal_set__center(float_t value);

  constexpr void __cordl_internal_set__collisionLength(float_t value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorAlphaMultiplier(float_t value);

  constexpr void __cordl_internal_set__disableRenderersOnZeroAlpha(bool value);

  constexpr void __cordl_internal_set__dynamic3SliceSprite(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value);

  constexpr void __cordl_internal_set__enabledRenderers(bool value);

  constexpr void __cordl_internal_set__endAlpha(float_t value);

  constexpr void __cordl_internal_set__endWidth(float_t value);

  constexpr void __cordl_internal_set__fakeBloomIntensityMultiplier(float_t value);

  constexpr void __cordl_internal_set__forceUseBakedGlow(bool value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__isDirty(bool value);

  constexpr void __cordl_internal_set__isDynamic3SliceSpriteValid(bool value);

  constexpr void __cordl_internal_set__isParametricBoxControllerValid(bool value);

  constexpr void __cordl_internal_set__length(float_t value);

  constexpr void __cordl_internal_set__lightWidthMultiplier(float_t value);

  constexpr void __cordl_internal_set__limitAlpha(bool value);

  constexpr void __cordl_internal_set__mainEffectPostProcessEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  constexpr void __cordl_internal_set__maxAlpha(float_t value);

  constexpr void __cordl_internal_set__maxDistance(float_t value);

  constexpr void __cordl_internal_set__maxWidthMultiplier(float_t value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__minDistance(float_t value);

  constexpr void __cordl_internal_set__minWidthMultiplier(float_t value);

  constexpr void __cordl_internal_set__multiplyLengthByAlpha(bool value);

  constexpr void __cordl_internal_set__multiplyLengthByAlphaBloomFogMultiplier(float_t value);

  constexpr void __cordl_internal_set__multiplyLengthByAlphaMultiplier(float_t value);

  constexpr void __cordl_internal_set__overrideChildrenAlpha(bool value);

  constexpr void __cordl_internal_set__overrideChildrenLength(bool value);

  constexpr void __cordl_internal_set__overrideChildrenWidth(bool value);

  constexpr void __cordl_internal_set__parametricBoxController(::UnityW<::GlobalNamespace::ParametricBoxController> value);

  constexpr void __cordl_internal_set__parametricBoxControllerOnceParInitialized(bool value);

  constexpr void __cordl_internal_set__startAlpha(float_t value);

  constexpr void __cordl_internal_set__startWidth(float_t value);

  constexpr void __cordl_internal_set__thickenCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__thickenWithDistance(bool value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__updateAlways(bool value);

  constexpr void __cordl_internal_set__useCollision(bool value);

  constexpr void __cordl_internal_set__width(float_t value);

  constexpr void __cordl_internal_set_didRefreshEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x39dca2c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didRefreshEvent, addr 0x39db674, size 0x9c, virtual false, abstract: false, final false
  inline void add_didRefreshEvent(::System::Action* value);

  /// @brief Method get_bloomFogIntensityMultiplier, addr 0x39db9e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bloomFogIntensityMultiplier();

  /// @brief Method get_calculatedCollisionLength, addr 0x39db960, size 0x24, virtual false, abstract: false, final false
  inline float_t get_calculatedCollisionLength();

  /// @brief Method get_center, addr 0x39db7bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_center();

  /// @brief Method get_collisionEndAlpha, addr 0x39db8f8, size 0x68, virtual false, abstract: false, final false
  inline float_t get_collisionEndAlpha();

  /// @brief Method get_collisionLength, addr 0x39db8e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_collisionLength();

  /// @brief Method get_color, addr 0x39dbaa8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_colorAlphaMultiplier, addr 0x39db7b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorAlphaMultiplier();

  /// @brief Method get_enabledRenderers, addr 0x39db7ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabledRenderers();

  /// @brief Method get_length, addr 0x39db990, size 0x8, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_lightWidthMultiplier, addr 0x39db9d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lightWidthMultiplier();

  /// @brief Method get_startAlpha, addr 0x39db9c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startAlpha();

  /// @brief Method get_useCollision, addr 0x39db7c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_useCollision();

  /// @brief Method get_width, addr 0x39db9a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Method remove_didRefreshEvent, addr 0x39db710, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didRefreshEvent(::System::Action* value);

  /// @brief Method set_bloomFogIntensityMultiplier, addr 0x39db9f0, size 0x8, virtual false, abstract: false, final false
  inline void set_bloomFogIntensityMultiplier(float_t value);

  /// @brief Method set_collisionLength, addr 0x39db8e8, size 0x10, virtual false, abstract: false, final false
  inline void set_collisionLength(float_t value);

  /// @brief Method set_color, addr 0x39db9f8, size 0xb0, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_length, addr 0x39db998, size 0x10, virtual false, abstract: false, final false
  inline void set_length(float_t value);

  /// @brief Method set_lightWidthMultiplier, addr 0x39db9e0, size 0x8, virtual false, abstract: false, final false
  inline void set_lightWidthMultiplier(float_t value);

  /// @brief Method set_startAlpha, addr 0x39db9c8, size 0x10, virtual false, abstract: false, final false
  inline void set_startAlpha(float_t value);

  /// @brief Method set_useCollision, addr 0x39db7cc, size 0x50, virtual false, abstract: false, final false
  inline void set_useCollision(bool value);

  /// @brief Method set_width, addr 0x39db9b0, size 0x10, virtual false, abstract: false, final false
  inline void set_width(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLight();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLight(TubeBloomPrePassLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLight(TubeBloomPrePassLight const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16280 };

  /// @brief Field _mainEffectPostProcessEnabled, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____mainEffectPostProcessEnabled;

  /// @brief Field _width, offset: 0x40, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _overrideChildrenLength, offset: 0x44, size: 0x1, def value: None
  bool ____overrideChildrenLength;

  /// @brief Field _length, offset: 0x48, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _center, offset: 0x4c, size: 0x4, def value: None
  float_t ____center;

  /// @brief Field _color, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorAlphaMultiplier, offset: 0x60, size: 0x4, def value: None
  float_t ____colorAlphaMultiplier;

  /// @brief Field _bloomFogIntensityMultiplier, offset: 0x64, size: 0x4, def value: None
  float_t ____bloomFogIntensityMultiplier;

  /// @brief Field _fakeBloomIntensityMultiplier, offset: 0x68, size: 0x4, def value: None
  float_t ____fakeBloomIntensityMultiplier;

  /// @brief Field _boostToWhite, offset: 0x6c, size: 0x4, def value: None
  float_t ____boostToWhite;

  /// @brief Field _lightWidthMultiplier, offset: 0x70, size: 0x4, def value: None
  float_t ____lightWidthMultiplier;

  /// @brief Field _addWidthToLength, offset: 0x74, size: 0x1, def value: None
  bool ____addWidthToLength;

  /// @brief Field _thickenWithDistance, offset: 0x75, size: 0x1, def value: None
  bool ____thickenWithDistance;

  /// @brief Field _thickenCurve, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____thickenCurve;

  /// @brief Field _minDistance, offset: 0x80, size: 0x4, def value: None
  float_t ____minDistance;

  /// @brief Field _maxDistance, offset: 0x84, size: 0x4, def value: None
  float_t ____maxDistance;

  /// @brief Field _minWidthMultiplier, offset: 0x88, size: 0x4, def value: None
  float_t ____minWidthMultiplier;

  /// @brief Field _maxWidthMultiplier, offset: 0x8c, size: 0x4, def value: None
  float_t ____maxWidthMultiplier;

  /// @brief Field _disableRenderersOnZeroAlpha, offset: 0x90, size: 0x1, def value: None
  bool ____disableRenderersOnZeroAlpha;

  /// @brief Field _bakedGlowWidthScale, offset: 0x94, size: 0x4, def value: None
  float_t ____bakedGlowWidthScale;

  /// @brief Field _forceUseBakedGlow, offset: 0x98, size: 0x1, def value: None
  bool ____forceUseBakedGlow;

  /// @brief Field _multiplyLengthByAlpha, offset: 0x99, size: 0x1, def value: None
  bool ____multiplyLengthByAlpha;

  /// @brief Field _alphaToLengthCurve, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____alphaToLengthCurve;

  /// @brief Field _alphaToLengthBloomFogCurve, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____alphaToLengthBloomFogCurve;

  /// @brief Field _updateAlways, offset: 0xb0, size: 0x1, def value: None
  bool ____updateAlways;

  /// @brief Field _limitAlpha, offset: 0xb1, size: 0x1, def value: None
  bool ____limitAlpha;

  /// @brief Field _minAlpha, offset: 0xb4, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _maxAlpha, offset: 0xb8, size: 0x4, def value: None
  float_t ____maxAlpha;

  /// @brief Field _overrideChildrenAlpha, offset: 0xbc, size: 0x1, def value: None
  bool ____overrideChildrenAlpha;

  /// @brief Field _startAlpha, offset: 0xc0, size: 0x4, def value: None
  float_t ____startAlpha;

  /// @brief Field _endAlpha, offset: 0xc4, size: 0x4, def value: None
  float_t ____endAlpha;

  /// @brief Field _overrideChildrenWidth, offset: 0xc8, size: 0x1, def value: None
  bool ____overrideChildrenWidth;

  /// @brief Field _startWidth, offset: 0xcc, size: 0x4, def value: None
  float_t ____startWidth;

  /// @brief Field _endWidth, offset: 0xd0, size: 0x4, def value: None
  float_t ____endWidth;

  /// @brief Field _parametricBoxController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParametricBoxController> ____parametricBoxController;

  /// @brief Field _dynamic3SliceSprite, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> ____dynamic3SliceSprite;

  /// @brief Field _initialized, offset: 0xe8, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _enabledRenderers, offset: 0xe9, size: 0x1, def value: None
  bool ____enabledRenderers;

  /// @brief Field _parametricBoxControllerOnceParInitialized, offset: 0xea, size: 0x1, def value: None
  bool ____parametricBoxControllerOnceParInitialized;

  /// @brief Field _bakedGlowOnceParInitialized, offset: 0xeb, size: 0x1, def value: None
  bool ____bakedGlowOnceParInitialized;

  /// @brief Field _isParametricBoxControllerValid, offset: 0xec, size: 0x1, def value: None
  bool ____isParametricBoxControllerValid;

  /// @brief Field _isDynamic3SliceSpriteValid, offset: 0xed, size: 0x1, def value: None
  bool ____isDynamic3SliceSpriteValid;

  /// @brief Field didRefreshEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action* ___didRefreshEvent;

  /// @brief Field _useCollision, offset: 0xf8, size: 0x1, def value: None
  bool ____useCollision;

  /// @brief Field _collisionLength, offset: 0xfc, size: 0x4, def value: None
  float_t ____collisionLength;

  /// @brief Field _multiplyLengthByAlphaBloomFogMultiplier, offset: 0x100, size: 0x4, def value: None
  float_t ____multiplyLengthByAlphaBloomFogMultiplier;

  /// @brief Field _multiplyLengthByAlphaMultiplier, offset: 0x104, size: 0x4, def value: None
  float_t ____multiplyLengthByAlphaMultiplier;

  /// @brief Field _isDirty, offset: 0x108, size: 0x1, def value: None
  bool ____isDirty;

  /// @brief Field _transform, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____mainEffectPostProcessEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____width) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____overrideChildrenLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____length) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____center) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____color) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____colorAlphaMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____bloomFogIntensityMultiplier) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____fakeBloomIntensityMultiplier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____boostToWhite) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____lightWidthMultiplier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____addWidthToLength) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____thickenWithDistance) == 0x75, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____thickenCurve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____minDistance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____maxDistance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____minWidthMultiplier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____maxWidthMultiplier) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____disableRenderersOnZeroAlpha) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____bakedGlowWidthScale) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____forceUseBakedGlow) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____multiplyLengthByAlpha) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____alphaToLengthCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____alphaToLengthBloomFogCurve) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____updateAlways) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____limitAlpha) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____minAlpha) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____maxAlpha) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____overrideChildrenAlpha) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____startAlpha) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____endAlpha) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____overrideChildrenWidth) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____startWidth) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____endWidth) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____parametricBoxController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____dynamic3SliceSprite) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____initialized) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____enabledRenderers) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____parametricBoxControllerOnceParInitialized) == 0xea, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____bakedGlowOnceParInitialized) == 0xeb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____isParametricBoxControllerValid) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____isDynamic3SliceSpriteValid) == 0xed, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ___didRefreshEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____useCollision) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____collisionLength) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____multiplyLengthByAlphaBloomFogMultiplier) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____multiplyLengthByAlphaMultiplier) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____isDirty) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____transform) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLight, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLight*, "", "TubeBloomPrePassLight");
