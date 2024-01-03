#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeBloomPrePassLight)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
namespace GlobalNamespace {
class ParametricBoxController;
}
namespace GlobalNamespace {
struct __BloomPrePassLight__QuadData;
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
// Type: ::TubeBloomPrePassLight
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14474)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14492))
// CS Name: ::TubeBloomPrePassLight*
class CORDL_TYPE TubeBloomPrePassLight : public ::GlobalNamespace::BloomPrePassLight {
public:
  // Declarations
  /// @brief Field _mainEffectPostProcessEnabled, offset 0x30, size 0x8
  __declspec(property(get = __get__mainEffectPostProcessEnabled, put = __set__mainEffectPostProcessEnabled))::GlobalNamespace::BoolSO* _mainEffectPostProcessEnabled;

  /// @brief Field _width, offset 0x38, size 0x4
  __declspec(property(get = __get__width, put = __set__width)) float_t _width;

  /// @brief Field _overrideChildrenLength, offset 0x3c, size 0x1
  __declspec(property(get = __get__overrideChildrenLength, put = __set__overrideChildrenLength)) bool _overrideChildrenLength;

  /// @brief Field _length, offset 0x40, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) float_t _length;

  /// @brief Field _center, offset 0x44, size 0x4
  __declspec(property(get = __get__center, put = __set__center)) float_t _center;

  /// @brief Field _color, offset 0x48, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _colorAlphaMultiplier, offset 0x58, size 0x4
  __declspec(property(get = __get__colorAlphaMultiplier, put = __set__colorAlphaMultiplier)) float_t _colorAlphaMultiplier;

  /// @brief Field _bloomFogIntensityMultiplier, offset 0x5c, size 0x4
  __declspec(property(get = __get__bloomFogIntensityMultiplier, put = __set__bloomFogIntensityMultiplier)) float_t _bloomFogIntensityMultiplier;

  /// @brief Field _fakeBloomIntensityMultiplier, offset 0x60, size 0x4
  __declspec(property(get = __get__fakeBloomIntensityMultiplier, put = __set__fakeBloomIntensityMultiplier)) float_t _fakeBloomIntensityMultiplier;

  /// @brief Field _boostToWhite, offset 0x64, size 0x4
  __declspec(property(get = __get__boostToWhite, put = __set__boostToWhite)) float_t _boostToWhite;

  /// @brief Field _lightWidthMultiplier, offset 0x68, size 0x4
  __declspec(property(get = __get__lightWidthMultiplier, put = __set__lightWidthMultiplier)) float_t _lightWidthMultiplier;

  /// @brief Field _addWidthToLength, offset 0x6c, size 0x1
  __declspec(property(get = __get__addWidthToLength, put = __set__addWidthToLength)) bool _addWidthToLength;

  /// @brief Field _thickenWithDistance, offset 0x6d, size 0x1
  __declspec(property(get = __get__thickenWithDistance, put = __set__thickenWithDistance)) bool _thickenWithDistance;

  /// @brief Field _thickenCurve, offset 0x70, size 0x8
  __declspec(property(get = __get__thickenCurve, put = __set__thickenCurve))::UnityEngine::AnimationCurve* _thickenCurve;

  /// @brief Field _minDistance, offset 0x78, size 0x4
  __declspec(property(get = __get__minDistance, put = __set__minDistance)) float_t _minDistance;

  /// @brief Field _maxDistance, offset 0x7c, size 0x4
  __declspec(property(get = __get__maxDistance, put = __set__maxDistance)) float_t _maxDistance;

  /// @brief Field _minWidthMultiplier, offset 0x80, size 0x4
  __declspec(property(get = __get__minWidthMultiplier, put = __set__minWidthMultiplier)) float_t _minWidthMultiplier;

  /// @brief Field _maxWidthMultiplier, offset 0x84, size 0x4
  __declspec(property(get = __get__maxWidthMultiplier, put = __set__maxWidthMultiplier)) float_t _maxWidthMultiplier;

  /// @brief Field _disableRenderersOnZeroAlpha, offset 0x88, size 0x1
  __declspec(property(get = __get__disableRenderersOnZeroAlpha, put = __set__disableRenderersOnZeroAlpha)) bool _disableRenderersOnZeroAlpha;

  /// @brief Field _bakedGlowWidthScale, offset 0x8c, size 0x4
  __declspec(property(get = __get__bakedGlowWidthScale, put = __set__bakedGlowWidthScale)) float_t _bakedGlowWidthScale;

  /// @brief Field _forceUseBakedGlow, offset 0x90, size 0x1
  __declspec(property(get = __get__forceUseBakedGlow, put = __set__forceUseBakedGlow)) bool _forceUseBakedGlow;

  /// @brief Field _updateAlways, offset 0x91, size 0x1
  __declspec(property(get = __get__updateAlways, put = __set__updateAlways)) bool _updateAlways;

  /// @brief Field _limitAlpha, offset 0x92, size 0x1
  __declspec(property(get = __get__limitAlpha, put = __set__limitAlpha)) bool _limitAlpha;

  /// @brief Field _minAlpha, offset 0x94, size 0x4
  __declspec(property(get = __get__minAlpha, put = __set__minAlpha)) float_t _minAlpha;

  /// @brief Field _maxAlpha, offset 0x98, size 0x4
  __declspec(property(get = __get__maxAlpha, put = __set__maxAlpha)) float_t _maxAlpha;

  /// @brief Field _overrideChildrenAlpha, offset 0x9c, size 0x1
  __declspec(property(get = __get__overrideChildrenAlpha, put = __set__overrideChildrenAlpha)) bool _overrideChildrenAlpha;

  /// @brief Field _startAlpha, offset 0xa0, size 0x4
  __declspec(property(get = __get__startAlpha, put = __set__startAlpha)) float_t _startAlpha;

  /// @brief Field _endAlpha, offset 0xa4, size 0x4
  __declspec(property(get = __get__endAlpha, put = __set__endAlpha)) float_t _endAlpha;

  /// @brief Field _overrideChildrenWidth, offset 0xa8, size 0x1
  __declspec(property(get = __get__overrideChildrenWidth, put = __set__overrideChildrenWidth)) bool _overrideChildrenWidth;

  /// @brief Field _startWidth, offset 0xac, size 0x4
  __declspec(property(get = __get__startWidth, put = __set__startWidth)) float_t _startWidth;

  /// @brief Field _endWidth, offset 0xb0, size 0x4
  __declspec(property(get = __get__endWidth, put = __set__endWidth)) float_t _endWidth;

  /// @brief Field _parametricBoxController, offset 0xb8, size 0x8
  __declspec(property(get = __get__parametricBoxController, put = __set__parametricBoxController))::GlobalNamespace::ParametricBoxController* _parametricBoxController;

  /// @brief Field _dynamic3SliceSprite, offset 0xc0, size 0x8
  __declspec(property(get = __get__dynamic3SliceSprite, put = __set__dynamic3SliceSprite))::GlobalNamespace::Parametric3SliceSpriteController* _dynamic3SliceSprite;

  /// @brief Field didRefreshEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_didRefreshEvent, put = __set_didRefreshEvent))::System::Action* didRefreshEvent;

  /// @brief Field _isDirty, offset 0xd0, size 0x1
  __declspec(property(get = __get__isDirty, put = __set__isDirty)) bool _isDirty;

  /// @brief Field _transform, offset 0xd8, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  __declspec(property(get = get_colorAlphaMultiplier)) float_t colorAlphaMultiplier;

  __declspec(property(get = get_center)) float_t center;

  __declspec(property(get = get_isDirty)) bool isDirty;

  __declspec(property(get = get_length, put = set_length)) float_t length;

  __declspec(property(get = get_width, put = set_width)) float_t width;

  __declspec(property(get = get_lightWidthMultiplier, put = set_lightWidthMultiplier)) float_t lightWidthMultiplier;

  __declspec(property(get = get_bloomFogIntensityMultiplier, put = set_bloomFogIntensityMultiplier)) float_t bloomFogIntensityMultiplier;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::BoolSO*& __get__mainEffectPostProcessEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__mainEffectPostProcessEnabled() const;

  constexpr void __set__mainEffectPostProcessEnabled(::GlobalNamespace::BoolSO* value);

  constexpr float_t& __get__width();

  constexpr float_t const& __get__width() const;

  constexpr void __set__width(float_t value);

  constexpr bool& __get__overrideChildrenLength();

  constexpr bool const& __get__overrideChildrenLength() const;

  constexpr void __set__overrideChildrenLength(bool value);

  constexpr float_t& __get__length();

  constexpr float_t const& __get__length() const;

  constexpr void __set__length(float_t value);

  constexpr float_t& __get__center();

  constexpr float_t const& __get__center() const;

  constexpr void __set__center(float_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr float_t& __get__colorAlphaMultiplier();

  constexpr float_t const& __get__colorAlphaMultiplier() const;

  constexpr void __set__colorAlphaMultiplier(float_t value);

  constexpr float_t& __get__bloomFogIntensityMultiplier();

  constexpr float_t const& __get__bloomFogIntensityMultiplier() const;

  constexpr void __set__bloomFogIntensityMultiplier(float_t value);

  constexpr float_t& __get__fakeBloomIntensityMultiplier();

  constexpr float_t const& __get__fakeBloomIntensityMultiplier() const;

  constexpr void __set__fakeBloomIntensityMultiplier(float_t value);

  constexpr float_t& __get__boostToWhite();

  constexpr float_t const& __get__boostToWhite() const;

  constexpr void __set__boostToWhite(float_t value);

  constexpr float_t& __get__lightWidthMultiplier();

  constexpr float_t const& __get__lightWidthMultiplier() const;

  constexpr void __set__lightWidthMultiplier(float_t value);

  constexpr bool& __get__addWidthToLength();

  constexpr bool const& __get__addWidthToLength() const;

  constexpr void __set__addWidthToLength(bool value);

  constexpr bool& __get__thickenWithDistance();

  constexpr bool const& __get__thickenWithDistance() const;

  constexpr void __set__thickenWithDistance(bool value);

  constexpr ::UnityEngine::AnimationCurve*& __get__thickenCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__thickenCurve() const;

  constexpr void __set__thickenCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get__minDistance();

  constexpr float_t const& __get__minDistance() const;

  constexpr void __set__minDistance(float_t value);

  constexpr float_t& __get__maxDistance();

  constexpr float_t const& __get__maxDistance() const;

  constexpr void __set__maxDistance(float_t value);

  constexpr float_t& __get__minWidthMultiplier();

  constexpr float_t const& __get__minWidthMultiplier() const;

  constexpr void __set__minWidthMultiplier(float_t value);

  constexpr float_t& __get__maxWidthMultiplier();

  constexpr float_t const& __get__maxWidthMultiplier() const;

  constexpr void __set__maxWidthMultiplier(float_t value);

  constexpr bool& __get__disableRenderersOnZeroAlpha();

  constexpr bool const& __get__disableRenderersOnZeroAlpha() const;

  constexpr void __set__disableRenderersOnZeroAlpha(bool value);

  constexpr float_t& __get__bakedGlowWidthScale();

  constexpr float_t const& __get__bakedGlowWidthScale() const;

  constexpr void __set__bakedGlowWidthScale(float_t value);

  constexpr bool& __get__forceUseBakedGlow();

  constexpr bool const& __get__forceUseBakedGlow() const;

  constexpr void __set__forceUseBakedGlow(bool value);

  constexpr bool& __get__updateAlways();

  constexpr bool const& __get__updateAlways() const;

  constexpr void __set__updateAlways(bool value);

  constexpr bool& __get__limitAlpha();

  constexpr bool const& __get__limitAlpha() const;

  constexpr void __set__limitAlpha(bool value);

  constexpr float_t& __get__minAlpha();

  constexpr float_t const& __get__minAlpha() const;

  constexpr void __set__minAlpha(float_t value);

  constexpr float_t& __get__maxAlpha();

  constexpr float_t const& __get__maxAlpha() const;

  constexpr void __set__maxAlpha(float_t value);

  constexpr bool& __get__overrideChildrenAlpha();

  constexpr bool const& __get__overrideChildrenAlpha() const;

  constexpr void __set__overrideChildrenAlpha(bool value);

  constexpr float_t& __get__startAlpha();

  constexpr float_t const& __get__startAlpha() const;

  constexpr void __set__startAlpha(float_t value);

  constexpr float_t& __get__endAlpha();

  constexpr float_t const& __get__endAlpha() const;

  constexpr void __set__endAlpha(float_t value);

  constexpr bool& __get__overrideChildrenWidth();

  constexpr bool const& __get__overrideChildrenWidth() const;

  constexpr void __set__overrideChildrenWidth(bool value);

  constexpr float_t& __get__startWidth();

  constexpr float_t const& __get__startWidth() const;

  constexpr void __set__startWidth(float_t value);

  constexpr float_t& __get__endWidth();

  constexpr float_t const& __get__endWidth() const;

  constexpr void __set__endWidth(float_t value);

  constexpr ::GlobalNamespace::ParametricBoxController*& __get__parametricBoxController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxController*> const& __get__parametricBoxController() const;

  constexpr void __set__parametricBoxController(::GlobalNamespace::ParametricBoxController* value);

  constexpr ::GlobalNamespace::Parametric3SliceSpriteController*& __get__dynamic3SliceSprite();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Parametric3SliceSpriteController*> const& __get__dynamic3SliceSprite() const;

  constexpr void __set__dynamic3SliceSprite(::GlobalNamespace::Parametric3SliceSpriteController* value);

  constexpr ::System::Action*& __get_didRefreshEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didRefreshEvent() const;

  constexpr void __set_didRefreshEvent(::System::Action* value);

  constexpr bool& __get__isDirty();

  constexpr bool const& __get__isDirty() const;

  constexpr void __set__isDirty(bool value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method add_didRefreshEvent, addr 0x2109950, size 0x9c, virtual false, abstract: false, final false
  inline void add_didRefreshEvent(::System::Action* value);

  /// @brief Method remove_didRefreshEvent, addr 0x21099ec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didRefreshEvent(::System::Action* value);

  /// @brief Method get_colorAlphaMultiplier, addr 0x2109a88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorAlphaMultiplier();

  /// @brief Method get_center, addr 0x2109a90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_center();

  /// @brief Method get_isDirty, addr 0x2109a98, size 0x20, virtual true, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Method MarkDirty, addr 0x2109ab8, size 0xc, virtual false, abstract: false, final false
  inline void MarkDirty();

  /// @brief Method get_length, addr 0x2109ac4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method set_length, addr 0x2109acc, size 0x10, virtual false, abstract: false, final false
  inline void set_length(float_t value);

  /// @brief Method get_width, addr 0x2109adc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Method set_width, addr 0x2109ae4, size 0x10, virtual false, abstract: false, final false
  inline void set_width(float_t value);

  /// @brief Method get_lightWidthMultiplier, addr 0x2109af4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lightWidthMultiplier();

  /// @brief Method set_lightWidthMultiplier, addr 0x2109afc, size 0x8, virtual false, abstract: false, final false
  inline void set_lightWidthMultiplier(float_t value);

  /// @brief Method get_bloomFogIntensityMultiplier, addr 0x2109b04, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bloomFogIntensityMultiplier();

  /// @brief Method set_bloomFogIntensityMultiplier, addr 0x2109b0c, size 0x8, virtual false, abstract: false, final false
  inline void set_bloomFogIntensityMultiplier(float_t value);

  /// @brief Method set_color, addr 0x2109b14, size 0x118, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_color, addr 0x2109c2c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method OnEnable, addr 0x2109c38, size 0x20, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method DidRegisterLight, addr 0x2109c58, size 0x1c, virtual true, abstract: false, final false
  inline void DidRegisterLight();

  /// @brief Method Refresh, addr 0x2109c74, size 0x3f8, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method FillMeshData, addr 0x210a06c, size 0x99c, virtual true, abstract: false, final false
  inline void FillMeshData(ByRef<int32_t> lightNum, ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> lightQuads,
                           ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth);

  /// @brief Method ClipPoints, addr 0x210aaa0, size 0x94, virtual false, abstract: false, final false
  static inline void ClipPoints(ByRef<::UnityEngine::Vector4> fromPointClipPos, ByRef<::UnityEngine::Vector4> toPointClipPos, ByRef<::UnityEngine::Vector3> fromPointViewPos,
                                ByRef<::UnityEngine::Vector3> toPointViewPos, bool fromPointInside, float_t t);

  /// @brief Method ZeroQuad, addr 0x210aa08, size 0x98, virtual false, abstract: false, final false
  static inline void ZeroQuad(ByRef<::GlobalNamespace::__BloomPrePassLight__QuadData> quad);

  /// @brief Method OnDrawGizmos, addr 0x210ab34, size 0x13c, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  static inline ::GlobalNamespace::TubeBloomPrePassLight* New_ctor();

  /// @brief Method .ctor, addr 0x210ac70, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLight(TubeBloomPrePassLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLight(TubeBloomPrePassLight const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLight();

public:
  /// @brief Field _mainEffectPostProcessEnabled, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____mainEffectPostProcessEnabled;

  /// @brief Field _width, offset: 0x38, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _overrideChildrenLength, offset: 0x3c, size: 0x1, def value: None
  bool ____overrideChildrenLength;

  /// @brief Field _length, offset: 0x40, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _center, offset: 0x44, size: 0x4, def value: None
  float_t ____center;

  /// @brief Field _color, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _colorAlphaMultiplier, offset: 0x58, size: 0x4, def value: None
  float_t ____colorAlphaMultiplier;

  /// @brief Field _bloomFogIntensityMultiplier, offset: 0x5c, size: 0x4, def value: None
  float_t ____bloomFogIntensityMultiplier;

  /// @brief Field _fakeBloomIntensityMultiplier, offset: 0x60, size: 0x4, def value: None
  float_t ____fakeBloomIntensityMultiplier;

  /// @brief Field _boostToWhite, offset: 0x64, size: 0x4, def value: None
  float_t ____boostToWhite;

  /// @brief Field _lightWidthMultiplier, offset: 0x68, size: 0x4, def value: None
  float_t ____lightWidthMultiplier;

  /// @brief Field _addWidthToLength, offset: 0x6c, size: 0x1, def value: None
  bool ____addWidthToLength;

  /// @brief Field _thickenWithDistance, offset: 0x6d, size: 0x1, def value: None
  bool ____thickenWithDistance;

  /// @brief Field _thickenCurve, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____thickenCurve;

  /// @brief Field _minDistance, offset: 0x78, size: 0x4, def value: None
  float_t ____minDistance;

  /// @brief Field _maxDistance, offset: 0x7c, size: 0x4, def value: None
  float_t ____maxDistance;

  /// @brief Field _minWidthMultiplier, offset: 0x80, size: 0x4, def value: None
  float_t ____minWidthMultiplier;

  /// @brief Field _maxWidthMultiplier, offset: 0x84, size: 0x4, def value: None
  float_t ____maxWidthMultiplier;

  /// @brief Field _disableRenderersOnZeroAlpha, offset: 0x88, size: 0x1, def value: None
  bool ____disableRenderersOnZeroAlpha;

  /// @brief Field _bakedGlowWidthScale, offset: 0x8c, size: 0x4, def value: None
  float_t ____bakedGlowWidthScale;

  /// @brief Field _forceUseBakedGlow, offset: 0x90, size: 0x1, def value: None
  bool ____forceUseBakedGlow;

  /// @brief Field _updateAlways, offset: 0x91, size: 0x1, def value: None
  bool ____updateAlways;

  /// @brief Field _limitAlpha, offset: 0x92, size: 0x1, def value: None
  bool ____limitAlpha;

  /// @brief Field _minAlpha, offset: 0x94, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _maxAlpha, offset: 0x98, size: 0x4, def value: None
  float_t ____maxAlpha;

  /// @brief Field _overrideChildrenAlpha, offset: 0x9c, size: 0x1, def value: None
  bool ____overrideChildrenAlpha;

  /// @brief Field _startAlpha, offset: 0xa0, size: 0x4, def value: None
  float_t ____startAlpha;

  /// @brief Field _endAlpha, offset: 0xa4, size: 0x4, def value: None
  float_t ____endAlpha;

  /// @brief Field _overrideChildrenWidth, offset: 0xa8, size: 0x1, def value: None
  bool ____overrideChildrenWidth;

  /// @brief Field _startWidth, offset: 0xac, size: 0x4, def value: None
  float_t ____startWidth;

  /// @brief Field _endWidth, offset: 0xb0, size: 0x4, def value: None
  float_t ____endWidth;

  /// @brief Field _parametricBoxController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ParametricBoxController* ____parametricBoxController;

  /// @brief Field _dynamic3SliceSprite, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::Parametric3SliceSpriteController* ____dynamic3SliceSprite;

  /// @brief Field didRefreshEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action* ___didRefreshEvent;

  /// @brief Field _isDirty, offset: 0xd0, size: 0x1, def value: None
  bool ____isDirty;

  /// @brief Field _transform, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLight, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____mainEffectPostProcessEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____width) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____overrideChildrenLength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____length) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____center) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____color) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____colorAlphaMultiplier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____bloomFogIntensityMultiplier) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____fakeBloomIntensityMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____boostToWhite) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____lightWidthMultiplier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____addWidthToLength) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____thickenWithDistance) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____thickenCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____minDistance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____maxDistance) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____minWidthMultiplier) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____maxWidthMultiplier) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____disableRenderersOnZeroAlpha) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____bakedGlowWidthScale) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____forceUseBakedGlow) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____updateAlways) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____limitAlpha) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____minAlpha) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____maxAlpha) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____overrideChildrenAlpha) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____startAlpha) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____endAlpha) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____overrideChildrenWidth) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____startWidth) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____endWidth) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____parametricBoxController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____dynamic3SliceSprite) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ___didRefreshEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____isDirty) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLight, ____transform) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLight*, "", "TubeBloomPrePassLight");
