#pragma once
// IWYU pragma private; include "Tweening\Tween.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Tweening {
class Tween;
}
// Write type traits
MARK_REF_T(::Tweening::Tween*);
DEFINE_IL2CPP_CLASS(::Tweening::Tween*, "Tweening", "Tween");
// Dependencies EaseType, System.Object
namespace Tweening {
// Is value type: false
// CS Name: Tweening.Tween
class CORDL_TYPE Tween : public ::System::Object {
public:
  // Declarations
  /// @brief Field _animationCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__animationCurve, put = __cordl_internal_set__animationCurve)) ::UnityEngine::AnimationCurve* _animationCurve;

  /// @brief Field _delay, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__delay, put = __cordl_internal_set__delay)) float_t _delay;

  /// @brief Field _duration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _easeType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType, put = __cordl_internal_set__easeType)) ::GlobalNamespace::EaseType _easeType;

  /// @brief Field _isKilled, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get__isKilled, put = __cordl_internal_set__isKilled)) bool _isKilled;

  /// @brief Field _isStarted, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__isStarted, put = __cordl_internal_set__isStarted)) bool _isStarted;

  /// @brief Field _loop, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__loop, put = __cordl_internal_set__loop)) bool _loop;

  /// @brief Field _progress, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__progress, put = __cordl_internal_set__progress)) float_t _progress;

  /// @brief Field _startTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) float_t _startTime;

  __declspec(property(get = get_animationCurve, put = set_animationCurve)) ::UnityEngine::AnimationCurve* animationCurve;

  __declspec(property(get = get_delay, put = set_delay)) float_t delay;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_easeType, put = set_easeType)) ::GlobalNamespace::EaseType easeType;

  __declspec(property(get = get_isActive)) bool isActive;

  __declspec(property(get = get_isComplete)) bool isComplete;

  __declspec(property(get = get_isKilled)) bool isKilled;

  __declspec(property(get = get_isStarted)) bool isStarted;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  /// @brief Field onCompleted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onCompleted, put = __cordl_internal_set_onCompleted)) ::System::Action* onCompleted;

  /// @brief Field onKilled, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onKilled, put = __cordl_internal_set_onKilled)) ::System::Action* onKilled;

  /// @brief Field onStart, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onStart, put = __cordl_internal_set_onStart)) ::System::Action* onStart;

  __declspec(property(get = get_progress)) float_t progress;

  __declspec(property(get = get_startTime)) float_t startTime;

  /// @brief Method EvaluateEasing, addr 0x6448144, size 0x28, virtual false, abstract: false, final false
  inline float_t EvaluateEasing(float_t t);

  /// @brief Method Kill, addr 0x64494cc, size 0xc, virtual false, abstract: false, final false
  inline void Kill();

  static inline ::Tweening::Tween* New_ctor();

  /// @brief Method Restart, addr 0x64494d8, size 0x10, virtual false, abstract: false, final false
  inline void Restart(float_t startTime);

  /// @brief Method Resume, addr 0x64494e8, size 0x8, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method Sample, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Sample(float_t t);

  /// @brief Method SetStartTimeAndEndTime, addr 0x64494f0, size 0xc, virtual false, abstract: false, final false
  inline void SetStartTimeAndEndTime(float_t startTime, float_t endTime);

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update(float_t currentTime);

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationCurve();

  constexpr float_t const& __cordl_internal_get__delay() const;

  constexpr float_t& __cordl_internal_get__delay();

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType();

  constexpr bool const& __cordl_internal_get__isKilled() const;

  constexpr bool& __cordl_internal_get__isKilled();

  constexpr bool const& __cordl_internal_get__isStarted() const;

  constexpr bool& __cordl_internal_get__isStarted();

  constexpr bool const& __cordl_internal_get__loop() const;

  constexpr bool& __cordl_internal_get__loop();

  constexpr float_t const& __cordl_internal_get__progress() const;

  constexpr float_t& __cordl_internal_get__progress();

  constexpr float_t const& __cordl_internal_get__startTime() const;

  constexpr float_t& __cordl_internal_get__startTime();

  constexpr ::System::Action* const& __cordl_internal_get_onCompleted() const;

  constexpr ::System::Action*& __cordl_internal_get_onCompleted();

  constexpr ::System::Action* const& __cordl_internal_get_onKilled() const;

  constexpr ::System::Action*& __cordl_internal_get_onKilled();

  constexpr ::System::Action* const& __cordl_internal_get_onStart() const;

  constexpr ::System::Action*& __cordl_internal_get_onStart();

  constexpr void __cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__delay(float_t value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__isKilled(bool value);

  constexpr void __cordl_internal_set__isStarted(bool value);

  constexpr void __cordl_internal_set__loop(bool value);

  constexpr void __cordl_internal_set__progress(float_t value);

  constexpr void __cordl_internal_set__startTime(float_t value);

  constexpr void __cordl_internal_set_onCompleted(::System::Action* value);

  constexpr void __cordl_internal_set_onKilled(::System::Action* value);

  constexpr void __cordl_internal_set_onStart(::System::Action* value);

  /// @brief Method .ctor, addr 0x64494fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationCurve, addr 0x64494bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_animationCurve();

  /// @brief Method get_delay, addr 0x644949c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_delay();

  /// @brief Method get_duration, addr 0x644947c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_easeType, addr 0x64494ac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EaseType get_easeType();

  /// @brief Method get_isActive, addr 0x644942c, size 0x24, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_isComplete, addr 0x6449450, size 0x14, virtual false, abstract: false, final false
  inline bool get_isComplete();

  /// @brief Method get_isKilled, addr 0x6449464, size 0x8, virtual false, abstract: false, final false
  inline bool get_isKilled();

  /// @brief Method get_isStarted, addr 0x6449424, size 0x8, virtual false, abstract: false, final false
  inline bool get_isStarted();

  /// @brief Method get_loop, addr 0x644948c, size 0x8, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_progress, addr 0x644946c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_progress();

  /// @brief Method get_startTime, addr 0x6449474, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method set_animationCurve, addr 0x64494c4, size 0x8, virtual false, abstract: false, final false
  inline void set_animationCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_delay, addr 0x64494a4, size 0x8, virtual false, abstract: false, final false
  inline void set_delay(float_t value);

  /// @brief Method set_duration, addr 0x6449484, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_easeType, addr 0x64494b4, size 0x8, virtual false, abstract: false, final false
  inline void set_easeType(::GlobalNamespace::EaseType value);

  /// @brief Method set_loop, addr 0x6449494, size 0x8, virtual false, abstract: false, final false
  inline void set_loop(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tween(Tween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tween(Tween const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22983 };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ static_cast<float_t>(0.001f) };

  /// @brief Field onStart, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___onStart;

  /// @brief Field onCompleted, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___onCompleted;

  /// @brief Field onKilled, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___onKilled;

  /// @brief Field _progress, offset: 0x28, size: 0x4, def value: None
  float_t ____progress;

  /// @brief Field _startTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _duration, offset: 0x30, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _loop, offset: 0x34, size: 0x1, def value: None
  bool ____loop;

  /// @brief Field _delay, offset: 0x38, size: 0x4, def value: None
  float_t ____delay;

  /// @brief Field _isStarted, offset: 0x3c, size: 0x1, def value: None
  bool ____isStarted;

  /// @brief Field _isKilled, offset: 0x3d, size: 0x1, def value: None
  bool ____isKilled;

  /// @brief Field _easeType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _animationCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____animationCurve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tweening::Tween, ___onStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ___onCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ___onKilled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____progress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____startTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____loop) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____delay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____isStarted) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____isKilled) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____easeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tweening::Tween, ____animationCurve) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Tweening::Tween) == 0x50, "Size mismatch!");

} // namespace Tweening
