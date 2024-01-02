#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberTrail)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SaberTrailRenderer;
}
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
class IBladeMovementData;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTrail;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTrail);
// Type: ::SaberTrail
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4876))
// CS Name: ::SaberTrail*
class CORDL_TYPE SaberTrail : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _trailRendererPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__trailRendererPrefab, put = __set__trailRendererPrefab))::GlobalNamespace::SaberTrailRenderer* _trailRendererPrefab;

  /// @brief Field _trailDuration, offset 0x20, size 0x4
  __declspec(property(get = __get__trailDuration, put = __set__trailDuration)) float_t _trailDuration;

  /// @brief Field _samplingFrequency, offset 0x24, size 0x4
  __declspec(property(get = __get__samplingFrequency, put = __set__samplingFrequency)) int32_t _samplingFrequency;

  /// @brief Field _granularity, offset 0x28, size 0x4
  __declspec(property(get = __get__granularity, put = __set__granularity)) int32_t _granularity;

  /// @brief Field _whiteSectionMaxDuration, offset 0x2c, size 0x4
  __declspec(property(get = __get__whiteSectionMaxDuration, put = __set__whiteSectionMaxDuration)) float_t _whiteSectionMaxDuration;

  /// @brief Field _colorOverwrite, offset 0x30, size 0x1
  __declspec(property(get = __get__colorOverwrite, put = __set__colorOverwrite)) bool _colorOverwrite;

  /// @brief Field _forcedColor, offset 0x34, size 0x10
  __declspec(property(get = __get__forcedColor, put = __set__forcedColor))::UnityEngine::Color _forcedColor;

  /// @brief Field _color, offset 0x44, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _movementData, offset 0x58, size 0x8
  __declspec(property(get = __get__movementData, put = __set__movementData))::GlobalNamespace::IBladeMovementData* _movementData;

  /// @brief Field _lastTrailElementTime, offset 0x60, size 0x4
  __declspec(property(get = __get__lastTrailElementTime, put = __set__lastTrailElementTime)) float_t _lastTrailElementTime;

  /// @brief Field _trailRenderer, offset 0x68, size 0x8
  __declspec(property(get = __get__trailRenderer, put = __set__trailRenderer))::GlobalNamespace::SaberTrailRenderer* _trailRenderer;

  /// @brief Field _trailElementCollection, offset 0x70, size 0x8
  __declspec(property(get = __get__trailElementCollection, put = __set__trailElementCollection))::GlobalNamespace::TrailElementCollection* _trailElementCollection;

  /// @brief Field _sampleStep, offset 0x78, size 0x4
  __declspec(property(get = __get__sampleStep, put = __set__sampleStep)) float_t _sampleStep;

  /// @brief Field _framesPassed, offset 0x7c, size 0x4
  __declspec(property(get = __get__framesPassed, put = __set__framesPassed)) int32_t _framesPassed;

  /// @brief Field _lastZScale, offset 0x80, size 0x4
  __declspec(property(get = __get__lastZScale, put = __set__lastZScale)) float_t _lastZScale;

  /// @brief Field _framesToScaleCheck, offset 0x84, size 0x4
  __declspec(property(get = __get__framesToScaleCheck, put = __set__framesToScaleCheck)) int32_t _framesToScaleCheck;

  /// @brief Field _inited, offset 0x88, size 0x1
  __declspec(property(get = __get__inited, put = __set__inited)) bool _inited;

  constexpr ::GlobalNamespace::SaberTrailRenderer*& __get__trailRendererPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTrailRenderer*> const& __get__trailRendererPrefab() const;

  constexpr void __set__trailRendererPrefab(::GlobalNamespace::SaberTrailRenderer* value);

  constexpr float_t& __get__trailDuration();

  constexpr float_t const& __get__trailDuration() const;

  constexpr void __set__trailDuration(float_t value);

  constexpr int32_t& __get__samplingFrequency();

  constexpr int32_t const& __get__samplingFrequency() const;

  constexpr void __set__samplingFrequency(int32_t value);

  constexpr int32_t& __get__granularity();

  constexpr int32_t const& __get__granularity() const;

  constexpr void __set__granularity(int32_t value);

  constexpr float_t& __get__whiteSectionMaxDuration();

  constexpr float_t const& __get__whiteSectionMaxDuration() const;

  constexpr void __set__whiteSectionMaxDuration(float_t value);

  constexpr bool& __get__colorOverwrite();

  constexpr bool const& __get__colorOverwrite() const;

  constexpr void __set__colorOverwrite(bool value);

  constexpr ::UnityEngine::Color& __get__forcedColor();

  constexpr ::UnityEngine::Color const& __get__forcedColor() const;

  constexpr void __set__forcedColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::IBladeMovementData*& __get__movementData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBladeMovementData*> const& __get__movementData() const;

  constexpr void __set__movementData(::GlobalNamespace::IBladeMovementData* value);

  constexpr float_t& __get__lastTrailElementTime();

  constexpr float_t const& __get__lastTrailElementTime() const;

  constexpr void __set__lastTrailElementTime(float_t value);

  constexpr ::GlobalNamespace::SaberTrailRenderer*& __get__trailRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTrailRenderer*> const& __get__trailRenderer() const;

  constexpr void __set__trailRenderer(::GlobalNamespace::SaberTrailRenderer* value);

  constexpr ::GlobalNamespace::TrailElementCollection*& __get__trailElementCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrailElementCollection*> const& __get__trailElementCollection() const;

  constexpr void __set__trailElementCollection(::GlobalNamespace::TrailElementCollection* value);

  constexpr float_t& __get__sampleStep();

  constexpr float_t const& __get__sampleStep() const;

  constexpr void __set__sampleStep(float_t value);

  constexpr int32_t& __get__framesPassed();

  constexpr int32_t const& __get__framesPassed() const;

  constexpr void __set__framesPassed(int32_t value);

  constexpr float_t& __get__lastZScale();

  constexpr float_t const& __get__lastZScale() const;

  constexpr void __set__lastZScale(float_t value);

  constexpr int32_t& __get__framesToScaleCheck();

  constexpr int32_t const& __get__framesToScaleCheck() const;

  constexpr void __set__framesToScaleCheck(int32_t value);

  constexpr bool& __get__inited();

  constexpr bool const& __get__inited() const;

  constexpr void __set__inited(bool value);

  /// @brief Method Awake, addr 0x239e864, size 0x12c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Setup, addr 0x239e990, size 0x20, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Color color, ::GlobalNamespace::IBladeMovementData* movementData);

  /// @brief Method Init, addr 0x239e9b0, size 0x280, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method ResetTrailData, addr 0x239ee64, size 0xd4, virtual false, abstract: false, final false
  inline void ResetTrailData();

  /// @brief Method LateUpdate, addr 0x239efc8, size 0x3e4, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnEnable, addr 0x239f6ac, size 0xac, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x239f758, size 0x84, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x239f7dc, size 0xa8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method GetTrailWidth, addr 0x239ede0, size 0x84, virtual false, abstract: false, final false
  inline float_t GetTrailWidth(::GlobalNamespace::BladeMovementDataElement lastAddedData);

  /// @brief Method OnDrawGizmosSelected, addr 0x239f884, size 0x1d4, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  static inline ::GlobalNamespace::SaberTrail* New_ctor();

  /// @brief Method .ctor, addr 0x239fa58, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberTrail(SaberTrail&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberTrail(SaberTrail const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberTrail();

public:
  /// @brief Field _trailRendererPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SaberTrailRenderer* ____trailRendererPrefab;

  /// @brief Field _trailDuration, offset: 0x20, size: 0x4, def value: None
  float_t ____trailDuration;

  /// @brief Field _samplingFrequency, offset: 0x24, size: 0x4, def value: None
  int32_t ____samplingFrequency;

  /// @brief Field _granularity, offset: 0x28, size: 0x4, def value: None
  int32_t ____granularity;

  /// @brief Field _whiteSectionMaxDuration, offset: 0x2c, size: 0x4, def value: None
  float_t ____whiteSectionMaxDuration;

  /// @brief Field _colorOverwrite, offset: 0x30, size: 0x1, def value: None
  bool ____colorOverwrite;

  /// @brief Field _forcedColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ____forcedColor;

  /// @brief Field _color, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _movementData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IBladeMovementData* ____movementData;

  /// @brief Field _lastTrailElementTime, offset: 0x60, size: 0x4, def value: None
  float_t ____lastTrailElementTime;

  /// @brief Field _trailRenderer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::SaberTrailRenderer* ____trailRenderer;

  /// @brief Field _trailElementCollection, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::TrailElementCollection* ____trailElementCollection;

  /// @brief Field _sampleStep, offset: 0x78, size: 0x4, def value: None
  float_t ____sampleStep;

  /// @brief Field _framesPassed, offset: 0x7c, size: 0x4, def value: None
  int32_t ____framesPassed;

  /// @brief Field _lastZScale, offset: 0x80, size: 0x4, def value: None
  float_t ____lastZScale;

  /// @brief Field _framesToScaleCheck, offset: 0x84, size: 0x4, def value: None
  int32_t ____framesToScaleCheck;

  /// @brief Field _inited, offset: 0x88, size: 0x1, def value: None
  bool ____inited;

  /// @brief Field kIgnoredFramesCount offset 0xffffffff size 0x4
  static constexpr int32_t kIgnoredFramesCount{ static_cast<int32_t>(0x4) };

  /// @brief Field kSnapshotCapacityMargin offset 0xffffffff size 0x4
  static constexpr int32_t kSnapshotCapacityMargin{ static_cast<int32_t>(0x3) };

  /// @brief Field kScaleCheckFramesInterval offset 0xffffffff size 0x4
  static constexpr int32_t kScaleCheckFramesInterval{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTrail, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailRendererPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____samplingFrequency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____granularity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____whiteSectionMaxDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____colorOverwrite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____forcedColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____color) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____movementData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____lastTrailElementTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailRenderer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____trailElementCollection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____sampleStep) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____framesPassed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____lastZScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____framesToScaleCheck) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberTrail, ____inited) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTrail);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrail*, "", "SaberTrail");
