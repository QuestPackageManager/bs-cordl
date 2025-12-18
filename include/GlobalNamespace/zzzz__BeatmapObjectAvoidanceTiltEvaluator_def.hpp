#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectAvoidanceTiltEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidanceTiltEvaluator)
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectAvoidanceTiltEvaluator
class CORDL_TYPE BeatmapObjectAvoidanceTiltEvaluator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _bezierSplineEvaluator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bezierSplineEvaluator, put = __cordl_internal_set__bezierSplineEvaluator)) ::GlobalNamespace::BezierSplineEvaluator* _bezierSplineEvaluator;

  /// @brief Field _currentAcceleration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentAcceleration, put = __cordl_internal_set__currentAcceleration)) float_t _currentAcceleration;

  /// @brief Field _gravity, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gravity, put = __cordl_internal_set__gravity)) ::UnityEngine::Vector2 _gravity;

  /// @brief Field _normalizedGravity, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalizedGravity, put = __cordl_internal_set__normalizedGravity)) ::UnityEngine::Vector2 _normalizedGravity;

  /// @brief Method GetTiltAngle, addr 0x31b28ec, size 0x2e4, virtual false, abstract: false, final false
  inline float_t GetTiltAngle();

  static inline ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator,
                                                                                 ::UnityEngine::Vector2 gravity);

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::BezierSplineEvaluator* const& __cordl_internal_get__bezierSplineEvaluator() const;

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __cordl_internal_get__bezierSplineEvaluator();

  constexpr float_t const& __cordl_internal_get__currentAcceleration() const;

  constexpr float_t& __cordl_internal_get__currentAcceleration();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__gravity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__gravity();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__normalizedGravity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__normalizedGravity();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__bezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr void __cordl_internal_set__currentAcceleration(float_t value);

  constexpr void __cordl_internal_set__gravity(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__normalizedGravity(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x31b2808, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator, ::UnityEngine::Vector2 gravity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidanceTiltEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21454 };

  /// @brief Field kLookAheadTime offset 0xffffffff size 0x4
  static constexpr float_t kLookAheadTime{ static_cast<float_t>(0.2f) };

  /// @brief Field _audioTimeSource, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _gravity, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____gravity;

  /// @brief Field _normalizedGravity, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____normalizedGravity;

  /// @brief Field _bezierSplineEvaluator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BezierSplineEvaluator* ____bezierSplineEvaluator;

  /// @brief Field _currentAcceleration, offset: 0x30, size: 0x4, def value: None
  float_t ____currentAcceleration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, ____audioTimeSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, ____gravity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, ____normalizedGravity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, ____bezierSplineEvaluator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, ____currentAcceleration) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*, "", "BeatmapObjectAvoidanceTiltEvaluator");
